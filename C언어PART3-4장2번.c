// �Է��� ���ڿ��� �״�� ���
// string ��������� ���, �����͸� ����� ���ڿ� ��ҿ� ����
#include <stdio.h>
#include <string.h>

int main() {
	char arr[12];
	char* cp = arr;
	int length;
	printf("���ڿ� �Է�(���� �Ұ�...�� ��쳪): ");
	scanf("%s", arr);
	getchar();
	length = strlen(arr);

	for (int i = 0; i < length; i++) // 07.12 ���� : �� �ѵ� %s�ϸ� ��.. �ƴ� �� puts(arr)�� �ϼ� 
		printf("%c", *(cp+i));
	puts("");

	return 0;
}