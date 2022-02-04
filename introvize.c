#include <stdio.h>
#include <stdlib.h>
main() {
	int sum = 0;
	int n = 0;
	int count;
	int firstEntered;
	int secondEntered;
	double average;
	int minimumNumber;
	int secondMinimum = 2147483647;
	int thirdMinimum = 2147483647;
	int tempNum1;
	int tempNum2;

	while (1) {
		printf("Enter some numbers until -1 entered: ");
		scanf_s("%d", &count);
		n = n + 1;
		sum = sum + count;
		if (n == 1) {
			firstEntered = count;
			minimumNumber = count;

		}

		if (n == 2 && count != firstEntered) {
			secondEntered = count;
			if (firstEntered < secondEntered) {
				minimumNumber = firstEntered;
				secondMinimum = secondEntered;

			}
			else if (firstEntered > secondEntered) {

				minimumNumber = secondEntered;
				secondMinimum = firstEntered;

			}
		}
		if (count != -1 && & n >= 3) {
			if (minimumNumber != count && secondMinimum != count && thirdMinimum != count)
			{
				if (count < minimumNumber) {
					tempNum1 = minimumNumber;
					minimumNumber = count;
					tempNum2 = secondMinimum;
					secondMinimum = tempNum1;
					thirdMinimum = tempNum2;
				}
				else if (count > minimumNumber && count < secondMinimum)
				{
					tempNum2 = secondMinimum;
					secondMinimum = count;
					thirdMinimum = tempNum2;
				}
				else if (count > minimumNumber && count > secondMinimum && count < thirdMinimum)
				{
					thirdMinimum = count;
				}
			}
		}
		if (count == -1)
		{
			n = n - 1;
			sum = sum + 1;
			average = (double)sum / n;
			break;
		}
	}
	printf("Sum of all numbers: %d\n", sum);
	printf("Average: %.2lf\n ", average);



	if (secondMinimum == 2147483647) {
		printf("Minimum is: %d\n", minimumNumber);
	}
	else if (thirdMinimum == 2147483647) {
		printf("Minimum is: %d\n", minimumNumber);
		printf("Second Minimum is: %d\n", secondMinimum);

	}
	else {
		printf("Minimum is: %d\n", minimumNumber);
		printf("Second Minimum is: %d\n", secondMinimum);
		printf("Third Minimum is: %d\n", thirdMinimum);
	}
	system("pause");
}

