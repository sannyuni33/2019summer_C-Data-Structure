/* �迭 �ʱ�ȭ ���� ���ְ� �迭�� ��� �Է¹޾Ƽ� ����ϴ� �ڵ��ε�...
�� ��� �Է��� �� ���� �ǰ� �س����� �ñ��ϳ�
*/

#include <stdio.h>

void init(int* p, int num);
void change(int* p, int index, int num);

int main() {
	int arr[3];
	int i, id, n;

	init(arr, sizeof(arr) / sizeof(int));

	printf("1. �迭�� �ʱ�ȭ: ");
	for (i = 0; i < 3; i++)
		printf("arr[%d] = %d  ", i + 1, arr[i]);
	
	printf("\n2. �迭�� �� �Է�\n�迭�� �ε���: ");
	scanf("%d", &id);
	printf("�迭�� ��: ");
	scanf("%d", &n);
	change(arr, id, n);

	printf("3. ��� ���: ");
	for(i=0;i<3;i++)
		printf("arr[%d] = %d  ", i + 1, arr[i]);
	puts("");

	return 0;
}

void init(int* p, int num) {
	for (int i = 0; i < num; i++)
		p[i] = 0;
}

void change(int* p, int index, int num) {
	p[index] = num;
}