/*���� �ϳ� �Է��ϸ� �������� �ƴ��� �Ǵ�����
20.07.06 ����: �ǵ��� ����� �� ����ǰ�,
���� 2 �̻��� ���ڿ� �Է½� �ձ��� ���� �Ǵ���.
�Է� ���� ���� �ʿ�.
*/
#include <stdio.h>

int checkInt(char temp);

int main() {
	char n;
	printf("���ڸ� �Է��ϼ�: ");
	scanf("%c", &n);
	checkInt(n);

	return 0;
}

int checkInt(char temp) {
	if (temp > 47 && temp < 58)
		printf("�Է��� ���� %c(��)�� �����Դϴ�!\n",temp);
	else
		printf("�Է��� ���� %c(��)�� ���ڰ� ���Ӵϴ�..\n",temp);

	return 0;
}