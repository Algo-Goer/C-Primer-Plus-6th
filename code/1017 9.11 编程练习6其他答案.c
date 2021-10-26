#include<stdio.h>

void larger_of(double* u, double* v, double* w);

int main(void)
{
	double x = 3.2, y = 5.3,z = 1.1;
	larger_of(&x, &y, &z);
	printf("%g   %g   %g\n", x, y, z);
	return 0;
}

void larger_of(double* u, double* v,double *w)
{
	double min,max,cnt;
	min = (*u > *v ? *v : *u) > *w ? *w : (*u > *v ? *v : *u);
	max = (*u > *v ? *u : *v) > *w ? (*u > *v ? *v : *u) : *w;
	cnt = (*u + *v + *w) - min - max;
	*u = min;
	*v = max;
	*w = cnt;
}
