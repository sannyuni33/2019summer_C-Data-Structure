//string.h �� �Լ����� �̿��� �޴� �Է¹ް� �޽��� ����ϱ�
#include <stdio.h>
#include <string.h>

int main() {
	char menu[5];
	int imenu;
	while (1) {
		puts("");
		puts("============ MENU ============");
		printf("1. �� ���� ����.\n2. �� ���� ����.\n�޴� ��ȣ�� �Է��ϼ���: ");
		gets(menu);
		if (strcmp(menu, "exit") == 0) {
			puts("�����");
			return 0;
		}

		imenu = atoi(menu);
		switch (imenu)
		{
		case 1:
			puts("�� ���� ������ �����ҷ��ٰ� ���� �޴��Դϴ�.");
			break;
		case 2:
			puts("�� ���� ������ �����ϱ� �Ⱦ��ϴ� �޴��Դϴ�.");
			break;
		default:
			puts("�ٽ� �Է��Ͻö�� ����");
			break;
		}
	}
}