//1~100 �� ����� 10*10 ��İ�, �밢�� ��� ����ϱ�
#include <stdio.h>

int main() {
	int arr[10][10];
	int cols = sizeof(arr) / sizeof(arr[0]);
	int cnt = 1;

	puts("-�迭�� ���-");
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = cnt++;
			printf("%3d", arr[i][j]);
		}
		puts("");
	}
	
	printf("\n�迭�� �밢�� ���: ");
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < cols; j++) {
			if(i == j)
				printf("%-3d", arr[i][j]);
		}
	}
	printf("\n\n");

	return 0;
}