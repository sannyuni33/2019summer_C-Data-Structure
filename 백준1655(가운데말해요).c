/*
19.07.24
�������ڸ��� ���� �������� 1/2�� �̿��ϴ°� ���ڴٶ�� ������ �����.
�켱���� ť ���� ������� �˷��ִϱ� �ٷ� �������� �ƴϸ� �����ϱ� ���������
���� ������� ���� �м��غ� ���(�ּ����� �̿��Ѵٰ� ����)
������ ��ü����� Ȧ���ΰ�� ������/2+1 ��° ��Ҹ� ���
������ ��ü����� ¦���ΰ�� ������/2 ��° ��Ҹ� ���
�ϸ� �ȴٴ� ���� �˰Ե�. �÷ο���Ʈ �׸��� �ڵ�¥������.

�� �ٵ� �̰� �� �ܼ��ϰ� �ּ������θ� �ϸ�, ���� ������ �ִ� ��峢���� ��Ұ��谡
��� ����� �� ���� ��µ��� ����. ���� �ڽ��� �� �۾ƾ߸� ���� ���ϴ� ����� ��.

�׷��� �� �������� ������ �ؾ���.
�迭 ��ü�� �������� �����ع����ų�, �ƴϸ� �� ����� ���� ������ �ڽĳ����� �����ٰų�.
�������� ������ �ϸ� ���� �ڵ� ¥�� ���� �� �ִµ� �̰� �޸� ȿ���� ������ �ǽɵ�.
�迭�� Ŀ���� Ŀ������ �� ��ȿ������. 10���������� �ð��ʰ� �� �� ������.
�迭��ü ������ �ƹ��� �����ص� �� ������. ���ܽ�Ű��,
�ּ������� ��� �ǵ���� ������ ���Ѻ���..

19.07.25
���������� �ּ��� �ִ��� �� �� �Ἥ ��Ʈ���� ��ȯ�ϴ� �˰��� ���
�ٷ� �÷ο���Ʈ �׸��� �ڵ�®�µ�, Ʋ�ȴٰ� ������.
�׷��� 6�ð��� �ظ޴ٰ�... ��� �̰� �´� �ڵ忴�µ� �迭ũ�⸦ 5������ �༭ Ʋ���ſ���.
50001�� �ִϱ� �ٷ� �¾Ҵ�. 6�ð����� ���� ������
"�迭 ũ�⸦ �˳��ϰ� ����"����	. ����
*/

/*
������: �����Ҵ��� ���� ũ�⿡ ���ֹ��� �ʾ� ���Ұ�, 
cnt�� Ȱ���ؼ� ���ʰ� �����ʿ� �ִ� ���� Ȱ���ϴ� �ڵ嵵 �ξ� ���������� ���� �� ����
����: �������� �˰����� ���������� �� �ڵ�� ��������� �� �� �����ϰ� § ���� ���Ҵ�. 
Ư�� cnt������ �ϳ��� �ؼ� § ���� �λ�����.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50001

typedef struct heapheap {
	int heapArray[MAX_SIZE];
	int size;
}heap;

void insertMaxheap(heap*, int);
int deleteMaxheap(heap*);
void insertMinheap(heap*, int);
int deleteMinheap(heap*);

int main() {
	int n, d, cnt = 0;
	int maxTemp, minTemp;
	heap *maxHeap = (heap*)malloc(sizeof(heap)); 
	heap *minHeap = (heap*)malloc(sizeof(heap));
	
	scanf("%d", &n);
	maxHeap->size = 0;
	minHeap->size = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &d);

		if (cnt % 2 == 0) //28~31�� : �ִ���, �ּ����� �����ư��鼭 ���� �־���.
			insertMaxheap(maxHeap, d);
		else
			insertMinheap(minHeap, d);

		if ((maxHeap->heapArray[1] > minHeap->heapArray[1]) && (cnt != 0)) { //�ִ����� ��Ʈ�� �� ū ��� ���� ��Ʈ ��ȯ
			maxTemp = deleteMaxheap(maxHeap);
			minTemp = deleteMinheap(minHeap);
			insertMaxheap(maxHeap, minTemp);
			insertMinheap(minHeap, maxTemp);
		}
		printf("%d\n", maxHeap->heapArray[1]);
		cnt++;
	}
	
	free(maxHeap);
	free(minHeap);
	return 0;
}

void insertMaxheap(heap* hh, int x) {
	hh->size++;
	int i = hh->size;
	while (i != 1 && x > hh->heapArray[i / 2]) {
		hh->heapArray[i] = hh->heapArray[i / 2];
		i /= 2;
	}
	hh->heapArray[i] = x;
}

int deleteMaxheap(heap* hh) {
	int item = hh->heapArray[1], temp = hh->heapArray[hh->size], parent = 1, child = 2;
	hh->size--;

	while (child <= hh->size) { 
		if (child < hh->size && (hh->heapArray[child] < hh->heapArray[child + 1])) 
			child++;
		if (temp >= hh->heapArray[child])
			break;
		else {
			hh->heapArray[parent] = hh->heapArray[child];
			parent = child;
			child *= 2;
		}
	}
	hh->heapArray[parent] = temp;
	return item;
}

void insertMinheap(heap* hh, int x) {
	hh->size++;
	int i = hh->size;
	while (i != 1 && x < hh->heapArray[i / 2]) {
		hh->heapArray[i] = hh->heapArray[i / 2];
		i /= 2;
	}
	hh->heapArray[i] = x;
}

int deleteMinheap(heap* hh) {
	int item = hh->heapArray[1], temp = hh->heapArray[hh->size], parent = 1, child = 2;
	hh->size--;

	while (child <= hh->size) {
		if (child < hh->size && (hh->heapArray[child] > hh->heapArray[child + 1]))
			child++;
		if (temp <= hh->heapArray[child])
			break;
		else {
			hh->heapArray[parent] = hh->heapArray[child];
			parent = child;
			child *= 2;
		}
	}
	hh->heapArray[parent] = temp;
	return item;
}

