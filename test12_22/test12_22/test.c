#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 5 / 2;
//	printf("%d\n", a);
//	return 0;
// }

//int main()
//{
//	int a = 5;
//	int b = a << 2;
//	//00000000000000000000000000000101
//  //������� �ұ߲�0
//	//00000000000000000000000000010100
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;//���������ƣ�λ��
//	//a 00000000000000000000000000000011
//	//b 11111111111111111111111111111011
//	//c 00000000000000000000000000000011
//	printf("c = %d\n", c);
//	return 0;
//}



////ʵ���������Ľ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//����һ
//	c = a;
//	a = b;
//	b = c;
//	//������
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	//���ܴ�����ʱ������������������
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//��һ�������洢���ڴ��еĶ�������1�ĸ���
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	return count;
//}
//int main()
//{
//	int a = 10;
//	int ret = count_one_bit(a);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}


//��������������
//int main()
//{
//	char a = 127;
//	//00000000000000000000000001111111
//	//00000000000000000000000001111111-a
//	char b = 3;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000011-b
//	char c = a + b;
//	//00000000000000000000000001111111
//	//00000000000000000000000000000011
//	//00000000000000000000000010000010
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}


//

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//	return 0;
//}


// ��ȡһ���������������������е�ż��λ������λ��

//Ҫ�󣺷ֱ��ӡ�����������С�
//

//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int count_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	return  count_one_bit(tmp);
//}
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int count = count_diff_bit(m, n);
//	
//	printf("%d\n", count);
//	return 0;
//}


