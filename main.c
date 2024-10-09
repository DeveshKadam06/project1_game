/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int randomNumber=(rand()%100)+1;
    int no_of_guesses=0;
    int guessed;
    
    do
    {
       printf("Guess the number: ");
       scanf("%d", &guessed);
       if(guessed>randomNumber){
          printf("Lower number please!\n\n");
       }
       else if (guessed<randomNumber) {
          printf("Higher number please!\n\n");
       }
       else{
          printf("Congratulations!\n\n");
       }
       no_of_guesses++;
    } while(guessed!=randomNumber);
    printf("You guessed the number in %d guesses", no_of_guesses);
    
    return 0;
}