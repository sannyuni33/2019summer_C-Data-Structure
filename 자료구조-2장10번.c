// ���ڿ� �Է¹޾Ƽ� �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ��ȯ�ؼ� ����ϱ� 
/* 20.07.07 ����: isupper, islower�� ���ĺ��� �ƴ� ���ڸ� ���ڷ� ������
��Ÿ�� ������ ������. �� �Լ��� ȣ���ϱ� ���� ���ĺ����� �ƴ����� ����üũ �ʿ�.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char* str = (char*)malloc(200);
	int slength;
	printf("���ڿ� �Է���~~~ : ");
	gets(str);
	slength = strlen(str);

	for (int i = 0; i < slength; i++) {
		if (isupper(str[i]) != 0)
			str[i] = tolower(str[i]);
		else if (islower(str[i]) != 0)
			str[i] = toupper(str[i]);
		else
			continue;
	}
	printf("��ȯ�� ���ڿ�: %s\n", str);
	free(str);
	return 0;
}