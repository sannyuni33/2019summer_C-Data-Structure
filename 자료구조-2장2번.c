// strcat ���� ���ڿ� �ٿ�����..
#include <stdio.h>
#include <string.h>

int main() {
	char array1[20] = { "C Language" };
	char array2[20] = { "It is difficult" };
	char array3[30] = { NULL };

	strcat(array3, array1);
	strcat(array3, array2 + 2);
	
	printf("array1: %s\narray2: %s\narray1, array2 ����: %s\n", array1, array2, array3);

	return 0;
}