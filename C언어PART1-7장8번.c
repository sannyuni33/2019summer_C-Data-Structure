//�л� �� �Է¹ް�, �³׵� ���� �Է¹޾Ƽ� ��ձ��ϱ�
#include <stdio.h>

int main() {
	int std_num;
	double score;
	double sum=0;
	printf("�л� ���� �Է��Ͻ� : ");
	scanf("%d", &std_num);

	for (int i = 0; i < std_num; i++) {
		printf("�л� %d�� ������ �Է��Ͻ� : ", i+1);
		scanf("%lf", &score);
		sum += score;
	}

	printf("�л����� ���� ����� %.2lf�Դϵ���\n", sum/std_num);

	return 0;
}