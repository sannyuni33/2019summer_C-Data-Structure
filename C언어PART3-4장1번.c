// 2���� �迭 �ּ�, ������ �̿��ϱ�
#include <stdio.h>

int main() {
	int arr[4];
	int* p = arr;
	int** pp = &p;
	int i;

	puts("[1. �ּ� ��]");
	printf("�迭�� �ּ� : ");
	for (i = 0; i < 4; i++)
		printf("&arr[%d] = %#p   ", i, &arr[i]);
	printf("\n1���� �������� �ּ� : &p = %#p, �� : *&p = %#p", &p, p);
	printf("\n2���� �������� �ּ� : &pp = %#p, �� : *&pp = %#p\n\n", &pp, pp);

	puts("[2. 1���� �����͸� �̿��� �迭�� �� ����]");
	for (i = 0; i < 4; i++) {
		*(p + i) = i * 10;
		printf("&arr[%d] = %d   ", i, *(p+i));
	}
	printf("\n\n");
		
	puts("[3. 2���� �����͸� �̿��� �迭�� �� ���]");
	for (i = 0; i < 4; i++)
		printf("&arr[%d] = %d   ", i, *(*pp+i));
	return 0;
}