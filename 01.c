#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main()
{
	printf("OLCAN SATIR-152120171109-olcansatir@gmail.com\n");
	printf("11.11.2020- INTRODUCTION TO PROGRAMMING LAB HOMEWORK 1 - PROBLEM 1\n");

    double interest_12, interest, payment, principal, NUMPAY;
	printf("Principal:");
	scanf_s("%lf", &principal);
	printf("Interest:");
	scanf_s("%lf", &interest_12);

	printf("Payment:");
	scanf_s("%lf", &payment);

	interest = interest_12 / 100;
	interest = interest / 12;

	NUMPAY = -log(1 - (double)interest * (principal / payment)) / log(1 + (double)interest);
	printf(" You have to pay %.1lf months.\n", NUMPAY);
	system("pause");
}
