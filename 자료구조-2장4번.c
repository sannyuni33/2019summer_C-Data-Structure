// math ��������� sin, cos �Ẹ��
#include <stdio.h>
#include <math.h>

int main() {
	double x, result;
	printf("X ���� �Է��Ͼ�: ");
	scanf("%lf", &x);
	result = sin(x)*sin(x) + cos(x)*cos(x);
	printf("sin(%lf) = %lf\ncos(%lf) = %lf\n", x, sin(x), x, cos(x));
	printf("sin(%lf)^2 + cos(%lf)^2 = %lf\n", x, x, result);
	return 0;
}