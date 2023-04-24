#include "main.h"

int main(void)
{
	int len1, len2;

	len1 = _printf("%S\n", "Best\nSchool");
	_printf("len = %d\n", len1);

	len2 = _printf("%S\n", "best\n\t\a\vschool");
	_printf("len2 = %d\n", len2);

	return (0);
}
