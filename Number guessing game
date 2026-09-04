#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int main(){

    srand(time(NULL));
    int min = 1;
    int max = 10;

    int random_no = (rand() % (max -min+1))+min;

    int guess;


    while(true){

        printf("guess the number between 1 to 10: ");
        scanf("%d" , &guess);

        if ( guess == random_no){
            printf("you got the number right ! ");
            break;
        }
        else{
            printf("wrong guess, please try again \n");
        }
    
    }
    printf("you won the game !!");

    return 0;
}
