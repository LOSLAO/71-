#define_CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

//接受一个整型值（无符号），按照顺序打印它的每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//编写函数不允许创建临时变量，求字符串长度
//int my_strlen(char*str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//求n的阶乘（不考虑溢出）
//递归
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//    ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//非递归
//int Fac(int n)
//{
//	int result = 1;
//	while (n > 1)
//	{
//		result *= n;
//		n -= 1;
//	}
//	return result;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}


//求第n个斐波那契数
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//但当我们求第50个的时候发现特别耗费时间
//我们如何解决呢？
//将递归改为非递归
//使用static对象替代nonstatic局部对象。
//将上述代码改为下述

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int * p = &num;
//	*p = 30;
//	printf("num=%d\n", num);
//	return 0;
//}


int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a = %d b = %d c = %d\n", a, b, c);
	return 0;
}