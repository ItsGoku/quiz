// Program:  2.23
// Purpose:  Largest and Smallest Integers
// Author :  Ali Yetkin Irmak
// Date   :  13/03/2022

#include <stdio.h> 

int main() {
	
	int num1, num2, num3, enb, enk;
	printf("Enter three numbers:");
	scanf("%d %d %d", &num1, &num2, &num3);
	enb = num1;
	enk = num1;
	if (num2 > enb) enb = num2;
	if (num3 > enb) enb = num3;
	if (num2 < enk) enk = num2;
	if (num3 < enk) enk = num3;
	printf("Your largest number is %d and the smaller number is %d", enb, enk);
	
}
	
