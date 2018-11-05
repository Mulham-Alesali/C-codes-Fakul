#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "h1.h"


int main(int argc, char *argv[])
{
	int i = 0;
	while (true) {

		if (facRek(i) > 0) {
			printf("the factor 'Rec method' for '%i' is  '%i'\n", i, facRek(i));
			printf("the factor for '%i' is  '%i'\n", i, fac(i));
			printf("\n");
		}
		else
		{
			printf("Der grosste Faktor, der gerechnet werden kann, ist: '%i'", i - 1);
			break;
		}

		i++;
	}

	getchar();

	return 0;
}
