#include <stdio.h>

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n;
		scanf("%d", &n);

		int i;

		int a[n];

		for(i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}

		qsort(a, n, sizeof(int), cmp);

		int count = 0;

		for(i = 0; i < n; i++)
		{
			if(a[i] == 0)
			{
				count++;
			}
			else
			{
				if(a[i] <= count)
				{
					count++;
				}
			}
		}

		printf("%d\n",count);
	}
	return 0;
}