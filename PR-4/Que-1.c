#include <stdio.h>

int main() {

  int i,j;

  //? Starting the loop

  for (i = 1;i <= 5;i++){

    //? Starting second loop

    for (j = 0;j < i;j++){
      printf("%d ", 41 + j);
    }

    printf("\n");
  }  
  return 0;
}
