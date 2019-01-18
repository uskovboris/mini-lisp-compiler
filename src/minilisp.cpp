#include <stdlib.h>
#include <iostream>
#include <string>

#include "tokenizer.h"
#include "config.h"

#include "interpreter.h"

int main(int argc, char *argv[]) 
{
    minilisp::tokenizer tokenizerInst;

#if defined(INTERPRETER)
    for (;;)
    {
        std::basic_string<TCHAR> codeLine;

        tcin.getline(INTERPRETER_STREAM, codeLine);
        tokenizerInst.tokinize_file(getline);
    }
#else /* NOT INTERPRETER */
    
    tokenizerInst.tokinize_file(L"(defun test (+ (- 3 -4) 3))");
#endif /* INTERPRETER */

    return EXIT_SUCCESS;
}