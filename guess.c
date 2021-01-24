#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguesses=1;
    srand(time(0));

    number = rand()%100 + 1; //generate a random number

    // used loop for number guessed

    do
    {
        printf("Enter the number between 1 to 100: \n");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Guess lower number!\n");
        }else if (guess < number)
        {
            printf("Guess Higher Number!\n");
        }else
        {
            printf("You guessed it in %d attemps\n", nguesses);
        }
        nguesses++;
        
        
    } while (guess!=number);
    
    return 0 ;
}
