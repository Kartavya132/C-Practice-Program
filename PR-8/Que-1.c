#include <stdio.h>

int main() 
{
    char str[100];
    char *ptr;
    int length = 0;

    // Read the string from user
    printf("Enter a string: ");
    scanf("%s", str);

    // Store address of string in pointer
    ptr = str;

    // Count characters using pointer
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    // Print the length of string
    printf("Length of string = %d", length);

    return 0;
}
