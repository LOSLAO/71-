#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
 

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		
//		arr[i] = 0x11223344;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//		
//	}
//	return 0;
//}


//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//
//{
//	test1();
//}
//int main()
//{
//	test1();
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//. ��������ʹ����ȫ����λ��ż��ǰ�档

//��Ŀ��

//����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�


//void SwapArr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void PrintArr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	SwapArr(arr, sz);
//	PrintArr(arr, sz);
//	return 0;
//}


//char *strcpy( char *strDestination, const char *strSource );

//void my_strcpy(char* dest, char* src)
//{
//	while(*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}


//ģ��ʵ�ֿ⺯����strcpy
#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy-�ַ�������
//	char arr1[20] = "#######";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	
//
//	return 0;
//}


//ģ��ʵ��strlen����
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);

	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[10] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
