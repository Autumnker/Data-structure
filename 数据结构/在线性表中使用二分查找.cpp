//#define _CRT_SECURE_NO_WARNINGS 1
//
///*�����Ա���ʹ�ö��ֲ���*/
//#include<iostream>
//using namespace std;
//
////�������Ա�
//struct List {
//	int* a;
//	int length;
//	int num;
//};
//
////���Ա�ĳ�ʼ������
//List* initList(int length)
//{
//	List* list = new List;
//	list->length = length;
//	list->num = 0;
//	list->a = new int[length];
//
//	return list;
//}
//
////���Ա�ֵ����
//void fu_zhi(List* list, int data)
//{
//	if (list->num == list->length)
//	{
//		cout << "\n���Ա�����\n" << endl;
//		return;
//	}
//	else
//	{
//		list->a[list->num] = data;
//		list->num = list->num + 1;
//	}
//}
//
////���Ա��ӡ����
//void PrintList(List* list)
//{
//	if (list->num <= 0)
//	{
//		cout << "\n���Ա��ѿ�\n" << endl;
//		return;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < list->num; i++)
//		{
//			cout << list->a[i] << " ";
//		}
//	}
//}
//
////���Ա�Ԫ������(��С����)
//void pai_xu(List* list)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < list->length; i++)
//	{
//		for (j = i; j < list->length; j++)
//		{
//			if (list->a[i] > list->a[j])
//			{
//				int temp = list->a[i];
//				list->a[i] = list->a[j];
//				list->a[j] = temp;
//			}
//		}
//	}
//}
//
////���ֲ��ң����±�(����ʵ��)
//int bin_serach(List* list, int data)
//{
//	int end = list->num - 1, start = 0;
//	int mid = 0;
//	bool have_found = false;
//
//	while (mid != end)
//	{
//		mid = (end + start) / 2;
//		//cout << "mid = " << mid << " ";
//
//		if (list->a[mid] == data)
//		{
//			have_found = true;
//			return mid;
//		}
//
//		if (list->a[mid] > data)
//		{
//			end = mid - 1;
//		}
//		else if (list->a[mid] < data)
//		{
//			start = mid + 1;
//		}
//
//	}
//
//	if (have_found == false)
//	{
//		return -1;
//	}
//}
//
////���ֲ��ң����±�(�ݹ�ʵ��)
//void bin_digui(List* list, int data,int start,int end, int* index)
//{
//	int mid = (start + end) / 2;
//	//cout << mid << " ";
//
//	if (list->a[mid] == data)
//	{
//		//cout << "\n�����\n";
//		*index = mid;
//		return;
//	}
//	else if (list->a[mid] > data)
//	{
//		end = mid - 1;
//	}
//	else if (list->a[mid] < data)
//	{
//		start = mid + 1;
//	}
//
//	if (start >= end)
//	{
//		mid = (start + end) / 2;
//		//cout << mid << " ";
//		//cout << "\nmid >= end ����" << endl;
//		if (list->a[mid] == data)
//		{
//			*index = mid;
//			return;
//		}
//		else
//		{
//			return;
//		}
//	}
//
//	bin_digui(list, data, start, end, index);
//}
//
//int main(void)
//{
//	const int LENGTH = 100;
//
//	List* list = initList(LENGTH);
//
//	int i = 0;
//	for (i = 0; i < LENGTH; i++)
//	{
//		fu_zhi(list, i + 1);
//	}
//
//	//PrintList(list);
//	pai_xu(list);
//	//PrintList(list);
//
//
//	for (i = 0; i < LENGTH; i++)
//	{
//		cout << "\n����ʵ�֣�" << i + 1 << "�������ǣ�" << bin_serach(list, i + 1) << endl;
//
//		int start = 0, end = list->num - 1, index = -1;
//
//		bin_digui(list, i + 1, start, end, &index);
//		if (index == -1)
//		{
//			cout << "\n���ݲ������ڵ�������" << endl;
//		}
//		else
//
//		{
//			cout << "\n�ݹ�ʵ�֣�" << i + 1 << "�������� " << index << endl;
//		}
//	}
//
//	return 0;
//}