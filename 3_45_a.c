// Program:  3.45_a
// Purpose:  Factorial
// Author :  Ali Yetkin Irmak
// Date   :  13/03/2022

#include <stdio.h>

int main() {

	int x,factorial = 1;
	
	printf("Enter your number:");
	scanf("%d",&x);
	
	if (x < 0) return printf("Your number is not valid");
	else if (x == 0)
		return printf("Factorial of %d is :1",x);
	else
		for (int i=1; i<=x; i++){
				
				factorial = factorial*i;
			}
			return printf("Factorial of %d is: %d",x,factorial);
}
