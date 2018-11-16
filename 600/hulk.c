#include<stdio.h>

int main()
{
	int times, i;

	scanf("%d", &times);

	for (i = 1; i <= times; ++i)	{
		
		if(i % 2 == 1) {
			if(i == times)
				printf("I hate it ");
			else	
				printf("I hate that ");			
		}
		else {
			if(i == times)
				printf("I love it ");
			else
				printf("I love that ");
		}

	}

	return 0;
}