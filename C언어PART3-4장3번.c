// �Է¹��� ���ڿ��� a�� ?�� �ٲ㼭 ���
#include <stdio.h>
#include <string.h>

int main() {
	char arr[12];
	char* cp = arr;
	int length, i;
	printf("���ڿ� �Է�(���� �Ұ�...�� ��쳪): ");
	scanf("%s", arr);
	getchar();
	length = strlen(arr);

	printf("���ڿ� ���: ");
	for (i = 0; i < length; i++) {
		printf("%c", *(cp + i));
		if (*(cp + i) == 'a')
			*(cp + i) = '?';
	}

	printf("\n\n���� ����(a->?): ");
	for (i = 0; i < length; i++)
		printf("%c", *(cp + i));
	puts("");
	return 0;
}