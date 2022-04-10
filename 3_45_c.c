// Program:  3.45_c
// Purpose:  Factorial
// Author :  Ali Yetkin Irmak
// Date   :  13/03/2022

#include <stdio.h>
#include <math.h>


int main() {

	int x, i, y, j, factorial = 1;
	float z = 1;
	
	printf("Enter your number:");
	scanf("%d",&x);
	printf("Enter the power of your number:");
	scanf("%d",&y);
	
	if (x < 0) return printf("Your number is not valid");
	else if (x == 0)
		return printf("Factorial of %d is :1",x);
	else
		for (int i=1; i<=x; i++){
				
				for (int j = 1; j <= i; j++) {
				
					factorial = factorial * j;
				}
				z = z + ((float) pow(y, i) / factorial);
				factorial = 1;
			}
			return printf("Your result is: %f",(float)z);
}
