//���ڿ� �Է¹޾Ƽ� �Ųٷ� ����ϱ�
//���� �� ������ �Ұ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char* word = (char*)malloc(255);
	printf("���ڿ��� �Է��غ���: ");
	scanf("%s", word);
	printf("������ ���ڿ�: ");
	for (int i = strlen(word); i >= 0; i--) {
		printf("%c", word[i]);
	}
	puts("");
	free(word);
	return 0;
}