// ����ü ���� �� ������� �Է¹޾Ƽ� �����ϱ�
#include <stdio.h>

typedef struct me {
	char name[20];
	int stdnum;
	int jjam;
}ME;

int main() {
	ME m;
	printf("�̸� : ");
	scanf("%s", &m.name);
	printf("�й� : ");
	scanf("%d", &m.stdnum);
	printf("�г� : ");
	scanf("%d", &m.jjam);

	printf("%d %s %d�г�.\n", m.stdnum, m.name, m.jjam);
	return 0;
}
