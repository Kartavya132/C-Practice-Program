//TODO: Alphabet Skipper
#include <stdio.h>

int main() {
    char ch;

    //? Loop started

    for (ch = 'a'; ch <= 'z'; ch++) {

        //? Giving condition for skipping

        if ((ch - 'a') % 4 != 0) {
            continue;
        }

        //! giving output

        printf("%c, ", ch);
    }

    printf("\n\n"); 

    return 0;
}
