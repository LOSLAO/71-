#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//���ֲ���/�۰����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = #include <stdio.h>
���ֲ��� / �۰����
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right / 2);
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ���:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}
;
	int k = 7;
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = (left + right / 2);
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else 
		{
			printf("�ҵ���:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}
#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit! ! ! ! ! !";
//	char arr2[] = "#########################";
//	
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("����ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//		if (i == 3)
//		{
//			printf("������������˳�����\n");
//		}
//	}
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void menu()
{
	printf("*************************\n");
	printf("********  1.play   ******\n");
	printf("********  0.exit   ******\n");
	printf("*************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;


	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��\n");
			break;
		}

	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�������������룡\n");
			break;
		}
	} while (input);
	return 0;
}



//int main()
//{
//	char buf1[20] = { 0 };
//	char buf2[] = "bit";
//	strcpy(buf1, buf2);
//	printf("%s\n", buf1);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//	return ((x > y) ? x : y);
//}



//

#include <stdlib.h>
#include <stdio.h>
void Mul(int b)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= b; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf("%d*%d=%-2d\t", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int a = 0;
	printf("������������");
	scanf_s("%d", &a);
	Mul(a);
	system("pause");
	return 0;
}
