/* ��ȣ���� �Է��ϸ� ī�̻縣 ��ȣ������ �ص��ϴ� ���α׷�
20.07.07 ����: �������� �������� ���ڿ� �Է¹޴� �ڵ尡 ù ����..
scanf("%[^\n]s", ������) �� ���� �Է¹�����, ���๮�ڸ� ������ ��� ���ڸ�
������ ������ �����ػ���
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char* secret=(char*)malloc(255);
	int scrlen;
	printf("��ȣ���� �Է��Ϥ�\n->");
	scanf("%[^\n]s", secret); // ����� �������
	scrlen = strlen(secret);

	printf("\n�ص��� ��ȣ��\n->");
	for (int i = 0; i < scrlen; i++) {
		if (secret[i] > 64 && secret[i] < 68)
			printf("%c", secret[i] + 23);
		else if (secret[i] == ' ')
			printf(" ");
		else
			printf("%c", secret[i] - 3);
	}
	puts("");
	free(secret);
	return 0;
}