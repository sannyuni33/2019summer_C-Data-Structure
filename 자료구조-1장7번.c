// ��ø����ü �����.....
#include <stdio.h>

typedef struct me {
	char name[20];
	int stdnum;
	int jjam;
}ME;

typedef struct grade {
	int math;
	int eng;
}GRADE;

typedef struct student {
	ME m;
	GRADE grd;
}STUDENT;

int main() {
	STUDENT s;
	printf("�̸� : ");
	scanf("%s", &s.m.name);
	printf("�й� : ");
	scanf("%d", &s.m.stdnum);
	printf("�г� : ");
	scanf("%d", &s.m.jjam);
	printf("��������: ");
	scanf("%d", &s.grd.math);
	printf("��������: ");
	scanf("%d", &s.grd.eng);
	printf("%d %s %d�г�.\n����: %d   ���� : %d\n", s.m.stdnum, s.m.name, s.m.jjam, s.grd.math, s.grd.eng);
	return 0;
}