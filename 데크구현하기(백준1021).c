/*
19.07.17
�� ���� Ǫ�µ��� ���谡 �߿��� ������ ����!
���� ���� ������ ���� N��ŭ ��� �����Ҵ��ؼ� ����+������ ����,
����� ���´� ���� ���� ���Ḯ��Ʈ�� �ϴ°� ���������� ���� �˸°�
P��ŭ�� ũ�� int�� �迭 �����ؼ� ������� ����,
�ʿ��� ����� ù ��° ���� ����, ù ��° ��� ����,
�������� �̵� / ���������� �̵�, �׸��� ������� �ؼ� �ټ�����.
������� ���� �������.

�����̵� �������̵� ����� ������(���)�� ���� �̵���Ű�� �ͺ���
��带 �ݴ�������� �����̴°� ��ü ��带 �����̴� �Ͱ�
����� ���� �ξ� �� ȿ�����̶�� ������ �� 5�ʸ��� ������.

�����ϴµ� �ð��� �� �ɷȴ� ���� ��������̾���.
����� �����ִ� ��尡 ��������� ���� �� ���� �̵��ؼ�
���� �������� �� �� �ִ���.... �����ϴ� �˰����� �����ؾ� �ߴµ�
���ʿ������� �� ���� �̸�������� �̵�Ƚ���� ����
��ü ������ ���ݺ��� ������ ����. ������ ���������� ���� �ǰڴ�
��� ������ 3�и��� �ϰԵ�.

�̰Ű����� �����ϴϱ� �ݹ� ���������!
���θ��ϸ� �Ҽ��� �˰��� ���̵� �� �������°� ü����.
��ǻ�� ������� �����ϴµ��� �ͼ����� �� ����.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct dequeuenode {
	int data;
	struct dequeuenode* llink;
	struct dequeuenode* rlink;
}DNODE;

typedef struct circleDequeue {
	DNODE* head;
}CDQ;

CDQ* createDQ();
void inputNode(CDQ*, int);
void deleteNode(CDQ*);
void moveToLeft(CDQ*);
void moveToRight(CDQ*);
void decideDirection(CDQ*, int);


int cost = 0, nodeNum;
int* blackList;

int main() {
	CDQ* cdq = (CDQ*)malloc(sizeof(CDQ));
	cdq->head = NULL;
	int p, i;
	scanf("%d", &nodeNum);
	scanf("%d", &p);

	//33~37���� �غ�ܰ�. �Է¹�����ŭ ť�� ��带 �����ϰ� �����͸� �Է���.
	//�� ������ ������� ���� ������Ʈ �迭�� ����.
	for (i = nodeNum; i > 0; i--)
		inputNode(cdq, i);
	blackList = (int*)malloc(sizeof(int)*p);
	for (i = 0; i < p; i++)
		scanf("%d", &blackList[i]);
	
	//������Ʈ �迭�� i��° ���Ҹ� �����ϴ� �Լ�.
	for (i = 0; i < p; i++)
		decideDirection(cdq,i);

	printf("%d\n", cost);
	free(cdq);
	return 0;
}

CDQ* createDQ() {
	CDQ* temp = (CDQ*)malloc(sizeof(CDQ));
	temp->head = NULL;
	return temp;
}

void inputNode(CDQ* cdq, int d) {
	DNODE* newNode = (DNODE*)malloc(sizeof(DNODE));
	DNODE* temp;
	newNode->data = d;

	//���鵥ũ�� ���
	if (cdq->head == NULL) {
		cdq->head = newNode;
		newNode->llink = newNode;
		newNode->rlink = newNode;
	}
	//�ٸ� ��尡 �ִ� ���
	else {
		temp = cdq->head;
		do {
			temp = temp->rlink;
		} while (temp->rlink != cdq->head);
		newNode->rlink = cdq->head;
		cdq->head->llink = newNode;
		newNode->llink = temp;
		temp->rlink = newNode;
		cdq->head = newNode;
	}
}

void deleteNode(CDQ* cdq) {
	//�밡��(���� ����)�� ����Ŷ� ������ ����, ���Ͼ��ص� ��.
	if (cdq->head->rlink == cdq->head)
		cdq->head = NULL;
	else {
		DNODE* temp = cdq->head;
		temp->rlink->llink = temp->llink;
		temp->llink->rlink = temp->rlink;
		cdq->head = temp->rlink;
		free(temp);
	}
	nodeNum--;
}


void moveToLeft(CDQ* cdq) {
	cdq->head = cdq->head->rlink;
	cost++;
}
void moveToRight(CDQ* cdq) {
	cdq->head = cdq->head->llink;
	cost++;
}

void decideDirection(CDQ* cdq, int p) {
	DNODE* cdd = cdq->head;
	int i,  moving = 0;

	//�����ҷ��� ���� ã�������� ���������� �̵�
	while (cdd->data != blackList[p]) {
		cdd = cdd->rlink;
		moving++;
	}
	
	if ((double)nodeNum / 2 > moving) // ���ݱ��� �������� �����̵�
		for (i = 0; i < moving; i++)
			moveToLeft(cdq);
	else
		for (i = 0; i < nodeNum-moving; i++) //���� �Ѱ� ������ �������̵�
			moveToRight(cdq);
	
	deleteNode(cdq); //�� ���� ����
}