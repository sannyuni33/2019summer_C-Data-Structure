// ���Ͽ� ����ϱ�
#include <stdio.h>

int main() {
	FILE* stream = fopen("hello.txt", "w");

	fprintf(stream, "Hello World!\n");

	fclose(stream);
	system("notepad.exe hello.txt");
	return 0;
}