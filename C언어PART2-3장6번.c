//���ڿ��� �Ϻκи� ���
#include <stdio.h>
#include <string.h>

int main() {
	char str[100] = { "strawberry" };
	char* sp = str;
	int s_len = strlen(str);
	for (int i = 5; i < s_len; i++) // 07.12 ���� :printf("%s\n",sp+5)�ϼ��� �׳�
		printf("%c", *(sp + i));
	puts("");
	return 0;
}