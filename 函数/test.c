//更加重要的是自定义函数。
//自定义函数和库函数一样，有函数名，返回值类型和函数参数。 
//但是不一样的是这些都是我们自己来设计。这给程序员一个很大的发挥空间。
//函数的组成 :
//ret_type fun_name(para1, *)
//{
//	statement;//语句项
//}
//
//ret_type 返回类型
//fun_name 函数名
//paral 函数参数

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
//      函数名        函数的参数
//char * - 函数的返回类型

//写一个函数找到两个数的最大值

int get_max(int x, int y)
{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;//返回较大值
}

int main()
{
	int a = 10;
	int b = 20;
	//函数的调用
	int max = get_max(a, b);
	printf("%d\n", max);

	return 0;
}