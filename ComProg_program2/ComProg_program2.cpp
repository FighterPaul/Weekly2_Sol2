#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()						//Problem 25, Solution 2, ID Student 65010902
{
	int n;
	scanf("%d", &n);

	int i = 1;
	while (i <= n)
	{
		int k = 1;
		while (k <= (n - i))
		{
			printf(" ");
			k = k + 1;
		}
		
		k = 1;
		
		while(k <= (2*i) -1)
		{
			printf("*");
			k = k + 1;
		}
		
		printf("\n");
		i = i + 1;
	}

	return 0;
}