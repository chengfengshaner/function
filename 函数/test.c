//������Ҫ�����Զ��庯����
//�Զ��庯���Ϳ⺯��һ�����к�����������ֵ���ͺͺ��������� 
//���ǲ�һ��������Щ���������Լ�����ơ��������Աһ���ܴ�ķ��ӿռ䡣
//��������� :
//ret_type fun_name(para1, *)
//{
//	statement;//�����
//}
//
//ret_type ��������
//fun_name ������
//paral ��������

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);
//
//	printf("%s", arr1);
//
// 	return 0;
//}

//char *strepy( char *strDestination, const char *strSource );
//      ������        �����Ĳ���
//char * - �����ķ�������

//дһ�������ҵ������������ֵ

int get_max(int x, int y)
{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;//���ؽϴ�ֵ
}

int main()
{
	int a = 10;
	int b = 20;
	//�����ĵ���
	int max = get_max(a, b);
	printf("%d\n", max);

	return 0;
}