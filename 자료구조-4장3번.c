// �Է�Ƚ�� ���ϰ�, �Էµ� ������ ���հ� ��ձ��ϱ�
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, n, sum = 0;
	int* arr;
	double avg;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int)*n);
	
	for (i = 0; i < n; i++) {
		printf("���� �Է���: ");
		scanf("%d", arr + i);
		sum += *(arr + i);
	}
	printf("�Է��� ����:");
	for (i = 0; i < n; i++)
		printf(" %d ", *(arr + i));
	avg = (double)sum / n;
	printf("\n����: %d, ���: %.1lf\n", sum, avg);
	free(arr);
	return 0;
}