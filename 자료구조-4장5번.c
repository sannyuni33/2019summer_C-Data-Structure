//���Ͽ��� ���� ������ �����Ҵ��� ����ü�迭�� �����ϰ� ����ϱ�
#include <stdio.h>
#include <stdlib.h>

typedef struct department {
	char deptname[20];
	int popul;
	struct department* link;
}DEPT;

int main() {
	FILE* fp = fopen("department.txt", "r");
	DEPT* dpp = (DEPT*)malloc(sizeof(DEPT)*10);
	int cnt = 0;

	while (!feof(fp)) {
		fscanf(fp, "%s %d", &dpp[cnt].deptname, &dpp[cnt].popul);
		cnt++;
		dpp[cnt - 1].link = &dpp[cnt];
	}

	for (int i = 0; i < cnt; i++)
		printf("%-20s / %3d\n", dpp[i].deptname, dpp[i].popul);

	fclose(fp);
	free(dpp);
	return 0;
}