// �迭�� �ʱ�ȭ ���ϸ� �����Ⱚ�� ������ִٴ°� �����ִ�...�ڵ�
#include <stdio.h>

void init(int* p, int num);

int main() {
	int arr[3];
	int i;
	
	printf("�迭�� �ʱ�ȭ ��: ");
	for (i = 0; i < 3; i++)
		printf("arr[%d] = %d  ", i+1, arr[i]);

	init(arr, sizeof(arr) / sizeof(int));

	printf("\n\n�迭�� �ʱ�ȭ: ");
	for (i = 0; i < 3; i++)
		printf("arr[%d] = %d  ", i + 1, arr[i]);
	puts("");
	return 0;
}

void init(int* p, int num) {
	for (int i = 0; i < num; i++)
		p[i] = 0;
}