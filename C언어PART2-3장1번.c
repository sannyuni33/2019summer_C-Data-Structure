// ����Ÿ�� �˾ƺ���
#include <stdio.h>

int main() {
	char a = 'A';
	int b = 10;
	double c = 3.14;
	
	char* cp = NULL;
	int* ip = NULL;
	double* dp = NULL;

	cp = &a;
	ip = &b;
	dp = &c;

	printf("char�� �������� ũ��: %d, char�� ������ ũ��: %d, char�� ������: %c\n", sizeof(cp), sizeof(a), *cp);
	printf("int�� �������� ũ��: %d, int�� ������ ũ��: %d, int�� ������: %d\n", sizeof(ip), sizeof(b), *ip);
	printf("double�� �������� ũ��: %d, double�� ������ ũ��: %d, double�� ������: %lf\n", sizeof(dp), sizeof(c), &dp);
}