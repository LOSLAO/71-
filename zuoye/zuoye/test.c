#define _CRT_SECURE_NO_WARNINGS 1
// 编写一个函数实现n的k次方，使用递归实现。

//要求：k可以正数或负数
#include<stdio.h>
//double Power(int n, int k)
//{
//	if (k > 0)
//		return n * Power(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Power(n, -k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0.0;
//	scanf("%d%d", &n, &k);
//	ret = Power(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如：调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19
/*int DigitSum(unsigned int num)
{
	if (num < 10)
		return num;
	else
		return DigitSum(num / 10) + num % 10;
}
int main()
{
	unsigned int num = 0;
	int sum = 0;
	scanf("%d", &num);
	sum = DigitSum(num);
	printf("%d\n", sum);
	return 0;
}
编写一个函数 reverse_string(char * string)（递归实现）

实现：将参数字符串中的字符反向排列。

要求：不能使用C函数库中的字符串操作函数*/
//#include <assert.h>
//void reverse_string(char const * string)
//{   
//	assert( string != NULL );   
//	if( *string != '\0' )   
//	{       
//		string++;        
//		reverse_string( string ); 
//		printf("%c",*(string-1));  
//	}   
//}
//int main()
//{    
//	char *string="liaodezoye";  
//	printf("原字符串为：  %s\n反向排列后为：",string); 
//	reverse_string( string );  
//	printf("\n"); 
//	return 0;
//}


//递归和非递归分别实现strlen
//int mystrlen(char* string)
//{
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
//int main()
//{
//	char string[] = "abcdefghijk";
//	int ret = mystrlen(string);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//int mystrlen(char* string)
//{
//	if (*string != '\0')
//	{
//		return 1 + mystrlen(string + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char string[] = "abcdefghijk";
//	int ret = mystrlen(string);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）