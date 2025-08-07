#include <stdio.h>
#include <string.h>

int main()
{
	char string[30001];
	scanf("%[^\n]s", &string);
	int len = strlen(string);

	char key[300001];
	scanf("%s", &key);
	int keyLen = strlen(key);

	for (int i = 0; i < len; i++)
	{
		if (string[i] == ' ') printf(" ");
		else
		{
			int move = key[i % keyLen]-'a';
			int point = string[i]-'a';
			if (point - move > 0) printf("%c", point-move+'a'-1);
			else printf("%c", 'z' + point - move);
		}
	}
	return 0;
}