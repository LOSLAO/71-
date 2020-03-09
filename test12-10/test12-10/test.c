#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i); 
//		i++;
//	}
//	return 0;
//  }
//#include "stdio.h"
//int main()
//{
//	int x, y, z, max, min;
//	scanf("%d%d%d", &x, &y, &z);
//	if (x > y) 
//	{
//		max = x;
//		min = y;
//	}
//	if (z > max) max = z;
//	if (min > z) min = z;
//	y = x + y + z - max - min;
//	x = max;
//	z = min;
//	printf("从大到小排序：%d %d %d\n", x, y, z);
//}
//int main()
//{
//	int x = 0; 
//	int	y = 0;
//	int z = 0;
//	int max = 0;
//	printf("请输入三个数字：%d %d %d\n", x, y, z);
//	scanf("%d%d%d", &x, &y, &z);
//	max = x;
//    if (max < y)
//		max = y;
//	if (max < z)
//		max = z;
//	printf("从大到小排序：%d %d %d\n", x, y, z);
//}
//int main()
//{
//	int x, y, z, max, min;
//	scanf("%d%d%d", &x, &y, &z);
//	if (x > y) 
//	{
//		max = x;
//		min = y;
//	}
//	if (z > max) 
//		max = z;
//	if (min > z)
//		min = z;
//	y = x + y + z - max - min;
//	x = max;
//	z = min;
//	printf("从大到小排序：%d %d %d\n", x, y, z);
//}
//
//int main()
//{
//	int a, b, c, temp;
//	printf("分别输入三个数字:");
//	scanf("%d %d %d", &a, &b, &c);
//	if (b < a)
//	{
//		temp = a; a = b; b = temp;
//	}
//	if (c < b)
//	{
//		temp = b; b = c; c = temp;
//	}
//	if (b < a)
//	{
//		temp = a; a = b; b = temp;
//	}
//	printf("倒序输出：%d, %d, %d\n", c, b, a);
//}
//int main() {
//	int a, b, c, t;
//	printf("请输入三个整数:\n");
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a < b) {//完成a和b值的交换,a里面放最大值
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c) {//完成a和c值的交换,a里面放最大值
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c) {//完成b和c值的交换,a里面放最大值
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d\t%d\t%d\n", a, b, c);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first ");
//		case 1:
//			printf("second ");
//			break;
//		default: printf("hello ");
//		}
//	case 2:
//		printf(" third");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if(j == i)
//			printf("%d",i);
//	}
//	system("pause");
//	return 0;
//}
//
int main() 
{
	int conut = 0;
	int i = 0;	
	for (i = 100; i <= 200; i++)     
			{		int j = 0;		
	for(j=2; j<i; j++)     
			{			if(i%j == 0)	
		break;		}	
	if(j==i)		
	{		
		conut++;	
	printf("%d ", i);		
	}
	}
	printf("\n");
	printf("素数个数为：%d\n", conut);	
	return 0;
}
		