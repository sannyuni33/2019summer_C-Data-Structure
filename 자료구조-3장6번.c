// ���Ͽ��� �о�� ����ŭ ���Ͽ��� �о�� ���ڿ� ����ϱ�
#include <stdio.h>

int main() {
	FILE* stream = fopen("animal.txt", "r");
	int repeat;
	char anim[10];
	while (!feof(stream)) {
		fscanf(stream, "%d", &repeat);
		fscanf(stream, "%s", anim);
		for (int i = 0; i < repeat; i++)
			printf("%s ", anim);
		puts("");
	}
	fclose(stream);
	return 0;
}