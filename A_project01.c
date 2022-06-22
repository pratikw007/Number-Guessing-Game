/*Write a Program that genrates a random number*/

// Number Guessing Game


#include<stdio.h>
#include<stdlib.h> //used for generate random no.
#include<time.h>
  
int main(){
        int number,guess,nguesses=1;
        srand(time(0)); 
        number = rand()%100+1; //genrate a random no. between 1 to 100
        // printf("The number is %d\n",number); // it is the random number means answe of the game

        //keep running the loop until  the no.is gussed92
        
        do{
            printf("Guess the Number between 1 to 100\n");
            scanf("%d", &guess);
            if (guess>number){
                printf("Lower number please!!\n");
            }
            else if (guess<number){
            printf("Higher number please!!\n");
        } 

        else{
            printf("You Guessed it in %d attempt\n",nguesses);

        }
            nguesses++;    
        }while(guess!=number);
    return 0;
}  