// ����ڰ� ã������ �迭 ����� �ּҸ� ��ȯ�ϴ� �Լ� �����ϱ�
#include <stdio.h>

int* findAry(int* ary, int size, int num);

int main() {
	int num, ary[5] = { 1,2,3,4,5 };
	int* ip;
	printf("ã�� ���ڸ� �Է��Ͼ�: ");
	scanf("%d", &num);

	ip = findAry(ary, 5, num);

	if (ip == NULL)
		printf("�׷� ���ڴ� �����ϴ� ����\n");
	else
		printf("%d\n", *ip);

	return 0;
}

int* findAry(int* ary, int size, int num) {
	for (int i = 0; i < size; i++) {
		if (ary[i] == num)
			return &ary[i];
	}
	return NULL;
}