// ���ڿ����� �ܾ� �˻�, �����ϴ� �ּҺ��� ����ϱ�
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char* script = {"Just a young gun with a quick fuse I was uptight wanna let loose I was dreaming of bigger things And wanna leave my own life behind Not a yes sir not a follower Fit the box fit the mold Have a seat in the foyer take a number I was lightning before the thunder"};
	char input[20];
	char* res;
	printf("�˻� �ܾ� �Է�:");
	gets(input);
	res = strstr(script, input);


	if ( res != NULL) {
		printf("���ڿ��� ���� ��ġ: %#p\n", res);
		puts(res);
	}
	else
		puts("����. �ȵ�. ���ư�");

	return 0;
}