//�칰 ���� �Է��ϸ� �����̰� Ż���ϴµ� �ɸ� ��¥ ����
#include <stdio.h>

int main() {
	int height;
	int snail = 0;
	int day = 0;
	printf("�칰�� ���̸� �Է��ϼ���(cm) : ");
	scanf("%d", &height);

	while (1) {
		snail += 30;
		day++;
		if (snail >= height)
			break;
		snail -= 10;
	}
	printf("\n�츮�� �����̰� Ż���߾!\n�칰 Ż�⿡ �ɸ� ��¥ : %d��\n", day);

	return 0;
}