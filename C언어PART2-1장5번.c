/* ���� 5���� �Է¹�����, �ּڰ� �ִ� ���ϱ� 
19.07.12 ����
����ڰ� �Է��� ������ ������ ���������� �ʰ�, 
�ִ񰪰� �ּڰ��� ��� ���ؾ��ϱ� ������ max�� min�� 0���� �ʱ�ȭ�ϸ� �ȵ�.
5�� �Է¹ް� ù��° ��Ҹ� max, min�� �����ؾ� �����ϰ� �񱳰� ����.
*/
#include <stdio.h>

int main() {
	int array1[5];
	int max, min;
	
	for (int i = 0; i < 5; i++) {
		printf("���ڸ� �Է��ϼ�: ");
		scanf("%d", &array1[i]);
	}
	max = array1[0];
	min = array1[0];
	for (int j = 1; j < 5; j++) {
		if (array1[j] > max)
			max = array1[j];
		else if (array1[j] < min)
			min = array1[j];
		else
			continue;
	}
	printf("�Է��� ������ �ּڰ��� %d, �ִ��� %d�Դϴ�.\n", min, max);
	return 0;
}