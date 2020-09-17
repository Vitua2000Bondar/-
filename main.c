#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	float x, y, sum = 0;//set variables
	printf("\nThe variable must be integer and not 0!\n\nIf you enter letters or a symbol, the program will generate an error!\n\n-----------------------------------------------------------\n\nEnter variable X : ");
	while (!scanf("%f", &x) || x == 0) {//do fool protection
		while (getchar() != '\n');
		printf("\n\n-----------------------------------------------------------\n\nInput Error\n\nEnter variable X :");
	}
	for (int a = 10, b = 11; a, b >= 1; a--, b--) { //We enter the cycle of the main formula
		y = b * pow(x, a);
		sum = sum + y;
	}
	printf("\n\n-----------------------------------------------------------\n\nThe result obtained during the calculations : \n\n1) 11 * %.2f^10 + 10 * %.2f^9 + 9 * %.2f^8 + 8 * %.2f^7 + 7 * %.2f^6 + 6 * %.2f^5 + >>\n\n2) >> + 5 * %.2f^4 + 4 * %.2f^3 + 3 * %.2f^2 + 2 * %.2f + 1 = %.2f\n\n", x, x, x, x, x, x, x, x, x, x, sum);
	return 0;
}