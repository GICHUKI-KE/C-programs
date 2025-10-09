// cprogram
/*
Name : David Gichuki
Reg : CT100/G/26130/25
Description : a number guessing game
*/

#include <stdio.h>

int main () {
	int secretnumber = 17;
	int guess ;
	int attempts=0 ;
	
	// prompting the user to guess the secret number
	while (guess != secretnumber){
		printf("enter your guess :");
		scanf("%d", &guess);
		attempts++;
		
		// decision making if number is too high
		if(guess > secretnumber){
				printf("TOO HIGH ! \n");
					}
       // results when the number is too low
	   		  else if(guess < secretnumber){
			printf("TOO LOW!\n");
         }
         
         //when the secretnumber is guessed correctly
         else {
			 printf("CONGRATURATIONS! \n");
			 printf("Total attempts : %d\n ", attempts);
		 }
	}
	
	return 0;
} 
	
	