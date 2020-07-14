#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listNode{
	struct listNode* llink;
	char title[30];
	struct listNode* rlink;
}listNode;

typedef struct{
	listNode* head;
	listNode* playing;
}CDL_H;

CDL_H* createList();
void insertFnode(CDL_H*, char*);
void insertMnode(CDL_H*, char*, char*);
void deleteNode(CDL_H*, char*);
listNode* searchNode(CDL_H*, char*);
void playPrev(CDL_H*);
void playNext(CDL_H*);
void showList(CDL_H*);
void mainMenu(CDL_H*);
void printToFile(CDL_H*, FILE*);

int main() {
	CDL_H* CDL = createList();
	CDL->playing = NULL;
	FILE* fp = fopen("songList.txt", "r");
	char tempTitle[30];

	while (!feof(fp)) {
		fscanf(fp,"%[^/\n]s", tempTitle);
		fgetc(fp); //���� �ϸ� �ȴ�~~
		insertFnode(CDL, tempTitle);
	}
	fclose(fp);
	mainMenu(CDL);

	fp = fopen("songList.txt", "w");
	printToFile(CDL, fp);
	fclose(fp);
	system("songList.txt");
	return 0;
}

CDL_H* createList() {
	CDL_H* cdl = (CDL_H*)malloc(sizeof(CDL_H));
	cdl->head = NULL;
	return cdl;
}

void mainMenu(CDL_H* cdl) {
	char n = 'a';
	char title[30], pTitle[30];
	listNode* temp;
	while (n != 'Q') {
		printf("\n������������ MP3 PLAYER ������������\nn(N): ���� �� ���\np(P): ���� �� ���\n");
		printf("1: ó�� ������ �߰�\n2: �߰� ������ �߰�\n3: ��� �˻�\n");
		printf("4: �� ����\n5: ������ ����\nQ: ����\n>>");
		n = getchar();
		getchar();
		
		switch (n)
		{
		case 'N':
		case 'n':
			playNext(cdl);
			break;
		case 'P':
		case 'p':
			playPrev(cdl);
			break;
		case '1':
			printf("������ �Է����ּ���: ");
			scanf("%[^/\n]s", title);
			getchar();
			insertFnode(cdl, title);
			break;
		case '2':
			printf("������ �Է����ּ���: ");
			scanf("%[^/\n]s", title);
			getchar();
			printf("��� �� �ڷ�?: ");
			scanf("%[^/\n]s", pTitle);
			getchar();
			insertMnode(cdl, pTitle, title);
			break;
		case '3':
			printf("������ �Է����ּ���: ");
			scanf("%[^/\n]s", title);
			getchar();
			temp = searchNode(cdl, title);
			if (temp != NULL) printf("�����Ͽ� �����մϴ�!\n\n");
			else printf("�׷� ���� ���ٴ�\n\n");
			break;
		case '4':
			printf("������ �Է����ּ���: ");
			scanf("%[^/\n]s", title);
			getchar();
			deleteNode(cdl, title);
			break;
		case '5':
			showList(cdl);
			break;
		case 'Q':
			break;
		default:
			printf("�ٽ�\n");
			break;
		}
	}
	printf("���̿�!\n\n");
}

void insertFnode(CDL_H* cdl, char* title) {
	listNode *newNode, *temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->title, title);
	//�����ΰ��� �ƴѰ�츦 ������
	if (cdl->head == NULL) { //���鸮��Ʈ�� ���
		//���߿��� ���Ḯ��Ʈ�� llink rlink �� �� �ڱ��ڽ�.
		newNode->llink = newNode; 
		newNode->rlink = newNode;
		cdl->head = newNode;
	}
	else { //����ƴϰ� �ٸ� ��尡 �ִ°��
		temp = cdl->head;
		//�� �ڷ� �̵��Ѵ����� ������ �����ϱ�
		while (temp->rlink != cdl->head) {
			temp = temp->rlink;
		}
		newNode->llink = cdl->head->llink;
		cdl->head->llink = newNode;
		newNode->rlink = cdl->head;
		temp->rlink = newNode;
		cdl->head = newNode;
	}
	printf("���� ����Ǿ����ϴ�. '%s'\n", newNode->title);
}

void insertMnode(CDL_H* cdl, char* prev, char* title) {
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->title, title);
	listNode* prevNode = searchNode(cdl, prev);
	prevNode->rlink->llink = newNode;
	newNode->rlink = prevNode->rlink;
	prevNode->rlink = newNode;
	newNode->llink = prevNode;
	printf("���� ����Ǿ����ϴ�. '%s'\n", newNode->title);
}

void deleteNode(CDL_H* cdl, char* title) {
	listNode* temp = searchNode(cdl, title);
	cdl->playing = temp->rlink;
	temp->rlink->llink = temp->llink;
	temp->llink->rlink = temp->rlink;
	free(temp);
	printf("���� �����Ǿ����ϴ�. '%s'\n", title);
}

listNode* searchNode(CDL_H* cdl, char* title) {
	listNode* temp = cdl->head;
	do {
		if (strcmp(title, temp->title) == 0) return temp;
		else temp = temp->rlink;
	} while (temp != cdl->head);
	return NULL;
}

void playPrev(CDL_H* cdl) {
	if (cdl->playing == NULL) {
		cdl->playing = cdl->head;
		printf("���� ����մϴ�! '%s'\n\n", cdl->playing->title);
	}
	else {
		cdl->playing = cdl->playing->llink;
		printf("���� ���� ����մϴ�! '%s'\n\n", cdl->playing->title);
	}
}

void playNext(CDL_H* cdl) {
	if (cdl->playing == NULL) {
		cdl->playing = cdl->head;
		printf("���� ����մϴ�! '%s'\n\n", cdl->playing->title);
	}

	else {
		cdl->playing = cdl->playing->rlink;
		printf("���� ���� ����մϴ�! '%s'\n\n", cdl->playing->title);
	}
}

void showList(CDL_H* cdl) {
	listNode* temp = cdl->head;
	do {
		printf("%s", temp->title);
		temp = temp->rlink;
		if (temp != cdl->head) printf("  ->  ");
	} while (temp != cdl->head);
	printf("\n\n\n");
}

void printToFile(CDL_H* cdl, FILE* fp) {
	//�� �Լ��� ���� ����� �������� ������ �ݴ�� �ٲ��� �ʵ��� �ڿ������� ���Ͽ� ���
	listNode* temp = cdl->head->llink;
	do {
		fprintf(fp,"%s", temp->title);
		temp = temp->llink;
		if (temp != cdl->head->llink) fprintf(fp, "\n");
	} while (temp != cdl->head->llink);
}