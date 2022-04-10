// Program:  3.44
// Purpose:  Sides of a Right Triangle
// Author :  Ali Yetkin Irmak
// Date   :  13/03/2022

#include <stdio.h>

int main() {
	
	int num1,num2,num3,a,b,c;
	
	printf("Enter three numbers:");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	a = num1;
	b = num2;
	c = num3;
	if ((a*a) == (b*b) + (c*c)) 
	return printf("They could be the sides of a right triangle.");
	else if ((b*b) == (a*a) + (c*c))
	return printf("They could be the sides of a right triangle.");
	else if ((c*c) == (a*a) + (b*b))
	return printf("They could be the sides of a right triangle.");
	else return printf("They could not be the sides of a right triangle.");

}
