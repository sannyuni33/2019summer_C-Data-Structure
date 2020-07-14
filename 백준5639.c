/*
19.07.22
������ ���ڸ��� ����ϰ� ������ ������
�Է¿��� ������ȸ�� ������ �������� ���� �׳�
���� Ž��Ʈ���� �����ϴ� ������ ������
���� ����ϸ� �����°� �ƴѰ���� ������ ��.
�װ� ���� �� �� �غ�����.

�ϴ� �����Է� ������� �Է��Ѵٰ� ġ��
�������� �־��� Ʈ�� ������� ��������� ��.
�ٵ� �� ����Ģ�ϱ� �ѵ�,,

�ƴ� �ٵ� ������ �������� �Ǵµ� �Է��� ��� ������????
�̰� ã�µ� �ð� �� ������..
�Է��� ������ �� scanf�� ȣ���ϸ� EOF�� ���ϵȴٴµ� �̰� ���Ҹ���

3�� ���޾� �Է��ؾ߸� �����ٰ� ��...

ctrl+z 3�� �ϴϱ� ����� �ǰ� ������ �¾Ҿ�
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct treenode {
	int data;
	struct treenode* leftChild;
	struct treenode* rightChild;
}tnode;

tnode* root = NULL;

tnode* insertNode(tnode*, int);
void postorder(tnode*);

int main() {
	int num;
	scanf("%d", &num);
	root = insertNode(root, num);
	while (scanf("%d", &num) != EOF) {
		insertNode(root, num);
	}
	postorder(root);

	return 0;
}

tnode* insertNode(tnode* root, int d) {
	tnode* newNode;
	
	if (root == NULL) {
		newNode = (tnode*)malloc(sizeof(tnode));
		newNode->data = d;
		newNode->leftChild = NULL;
		newNode->rightChild = NULL;
		return newNode;
	}
	else if (d < root->data)
		root->leftChild = insertNode(root->leftChild, d);
	else if (d > root->data)
		root->rightChild = insertNode(root->rightChild, d);
	else
		puts("�̹� �ִ� Ű��! ������!");
	return root;
}

void postorder(tnode* root) {
	if (root) {
		postorder(root->leftChild);
		postorder(root->rightChild);
		printf("%d\n", root->data);
	}
}