#include <stdio.h>
#include <string.h>

int main() {
    // Variable declaration
    char str[100];
    int i, j, len, count;
    
    printf("Enter any string: ");
    scanf("%s", str);

    len = strlen(str);

    // Starting the main loop
    for(i = 0; i < len; i++) {
        count = 1;

        // Condition for repeatation
        if(str[i] == '\0')
            continue;

        // Loop for frequency
        for(j = i + 1; j < len; j++) {
            if(str[i] == str[j]) {
                count++;
                str[j] = '\0';
            }
        }

        // Printing the frequency
        printf("%c => %d\n", str[i], count);
    }

    return 0;
}
