// ����(+)�� �Է��ϸ� �ְ������� 100������ �� ȯ������ ���
// 20.07.06 ����: �����Է��ϸ� �ٽ� �Է��ϰԲ� �ϴ� �ڵ尡 �ʿ��غ���.
#include <stdio.h>

int main() {
	int temp;
	int top = 0;
	double scores[5];

	for (int i = 0; i < 5; i++) {
		printf("������ �Է��ϼ�(���� ����): ");
		scanf("%d", &temp);
		if (temp > top)
			top = temp;
		scores[i] = temp; // 19.07.12 ���� : �� ���� if(temp > top)���� �����ֵ� �����ֵ� ���������
		                  // ���� �ִ°� ���⿡ �� ��-���ҵ�
	}
	printf("ȯ�� ������ ");
	for (int j = 0; j < 5; j++) {
		scores[j] = (scores[j] / (double)top) * 100;
		printf("%d,",(int)scores[j]);
	}
	printf(" �Դϴ�.\n");

	return 0;
}