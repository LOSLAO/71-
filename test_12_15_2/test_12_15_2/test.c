#define_CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
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
//��д��������������ʱ���������ַ�������
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
//��n�Ľ׳ˣ������������
//�ݹ�
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
//�ǵݹ�
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


//���n��쳲�������
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
//�����������50����ʱ�����ر�ķ�ʱ��
//������ν���أ�
//���ݹ��Ϊ�ǵݹ�
//ʹ��static�������nonstatic�ֲ�����
//�����������Ϊ����

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