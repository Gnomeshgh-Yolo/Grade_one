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
///*�жϵ�ǰ�����洢ģʽ*/
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
//		printf("С��\n");
//	}
//	if (ret == 0)
//	{
//		printf("���\n");
//	}
//	return 0;
//}
/*�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����



����Ϊ4�����ɷ��Ĺ���:



A˵�������ҡ�

B˵����C��

C˵����D��

D˵��C�ں�˵

��֪3����˵���滰��1����˵���Ǽٻ���



�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�*/
int main()
{
	int murder[4] = { 0 }; //Ĭ��4���˶���������

	int i;
	for (i = 0; i < 4; i++) //���������ĸ����е�ĳ����������
	{
		murder[i] = 1; //����ĳ����������
		if ((murder[0] != 1) +
			(murder[2] == 1) +
			(murder[3] == 1) +
			(murder[3] != 1) == 3)
		{
			break; //����ʹ���������ˣ�
		}
		murder[i] = 0; //�����㻹�����
	}

	putchar('A' + i); //��ӡ���ֵı�š����ǵı����0 1 2 3������'A'����A B C D��
	return 0;
}