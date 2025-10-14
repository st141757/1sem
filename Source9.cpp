#include<stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d %d %d", &a, &b, &c);

	double x1 = 0;
	double x2 = 0;



	if (a == 0 && b == 0 && c == 0) {
		printf("-1\n");
		return 0;
	}


	if (a == 0) {
		if (b == 0) {
			printf("0\n");

			return 0;
		}
		else {
			double x = (double)(-c) / b;
			printf("1\n");
			printf("%.6f\n", x);
			return 0;
		}
	}

	double d = (double)b * b - 4.0 * a * c;

	if (d < -1e-6) {
		printf("0\n");
		return 0;
	}
	else if (fabs(d) < 1e-6) {
		double x = (-b) / (2.0 * a);
		printf("1\n");
		printf("%.6f\n", x);
		return 0;
	}
	else {
		double dsqr = sqrt(d);
		x1 = (-b + dsqr) / (2.0 * a);
		x2 = (-b - dsqr) / (2.0 * a);

		if (x1 > x2) {
			double temp = x1;
			x1 = x2;
			x2 = temp;
		}
		printf("2\n %.6f\n %.6f\n", x1, x2);

	}
	return 0;
}