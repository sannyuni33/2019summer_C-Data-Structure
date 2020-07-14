/* fscanf, fprintf�� ���� ����� �غ��� 
system() �Ἥ �޸��� �����ϴ� ��ɵ� �ֻ�
fscanf �� �� ȣ������ ���� �� �ٷ� �ٿ��� ��ڴ�
���� �ִ� �������� �� �ַ������ �����ؿ��ϱ�, ����������ϴ� �κп��� ��Ÿ�ӿ����� ���µ�
�ؽ�Ʈ������ ���� ���־� ��Ʃ������� �ַ�ǿ��� ������������ ���� �������� ���پ�����.
Ž���⿡�� ��� ���󰡼� �ַ���ִ� ���丮�� �ؽ�Ʈ���� �������ִϱ� �ذ�Ϸ�� 
*/
#include <stdio.h>

int main() {
	FILE* stream1 = fopen("studentscore.txt", "r");
	FILE* stream2 = fopen("report.txt", "w");
	int stdnum, fscore, sscore, sum;
	
	for (int i = 0; i < 5; i++) {
		fscanf(stream1, "%d", &stdnum);
		fscanf(stream1, "%d", &fscore);
		fscanf(stream1, "%d", &sscore);
		sum = fscore + sscore;
		fprintf(stream2, "�л���ȣ: %2d, ����1: %3d, ����2: %3d, ����: %3d\n", stdnum, fscore, sscore, sum);
	}
	fclose(stream1);
	fclose(stream2);
	system("notepad.exe report.txt");
	return 0;
}