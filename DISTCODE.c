#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	while(t--)
	{
		char s[10005];
		scanf("%s", s);

		int len = strlen(s);

		int i;
		int count = 0;

		int hash[750] = {0};

		for(i = 1; i < len; i++)
		{
			int v = 26 * (s[i-1] - 'A') + (s[i] - 'A');

			if(hash[v] == 0)
			{
				count++;
				hash[v] = 1;
			}
		}

		printf("%d\n",count);
	}

	return 0;
}