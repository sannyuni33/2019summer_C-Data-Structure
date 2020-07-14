/*
19.07.16
�� ���� ��� Ǯ����,
�ڷᱸ���� �����ڷᱸ�� �̿��� ���ñ��� �������� ������ ��.(����ü, ������ ���)
�׷��� ���ó�� ����ü�� ���ó��* top, �׸��� push pop �Լ��� ��ȣ�˻� �Լ� �� ���� ������.
push�� pop�� �ڷᱸ������ ��� ����� �����ϰ�
��ȣ�˻� �Լ����� �� ���� Ʋ�ȴµ�.
ù ��° Ʋ�������� ((()) ���� ��쿡�� yes��� ���°���.
�̰� �� Ʋ�Ⱦ��ĸ�, ) �� ] �� ���̽����� ( �� [ �� �°Ը� ������ ����ϱ� ������, yes��� ������.
��� �ذ��߳ĸ� ���ÿ� �����ִ� ��尡 ������� ��ȣ�˻� �Լ��� 0�� �����ϰ� �ؼ� �ذ�����.
�ٵ��� Ʋ�ȴٰ� �ߴµ�, �� Ʋ�ȳĸ� ((((]] �� ġ�� no�� �����°� �´µ� ������ ()()�� �˻��ϸ� no ��� ������.
�� �̷��°ɱ�... 3�� ���� �����غ��ϱ� ���� ���ÿ� �����Ͱ� �����־ �׷��ſ���.
�׷��� ���ڿ� �˻縦 �ؼ� y/n�� ������ְ� ���� top=NULL; �� �����ؼ� ������ �����������.
�׷��� �ϴϱ� �ذ�Ǽ� �¾ҽ��ϴ�!
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
	char data;
	struct node* link;
}stackNode;

void push(char);
char pop();
int checkBracket(char*, int);

stackNode* top = NULL;

int main() {
	char *sentence = (char*)malloc(101);
	int slen;

	while (1) {
		scanf("%[^/\n]s", sentence);
		getchar();
		if (strcmp(sentence, ".") == 0)
			break;
		slen = strlen(sentence);
		
		if (checkBracket(sentence, slen) == 1)
			printf("yes\n");
		else
			printf("no\n");
		top = NULL;
	}
	free(sentence);
	return 0;
}

void push(char c) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
	temp->data = c;
	if (top == NULL)
		temp->link = NULL;
	else
		temp->link = top;
	top = temp;
}

char pop() {
	stackNode* temp;
	if (top == NULL)
		return '0';
	else {
		temp = top;
		top = top->link;
		return temp->data;
	}
}

int checkBracket(char* stc, int slen) {
	char temp;
	for (int i = 0; i < slen; i++) {
		switch (stc[i])
		{
		case '(':
		case '[':
			push(stc[i]);
			break;
		case ')':
			temp = pop();
			if (temp == '0')
				return 0;
			else {
				if (temp != '(')
					return 0;
				else
					break;
			}
		case ']':
			temp = pop();
			if (temp == '0')
				return 0;
			else {
				if (temp != '[')
					return 0;
				else
					break;
			}
		default:
			break;
		}
	}
	if (pop() != '0')
		return 0;
	else
		return 1;
}
