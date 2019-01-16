#ifndef LEXER_H
#define LEXER_H

#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

#include <iostream>

#include "options.h"

namespace minilisp 
{

class lexer 
{
public:

    void tokinize_file(const std::basic_string<TCHAR> content) 
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

private:

    std::vector<std::basic_string<TCHAR> > m_tokens;
    std::vector<std::basic_string<TCHAR> > m_error_messages;

}; /* class lexer  */

} /* namespace minilisp */

#endif /* LEXER_H */