//#define _CRT_SECURE_NO_WARNINGS 1
//
/////*�������Ĵ����������ʧ�ܰ�����*/
////#include<stdio.h>
////#include<stdlib.h>
////
//////����ڵ�
////typedef struct Treenode {
////	int data;
////	struct Treenode* father;
////	struct Treenode* left;
////	struct Treenode* right;
////}Node;
////
//////��������ʼ���ڵ�
////Node* chuangjian()
////{
////	Node* a = (Node*)malloc(sizeof(Node));
////	a->data = 0;
////	a->father = NULL;
////	a->left = NULL;
////	a->right = NULL;
////
////	return a;
////}
////
//////�ڵ㸳ֵ
////void fuzhi(Node* node, int* a, int i)
////{
////	if (node->left && i <= sizeof(a)/sizeof(int))
////	{
////		node->data = a[i];
////		i++;
////		fuzhi(node->left, a, i);
////
////		if (node->right && i <= sizeof(a) / sizeof(int))
////		{
////			node->data = a[i];
////			i++;
////			fuzhi(node->right, a, i);
////		}
////		else if(i <= sizeof(a) / sizeof(int))
////		{
////			//����һ���ҽڵ�
////			Node* r = chuangjian();
////			r->father = node;
////			fuzhi(node->right, a, i);
////		}
////	}
////	else if (i <= sizeof(a) / sizeof(int))
////	{
////		//����һ����ڵ�
////		Node* l = chuangjian();
////		l->father = node;
////		fuzhi(node->left, a, i);
////	}
////}
////
//////�ڵ�ı�����ÿһ�����Ŀ��ӻ����
////void shuchu(Node* node)
////{
////	Node* p = node;
////	if (p == NULL)
////	{
////		return;
////	}
////	else
////	{
////		printf("%d \n", p->data);
////		shuchu(p->left);
////		shuchu(p->right);
////	}
////
////}
////
////int main(void)
////{
////	int i = 0; int n = 0;
////
////	Node* tree = chuangjian();
////	Node* p = tree;
////	scanf("%d", &n);
////	int* a = (int*)malloc(sizeof(int) * n);
////	int* b = a;
////	for (i = 0; i < n; i++)
////	{
////		scanf("%d", b);
////		b++;
////	}
////	b = a;
////
////	//fuzhi(p, a, 1);
////	//shuchu(tree);
////	
////	return 0;
////}
//
/////*�̶���ȵĶ������Ĵ�������������ǱȽϼ򵥵ģ�ֻҪ������ݹ�����������*/
////#include<stdio.h>
////#include<stdlib.h>
////
////typedef struct node {
////	int data;
////	struct node* L;
////	struct node* R;
////	struct node* root;
////}Node;
////
////Node* chushihua()
////{
////	Node* a = new Node;
////	a->data = 0;
////	a->L = NULL;
////	a->R = NULL;
////	a->root = a;
////	return a;
////}
////
//////����������
////void creat(Node* root,int n)
////{
////	Node* p = root;
////
////	if (n == 0)
////	{
////		return;
////	}
////	else
////	{
////		int lnum = 0;
////		scanf("%d", &lnum);
////		Node* left = chushihua();
////		left->data = lnum;
////		left->root = root->root;
////		left->root->data++;
////		root->L = left;
////
////		creat(left, n - 1);
////
////		int rnum = 0;
////		scanf("%d", &rnum);
////		Node* right = chushihua();
////		right->data = rnum;
////		right->root = root->root;
////		right->root->data++;
////		root->R = right;
////
////		creat(right, n-1);
////	}
////}
////
//////*�����
////void print_tree(Node* root)
////{
////	if(root)
////	{
////		printf("%d ", root->data);
////		print_tree(root->L);
////		print_tree(root->R);
////	}
////}
////
////int main(void)
////{
////	Node* root = chushihua();
////	int n = 0;
////	printf("����������������\n(���ڵ㲻�������ڣ����ڵ����ڴ洢�����ڵ�����Ľڵ�����)\n");
////	scanf("%d", &n);
////	creat(root, n);
////	print_tree(root);
////	printf("\n\n����%d���ڵ�\n", root->data + 1);
////
////	return 0;
////}
//
/////*�������ĵݹ鴴������������*/
////#include<stdio.h>
////#include<stdlib.h>
////
//////�������Ľڵ�
////typedef struct tree {
////	int data;
////	struct tree* L;
////	struct tree* R;
////}Node;
////
//////��ʼ���ڵ�
////Node* creat()
////{
////	Node* p = (Node*)malloc(sizeof(Node));
////	p->data = 0;
////	p->L = NULL;
////	p->R = NULL;
////
////	return p;
////}
////
//////���ĵݹ鴴��(���򴴽�)
////void creattree(Node* T)
////{
////	int c = NULL;
////	scanf("%d", &c);
////	if (c == 0)
////	{
////		return;
////	}
////	else
////	{
////		T->data = c;
////		T->L = creat();
////		creattree(T->L);
////		T->R = creat();
////		creattree(T->R);
////	}
////}
////
//////���ĵݹ����������������
////void show(Node* p)
////{
////	if (p == NULL)
////	{
////		return;
////	}
////	else
////	{
////		show(p->L);
////		show(p->R);
////		if (p->data != 0)
////		{
////			printf("%d ", p->data);
////		}
////	}
////}
////
////int main(void)
////{
////	Node* p = creat();
////	creattree(p);
////	show(p);
////
////	return 0;
////}
//
/////*�������Ĳ�α���*/
////#include<stdio.h>
////#include<stdlib.h>
////
//////�������Ľڵ�
////typedef struct tree {
////	char data;
////	struct tree* L;
////	struct tree* R;
////}TNode;
//////��ʼ�����Ľڵ�
////TNode* initTNode()
////{
////	TNode* p = (TNode*)malloc(sizeof(TNode));
////	p->data = ' ';
////	p->L = NULL;
////	p->R = NULL;
////
////	return p;
////}
////
//////������(ǰ��)
////void Tcreat(TNode** T)
////{
////	char a;
////	scanf(" %c", &a);
////	if (a == '*')
////	{
////		(*T) = NULL;
////		return;
////	}
////	else
////	{
////		(*T)->data = a;
////
////		(*T)->L = initTNode();
////		Tcreat(&((*T)->L));
////
////		(*T)->R = initTNode();
////		Tcreat(&((*T)->R));
////	}
////}
////
//////������(ǰ�����)
////void Tprint(TNode* T)
////{
////	if (T)
////	{
////		if (T->data)
////		{
////			printf("%c ", T->data);
////			Tprint(T->L);
////			Tprint(T->R);
////		}
////	}
////	else
////	{
////		return;
////	}
////}
////
//////������нڵ�
////typedef struct node {
////	int total;
////	TNode* data;
////	struct node* pre;
////	struct node* next;
////}Node;
////
//////��ʼ���ڵ�
////Node* initNode()
////{
////	Node* p = (Node*)malloc(sizeof(Node));
////	p->total = 0;
////	p->data = NULL;
////	p->next = p;
////	p->pre = p;
////
////	return p;
////}
////
//////�������У�β�巨
////void creatNode(Node** node,TNode* data)
////{
////	if (data)
////	{
////		if ((*node)->total == 0)
////		{
////			Node* nw = initNode();
////			nw->data = data;
////			nw->pre = (*node);
////			nw->next = (*node);
////			(*node)->pre = nw;
////			(*node)->next = nw;
////			(*node)->total++;
////
////		}
////		else
////		{
////			Node* cur = initNode();
////			cur->data = data;
////			cur->next = (*node);
////			cur->pre = (*node)->pre;
////			(*node)->pre->next = cur;
////			(*node)->pre = cur;
////			(*node)->total++;
////		}
////	}
////	else
////	{
////		return;
////	}
////}
////
//////��������Ԫ��
////TNode* pop(Node* node)
////{
////	Node* now = node->next;
////	TNode* p = now->data;
////	now->next->pre = now->pre;
////	now->pre->next = now->next;
////	node->total--;
////	free(now);
////
////	return p;
////}
////
//////��α��������߼�����
////void cen_ci(TNode* T,Node** node)
////{
////	if (T)
////	{
////		if ((*node)->total == 0)
////		{
////			creatNode(node, T);//�Ž�ȥ
////			printf("%c ", pop(*node)->data);//������
////			creatNode(node, T->L);//�����
////			creatNode(node, T->R);//���ұ�
////		}
////		else
////		{
////			printf("%c ", pop(*node)->data);//������
////			creatNode(node, T->L);//�����
////			creatNode(node, T->R);//���ұ�
////		}
////		cen_ci(T->L, node);
////		cen_ci(T->R, node);
////	}
////	else
////	{
////		return;
////	}
////}
////
//////��α�����2.0
////void cen(Node** node)
////{
////	if ((*node)->total > 0)
////	{
////		TNode* p = pop(*node);
////		creatNode(node, p->L);
////		creatNode(node, p->R);
////		printf("%c ", p->data);
////		cen(node);
////	}
////	else
////	{
////		return;
////	}
////}
////
////int main(void)
////{
////	TNode* T = initTNode();
////	Tcreat(&T);
////
////	printf("\n���������\n");
////	Tprint(T);
////
////	printf("\n��α�����\n");
////	Node* node = initNode();
////	creatNode(&node, T);
////	cen(&node);
////
////	return 0;
////}
//
//
///*�������ķǵݹ鴴������������*/
//#include<stdio.h>
//#include<stdlib.h>
//
///*����������*/
//typedef struct t {
//	char data;
//	int was;
//	struct t* L;
//	struct t* R;
//}TNode;
//
//TNode* initTNode()
//{
//	TNode* p = (TNode*)malloc(sizeof(TNode));
//	p->data = ' ';
//	p->was = 0;
//	p->L = NULL;
//	p->R = NULL;
//
//	return p;
//}
//
//void Tcreat(TNode* T)
//{
//	char a;
//	scanf("%c", &a);
//	if (a == '*')
//	{
//		T->was = 1;
//		T = NULL;
//		free(T);
//		return;
//	}
//	else
//	{
//		T->data = a;
//		T->L = initTNode();
//		Tcreat(T->L);
//		T->R = initTNode();
//		Tcreat(T->R);
//	}
//}
//
//void Tprint(TNode* T)
//{
//	if (T)
//	{
//		if (T->data != ' ')
//		{
//			printf("%c ", T->data);
//			Tprint(T->L);
//			Tprint(T->R);
//		}
//	}
//}
//
///*ǰ��������������*/
////1.���ڵ���ջ
////2.ѭ����ֱ����֧Ϊ��
////3.��ջ�����ʽڵ㣬��ջ��֧
//
////����ջ
//typedef struct node {
//	int total;
//	TNode* data;
//	struct node* next;
//}Node;
//
//Node* initNode()
//{
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->total = 0;
//	p->data = NULL;
//	p->next = NULL;
//
//	return p;
//}
//
////ͷ�巨
//void push(Node* node, TNode* data)
//{
//	if (data != NULL && data->data != ' ')
//	{
//		Node* x = initNode();
//		x->data = data;
//		x->next = node->next;
//		node->next = x;
//		node->total++;
//	}
//	else
//	{
//		return;
//	}
//}
//
////����ջ��
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
//TNode* ppp(Node* node)
//
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
////������ʴ���
//void clear(TNode* T)
//{
//	if (T->data != ' ')
//	{
//		T->was = 0;//������ʴ���
//		clear(T->L);
//		clear(T->R);
//	}
//}
//
////�жϽڵ�������֧
//int haveR(TNode* p)
//{
//	if (p->R->was ==  0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
////���ڵ���ջ
//void pushroot(Node* node, TNode* root, int mode)
//{
//	while (root)
//	{
//		push(node, root);
//		if (mode == 1 && root->data != ' ')
//		{
//			printf("%c ", root->data);
//			root->was++;//���ʴ���+1
//		}
//		root = root->L;
//	}
//}
//
///*һ�����������������ʽ��*/
//void xianxu(TNode* T)
//{
//	printf("\n���������\n");
//
//	//�����ջ������
//	Node* node = initNode();
//	TNode* cur = T;
//	pushroot(node, cur, 1);
//
//	TNode* now = ppp(node);
//	while (node->total > 0)
//	{
//		//����֧�ȷ�����֧
//		if (haveR(now))
//		{
//			pushroot(node, now->R, 1);
//		}
//		else//û����֧�򵯳�
//		{
//			pop(node);
//		}
//		now = ppp(node);//����ջ��Ԫ��
//	}
//
//	//������ʴ���
//	clear(T);
//}
//
///*�������������������ʽ��*/
//void zhongxu(TNode* T)
//{
//	printf("\n���������\n");
//
//	Node* node = initNode();
//	//���ڵ���ջ
//	TNode* cur = T;
//	pushroot(node, cur, 2);
//
//	while (node->total > 0)
//	{
//		//����ջ��������
//		TNode* now = pop(node);
//		if (now->data != ' ')
//		{
//			printf("%c ", now->data);
//			now->was++;
//		}
//
//		//�ж�ջ������Ԫ���Ƿ�����֧
//		if (haveR(now))
//		{
//			pushroot(node, now->R, 2);//������Ԫ�ص��ҽڵ���Ϊ���ڵ���ջ
//		}
//	}
//
//	//������ʴ���
//	clear(T);
//}
//
///*�������������������ʽ��*/
////1.��ջ��ʱ�򱻷���
//void houxu(TNode* T)
//{
//	printf("\n���������\n");
//
//	Node* node = initNode();
//	TNode* cur = T;
//	//����ڵ���ջ
//	pushroot(node, cur, 2);
//	TNode* now = ppp(node);
//	
//	while (node->total > 0)
//	{
//		//��ջǰ�ж��Ƿ�����֧
//		if (haveR(now))//����֧����֧��ջ����pushroot
//		{
//			pushroot(node, now->R, 2);
//			now = ppp(node);
//		}
//		//����֧��ֱ�ӳ�ջ����ջʱ���ʣ�
//		else
//		{
//			now = pop(node);//����
//			printf("%c ", now->data);
//			now->was++;
//		}
//		now = ppp(node);
//	}
//
//	//������ʴ���
//	clear(T);
//}
//
//int main(void)
//{
//	TNode* T = initTNode();
//	Tcreat(T);
//	printf("�ݹ������\n");
//	Tprint(T);
//	printf("\n\n����������\n");
//
//	/*һ�����������������ʽ��*/
//	xianxu(T);
//	/*�������������������ʽ��*/
//	zhongxu(T);
//	/*�������������������ʽ��*/
//	houxu(T);
//
//	return 0;
//}
//
///*
//�ܽ᣺
//һ����α�����
//1.�Ƚ����ڵ���ջ����ջ������֮������Ž��ö������ҽڵ���β�巨������С�
//
//�����ǵݹ鷽������������
//1.ǰ�������������ߵĸ��ڵ���ջ��������ջ��ͬʱ���ʽڵ㡿����ջ��Ԫ��û��������ʱ������ջ����
//����������������Ƚ�����������ջ�У����Ȳ�������ڵ�ķ�ʽ������ջ��Ԫ��û��������ʱ������ջ����
//
//2.���������������ߵĸ��ڵ���ջ����ջ��Ԫ��û��������ʱ��������ջ�������ʵ����ڵ㡿�������һջ���ڵ�����������
//���ȵ���ջ�����ٽ�����������ջ�С������Ȳ�������ڵ�ķ�ʽ����
//
//3.���������������ߵĸ��ڵ���ջ����ջ��Ԫ��û��������ʱ��������ջ�������ʸýڵ㡿��
//������������ʱ���Ȳ��������������Ȳ�������ڵ�ķ�ʽ��������û��������ʱ������ջ�������ʸýڵ㡣
//*/