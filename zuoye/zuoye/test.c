#define _CRT_SECURE_NO_WARNINGS 1
// ��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

//Ҫ��k������������
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
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磺����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19
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
��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�

ʵ�֣��������ַ����е��ַ��������С�

Ҫ�󣺲���ʹ��C�������е��ַ�����������*/
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
//	printf("ԭ�ַ���Ϊ��  %s\n�������к�Ϊ��",string); 
//	reverse_string( string );  
//	printf("\n"); 
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩