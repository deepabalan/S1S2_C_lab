// program to print character pyramid


#include <stdio.h>
main()
{
	char i, j;

	for (i = 65; i <= 90; ++i) {
		for (j = 65; j <= i; ++j) {
			printf("%c", j);
		}
		printf("\n");
	}
}