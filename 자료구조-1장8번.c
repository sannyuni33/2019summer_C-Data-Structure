// 7�������� ��ø����ü �ʱ�ȭ �����ְ�, ���� ��հ� ������� ����ϱ�
#include <stdio.h>
#include <string.h>

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
	STUDENT s[3] = { {"������", 2010123456, 4,100,90},
					{ "������", 2011789456, 3,100, 95 },
					{ "������", 2012811523, 2,80,100 } };
	int total_max = 0, sum_m = 0, sum_e = 0;
	double avg_m, avg_e;
	char top[20];
	
	for (int i = 0; i < 3; i++) {
		sum_m += s[i].grd.math;
		sum_e += s[i].grd.eng;
		if (s[i].grd.eng + s[i].grd.math > total_max) {
			total_max = s[i].grd.eng + s[i].grd.math;
			strcpy(top, s[i].m.name);
		}
	}
	avg_m = (double)sum_m / 3;
	avg_e = (double)sum_e / 3;
	printf("��ü ���� ���� ���: %.2lf\n��ü ���� ���� ���: %.2lf\n",avg_m, avg_e);
	printf("������ ���� ���� ���� %s�Դϴ�.(����:%d)\n", top, total_max);
	return 0;
}