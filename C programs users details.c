#// simple c program(hello world),single line comment
/*
Name:David Gichuki
Reg: CT100/G/26130/25
Descripition: Hello world program
*/

#include<stdio.h>

int main(){
	int height ;
	int phonenumber;
	int weight ;
 
    printf("Enter your height:");
    scanf("%d", &height);
    
    printf("Enter your phone number :");
    scanf("%d", &phonenumber);
    
    printf("Enter your weight :");
    scanf("%d", & weight);
    
     printf("\nYour height is %d\n", height);
    printf("\nYour phonenumber is %d\n", phonenumber);
    printf("Your weight is %d Kg\n",weight);
    
    return 0;
}