#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//函数递归 把大事化小
//递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//每次递归调用之后越来越接近这个限制条件

//练习2：编写函数：不允许创建临时变量，求字符串的长度

//int my_strlen(char* str)
//{
//	int count = 0;
//	//计算字符串的长度
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

int my_strlen(char* str)
{
	if (*str != '\0')
	    return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "siuuuu";
	//int len = strlen(arr);
	//printf("%d\n", len);
	int len = my_strlen(arr);
	printf("len = %d\n", len);
	return 0;
}

//练习1：接受一个整型值（无符号），按照顺序打印它的每一位。例如：输入：1234，输出1 2 3 4.

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num); //1234
//	//递归
//	print(num);
//	return 0;
//}



//函数声明
//1.告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在，无关紧要
//2.函数的声明一般出现在函数的使用之前。要满足先声明后使用
//3.函数的声明一般要放在头文件中

//函数定义
//函数的定义是指函数的具体实现，交代函数的功能实现

//函数的链式访问  
//把一个函数的返回值作为另外一个函数的参数

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	
//	return 0;
//}

//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}



//函数的嵌套调用

//void new_line()
//{
//	printf("siuuuuu!\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for(i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//
//
//int main()
//{
//	three_line();
//	return 0;
//}