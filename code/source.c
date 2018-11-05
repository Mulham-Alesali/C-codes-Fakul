#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "h1.h"
#include <limits.h>

 int mult(int a, int b)
{
	static int c = INT_MAX;
	if (b == 0)	return 0;
	if (c / b  > a)
		return a * b;
	else
		return -1;
}

 int facRek(int a) 
 {
	 if (a == 0) return 1;
	 if (a == 1) return 1;
	 int result = mult(a, facRek(a - 1));
	 if (result < 0) return -1;
	 return result;
 }
 int fac(int a) 
 {
	 if (a == 0) return 1;
	 int result = a;

	 for (int i = a - 1; i > 0; i--) {
		 if (mult(result, i) < 0) return -1;
		 result = result * i;
	 }
	 return result;

 }
