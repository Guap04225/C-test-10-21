#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//�����ݹ� �Ѵ��»�С
//�ݹ��������Ҫ����
//���������������������������������ʱ�򣬵ݹ�㲻�ټ�����
//ÿ�εݹ����֮��Խ��Խ�ӽ������������

//��ϰ2����д����������������ʱ���������ַ����ĳ���

//int my_strlen(char* str)
//{
//	int count = 0;
//	//�����ַ����ĳ���
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

//��ϰ1������һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234�����1 2 3 4.

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
//	//�ݹ�
//	print(num);
//	return 0;
//}



//��������
//1.���߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ��ڣ��޹ؽ�Ҫ
//2.����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ��
//3.����������һ��Ҫ����ͷ�ļ���

//��������
//�����Ķ�����ָ�����ľ���ʵ�֣����������Ĺ���ʵ��

//��������ʽ����  
//��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���

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



//������Ƕ�׵���

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