// ���Ͽ��� ���ڿ� �а�, ���ؿ� ���� �з��ؼ� ���� �ٸ� ���Ͽ� ����ϱ�
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	FILE* stream = fopen("fruitList.txt", "r");
	FILE* fp1 = fopen("berry.txt", "w");
	FILE* fp2 = fopen("noneberry.txt", "w");
	char fruit[15] = { NULL };
	int flen, esc = 0;

	while (!feof(stream)) {
		fscanf(stream, "%s", fruit);
		flen = strlen(fruit);
		for (int i = 0; i < flen ; i++) {
			if (strcmp(fruit + i, "berry") == 0) { // 07.12 ���� : �� ���� �������� �� strstr�ϸ� ��.
				fprintf(fp1, "%s\n", fruit);
				esc = 1;
				break; //berry��� ���ڰ� ���ԵǸ� berry.txt�� ����ϰ� �ݺ��� Ż��
			}
			else
				esc = 0;
		}
		if (esc != 1) {
			fprintf(fp2, "%s\n", fruit);
			esc = 0;
		}
	}

	fclose(stream);
	fclose(fp1);
	fclose(fp2);
	system("notepad.exe berry.txt");
	system("notepad.exe noneberry.txt");
	return 0;
}