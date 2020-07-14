#include <stdio.h>

typedef struct department {
	char deptname[20];
	int popul;
	struct department* link;
}DEPARTMENT;

void myPrint(DEPARTMENT*);

int main() {
	DEPARTMENT dep1 = { "��ǻ�Ͱ��к�",550,NULL }, dep2 = { "���Ӱ��к�",300,NULL }, dep3 = { "���ڰ��к�",350,NULL };
	dep1.link = &dep2;
	dep2.link = &dep3;

	myPrint(&dep1);
	
	return 0;
}

// 19.07.12 ���� : while(1) ���� while( != NULL) �Ἥ �� ª�� �ϴ� ��� ��������. �����غ���. 
void myPrint(DEPARTMENT* p) {
	DEPARTMENT temp = *p;
	puts("-��ü �μ� ����-");
	while (temp.link != NULL) {
		printf("�μ� �̸�: %s\n�μ� �ο�: %d\n\n", temp.deptname, temp.popul);
		temp = *temp.link;
		/*if (temp.link == NULL) {
			printf("�μ� �̸�: %s\n�μ� �ο�: %d\n\n", temp.deptname, temp.popul);
			break;
		}*/
	}
	printf("�μ� �̸�: %s\n�μ� �ο�: %d\n\n", temp.deptname, temp.popul);
}
/* 20.07.07 ����: while(1) -> while(temp.link != NULL) �� �ٲٰ�,
�ܼ��� 28~31 ���� �ּ�ó���� �ϸ� 
�翬�� �� ������ ����� link�� NULL�̴ϱ� ������ ����� ��Ҵ� ��µ��� ����.
while�� ���� �� ����Ʈ �� ���� �����ָ� �Ǳ��ϴµ� ���� ���� ���µ� ...
*/