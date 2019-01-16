#ifndef LEXER_H
#define LEXER_H

#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

#include "options.h"

namespace minilisp 
{

class lexer 
{
public:

    void tokinize_file(const TCHAR *content) 
    {
        if (content)
        {
            TCHAR *currentPtr=tokinize_letter(content);

            while (currentPtr)
            {
                currentPtr=tokinize_letter(currentPtr);
            }
        }
    }

private:

    TCHAR *tokinize_letter(const TCHAR *character)
    {        
        //TODO Use strtok function
        auto innerPtr = const_cast<TCHAR * >(character);
        
        if (!_T("(") == *character)
        {
            
        //     ++innerPtr;

        //     if (std::equal_to<TCHAR>(_T(' '), *innerPtr))
        //     {
        //         m_error_messages.push_back(_T("error: ")); //TODO
        //         return nullptr;
        //     }

        //     while (std::not_equal_to<TCHAR>(_T(' '), *innerPtr))
        //     {
        //         ++innerPtr;
        //     }
            
        }
        
       return nullptr;
    }

    std::vector<std::basic_string<TCHAR> > m_tokens;
    std::vector<std::basic_string<TCHAR> > m_error_messages;

}; /* class lexer  */

} /* namespace minilisp */

#endif /* LEXER_H */