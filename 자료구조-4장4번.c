/* 2���� ������ ������ �����Ҵ��� Ȱ���ؼ� 2�����迭(���)�� �����Ҵ��ϰ�,
��Ҹ� ������ش��� �޸� �������� �ϱ�. dg�� �뵵�� �밢����� ������.
�긦 ���� �������� ������... ����� �����ϴ� �������� �밢����ҵ� ���� ã�Ƴ����� �Ѱ�
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, j, cnt=1;
	int** matrix;
	int* dg;

	printf("�迭�� ũ�⸦ �Է��ϼ���! : ");
	scanf("%d", &n);
	matrix = (int**)malloc(sizeof(int*)*n);
	dg = (int*)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++){
		matrix[i] = (int*)malloc(sizeof(int)*n);
		for (j = 0; j < n; j++) {
			matrix[i][j] = cnt;
			if (i == j)
				dg[i] = cnt;
			cnt++;
		}
	}

	printf("\n-�迭�ǿ��-\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%2d  ", matrix[i][j]);
		puts("");
	}

	printf("\n�迭�� �밢�� ���:");
	for (i = 0; i < n; i++)
		printf("%2d  ", dg[i]);
	puts("");

	for (j = 0; j < n; j++)
		free(matrix[j]);
	free(matrix);
	free(dg);
	
	return 0;
}