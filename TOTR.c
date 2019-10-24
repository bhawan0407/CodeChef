#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	char s[101];

	scanf("%s", s);

	char hash[256];

	int len = strlen(s);

	int i;

	for(i = 0; i < len; i++)
	{
		hash[i+97] = s[i];
		hash[i+65] = s[i] - 32;
		hash['_'] = ' '; 
	}

	while(t--)
	{
		scanf("%s", s);

		len = strlen(s);

		for(i = 0; i < len; i++)
		{
			if((s[i] == '_') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			{
				printf("%c",hash[s[i]]);
			}
			else
			{
				printf("%c",s[i]);
			}
		}

		printf("\n");
	}


	return 0;
}