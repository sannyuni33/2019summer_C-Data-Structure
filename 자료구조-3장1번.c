// fprintf, fscanf �������� �ϴ��� stdout, stdin ���ڷ� �༭ �ܼ� ����� �����غ���
#include <stdio.h>

int main() {
	char name[20];
	int stdnum;
	fprintf(stdout, "�������� ��������: ");
	fscanf(stdin, "%s", name);
	fprintf(stdout, "�������� �й���: ");
	fscanf(stdin, "%d", &stdnum);

	fprintf(stdout,"�̸�: %s, �й�: %d\n", name, stdnum);
	return 0;
}