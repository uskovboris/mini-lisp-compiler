#ifndef LEXER_H
#define LEXER_H

#include <map>
#include <string.h>

namespace minilisp 
{

class lexer 
{
public:

    void tokinize_file(const wchar_t *content) 
    {
        if (content)
        {
            wchar_t *currentPtr=tokinize_letter(content);

            while (currentPtr)
            {
                currentPtr=tokinize_letter(currentPtr);
            }
        }
    }

private:

    wchar_t *tokinize_letter(const wchar_t *character)
    {
        //TODO Use strtok function
        wchar_t *innerPtr = character;
        if (std::equal_to<wchar_t>(L'(', *innerPtr))
        {
            ++innerPtr;

            if (std::equal_to(L' ', *innerPtr))
            {
                m_error_messages.push_back(L"error: "); //TODO
                return nullptr_t;
            }

            while (std::not_equal_to(' ', *innerPtr))
            {
                ++innerPtr;
            }
        }
    }

    std::map<std::wstring> m_tokens;
    std::map<std::wstring> m_error_messages;

}; /* class lexer  */

} /* namespace minilisp */

#endif /* LEXER_H */