#include <stdlib.h>
#include <stdio.h>

main() {
	printf("OLCAN SATIR-152120171109-olcansatir@gmail.com\n");
	printf("11.11.2020- INTRODUCTION TO PROGRAMMING LAB HOMEWORK 1 - PROBLEM 2\n");
    int money,dollar, quarter, dime, nickel, penny;
	printf("Enter the amount in cents: ");
	scanf_s("%d", &money);  

    dollar = money / 100;
	money = money - (dollar * 100);
	quarter = money / 25;
	money = money - (quarter * 25);
	dime = money / 10;
	money = money - (dime * 10);
	nickel = money / 5;
	money = money - (nickel * 5);
	penny = money / 1;                                         //A Dollar is worth 100 cents.
	                                                           //A Quarter is worth 25 cents.
	                                                           //A Dime is worth 10 cents.
	                                                           //A nickel is worth 5 cents.
	                                                           //A penny is worth 1 cent.
 

	printf(" Your change is : %d dollars, %d quarters, %d dimes, %d nickels, %d pennies. \n", dollar, quarter, dime, nickel, penny);
    
	system("pause");
}



