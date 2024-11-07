#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
    
    char guessedNumber;
    char yorn;
   
    
    srand(time(0));
    
    do{
        int randomNumber= rand() %10;
        printf("guess a number: ");
        scanf(" %c", &guessedNumber);
        bool isCorrect = (guessedNumber -'0' == randomNumber);
        printf("your guess is %s\n", isCorrect ? "true" : "false");
        printf("wanna play it again? ");
        scanf(" %c", &yorn);
        }while(yorn=='y');

    printf("Thank you");
    return 0;
}

