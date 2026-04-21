#include <stdio.h>

int main() {
    int i, j;
    int num = 11;  

    // Starting the loop
  
    for(i = 1; i <= 4; i++) {

        // Starting second loop
      
        for(j = 1; j <= i; j++) {
            printf("%d ", num); 
            num++;              
        }

        printf("\n"); 
    }

    return 0;
}
