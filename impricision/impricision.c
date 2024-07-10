#include <stdio.h>

int main(void)
{
	float f= 1.0f;
	double d= 1.0;
	for (int i = 0; i<10; i++) {
		f+=0.1f;
		d+=0.1;
	}
	printf("float:%.20f\ndouble:%.20lf\n", f, d);
	return 0;
}
