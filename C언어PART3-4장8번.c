/* �޴����� �޽��� ���, �޴� �Է�, �Է¿� ���� �޽��� ��� ���ѹݺ��ϴ� ���α׷�
20.07.07 ����: ���ó� �޴��Է��Ҷ� ���ڸ��� ���ž��� �����̰�.
�Է��� ������ ������ �ִ� �ڵ�� ������ scanf() != 0 �� ���� �ʿ���.
*/
#include <stdio.h>

void printMenu(char* menu, int size);

int main() {
	int num;
	char menu[][50] = { "========== MENU ==========\n","1. 1�� �޴��Դϴ�.\n",
	"2. 2�� �޴��Դϴٶ���.\n","0. ���α׷� ����\n\n" };
	int size = sizeof(menu) / sizeof(menu[0]);

	while (1) {
		printMenu(menu, size);
		printf("�޴� ��ȣ�� �Է��Ͼ�: ");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			printf("\n1�� �޴��� �����Ϸ��ٰ� ���ҽ��ϴ�.\n\n");
			break;
		case 2:
			printf("\n2�� �޴��� �����Ϸ��� 0�� �Է��غ���\n\n");
			break;
		case 0:
			printf("\n������\n\n");
			return 0;
		default:
			printf("\n���ϻ�\n\n");
			break;
		}
	}
}

void printMenu(char* menu, int size) {
	char(*cp)[50] = menu;
	for (int i = 0; i < size; i++)
		printf("%s", cp[i]);
}