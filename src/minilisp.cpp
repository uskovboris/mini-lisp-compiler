#include <stdlib.h>

#include "lexer.h"


int main(int argc, char *argv[]) 
{
    minilisp::lexer lexerInst;
    lexerInst.tokinize_file("(+ 3 3)");

    return EXIT_SUCCESS;
}