#include <stdlib.h>

#include "tokenizer.h"


int main(int argc, char *argv[]) 
{
    minilisp::tokenizer tokenizerInst;
    tokenizerInst.tokinize_file(L"(+ 3 3)");

    return EXIT_SUCCESS;
}