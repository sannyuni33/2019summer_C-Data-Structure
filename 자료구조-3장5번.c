// ����ü ������� ���� ���Ͽ� ����ϱ�
#include <stdio.h>
#include <stdlib.h>

typedef struct department {
	char deptname[20];
	int popul;
	struct department* link;
}DEPT;

int main() {
	DEPT dep1 = { "��ǻ�Ͱ��к�",550,NULL },
		dep2 = { "��¡��ɸ��а�",525,NULL },
		dep3 = { "��Ź������",58,NULL };
	dep1.link = &dep2;
	dep2.link = &dep3;

	FILE* stream = fopen("department.txt", "w");

	puts("-��ü �μ� ����-");
	printf("�μ� �̸�: %s\n�μ� �ο�: %d\n\n�μ� �̸�: %s\n�μ� �ο�: %d\n\n�μ� �̸�: %s\n�μ� �ο�: %d\n\n"
		, dep1.deptname, dep1.popul, dep1.link->deptname, dep1.link->popul, 
		dep1.link->link->deptname, dep1.link->link->popul);
	
	fprintf(stream, "%s %d\n%s %d\n%s %d\n", dep1.deptname, dep1.popul, dep1.link->deptname, dep1.link->popul,
		dep1.link->link->deptname, dep1.link->link->popul);

	fclose(stream);
	system("notepad.exe department.txt");
	return 0;
}