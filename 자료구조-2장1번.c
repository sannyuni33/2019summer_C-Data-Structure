//gets�� ���ڿ� �Է¹ް�, strlen ��ŭ �ݺ� ����ϱ�
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char* name = (char*)malloc(30);
	int nlength;
	printf("�̸� �Է�: ");
	gets(name);
	nlength = strlen(name);

	puts("�� ���ھ� ���:");
	for (int i = 0; i < nlength; i++)
		printf("%c\n", name[i]);

	free(name);
	return 0;
}