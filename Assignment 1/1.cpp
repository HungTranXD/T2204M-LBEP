#include <stdio.h>
#include <math.h>

int main ()
{
	int a, b, c;
	printf("Input 3 coefficients a, b, c of quadratic equation:\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				printf("The equation has infinite number of solutions.");
			} else {
				printf("The equation has no solutions.");
			}
		} else {
			double x = (double) - c / b;
			printf("The equation has 1 solution:\n");
			printf("x = %lf", x);
		} 
	} else {
			double D = (double) b * b - 4 * a * c;
			if (D < 0) {
				printf("The equation has no (real) solutions");
			} else {
				if (D == 0) {
					double x = (double) - b / 2 * a;
					printf("The equation has 2 equal solutions:\n");
					printf("x1 = x2 = %lf", x);
				} else {
					double x1, x2;
					x1 = (- b + sqrt(D)) / (2 * a);
					x2 = (- b - sqrt(D)) / (2 * a);
					printf("The equation has 2 distinct solutions:\n");
					printf("x1 = %lf\n", x1);
					printf("x2 = %lf", x2);
				}
			}
		}
	return 0;
}

