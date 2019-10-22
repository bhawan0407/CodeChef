#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	while(t--)
	{
		int l, r;

		scanf("%d %d", &l, &r);

		int m = l - l % 10;
		int n = r + 10 - r % 10;

		int res = ((n - m) * 3 )/ 10;

		int i;
		for(i = m; i < l; i++)
		{
			if(i % 10 == 2 || i % 10 == 3 || i % 10 == 9)
				res--;
		}

		for(i = r+1; i < n; i++)
		{
			if(i % 10 == 2 || i % 10 == 3 || i % 10 == 9)
				res--;
		}

		printf("%d\n",res);
	}
}