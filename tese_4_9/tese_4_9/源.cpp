#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
/*求最小公倍数*/
//int main()
//{
//	int a = 0, b = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		for (int i = a;; i++)
//		{
//			if (i%a == 0 && i%b == 0)
//			{
//				printf("%d\n", i);
//				break;
//			}
//		}
//	}
//	if (b > a)
//	{
//		for (int i = b;; i++)
//		{
//			if (i%a == 0 && i%b == 0)
//			{
//				printf("%d\n", i);
//				break;
//			}
//		}
//	}
//	if (a == b)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}
/*倒置字符串,标点不倒置*/
void dao(char* left, char*right)
{
	assert(left&&right);
	while (left<right)
	{
		char ret;
		ret= *left;
		*left = *right;
		*right = ret;
		left++;
		right--;
	}
}
void dao_zhi(char* arr, int len)
{
	dao(arr, arr + len - 1);
	while (*arr)
	{
		char* begin = arr;
		while (*arr && (*arr != ' '))
		{
			arr++;
		}
		dao(begin, arr - 1);
		if (*begin == ' ')
		{
			arr++;
		}
	}
}
int main()
{
	char arr[100];
	gets(arr);
	int len ;
	len= strlen(arr);
	dao_zhi(arr,len);
	printf("%s\n", arr);
}