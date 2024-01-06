#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* my_itoa(int num, char* str)
{
	if (str == NULL)
	{
		return NULL;
	}
	sprintf(str, "%d", num);
	return str;
}

size_t contaCifre(int n)
{
	size_t i = 0;

	while (n != 0)
	{
		n /= 10;
		i++;
	}

	return i;
}

char* sottrai_stringhe(const char* a, const char* b)
{
	char* ris = malloc(2);
	ris[0] = '0';
	ris[1] = '\0';

	if (a != NULL && b != NULL)
	{
		int n1 = atoi(a);
		int n2 = atoi(b);

		if (n1 != n2)
		{
			int diff = n1 - n2;
			ris = realloc(ris, contaCifre(diff) + 1);
			
			(contaCifre(diff) + 1);

			return my_itoa(diff, ris);
		}
	}

	return ris;
}