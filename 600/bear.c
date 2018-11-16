#include<stdio.h>

int main()
{
	int SizeA, SizeB, checkA, checkB, year = 0;

	scanf("%d %d", &SizeA, &SizeB);

	checkA = SizeA;
	checkB = SizeB;

	while(checkA <= checkB) {
		year++;
		checkA*=3;
		checkB*=2;
	}

	printf("%d", year);

	return 0;
}