// Program:  2.24
// Purpose:  Odd or Even
// Author :  Ali Yetkin Irmak
// Date   :  13/03/2022

#include <stdio.h> 

int main() {

	int num;
	printf("Enter your number:");
	scanf("%d", &num);
	
	if (num%2 == 0)
	printf("Your number is even");
	else
	printf("Your number is odd");
}
