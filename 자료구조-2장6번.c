// �Է¹��� ���ڿ� �״�� ���...... 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char* sentence = (char*)malloc(200);
	printf("���� �Է�: ");
	gets(sentence);
	printf("�Է��� ����: ");
	puts(sentence);

	free(sentence);
	return 0;
}