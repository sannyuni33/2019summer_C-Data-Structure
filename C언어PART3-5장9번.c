// ���ڿ��� ������ void�� �����͸� ���޹޾� ����ϴ� �Լ� �����ϱ�
#include <stdio.h>

void voidPrint(void* vp);

int main() {
	void* vpoint = "Hello World!";
	voidPrint(vpoint);
	return 0;
}

void voidPrint(void* vp) {
	printf("%s\n", (char*)vp);
}