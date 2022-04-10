// Program:  2.33
// Purpose:  Car-Pool Savings Calculator
// Author :  Ali Yetkin Irmak
// Date   :  13/03/2022

#include <stdio.h>

int main() {

	float milesDay; //Total miles driven per day
	float costGall; //Cost per gallon of gasoline
	float avGall;   //Average miles per gallon
	float parkFees; //Parking fees per day
	float tolls;    //Tolls per day
	float total;
	
	printf("Enter your total miles for driven per day:");
	scanf("%f",&milesDay);
	
	printf("Enter your cost for per gallon of gasoline:");
	scanf("%f",&costGall);
	
	printf("Enter your average miles for per gallon:");
	scanf("%f",&avGall);
	
	printf("Enter your parking fees for per day:");
	scanf("%f",&parkFees);
	
	printf("Enter your tolls for per day:");
	scanf("%f",&tolls);
	
	total = ((milesDay / avGall) * costGall) + parkFees + tolls;
	
	printf("Your daily driving cost is:%f",total);
}
