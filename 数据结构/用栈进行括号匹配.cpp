//#define _CRT_SECURE_NO_WARNINGS 1
//
///*����ջ��������ƥ��*/
//#include<iostream>
//#include<cstdlib>
//
////������ջ�ڵ�
//typedef struct node {
//	int total;
//	char data;
//	struct node* next;
//}Node;
//
////��ʼ���ڵ�
//Node* initnode()
//{
//	Node* a = (Node*)malloc(sizeof(Node));
//	a->total = 0;
//	a->data = NULL;
//	a->next = NULL;
//
//	return a;
//}
//
////������ջ��ͷ�巨�����������ţ�
//void creatL(Node* node,char data)
//{
//	Node* p = node;
//	Node* str = initnode();
//	str->data = data;
//	str->next = p->next;
//	p->next = str;
//	p->total++;
//}
////������ջ��β�巨�����������ţ�
//void creatR(Node* node, char data)
//{
//	Node* p = initnode();
//	Node* cur = node;
//	int n = cur->total;
//	//��curָ��ջβ
//	while (n > 0)
//	{
//		cur = cur->next;
//		n--;
//	}
//	p->data = data;
//	p->next = cur->next;
//	cur->next = p;
//	node->total++;
//}
//
////�ж�ջ��
//int isEmpty(Node* node)
//{
//	if (node->total == 0 || node->next == NULL)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
////��ӡ����Ԫ��
//void show(Node* node)
//{
//	int n = node->total;
//	Node* p = node->next;
//	while (n > 0)
//	{
//		printf("%c ", p->data);
//		p = p->next;
//		n--;
//	}
//}
//
////����ջ��Ԫ��
//void pop(Node* a)
//{
//	char data = NULL;
//
//	if (isEmpty(a))
//	{
//		return;
//	}
//	else
//	{
//		Node* p = a->next;
//		data = p->data;
//		a->next = p->next;
//		free(p);
//		a->total--;
//
//		return;
//	}
//}
//
////�׳�ջ��Ԫ�أ�Ԫ�ز���ջ��
//char top(Node* a)
//{
//	if (isEmpty(a))
//	{
//		return NULL;
//	}
//	else
//	{
//		char data = a->next->data;
//		return data;
//	}
//}
//
//int main(void)
//{
//	//�������������ֱ�洢�����ź�������
//	Node* left = initnode();
//	Node* right = initnode();
//	Node* all = initnode();
//
//	//�����������д�������
//	char in = 'a';
//	int flag = 1;
//	int num = 0;
//
//	printf("\n���������ţ���()����[]����{}���Կɣ�����ĸ��o����������\n");
//	while (flag)
//	{
//		scanf("%c", &in);
//		if (in == 'o')
//		{
//			flag = 0;
//		}
//
//		if (flag)
//		{
//			if (in == '(' || in == '[' || in == '{')
//			{
//				creatL(left, in);
//			}
//			else if (in == ')' || in == ']' || in == '}')
//			{
//				creatR(right, in);//���ڱ�ʾ�����ŵ����з�ʽ
//			}
//			creatR(all, in);
//
//			////��ӡ����Ԫ��
//			//printf("\n���������ţ����� %d ��Ԫ��\n", left->total);
//			//show(left);
//			//printf("\n���������ţ����� %d ��Ԫ��\n", left->total);
//			//show(right);
//			//printf("\n�����������ţ����� %d ��Ԫ��\n", all->total);
//			//show(all);
//			//printf("\n");
//
//			//�����������ţ�����������ʱ������������ջ��Ԫ�ز���֮�ȶ�
//			char left_top = top(left);
//			char all_top = top(all);
//			while (all->total)
//			{
//				if (!isEmpty(left) && !isEmpty(all))
//				{
//					if (all_top == ')' && left_top != '(' ||
//						all_top == ']' && left_top != '[' ||
//						all_top == '}' && left_top != '{')
//					{
//						num = 1;//printf("\nƥ��ʧ�ܣ��������Ͳ�ƥ��\n");
//						break;
//					}
//					else if (all_top == '(' || all_top == '[' || all_top == '{')
//					{
//						all_top = top(all);
//						pop(all);//����������
//					}
//					else if (all_top == ')' && left_top == '(' ||
//						all_top == ']' && left_top == '[' ||
//						all_top == '}' && left_top == '{')
//					{
//						all_top = top(all);
//						pop(all);
//						left_top = top(left);
//						pop(left);
//					}
//				}
//				else if (isEmpty(left) && !isEmpty(all))
//				{
//					num = 2; //printf("\nƥ��ʧ�ܣ�����δ�ɶԳ���(ȱ��������)\n");
//					break;
//				}
//			}
//
//			if (isEmpty(left) && isEmpty(all))
//			{
//				num = 4; //printf("\nƥ��ɹ�\n");
//			}
//			else if (!isEmpty(left) && isEmpty(all))
//			{
//				num = 3; //printf("\nƥ��ʧ�ܣ�����δ�ɶԳ���(ȱ��������)\n");
//			}
//		}
//	}
//
//	switch(num)
//	{
//	case 1:
//		printf("\n�������Ͳ�ƥ��\n");
//		break;
//	case 2:
//		printf("\nȱ��������\n");
//		break;
//	case 3:
//		printf("\nȱ��������\n");
//		break;
//	case 4:
//		printf("\nƥ��ɹ�\n");
//		break;
//	}
//
//	return 0;
//}