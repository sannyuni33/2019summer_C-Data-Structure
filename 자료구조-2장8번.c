//���̵� ��� �Է¹ް� ���ϱ�(����� *�� ǥ��, �Ʒ��� ��ũ ���� -> while�� �κ�)
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>

int main() {
	char id[] = "admin";
	char pw[] = "a1234";
	char id_input[20];
	char pw_input[20];
	int cnt = 0;

	printf("���̵� �Է��ϼ���: ");
	gets(id_input);
	printf("����� �Է��ϼ���: ");
	while (1) {
		if (_kbhit()) {
			pw_input[cnt] = _getch();
			if (pw_input[cnt] == 13)
				break;
			cnt++;
			printf("*");
		}
	}
	pw_input[cnt] = '\0';
	puts("");
	
	if (strcmp(id, id_input) != 0)
		puts("���̵� Ʋ�Ƚ���");
	else if (strcmp(pw, pw_input) != 0)
		puts("����� Ʋ�Ƚ���");
	else
		puts("�α��!");
	
	return 0;
}

//https://m.blog.naver.com/PostView.nhn?blogId=security428&logNo=220746273327&proxyReferer=https%3A%2F%2Fwww.google.com%2F