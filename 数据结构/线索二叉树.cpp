//#define _CRT_SECURE_NO_WARNINGS 1
//
///*��������������*/
///*
//1.����������
//2.�����������������˳���ÿ�ָ��ָ��ǰ���ͺ��
//*/
//
//#include<stdio.h>
//#include<stdlib.h>
////�������Ľڵ�
//typedef struct Tree {
//	char data;
//	struct Tree* L;
//	struct Tree* R;
//	int ltag;//tagΪ0ʱΪָ���ӽڵ��ָ�룬Ϊ1ʱΪָ��ǰ���ͺ�̵�ָ��
//	int rtag;
//}TNode;
//
////��ʼ���ڵ�
//TNode* initTNode()
//{
//	TNode* p = (TNode*)malloc(sizeof(TNode));
//	p->data = ' ';
//	p->L = NULL;
//	p->R = NULL;
//	p->ltag = 0;
//	p->rtag = 0;
//
//	return p;
//}
//
////����ջ�ڵ�
//typedef struct node {
//	int total;
//	TNode* data;
//	struct node* next;
//}Node;
////��ʼ��ջ�ڵ�
//Node* initNode()
//{
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = NULL;
//	p->next = NULL;
//	p->total = 0;
//
//	return p;
//}
//
////Ԫ����ջ
//void creat(Node* node, TNode* T)
//{
//	if (T)
//	{
//		Node* p = (Node*)malloc(sizeof(Node));
//		p->data = T;
//		p->next = node->next;
//		node->next = p;
//		node->total++;
//	}
//}
//
////����ջ��Ԫ��
//TNode* pop(Node* node)
//{
//	if (node->total > 0)
//	{
//		Node* top = node->next;
//		TNode* p = top->data;
//		node->next = top->next;
//		free(top);
//		node->total--;
//
//		return p;
//	}
//	else
//	{
//		return NULL;
//	}
//}
//
////����ջ��Ԫ��
//TNode* copy(Node* node)
//{
//	if (node->total > 0)
//	{
//		Node* top = node->next;
//		TNode* p = top->data;
//
//		return p;
//	}
//	else
//	{
//		return NULL;
//	}
//}
//
////�����ѹ��ջ��
//void stack_in(Node* node, TNode* T)
//{
//	if (T)
//	{
//		creat(node, T);
//		stack_in(node, T->L);
//	}
//	else
//	{
//		return;
//	}
//}
//
////����������(����)
//void Tcreat(TNode* T)
//{
//	char a = ' ';
//	scanf("%c", &a);
//	if (a == '*')
//	{
//		T = NULL;
//		free(T);
//		return;
//	}
//	else
//	{
//		T->data = a;
//
//		TNode* left = initTNode();
//		T->L = left;
//		Tcreat(left);
//
//		TNode* right = initTNode();
//		T->R = right;
//		Tcreat(right);
//	}
//}
//
////�������ĵݹ����(����)
//void show(TNode* T)
//{
//	if (T && T->data != ' ')
//	{
//		show(T->L);
//		printf("%c ", T->data);
//		show(T->R);
//	}
//	else
//	{
//		return;
//	}
//}
//
////�ǵݹ����������
//void view(Node* node, TNode* T)
//{
//	stack_in(node, T);
//
//	TNode* now = copy(node);
//
//	while (node->total > 0)
//	{
//		if (now->R == NULL)
//		{
//			//����ʱ�ŷ���
//			now = pop(node);
//			if (now->data != ' ')
//			{
//				printf("%c ", now->data);
//			}
//		}
//		else
//		{
//			//�ȵ��������ҽڵ�
//			pop(node);
//			if (now->data != ' ')
//			{
//				printf("%c ", now->data);
//			}
//			stack_in(node, now->R);
//		}
//		now = copy(node);
//	}
//}
//
////������������
//void xian_suo(TNode* T, TNode* pre)
//{
//
//}
//
//int main(void)
//{
//	TNode* T = initTNode();
//	Node* node = initNode();
//
//	Tcreat(T);
//	/*printf("\n�������ĵݹ������\n");
//	show(T);
//	printf("\n�������ķǵݹ������\n");
//	view(node,T);*/
//
//	TNode* pre = T;
//
//	return 0;
//}