/* �Ǽ��� �Է¹޾� �迭�� �����ϰ�, ���� �Է½� �迭�� ��� ����ϱ�
20.07.06 ����: �迭�� ũ�⸦ MAX_SIZE��� ����� �����ߴµ�,
�����Ҵ��� ����ߴٸ� �޸𸮸� �� ȿ������ ����� �� �־��� ����.
(���������δ� ���� �����Ҵ� �ܰ�� �ƴϱ�����)
*/

#include <stdio.h>
#define MAX_SIZE 100

int main() {
	double array1[MAX_SIZE];
	int count_input = 0;
	for(int i = 0 ; i < MAX_SIZE ; i++) {
		if (scanf("%lf", &array1[i]) != 0) {
			printf("%.2lf\n", array1[i]);
			count_input++;
		}
		else {
			for (int j = 0; j < count_input; j++)
				printf("array1[%d] = %.2lf\n", j, array1[j]);
			return 0;
		}
	}
}