// 9�� ��Ҹ� �Է¹޾� 3*3 ������·� ����ϱ�
#include <stdio.h>

int main() {
	int arr[3][3];
	int i, j;
	int(*ip)[3] = arr;

	printf("���� �Է� : ");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			scanf("%d", &arr[i][j]);
	}

	printf("\n���\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%3d", ip[i][j]);
		puts("");
	}

	return 0;
}