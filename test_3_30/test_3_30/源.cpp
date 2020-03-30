#define _CRT_SECURE_NO_WARNINGS 1
///*模拟函数库实现strlen*/
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* ret)
//{
//	assert(*ret != 'NULL');
//	int count = 0;
//	while (*ret != '\0')
//	{
//		count++;
//		ret++;
//	}
//	return count;
//}
//int main()
//{
//	int len = 0;
//	char arr[] = "hello bit!";
//	len = my_strlen(arr);
//	printf("%d", len);
//	
//}
/*模拟函数库实现strcpy*/
//void my_strcpy( char* str,const char* ret)
//{
//	assert(*str != 'NULL');
//	assert(*ret != 'NULL');
//	while (*str++=*ret++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "##############";
//	char arr2[] = "hello bit!";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
/*调整数组使奇数全部都位于偶数前面。*/
void tiao_xu(const int* ret )
{
	assert(*ret != 'NULL');
	int arr2[10] = { 0 };
	int ji = 0;
	int ou = 9;
	for (int i = 0; i <= 9; i++)
	{
		if (*ret % 2 != 0)
		{
			arr2[ji] = *ret;
			ji++;
		}
		else
		{
			arr2[ou] = *ret;
			ou--;
		}
		ret += 1;
	}
	for (int i = 0; i <= 9; i++)
	{
		printf("%d\n", arr2[i]);
	}

}
int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 0 };
	tiao_xu(arr1);
	
}
