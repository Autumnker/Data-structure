//#define _CRT_SECURE_NO_WARNINGS 1
///*����������(��)*/
//
///*
//���裺
//1.����ڵ㣻
//2.�Ӹ��ڵ㿪ʼ�𼶽���������ڵ��е����ݽ��бȽ�
//3.������С�Ҵ��˳����бȽϡ�����
//*/
//
//#include<stdio.h>
//#include<stdlib.h>
////����ڵ�
//typedef struct node {
//	int data;
//	struct node* L;
//	struct node* R;
//}TNode;
//
////��ʼ���ڵ�
//TNode* initTNode()
//{
//	TNode* p = (TNode*)malloc(sizeof(TNode));
//	p->data = 0;
//	p->L = NULL;
//	p->R = NULL;
//
//	return p;
//}
//
////�����ڵ�(ǰ�����)
//void show(TNode* p)
//{
//	if (p)
//	{
//		show(p->L);
//		printf("%d ", p->data);
//		show(p->R);
//	}
//	else
//	{
//		return;
//	}
//}
//
////����������
////�ݹ����
//void Tpush(TNode* p, TNode* cur)
//{
//	if (p->data > cur->data)
//	{
//		if (cur->R == NULL)
//		{
//			cur->R = p;
//		}
//		else
//		{
//			Tpush(p, cur->R);
//		}
//	}
//	else if (p->data < cur->data)
//	{
//		if (cur->L == NULL)
//		{
//			cur->L = p;
//		}
//		else
//		{
//			Tpush(p, cur->L);
//		}
//	}
//}
//
//void Tcreat(TNode* T,int* a, int n)
//{
//	int i = 0;
//	T->data = a[0];
//	TNode* cur = T;
//
//	for (i = 1; i < n; i++)
//	{
//		cur = T;
//		//�������ݴ�ͷ�ڵ㿪ʼ��������бȶԣ�������ȷλ��
//		TNode* p = initTNode();
//		p->data = a[i];
//		
//		Tpush(p, cur);
//	}
//}
//
//int main(void)
//{
//	TNode* T = initTNode();
//	int* a;
//	int n = 0;
//	printf("\n���������鳤�ȣ�\n");
//	scanf("%d", &n);
//	a = (int*)malloc(sizeof(int) * n);
//	int i = 0;
//	printf("\n���������� ��\n");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	Tcreat(T, a, n);
//	show(T);
//
//	free(a);
//	return 0;
//}