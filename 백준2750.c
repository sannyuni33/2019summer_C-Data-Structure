/*
N���� ���� �Է¹ް� ������������ �����ϱ�.
stdlib.h ���� �����ϴ� qsort �������� ����غθ�. ����
*/
#include <stdio.h>
#include <stdlib.h>

int static compare(const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main() {
	int n, i;
	int* arr;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr,n,sizeof(int),compare);

	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	return 0;
}