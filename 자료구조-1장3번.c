// �����ͷ� ����ü �����ϱ�
#include <stdio.h>

typedef struct student {
	int id;
	char name[20];
	int year;
}STUDENT;

int main() {
	STUDENT stu[3] = { {20160001, "GoGilDong", 1997},{ 20160002, "HongGilDong", 1996 },
						{ 20160003, "KimGilDong", 1995 } };
	STUDENT*p = &stu;

	for (int i = 0; i < 3; i++)
		printf("%d��� %s�� �й��� %d�Դϴ�.\n", (p + i)->id, (p + i)->name, (p + i)->year);

	return 0;
}