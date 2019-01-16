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

class tokenizer 
{
public:

    void tokinize_file(const std::basic_string<TCHAR> content);

private:

    std::vector<std::basic_string<TCHAR> > m_tokens;
    std::vector<std::basic_string<TCHAR> > m_error_messages;

}; /* class lexer  */

} /* namespace minilisp */

#endif /* LEXER_H */