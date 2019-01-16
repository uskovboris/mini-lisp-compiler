#include "tokenizer.h"

namespace minilisp 
{

void tokenizer::tokinize_file(const std::basic_string<TCHAR> content) 
{
    bool commentDetected = false;
    bool stringLiteralDetected = false;

    for (const auto characterPtr: content)
    {
        while (characterPtr)
        {
            if (commentDetected)
            {
                if (characterPtr != '\n')
                {
                    continue;
                }

                commentDetected = false;
            }

            switch (characterPtr)
            {
                case _T('('):
                    m_tokens.push_back(_T("("));
                    break;

                case _T(')'):
                    m_tokens.push_back(_T(")"));
                    break; 

                case _T(' '):
                    // Just skip
                    break;

                case _T(';'):
                    commentDetected = true;
                    break;
            }
        }
    }

    for (const auto token: m_tokens)
    {            
        std::wcout << token << std::endl;
    }
}

} /* namespace minilisp */