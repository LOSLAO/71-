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
//	printf("�Ӵ�С����%d %d %d\n", x, y, z);
//}
//int main()
//{
//	int x = 0; 
//	int	y = 0;
//	int z = 0;
//	int max = 0;
//	printf("�������������֣�%d %d %d\n", x, y, z);
//	scanf("%d%d%d", &x, &y, &z);
//	max = x;
//    if (max < y)
//		max = y;
//	if (max < z)
//		max = z;
//	printf("�Ӵ�С����%d %d %d\n", x, y, z);
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
//	printf("�Ӵ�С����%d %d %d\n", x, y, z);
//}
//
//int main()
//{
//	int a, b, c, temp;
//	printf("�ֱ�������������:");
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
//	printf("���������%d, %d, %d\n", c, b, a);
//}
//int main() {
//	int a, b, c, t;
//	printf("��������������:\n");
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a < b) {//���a��bֵ�Ľ���,a��������ֵ
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c) {//���a��cֵ�Ľ���,a��������ֵ
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c) {//���b��cֵ�Ľ���,a��������ֵ
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
	printf("��������Ϊ��%d\n", conut);	
	return 0;
}
		