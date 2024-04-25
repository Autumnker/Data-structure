//#define _CRT_SECURE_NO_WARNINGS 1
//
///*����ͼDFS\BFS*/
//#include<stdio.h>
//#include<stdlib.h>
//
////�����ڵ�
//typedef struct node {
//	int data;
//	struct node* next;
//	struct node* parent;
//}Node;
//
////ѭ������
//Node* initNode()
//{
//	Node* p = (Node*)malloc(sizeof(Node));
//
//	p->next = p;
//	p->parent = p;
//	p->data = 0;
//
//	return p;
//}
//
////β�巨
//void push(Node* node, int data)
//{
//	Node* p = initNode();
//	p->parent = node->parent;
//	node->parent->next = p;
//	p->next = node;
//	node->parent = p;
//	if (node->next == NULL)
//	{
//		node->next = p;
//	}
//	p->data = data;
//
//	node->data++;
//}
//
////ͷ�巨
//void in(Node* node, int data)
//{
//	Node* p = initNode();
//	p->data = data;
//	p->next = node->next;
//	p->parent = node;
//	node->next = p;
//	p->next->parent = p;
//
//	node->data++;
//}
//
////����(ջ)
//int pop(Node* node)
//{
//	if (node->data > 0)
//	{
//		Node* p = node->next;
//		int num = p->data;
//		node->next = p->next;
//		p->next->parent = node;
//		free(p);
//		node->data--;
//
//		return num;
//	}
//	else
//		return -1;
//}
//
////����ͼ
//typedef struct graph {
//	char* vexs;//�ڵ��һά�����ʾ
//	int** arcs;//�ߵĶ�ά�����ʾ
//	int vexNum;//�ڵ������
//	int arcNum;//�ߵ�������
//}Graph;
//
////��ʼ��ͼ
//Graph* initGraph(int vexNum, char* a)
//{
//	Graph* G = (Graph*)malloc(sizeof(Graph));
//	G->vexs = (char*)malloc(sizeof(char) * vexNum);
//	G->arcs = (int**)malloc(sizeof(int*) * vexNum);
//	int i = 0;
//	for (i = 0; i < vexNum; i++)
//	{
//		G->vexs[i] = a[i];//�ڵ㴫��
//		int j = 0;
//		for (j = 0; j < vexNum; j++)
//		{
//			G->arcs[i] = (int*)malloc(sizeof(int) * vexNum);
//			G->arcs[i][j] = 0;//��ʼ���ߵ�����
//		}
//	}
//	G->vexNum = vexNum;
//	G->arcNum = 0;
//
//	return G;
//}
//
////��ͼ��ֵ(����)
//void CreatGraph(Graph* G, int* arcs)
//{
//	int i = 0;
//	for (i = 0; i < G->vexNum; i++)
//	{
//		int j = 0;
//		for (j = 0; j < G->vexNum; j++)
//		{
//			G->arcs[i][j] = arcs[i * G->vexNum + j];
//			if (G->arcs[i][j] == 1);
//			{
//				G->arcNum++;
//			}
//		}
//	}
//
//	G->arcNum = G->arcNum / 2;
//}
//
////����ͼDFS
//void DFS(Graph* G,int topNum)//topNum��ָ��ʼλ�õı��
//{
//	printf("DFS����: ");
//
//	int i = 0, j = 0,totalvisited = 0;
//	//��¼�ڵ��Ƿ񱻷��ʵ����ݽṹ
//	int* havedone = (int*)malloc(sizeof(int) * G->vexNum);
//	for (i = 0; i < G->vexNum; i++)
//	{
//		havedone[i] = 0;
//	}
//
//	Node* num = initNode();
//
//	//�ȷ��ʵ�һ���ڵ�
//	printf("%c ", G->vexs[topNum]);
//	havedone[topNum] = 1;
//	totalvisited++;
//
//	for (i = topNum; totalvisited < G->vexNum ; i++)
//	{
//		//printf("\n%d\n",i);
//
//		if (i >= G->vexNum)
//		{
//			i = 0;
//		}
//		for (j = 0; j < G->vexNum; j++)
//		{
//			if (G->arcs[i][j] == 1 && havedone[j] != 1)
//			{
//				printf("%c ", G->vexs[j]);
//				havedone[j] = 1;
//				totalvisited++;
//				in(num, i);
//				i = j - 1;//��Ϊ��һ��ѭ����ĩβ��i������������Ҫ�� j Сһ
//
//				break;
//			}
//			if (j == G->vexNum - 1 && G->arcs[i][j] == 0)//һ��·�����ף��ͻص��ϴηֲ�ĵط�
//			{
//				i = pop(num) - 1;//�ص���һ�㣬ֱ���зֲ�·��Ϊֹ
//			}
//		}
//	}
//
//	free(havedone);
//}
//
////����ͼBFS
//void BFS(Graph* G, int topNum)
//{
//	printf("BFS����: ");
//
//	Node* num = initNode();
//
//	int* havedone = (int*)malloc(sizeof(int) * G->vexNum);
//	int i = 0, j = 0, totalvisited = 0;
//	for (i = 0; i < G->vexNum; i++)
//	{
//		havedone[i] = 0;
//	}
//
//	//��Ҫ�߼�(�����ڶ������Ĳ�α���)
//	printf("%c ", G->vexs[topNum]);
//	havedone[topNum] = 1;
//	totalvisited++;
//
//	for (i = topNum; totalvisited < G->vexNum; i++)
//	{
//		for (j = 0; j < G->vexNum; j++)
//		{
//			if (G->arcs[i][j] == 1 && havedone[j] != 1)
//			{
//				printf("%c ", G->vexs[j]);
//				havedone[j] = 1;
//				totalvisited++;
//
//				push(num, j);
//			}
//		}
//		if (num->data > 0)
//		{
//			i = pop(num) - 1;
//		}
//	}
//	//��Ҫ�߼�����
//
//	free(havedone);
//}
//
//int main(void)
//{
//	int vexNum = 10;
//	char a[] = "ABCDEFGHIJ";
//	int arcs[] = {
//		0,1,1,0,1,0,1,1,0,0,
//		1,0,0,1,0,0,0,0,0,0,
//		1,0,0,0,0,1,0,0,0,1,
//		0,1,0,0,1,0,0,0,1,0,
//		1,0,0,1,0,0,0,0,0,1,
//		0,0,1,0,0,0,1,0,0,0,
//		1,0,0,0,0,1,0,0,0,0,
//		1,0,0,0,0,0,0,0,0,0,
//		0,0,0,1,0,0,0,0,0,0,
//		0,0,1,0,1,0,0,0,0,0
//	};
//
//	int topNum = 0;
//
//	Graph* G = initGraph(vexNum, a);
//	CreatGraph(G, arcs);
//	DFS(G, topNum);
//	printf("\n");
//	BFS(G, topNum);
//
//	return 0;
//}