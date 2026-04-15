//TODO: Question-1.

#include <stdio.h>

int main() {

    while(1){

        //TODO: Simple Grade calculator.

        float percentage;

        //! Taking input

        printf("\n~------Welcome------\n");
        printf("\nEnter the percentage : ");
        scanf("%f", &percentage);

        //* Checking the percentage value.

        if(percentage < 0 || percentage > 99){
            printf("\n Invalid percentage.");
            continue;
        }

        //? Calculating grade from percentage

        char grade = (percentage >= 90) ? 'A' :
                     (percentage >= 75) ? 'B' :
                     (percentage >= 60) ? 'C' :
                     (percentage >= 50) ? 'D' :
                     (percentage >= 40) ? 'E': 'F';

        //! Giving output             

        printf("\nThe percentage is %.2f\n", percentage);
        printf("The Grade is %c.\n", grade);

        //? Calculating the the extra qouting.

        switch (grade) {

            case 'A':
                printf("Well done keep it up!\n");
                break;
            
            case 'B':
                printf("Very good try to reach higher!\n");
                break;

            case 'C':
                printf("Nice work do your best to get better!\n");
                break;
               
            case 'D':
                printf("Good but try more!\n");
                break;
            
            case 'E':
                printf("Keep practicing for nice result!\n");
                break;
            
            case 'F':
                printf("It shows the requirement of good improvement!\n");
                break;
        }            

        //? Checking the eligiblity for upper class

        if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'E'){

            printf("You are eligible to move ahead!\n\n");

        } else{
            printf("Unfortunately you want to stay here only!\n\n");
        }
        break;
        
    }

    return 0;
}