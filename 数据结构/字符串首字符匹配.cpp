//#define _CRT_SECURE_NO_WARNINGS 1
//
///*�Դ����ַ������ַ�ƥ��*/
//#include<iostream>
//
//using namespace std;
//
////��Ҫ�õ��ı���
//string input, check;
//int in_len, che_len;
//
//int main(void)
//{
//	//��ȡ��ƥ���ֶ�
//	cin >> input;
//	in_len = input.length();
//	//��ȡ����ƥ����ֶ�
//	cin >> check;
//	che_len = check.length();
//	//���ƥ����Ϣ(�Ӵ�ƥ���ֶεĵڼ�λ���ڼ�λ)
//	int i = 0, j = 0;
//	bool win = false;
//	char top = check[0];//�������ַ�
//	int times = 0;
//
//	for (i = 0; i <= in_len - che_len; i++)
//	{
//		int before = i;
//		times++;
//
//		if (input[i] == top)//�ؼ�һ��
//		{
//			for (j = 1; j < che_len; j++)
//			{
//				times++;
//
//				if (input[i + 1] == check[j])
//				{
//					i++;
//					if (j == che_len - 1)
//					{
//						cout << "success " << "begin: " << before + 1 << " end: " << i << endl;
//						win = true;
//					}
//				}
//				else
//				{
//					i = before;
//					break;
//				}
//			}
//		}
//	}
//
//	if (win == false)
//	{
//		cout << "false" << endl;
//	}
//
//	cout << "times: " << times << endl;
//
//	return 0;
//}