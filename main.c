#include <stdio.h>
#include <stdlib.h>
#include "my_lib/lexical_analysis.h"


int main(int nc, char *np[]) {
    int token, i;
    if (nc < 2) {
        printf("File name id not given.¥n");
        return EXIT_FAILURE;
    }

    setFileName(np[1]);
    initScan();

    scanTokenOneEach();

    return EXIT_SUCCESS;
}