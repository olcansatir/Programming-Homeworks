#include<stdio.h>
#include<stdlib.h>

main()
{
	printf("OLCAN SATIR-152120171109-olcansatir@gmail.com\n");
	printf("11.11.2020- INTRODUCTION TO PROGRAMMING LAB HOMEWORK 1 - PROBLEM 3\n");
	int i, a, b, c;                            //a = kaç artacak-incrementing
											   //b =  pas gececek-skipping
											   // c = limit-ending
	printf("Amount of increase :  ");
	scanf_s("%d", &a);
	printf("Value to be skipped :  ");
	scanf_s("%d", &b);
	printf("Final value: ");
	scanf_s("%d", &c);

	printf("For Loop\n");
	for (i = 0; i <= c; i = i + a)
	{

		if (i == b)
		{
			continue;

		}

		if (c < i + a & c != i)
		{

			printf("%d\t", i);
			i = c;

		}


		printf("%d\t", i);




	}

	printf("\n\n");
	printf("While Loop\n");
	i = -a;
	while (i < c)
	{
		i = i + a;

		if (i == b)
		{
			continue;
		}

		if (c < i + a & c != i) {

			printf("%d\t", i);
			i = c;

		}



		printf(" %d\t", i);

	}


	printf("\n\n");
	printf("Do-While Loop\n");

	i = -a;
	do

	{

		i = i + a;
		if (i == b) //sayac sona gelmediði sürece
		{
			continue;
		}

		if (c < i + a & c != i) {
			printf("%d\t", i);
			i = c;


		}

		printf("%d\t", i);

	} while (i < c);






	system("pause");


}