// ����ü �����͸� ���ڷ� �޾� ����ü�� �����ϴ� �Լ� �����ϱ�
#include <stdio.h>

typedef struct pos {
	int x, y;
}POS;

POS input(POS*);

int main() {
	POS var1;
	POS* p = &var1;

	var1 = input(p);
	printf("���: x = %d, y = %d\n", var1.x, var1.y);

	return 0;
}

POS input(POS* pp) {
	printf("x���� �Է��ϻ�: ");
	scanf("%d", &pp->x);
	printf("y���� �Է��ϻ�: ");
	scanf("%d", &pp->y);

	return *pp;
}