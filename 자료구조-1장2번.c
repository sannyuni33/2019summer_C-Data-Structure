//����ü�� ������� ���� �Է��ϱ�
#include <stdio.h>

typedef struct student {
	char stdno[11];
	char stdname[30];
	char birth[5];
}STUDENT;

int main() {
	STUDENT unknown;
	printf("�й��� �Է��Ͻ�: ");
	scanf("%s",unknown.stdno);
	printf("�����̸��� ����: ");
	scanf("%s",unknown.stdname);
	printf("�����̽�: ");
	scanf("%s",unknown.birth);

	printf("%s��� %s�� �й��� %s�Դϴ�.\n", unknown.birth, unknown.stdname, unknown.stdno);

	return 0;
}