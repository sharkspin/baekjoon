#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int d, h, w;
	double i, hi, wi;

	scanf("%d %d %d", &d, &h, &w);
	i = d * d;
	i /= (h * h) + (w * w);
	i = sqrt(i);
	hi = h * i;
	wi = w * i;

	printf("%.0lf %.0lf", floor(hi), floor(wi));

	return 0;
}