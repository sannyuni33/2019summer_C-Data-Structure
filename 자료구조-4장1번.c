// ���� �Է� Ƚ���� ���� ���ϰ� �Է� ���� ������ �� ���ϱ�
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, sum = 0;
	int* arr;
	printf("���ϴ� �Է� ����: ");
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++) {
		printf("%d��° ����: ",i+1);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("�Է� ���� ����: %d\n", sum);
	free(arr);
	return 0;
}