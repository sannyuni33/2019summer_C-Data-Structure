//1���� �Է¹��� n������ �� ���ϱ�
#include <stdio.h>

int main() {
	int n;
	int result=0;
	printf("�ڿ����� �Է��Ͻö��Կ� : ");
	scanf("%d",&n);
	for (int i = 1; i < n + 1; i++) {
		result += i;
	}
	printf("%d���� %d������ ���� %d�Դϴ�\n", 1, n, result);
	return 0;
}