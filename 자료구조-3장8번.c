// ���ڿ� �Է¹޾� ���Ͽ� �����ϰ�, exit �Է��ϸ� ����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE* fp = fopen("a.txt", "w");
	char input[50] = { NULL };
	gets(input);

	while (strcmp(input,"exit") != 0) {
		fprintf(fp, "%s\n", input);
		gets(input);
	}
	fclose(fp);
	system("a.txt");
	return 0;
}