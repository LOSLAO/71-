#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//
//}

//int main()
//{
//	int a = 0x11223344;
//	int*pa = &a;
//	*pa = 0;
//	char*pa = &a;
//	*pa = 0;
//	return 0;
//
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}

//

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i <= 5; i++)
//	{
//		*p = 0;//当指针指向的范围超出数组arr的范围时，p就是野指针
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str++ != '\0')
//		;
//	return str - start - 1;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen("bit");
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p = arr;
//	while (p <= &arr[9])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("%d\n", **ppa);
//	return 0;
//}

//int main()
//{
//	char* arr3[4] = { "abcdef", "bit", "hehe", "xiaoqiang"};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s\n", arr3[i]);
//	}
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//}Stu;
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//	struct Point p;
//};
//
//void Print1(struct S s)
//{
//	printf("%s %d %lf %d %d\n", s.name, s.age, s.score, s.p.x, s.p.y);
//}
//
//void Print2(struct S* ps)
//{
//	printf("%s %d %lf %d %d\n", ps->name, ps->age, ps->score, ps->p.x, ps->p.y);
//}
//
//int main()
//{
//	struct S s = {"张三", 20, 65.5, {3, 5}};
//	//printf("%s %d %lf %d %d\n", s.name, s.age, s.score, s.p.x, s.p.y);
//	Print1(s);
//	Print2(&s);
//
//	return 0;
//}
//1. 写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int *p = arr;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//char str[] = "hello bit";  
//int size = strlen(str);  
//char* p = str; 
//int a = size / 2;  
//int b = 0; 
//int i = 0; 
//for (i; i < a; i++) 
//{ 
//	int tmp;   
//	tmp = *(p + i); 
//	*(p + i) = *(p + size - 1 - i); 
//	*(p + size - 1 - i) = tmp; 
//}   
//puts(str);    
//system("pause");   
//return 0;
//}

//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//打印上部分
//	for(i=0; i<line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for(j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for(j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下部分
//	for(i=0; i<line-1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for(j=0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 求出0～100000之间的所有“水仙花数”并输出
//#include<math.h>
//int main()
//{
//	int i = 0;
//	//1
//
//	for(i=0; i<=100000; i++)
//	{
//		//判断i是否为水仙花数
//		//1. i是几位数
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while(tmp/10)
//		{
//			n++;
//			tmp/=10;
//		}
//		//2. i的每一位的位数次方和
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, n);
//			tmp/=10;
//		}
//		//3. 判断
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	scanf("%d%d", &a, &n);
//	for(i=0; i<n; i++)
//	{
//		k = k*10+a;
//		sum += k;//2 22 222
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

// 1. 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);//20
	if(money>0)
		total = money*2-1;

	total = money;//20
	empty = money;//20
	//置换
	while(empty>=2)
	{
		total += empty/2;
		empty = empty/2+empty%2;
	}
	printf("total = %d\n", total);

	return 0;
}


