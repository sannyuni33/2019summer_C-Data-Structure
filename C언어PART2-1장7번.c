/* ���� 4¥�� �迭 �� ���� �� �Է¹ް�, �����հ� ������ ���ϱ�
20.07.06 ����: ������ ����ϱ� ���� �迭1 �迭2�� ���ؼ� 
��ġ�� ���Ұ� ������ �迭2�� �ش� �ε����� NULL�� �ٲٰ�
�迭 2 ����Ҷ� NULL�̸� continue �ϴ� ������ ®�µ�,
������ �迭�� ���� �������ִ°� ����������..
�����տ� ���Ұ� ��� ������ �𸣴� ��Ȳ����(�ִ� 8���� ��)
�����Ҵ��� �� ���� �ֱ��ѵ�..
�޸� ȿ���� ���� �̷��� �ϴ°� ������ ���� ��
*/
#include <stdio.h>

int main() {
	int array1[4];
	int array2[4];
	int i, j;
	printf("�迭 1�� ���� 4���� �Է��Ͼ� : ");
	for (i = 0; i < 4; i++) {
		scanf("%d", &array1[i]);
	}
	printf("�迭 2�� ���� 4���� �Է��Ͼ� : ");
	for (j = 0; j < 4; j++) {
		scanf("%d", &array2[j]);
	}

	printf("�迭 1�� 2�� ������\n[ ");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (array1[i] == array2[j])
				printf("%d ", array1[i]);
		}
	}
	puts("]");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (array1[i] == array2[j])
				array2[j] = NULL;
		}
	}

	printf("�迭 1�� 2�� ������\n[ ");
	for (i = 0; i < 4; i++)
		printf("%d ", array1[i]);
	for (j = 0; j < 4; j++) {
		if (array2[j] == NULL)
			continue;
		else
			printf("%d ", array2[j]);
	}
	puts("]");

	return 0;
}