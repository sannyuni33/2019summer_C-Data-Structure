// �� ���� ���ڿ��� ������ ���ϱ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myStrcmp(char* w1, char* w2);

int main() {
	char* word1 = (char*)malloc(100);
	char* word2 = (char*)malloc(100);
	printf("���ڿ��� �Է��Ͻ�: ");
	scanf("%s", word1);
	printf("���ڿ��� �� �Է��Ͻ�: ");
	scanf("%s", word2);

	if (myStrcmp(word1, word2) == 0)
		printf("�� ���ڿ��� ���� ���ڿ��Դϴٶ���\n");
	else
		printf("�� ���ڿ��� �ٸ� ���ڿ��Դϴٶ���\n");

	free(word1);
	free(word2);
	return 0;
}

// 07.12 ���� : �׳� return strcmp(w1, w2); �ص� �ǰڵ�
int myStrcmp(char* w1, char* w2) {
	if (strcmp(w1, w2) == 0) 
		return 0;
	else
		return -1;
}