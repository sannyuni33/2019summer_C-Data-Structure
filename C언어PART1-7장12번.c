//���ĺ� �ϳ� �Է��ϸ� �� �������� z�������
//��ҹ��� ��� ��ȿ
//���ĺ� �ƴѰ� ������ ��� ����
#include <stdio.h>
#include<stdlib.h>

int main() {
	char alp;
	printf("���ĺ��� �Է��ϼ� : ");
	scanf("%c", &alp);
	
	if (alp > 96 && alp < 123) {
		printf("�Է��� %c ������ ���ĺ���\n", alp);
		for (int i = alp + 1; i < 123; i++)
			printf("%c,", i);
		printf("�Դϴٸ��ٸ� �ٸ��콺\n");
	}
	else if (alp > 64 && alp < 91) {
		printf("�Է��� %c ������ ���ĺ���\n", alp);
		for (int i = alp + 1; i < 91; i++)
			printf("%c,", i);
		printf("�Դϴٸ��ٸ� �ٸ��콺\n");
	}
	else
		printf("������\n");

	return 0;
}