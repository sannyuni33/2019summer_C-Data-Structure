// ���Ͽ��� ������ �а�, �ֿܼ� ����ϱ� 
#include <stdio.h>

int main() {
	FILE* stream = fopen("warning.txt", "r");
	char buffer[100];

	// 07.12 ���� : � ��Ŀ�������� ���ư��°��� �ٽ� ����!
	while (!feof(stream)) {
		fgets(buffer,sizeof(buffer),stream);
		fputs(buffer, stdout);
	}
	puts("");
	fclose(stream);
	return 0;
}