// ������ �ּҸ� void �����Ϳ� �����ϰ�, void ������ Ȱ���ϴ� �Լ� ����
#include <stdio.h>

void area(double* dp);

int main() {
	double r;
	void* vp = &r;
	printf("������ �Է���: ");
	scanf("%lf", &r);
	area(vp);

	return 0;
}

void area(double* dp) {
	double result = *dp * *dp * 3.14;
	printf("���� ����: %.2lf\n", result);
}