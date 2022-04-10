// Program:  3.41
// Purpose:  Diameter,Circumference and Area of a Circle
// Author :  Ali Yetkin Irmak
// Date   :  13/03/2022

#include <stdio.h>

int main() {

	float radius, dmtr, cirFer, area;
	
	printf("Enter the radius of your circle:");
	scanf("%f",&radius);
	
	dmtr = radius * 2;
	cirFer = 2 * 3.14159 * radius;
	area = 3.14159 * radius * radius;
	
	printf("Diameter of your circle:%f\n",dmtr);
	printf("Circumference of your circle:%f\n",cirFer);
	printf("Area of your circle:%f\n",area);
	
}
