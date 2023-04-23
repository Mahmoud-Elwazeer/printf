#include "main.h"

int main(void)
{
	int count_mine = 0;
	int count = 0;
	int len1, len2, len3, len4;

	count = printf("testing\n");
	count_mine = _printf("testing\n");
	printf("hello%%world");
	_printf("hello%%world");
	len2 = printf("len: %d\n", count);
	len3 = _printf(NULL);
	len4 = printf("NULL\n");
	return(0);
}
