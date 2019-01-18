#include <string>

#include "tokenizer.h"

#include "config.h"

namespace minilisp 
{

void tokenizer::tokinize_file(const std::basic_string<TCHAR> content) 
{
    bool commentDetected = false;
    bool stringLiteralDetected = false;

    std::basic_string<TCHAR> currentToken;

    for (const auto character: content)
    {
        if (commentDetected)
        {
            if (character != '\n')
            {
                continue;
            }

            commentDetected = false;
        }

        switch (character)
        {
            case _T('('):
            case _T(')'):
                m_tokens.push_back(std::basic_string<TCHAR>(1, character));
                break;

            case _T(' '):
                if (!currentToken.empty())
                {
                    m_tokens.push_back(currentToken);
                    currentToken.clear();
                }
                break;

            case _T(';'):
                if (!currentToken.empty())
                {
                    m_tokens.push_back(currentToken);
                    currentToken.clear();
                }
                commentDetected = true;
                break;

            default:
                currentToken.append(1, character);
                break;
        }        
    }

    for (const auto token: m_tokens)
    {            
        tcout << token << std::endl;
    }
}

} /* namespace minilisp */