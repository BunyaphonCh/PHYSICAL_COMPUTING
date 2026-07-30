#include <stdio.h>

int main()
{
	char word;
	scanf("%c", &word);
	if (word >= 'a' && word <= 'z')
	{
		word -= 32;
		printf("%c", word);
	}
	else if (word >= 'A' && word <= 'Z')
	{
		word += 32;
		printf("%c", word);
	}
	else
	{
		printf("error");
	}
	return 0;
}
