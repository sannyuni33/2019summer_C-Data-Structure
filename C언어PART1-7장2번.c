//�����Է��ϸ� n, n-1, ... 2, 1�� �����(���������� �ٿ���)
#include <stdio.h>

int main() {
	int n;
	int blank, star;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &n);
	blank = 0;
	star = n;

	while (1) {
		for (int i = 0; i < blank; i++)
			printf(" ");
		for (int j = 0; j < star; j++)
			printf("*");
		puts("");
		blank++;
		star--;
		if (star == 0)
			break;
	}

	return 0;
}