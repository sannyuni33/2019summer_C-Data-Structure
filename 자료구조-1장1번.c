//�� �ݿ� ���� �� ���� �������� ��� ����ϱ�(����ü�迭, ��ø����ü ���)
#include <stdio.h>

typedef struct TestScore {
	int id;
	int first;
	int second;
}score;

typedef struct Class {
	char name;
	score tst;
}classs;

int main() {
	classs d[3] = { {'A',{1,96,78}},{ 'A',{ 2,86,86 } },{ 'A',{ 3,74,92 } } }, 
		n[3] = { { 'B',{ 1,96,84 } },{ 'B',{ 2,80,88 } },{ 'B',{ 3,66,100 } } };

	int tot_A1 = 0, tot_B1 = 0, tot_A2 = 0, tot_B2 = 0;
	double avg_A1, avg_B1, avg_A2, avg_B2;
	

	for (int i = 0; i < 3; i++) {
		tot_A1 += d[i].tst.first;
		tot_B1 += n[i].tst.first;
		tot_A2 += d[i].tst.second;
		tot_B2 += n[i].tst.second;
	}
	avg_A1 = (double)tot_A1 / 3;
	avg_B1 = (double)tot_B1 / 3;
	avg_A2 = (double)tot_A2 / 3;
	avg_B2 = (double)tot_B2 / 3;

	puts("[�� ���� ���� ��� ��]");
	printf("1��: A�� %.2lf��, B�� %.2lf��\n2��: A�� %.2lf��, B�� %.2lf��\n", avg_A1, avg_B1, avg_A2, avg_B2);

	return 0;
}