// srand() ���ڸ� �Է¹ް�, rand()�� �̿��ؼ� ���� ���� ���纸��
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, r, guess;
	printf("srand �� ���� �� �Է�:");
	scanf("%d", &n);
	srand(n);
	r = rand()%100;
	printf("���ڰ� �ֱ��?: ");
	scanf("%d", &guess);
	if (guess == r)
		printf("����!\n");
	else
		printf("�ƴѵ�! %d�ε�!\n",r);

	return 0;
}