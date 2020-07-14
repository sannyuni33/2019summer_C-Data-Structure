/*
19.07.22
�� ���� ��� Ǯ��
���� ���� ���� Ž�� �˰����� �� �ƴ°Ŷ� �ٴ�ġ�µ�
�Է¹���� Ʈ���� �����ϱ� �ϳ� ������.
�Է¹�İ� Ʈ�������� ������ �������̽��� ��� �����ϳ�,
�̰� �����ε�.

�� ó������ 3�� ���ڸ� �Է¹ް���,
Ʈ���� �����̸� 3���� ��带 �����ؼ� �����͸� �־��ְ�
ù��°����� �����ڽ�, �������ڽ��� ���� �ι�° ����°���� �����ϰ�
������ �ƴϸ� �����Ͱ� ptemp�� ���� ���� �̵��� �ڿ�
���ĺ��� �Է¹��� ��츸 ��带 �����ϰ� �������Է�
�׷��� ������ NULL�� �����ϰ� �ڽ����� �������ִ� ����� �Ϸ��ٰ�...
�����Ͱ� ptemp�� ���� ��带 Ž���ؾ��ϴ� �δ��� �� Ŭ������ ������ ������
�� ����� ���� �ٸ� ����� �����غ�����.

n�� ��ŭ�� ��带 �����ؼ� ���Ḯ��Ʈ�� ����ְ� �� ��屸��ü��
�ڽ��� �����ڽ�. �������ڽ��� � �����͸� �����ִ����� ����Ʈ�� �ִ� ������
�����Ϳ� ���ؼ� ���� ��带 �߰��ϸ� �����ϴ� ����� �����غ�����.

�׷��� ����ü�� ��������� 6������ �þ�� �� �������� ������ ���� �ȵ�� ����
���� �װͺ��ٴ� nũ�� ��ŭ�� ����ü�迭�� �����Ҵ� �ϴ°�
�ڵ� ���̻��̳� �޸� ȿ���� �� �� ���������� �����Ǽ� �װɷ� �ϴ� �غ�����.

�¾���!
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode {
	char data, ldata, rdata;
	struct treeNode* leftChild;
	struct treeNode* rightChild;
}tnode;

void preorder(tnode*);  //������ȸ
void inorder(tnode*);   //������ȸ
void postorder(tnode*); //������ȸ

int main() {
	int n, i, j;
	char ptemp, ltemp, rtemp;
	tnode* root;

	scanf("%d", &n);
	getchar();
	tnode* nodeList = (tnode*)malloc(sizeof(tnode)*n);
	for (i = 0; i < n; i++) { //n�� ��ŭ�� ��� ����.
		scanf("%c %c %c", &ptemp, &ltemp, &rtemp);
		getchar();
		
		(nodeList + i)->data = ptemp;
		(nodeList + i)->ldata = ltemp;
		(nodeList + i)->rdata = rtemp;
		(nodeList + i)->leftChild = NULL;
		(nodeList + i)->rightChild = NULL;
	}

	for (i = 0; i < n; i++) { //�θ�� �ڽ� ����
		for (j = 0; j < n; j++) {
			if ((nodeList + i)->ldata == (nodeList + j)->data)
				(nodeList + i)->leftChild = &nodeList[j];

			if ((nodeList + i)->rdata == (nodeList + j)->data)
				(nodeList + i)->rightChild = &nodeList[j];
		}
	}
	
	root = &nodeList[0];
	preorder(root);
	puts("");
	inorder(root);
	puts("");
	postorder(root);
	puts("");

	free(nodeList);
	return 0;
}

void preorder(tnode* root) {
	if (root) {
		printf("%c", root->data);
		preorder(root->leftChild);
		preorder(root->rightChild);
	}
}
void inorder(tnode* root) {
	if (root) {
		inorder(root->leftChild);
		printf("%c", root->data);
		inorder(root->rightChild);
	}
}
void postorder(tnode* root) {
	if (root) {
		postorder(root->leftChild);
		postorder(root->rightChild);
		printf("%c", root->data);
	}
}

