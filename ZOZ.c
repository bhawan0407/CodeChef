#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n,k;
		scanf("%d %d", &n, &k);

		int a[n];

		int i;

		int sum = 0;

		for(i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			sum += a[i];
		}

		int count = 0;

		for(i = 0; i < n; i++)
		{
			if((2 * a[i] + k )> sum)
			{
				count++;
			} 
		}

		printf("%d\n",count);

	}
	return 0;
}