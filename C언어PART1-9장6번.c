// �ʱ� �̻��� �� �Է¹����� ���߿� �� ���� �Ǵ��� ���
#include <stdio.h>

int divideCell(int mcb, int mon);

int main() {
	int microbe, result;
	int mon = 1;
	printf("�ʱ� �̻����� ��ü ���� �Է��Ͻö��: ");
	scanf("%d", &microbe);

	result = divideCell(microbe,mon);

	printf("����: %d����, ����: %d����\n", microbe, result);

	return 0;
}

int divideCell(int mcb, int mon) {
	int divided = mcb;
	if (mon > 11)
		return divided;
	divided *= 2;
	divideCell(divided,mon+1);
}