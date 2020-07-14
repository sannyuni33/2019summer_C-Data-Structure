/*
19.07.24 ����
�ּ������� ��¦ �ٲ㼭 ���� �ڵ�!
������: �ڵ尡 �ǰ� �����ϰ� ���Ⱑ ���ҽ��ϴ�. 
Ư��, size�� 0�� �� ���� reu-turn 0�� �ߴµ� �ٷ� printf�� ��°� �ξ� ���� �� ����
����:��ü���� ������ �� �ڵ�� ����Ѱ� ������ 
main���� Ȯ���� �����ϰ� �� ���� ���� �����. ���� �㿡�� �̷��� �����ϰ� ¥���߰ڴ�.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100000

typedef struct heap {
	int heapArray[MAX_SIZE];
	int size;
}heap;

void insertNode(heap*, int);
void deleteNode(heap*);

int main() {
	int n, d;
	heap* hh = (heap*)malloc(sizeof(heap));
	hh->size = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &d);
		if (d == 0)
			deleteNode(hh);
		else
			insertNode(hh, d);
	}
	
	free(hh);
	return 0;
}

void insertNode(heap* hh, int x) {
	hh->size++;
	int i = hh->size;
	while (i != 1 && x > hh->heapArray[i / 2]) {
		hh->heapArray[i] = hh->heapArray[i / 2];
		i /= 2;
	}
	hh->heapArray[i] = x;
}

void deleteNode(heap* hh) {
	if (hh->size == 0) {
		puts("0");
		return;
	}
		
	int item = hh->heapArray[1], temp = hh->heapArray[hh->size], parent = 1, child = 2;
	hh->size--;

	while (child <= hh->size) { // <���� <=�� �ٲ�
		if (child < hh->size &&(hh->heapArray[child] < hh->heapArray[child + 1])) //child <= ���� <�� �ٲ�
			child++;
		if (temp >= hh->heapArray[child])
			break;
		else {
			hh->heapArray[parent] = hh->heapArray[child]; //�̰� �Ƚ����...����
			parent = child;
			child *= 2;
		}
	}
	hh->heapArray[parent] = temp;
	printf("%d\n", item);

}

