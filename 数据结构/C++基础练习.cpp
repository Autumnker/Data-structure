#define _CRT_SECURE_NO_WARNINGS 1

///*ָ��������ָ��ָ���ָ��Ĺ�ϵ*/
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	//str[]�����д�������ַ����׵�ַ��str��ָ���׵�ַ��ָ��,��������ָ��ָ���ָ��
//	const char* str[] = {
//	"hello ",
//	"my name ",
//	"is lihua ",
//	};
//
//	const char** p = str;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s", *(p + i));
//	}
//
//	return 0;
//}

///*ָ�뺯���ͺ���ָ��*/
//#include<stdio.h>
////ָ�뺯��������ֵ��ָ��ĺ�����
//int* fun1(int a)
//{
//	a = 10;
//	return &a;
//}
////����ָ�루ָ������ڣ��׵�ַ����ָ�룩
//int fun2(int b)
//{
//	return b;
//}
//
//int main(void)
//{
//	int a = 0, b = 1;
//	int *p1 = fun1(a);
//	int (*p2)(int) = NULL;//ע�⣬(*p2)(������Ĳ����б�����ָ�����Ĳ����б�Ҫһ��)
//	p2 = fun2;
//	p2(b);
//
//	printf("p1 = %p,*p1 = %d\n",p1,*p1);
//	printf("p2 = %p,*p2 = %d\n", p2(b), p2(b));
//
//	return 0;
//}