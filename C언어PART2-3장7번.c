// �迭�� �����͸� �Բ� ����ϴ� ��
#include <stdio.h>

void printAry(int * ip, int n);

int main() {
	int ary[5] = { 1,2,3,4,5 };
	int* ip = ary;
	
	printAry(ip, sizeof(ary) / sizeof(int));

	return 0;
}

void printAry(int * ip, int n) {
	for (int i = 0; i < n; i++)
		printf("%d ", *(ip + i));
	puts("");
}