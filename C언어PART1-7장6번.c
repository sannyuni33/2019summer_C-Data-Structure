//n�ܺ��� 9�ܱ��� �̻ڰ� ���
#include <stdio.h>

int main() {
	int dan;
	printf("2~9 ������ ������ �Է��ϼ��� : ");
	scanf("%d", &dan);

	for (int i = dan; i < 10; i++) {
		for (int j = 1; j < 10; j++)
			printf("%d*%d=%2d ",i,j,i*j);
		puts("");
	}
	return 0;
}