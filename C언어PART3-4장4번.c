// �Է¹޴� �Լ�, ����ϴ� �Լ� �����ϱ�
#include <stdio.h>

void inputAry(int* ary, int n);
void printAry(int* ary, int n);

int main() {
	int ary[3];

	inputAry(ary, sizeof(ary) / sizeof(ary[0]));
	printAry(ary, sizeof(ary) / sizeof(ary[0]));

	return 0;
}

void inputAry(int* ary, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ��° ��Ҹ� �Է��ϼ������: ",i);
		scanf("%d", &ary[i]);
	}
}

void printAry(int* ary, int n) {
	printf("\n\n�Է¹��� ��: ");
	for (int i = 0; i < n; i++)
		printf("%d ",ary[i]);
}
