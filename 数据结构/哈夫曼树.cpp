//#define _CRT_SECURE_NO_WARNINGS 1
//
///*��������,���¶��ϵش���*/
//#include<stdio.h>
//#include<stdlib.h>
//
///*
//1.����������
//2.ȡ�����н�С������ֵ��ɾ�����ǲ��������д������ǵĺͣ���һ��Ԫ�ظ�ֵΪ-1����һ����ֵΪ���ǵĺͣ�
//3.��������С������һ���������������������ĸ��ڵ�ĵ�ַ��ֵ��ָ�룩
//4.���ٴ����ɵĶ���������ǰ���ڵĶ������������ӣ���ָ��洢�µĸ��ڵ�ĵ�ַ��
//*/
//
////����������ڵ�
//typedef struct node {
//	int data;
//	struct node* P;
//	struct node* L;
//	struct node* R;
//}HFNode;
//
////��ʼ���ڵ�
//HFNode* initHFNode()
//{
//	HFNode* p = (HFNode*)malloc(sizeof(HFNode));
//
//	p->data = 0;
//	p->L = NULL;
//	p->R = NULL;
//	p->P = NULL;
//
//	return p;
//}
//
////������������׵�ַ��������С���Ľṹ��
//typedef struct MIN {
//	int* a;
//	int min_1;
//	int min_2;
//}min;
//
////�����������(���������׵�ַ)
//min paixu(int* a, int n)
//{
//	int i = 0, j = 0, temp = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i; j < n - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//
//	//����С���������ָ�ֵ��b��c
//	int b = -1, c = -1;
//	i = 0;
//	while (i < n)
//	{
//		if (a[i] > 0 && b == -1)
//		{
//			b = a[i];
//			a[i] = -1;//�������������СԪ��ɾ�����������ǵĺ�
//		}
//		else if(a[i] > 0 && b != -1 && c == -1)
//		{
//			c = a[i];
//			a[i] = b + c;//�������������СԪ��ɾ�����������ǵĺ�
//		}
//		
//		if (b != -1 && c != -1)
//		{
//			break;
//		}
//
//		i++;
//	}
//
//	min m = { a,b,c };
//
//	return m;
//}
//
//
////���������������ɺ���
//HFNode* CreatSingle(int min_1, int min_2)
//{
//	HFNode* P = initHFNode();
//	HFNode* L = initHFNode();
//	HFNode* R = initHFNode();
//
//	L->data = min_1;
//	L->P = P;
//	R->data = min_2;
//	R->P = P;
//
//	P->L = L;
//	P->R = R;
//	P->data = L->data + R->data;
//
//	return P;
//}
//
////�����¾ɸ��ڵ�����Ӻ���
//HFNode* connect()
//{
//
//}
//
////�����������
//
//int main(void)
//{
//
//	return 0;
//}