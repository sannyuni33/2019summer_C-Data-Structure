// ���ڿ� �Է¹ް�, ���ڿ� ���� �빮�� �ҹ��� ���� ī�����ؼ� ����ϱ�
// ctype.h �� isupper(), islower() ���.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char* str = (char*)malloc(200);
	int slength;
	int cnt_upper = 0, cnt_lower = 0;
	printf("���ڿ� �Է��� : ");
	gets(str);
	slength = strlen(str);
	printf("�Է��� ���ڿ� : %s\n", str);
	
	for (int i = 0; i < slength; i++) {
		if (isupper(str[i]) != 0)
			cnt_upper++;
		else if (islower(str[i]) != 0)
			cnt_lower++;
		else
			continue;
	}

	printf("�빮���� ����: %d\n�ҹ����� ����: %d\n", cnt_upper, cnt_lower);

	free(str);
	return 0;
}