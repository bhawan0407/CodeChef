#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char s[1005];
		scanf("%s", s);

		int len = strlen(s);

		int i;

		int sum = 0;

		for(i = 0; i < len; i++)
		{
			if(s[i] >= '0' && s[i] <= '9')
				sum += (s[i] - '0');
		}

		printf("%d\n",sum);
	}
	return 0;
}