/* 
19.07.12 ����
�� �ǿ����ڿ� ������, 3�� �� �ϳ��� �̻��� ���� ������ ��� 
�Է��� �ùٸ��� �ʴٴ� �޽����� ���� ���� 3�� if���� ���� scanf()!=0 �� �˻���.
scanf(%d %c %d)�� �Է� �������� ��� ��츦 �ɷ��� ���� ������.
(�ǿ����� �� �ϳ��� ���ڷ� ������ ������ ���� ������ ��)
��� �ϸ� ���� ������ �ص� �� ª�� ������ ���� �ڵ带 ©�� ����غ��� ��.
*/

#include <stdio.h>

void sum(int a, int b);
void minus(int a, int b);
void multi(int a, int b);
void divide(double a, double b);

int main() {
	int a, b;
	char oprt;
	while (1) { 
		printf("���� �Է�: ");
		if (scanf("%d", &a) != 0) {
			getchar();
			if (scanf("%c", &oprt) != 0) {
				if (scanf("%d", &b) != 0) {
					switch (oprt)
					{
					case '+':
						sum(a, b);
						break;
					case '-':
						minus(a, b);
						break;
					case '*':
						multi(a, b);
						break;
					case '/':
						divide(a, b);
						break;
					default:
						printf("���� ���� ������Ѥ�\n");
						return 0;
					}
				}
				else {
					printf("���� ���� ������Ѥ�\n");
					return 0;
				}
			}
			else {
				printf("���� ���� ������Ѥ�\n");
				return 0;
			}
		}
		else {
			printf("���� ���� ������Ѥ�\n");
			return 0;
		}
	}
}

void sum(int a, int b) {
	printf("���: %d\n", a + b);
}

void minus(int a, int b) {
	printf("���: %d\n", a - b);
}

void multi(int a, int b) {
	printf("���: %d\n", a * b);
}

void divide(double a, double b) {
	printf("���: %.2lf\n", a / b);
}