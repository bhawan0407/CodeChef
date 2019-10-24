#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n;
		scanf("%d", &n);

		if(n & 1)
		{
			int i;
			for(i=2; i<=n-3; i+=2)
			{
				printf("%d %d ", i, i-1);
			}

			printf("%d %d %d ", n-1, n, n-2);
		}
		else
		{
			int i;
			for(i=2; i<=n; i+=2)
			{
				printf("%d %d ",i, i-1);
			}
		}

		printf("\n");

	}
	return 0;
}