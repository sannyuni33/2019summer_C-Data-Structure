// �ڱ� ���� ����ü�� �̿��Ͽ� ������� �����ϱ�(���Ḯ��Ʈ�� ���� ���� �����ε�)
#include <stdio.h>

typedef struct department {
	char deptname[20];
	int popul;
	struct department* link;
}DEPARTMENT;

int main() {
	DEPARTMENT dep1 = { "��ǻ�Ͱ��к�",550,NULL }, dep2 = { "���Ӱ��к�",300,NULL }, dep3 = { "���ڰ��к�",350,NULL };
	dep1.link = &dep2;
	dep2.link = &dep3;
	
	puts("-��ü �μ� ����-");
	printf("�μ� �̸�: %s\n�μ� �ο�: %d\n\n�μ� �̸�: %s\n�μ� �ο�: %d\n\n�μ� �̸�: %s\n�μ� �ο�: %d\n\n"
	,dep1.deptname,dep1.popul,dep1.link->deptname,dep1.link->popul, dep1.link->link->deptname, dep1.link->link->popul);
	return 0;
}