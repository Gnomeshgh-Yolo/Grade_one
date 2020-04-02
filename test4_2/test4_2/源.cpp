#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int N;
//	int arr[500][500] = { 0 };
//	scanf("%d", &N);
//	printf("1\n");
//	arr[0][1] = 1;
//	for (int i = 1; i < N; i++)
//	{
//		for (int j = 1; j <= (i+1); j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
///*判断当前机器存储模式*/
//int check_sys()
//{
//	int i = 1;
//	return (*(char*)&i);
//}
//int main()
//{
//	int ret;
//	ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	if (ret == 0)
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
/*日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。



以下为4个嫌疑犯的供词:



A说：不是我。

B说：是C。

C说：是D。

D说：C在胡说

已知3个人说了真话，1个人说的是假话。



现在请根据这些信息，写一个程序来确定到底谁是凶手。*/
int main()
{
	int murder[4] = { 0 }; //默认4个人都不是凶手

	int i;
	for (i = 0; i < 4; i++) //遍历假设四个人中的某个人是凶手
	{
		murder[i] = 1; //假设某个人是凶手
		if ((murder[0] != 1) +
			(murder[2] == 1) +
			(murder[3] == 1) +
			(murder[3] != 1) == 3)
		{
			break; //满足就代表就是你了！
		}
		murder[i] = 0; //不满足还他清白
	}

	putchar('A' + i); //打印凶手的编号。我们的编号是0 1 2 3，加上'A'后变成A B C D。
	return 0;
}