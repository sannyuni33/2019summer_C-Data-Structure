/* 
main���� char* string1 = "Hello"; 
�̷��� �ϰ� cp1 = string1 �� �㿡 %s�� ������ �ȳ����� ������ �ֱ�
19.07.12 ���� : ��� �߾��µ� �߸� ���ư�. ���� ������ �� �߸� ģ��.
��ǻ�ʹ� �� Ʋ��.
*/
#include <stdio.h>

char* string1();
char* string2();

int main() {
	char* cp1 = string1();
	char* cp2 = string2();
	printf("%s %s\n", cp1, cp2);
	return 0;
}

char* string1() {
	return "Hello";
}
char* string2() {
	return "C World";
}
