#include <stdio.h>
#include <stdlib.h>
//���� �����Ҵ� �ʿ���µ�..��� 1������ �����߰����� ��� free�� ���ش�.
typedef struct score {
	int math;
	int eng;
}SCORE;

int main() {
	int n, msum = 0, esum = 0;
	double mavg, eavg;
	printf("������ ��: ");
	scanf("%d", &n);
	SCORE* p = (SCORE*)malloc(sizeof(SCORE)*n);
	
	for (int i = 0; i < n; i++) {
		printf("���� ����, ���� ����(��: 10 10): ");
		scanf("%d %d", &(p[i].eng), &(p[i].math)); 
		esum += p[i].eng;
		msum += p[i].math;
	}

	eavg = (double)esum / n;
	mavg = (double)msum / n;
	
	printf("\n[%d�� �л��� ���� ���]\n����: %.2lf,����: %.2lf\n",n, eavg, mavg);
	free(p);
	return 0;
}