// Program:  2.31
// Purpose:  Table of Squares and Cubes
// Author :  Ali Yetkin Irmak
// Date   :  13/03/2022

#include <stdio.h>

int main() {
	
	int x,xs,xc;
	printf("number  square  Cube\n");
	for (x=0; x <= 10; x++) {
		xs=x*x;
		xc=x*x*x;
		printf("%d       %d       %d  \n", x, xs, xc);
		}
}

