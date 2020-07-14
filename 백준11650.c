/*
2���� ��� ���� �� N���� ��ǥ�� �Է¹ް�,
�� ������ x��ǥ�� �����ϴ� ������. x��ǥ�� ���ٸ� y��ǥ�� �����ϴ� ������ ���� �� ���.
(x, y) �������� ��Ʈ������ �ʰ� x��ǥ �������� �������� ������ y��ǥ �������� ������ ��.
�� ������ 128~ 138 ����.
*/
#include <stdio.h>
#include <stdlib.h>
# define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )

typedef struct location {
	int x, y;
}dot;

/* 1. �ǹ��� �������� 2���� �κ� ����Ʈ�� ������.
 2. �ǹ����� ���� ���� ��� ���� �κ� ����Ʈ��, ū ���� ������ �κ� ����Ʈ�� �ű��.
 2���� ��յ� �迭 list[left...pivot-1]�� list[pivot+1...right]�� �պ� ���� 
(������ ���ڵ��� ���ĵǴ� ����) */
int partition_x(dot list[], int left, int right) {
	dot pivot, temp;
	int low, high;

	low = left;
	high = right + 1;
	pivot = list[left]; // ������ ����Ʈ�� ���� ���� �����͸� �ǹ����� ����(������ ���� �ǹ����� ����)

						/* low�� high�� ������ ������ �ݺ�(low<high) */
	do {
		/* list[low]�� �ǹ����� ������ ��� low�� ���� */
		do {
			low++; // low�� left+1 ���� ����
		} while (low <= right && list[low].x<pivot.x); //������ �߻��Ѵٸ� ���⸦ �ǽ�

		/* list[high]�� �ǹ����� ũ�� ��� high�� ���� */
		do {
			high--; //high�� right ���� ����
		} while (high >= left && list[high].x>pivot.x);

		// ���� low�� high�� �������� �ʾ����� list[low]�� list[high] ��ȯ
		if (low<high) {
			temp = list[low];
			list[low] = list[high];
			list[high] = temp;
		}
	} while (low<high);

	// low�� high�� ���������� �ݺ����� �������� list[left]�� list[high]�� ��ȯ
	temp = list[left];
	list[left] = list[high];
	list[high] = temp;

	// �ǹ��� ��ġ�� high�� ��ȯ
	return high;
}

void quick_sort_x(dot list[], int left, int right) {

	/* ������ ������ 2�� �̻��� �������̸�(����Ʈ�� ũ�Ⱑ 0�̳� 1�� �ƴϸ�) */
	if (left<right) {
		// partition �Լ��� ȣ���Ͽ� �ǹ��� �������� ����Ʈ�� ��յ� ���� -����(Divide)
		int q = partition_x(list, left, right); // q: �ǹ��� ��ġ

											  // �ǹ��� ������ 2���� �κ� ����Ʈ�� ������� ��ȯ ȣ��
		quick_sort_x(list, left, q - 1); // (left ~ �ǹ� �ٷ� ��) ���� �κ� ����Ʈ ���� -����(Conquer)
		quick_sort_x(list, q + 1, right); // (�ǹ� �ٷ� �� ~ right) ���� �κ� ����Ʈ ���� -����(Conquer)
	}
}

int partition_y(dot list[], int left, int right) {
	dot pivot, temp;
	int low, high;

	low = left;
	high = right + 1;
	pivot = list[left]; // ������ ����Ʈ�� ���� ���� �����͸� �ǹ����� ����(������ ���� �ǹ����� ����)

						/* low�� high�� ������ ������ �ݺ�(low<high) */
	do {
		/* list[low]�� �ǹ����� ������ ��� low�� ���� */
		do {
			low++; // low�� left+1 ���� ����
		} while (low <= right && list[low].y < pivot.y); //������ �߻��Ѵٸ� ���⸦ �ǽ�

														  /* list[high]�� �ǹ����� ũ�� ��� high�� ���� */
		do {
			high--; //high�� right ���� ����
		} while (high >= left && list[high].y>pivot.y);

		// ���� low�� high�� �������� �ʾ����� list[low]�� list[high] ��ȯ
		if (low<high) {
			temp = list[low];
			list[low] = list[high];
			list[high] = temp;
		}
	} while (low<high);

	// low�� high�� ���������� �ݺ����� �������� list[left]�� list[high]�� ��ȯ
	temp = list[left];
	list[left] = list[high];
	list[high] = temp;

	// �ǹ��� ��ġ�� high�� ��ȯ
	return high;
}

void quick_sort_y(dot list[], int left, int right) {

	/* ������ ������ 2�� �̻��� �������̸�(����Ʈ�� ũ�Ⱑ 0�̳� 1�� �ƴϸ�) */
	if (left<right) {
		// partition �Լ��� ȣ���Ͽ� �ǹ��� �������� ����Ʈ�� ��յ� ���� -����(Divide)
		int q = partition_y(list, left, right); // q: �ǹ��� ��ġ
												// �ǹ��� ������ 2���� �κ� ����Ʈ�� ������� ��ȯ ȣ��
		quick_sort_y(list, left, q - 1); // (left ~ �ǹ� �ٷ� ��) ���� �κ� ����Ʈ ���� -����(Conquer)
		quick_sort_y(list, q + 1, right); // (�ǹ� �ٷ� �� ~ right) ���� �κ� ����Ʈ ���� -����(Conquer)
	}
}

int main() {
	int n, i;
	dot* dots;
	scanf("%d", &n);
	dots = (dot*)malloc(sizeof(dot)*n);

	for (i = 0; i < n; i ++ ) {
		scanf("%d %d", &dots[i].x, &dots[i].y);
	}

	quick_sort_x(dots, 0, n - 1);

	int start = 0, finish, temp;
	while (start < n) {
		temp = start;
		while((dots[temp].x == dots[temp + 1].x) && (&dots[temp + 1] != NULL))
			temp++;
		finish = temp;
		quick_sort_y(dots, start, finish);
		start = finish + 1;
	}

	for (i = 0; i < n; i++) {
		printf("%d %d\n", dots[i].x, dots[i].y);
	}

	free(dots);
	return 0;
}