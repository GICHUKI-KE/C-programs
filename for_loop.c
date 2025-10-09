// simple c program
/*
Name : David Gichuki
Reg : CT100/G/26130/25
Description  : simple for loop printing 100-50  in a descending form.
*/

#include <stdio.h>
int main() {
	printf("Numbers from 100 to 50:\n");
	 
	int i;  
	for( i=100; i>=50; i--) { 
		printf("%d \n",i);
	}
	
		return 0;
}