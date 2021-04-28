#define _CRT_SECURE_NO_WARNINGS 1

//L1 - 求和
//#include<stdio.h>
//int main(void)
//{
//	int a, b, i, sum = 0,k=0;
//	scanf("%d %d", &a, &b);
//	for (i = a; i <= b; i++)
//	{
//		k++;
//		printf("%3d", i);
//		if (k % 5 == 0)
//			printf("\n");
//		sum += i;
//	}
//	if (k % 5 != 0)
//		printf("\n");
//	printf("Sum = %d", sum);
//
//}



//问题 B : L1 - 十进制转八进制
//#include<stdio.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%o", n);
//	return 0;
//}


//问题 B : L1 - 谁是好人？
//#include<stdio.h>
//void Find(int n)
//{
//	int nice = 0, i = 0;;
//	char arr[6] = { 0 };
//	for (nice = 1; nice <= 6; nice++)
//	{
//		if ((nice != 1) + (nice == 3) + (nice == 4) + (nice != 4) + (nice == 3 || nice == 5) + (nice != 4 && nice != 5) == n)
//		{
//			arr[i] = nice + 'A' - 1;
//			i++;
//		}
//	}
//	if (i)
//	{
//		int j = 0;
//		for (j = 0; j < i - 1; j++)
//		{
//			printf("%c or ", arr[j]);
//		}
//		printf("%c\n", arr[j]);
//	}
//	else
//	{
//		printf("Error\n");
//	}
//}
//int main(void)
//{
//	int nice = 0;
//	int n = 0;
//	scanf("%d", &n);
//	Find(n);
//	
//	return 0;
//}


//问题 B : 敲7
//#include<stdio.h>
//int main(void)
//{
//	int n = 0, i = 0,j=0;
//	int ret = 0;
//	scanf("%d", &n);
//	for (i = 7; i <= n; i++)
//	{
//		if (i == 7)
//			printf("7");
//		else
//		if (i % 7 == 0)
//			printf("\n%d", i);
//		else
//		{
//			ret = i % 10;
//			j = i;
//			while (j!= 0)
//			{
//				if (ret == 7)
//				{
//					printf("\n%d", i);
//					break;
//				}
//				j /= 10 ;
//				ret =j%10;
//			}
//		}
//	}
//	return 0;
//}

//问题 C : L1 - 最大数
//#include<stdio.h>
//#include<string.h>
//void Compare(char* str1, char* str2)
//{
//	int i = 0,j=0;
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//
//	char arr1[256] = { 0 };
//
//	for (i = 0; i < len1; i++)
//	{
//		arr1[j] = str1[i];
//		if(arr1[j]!='0')
//			j++;
//	}
//	arr1[j] = '\0';
//	int lenarr1 = strlen(arr1);
//	if (lenarr1 > len2)
//	{
//		strcpy(str2, arr1);
//	}
//	else if (lenarr1 == len2)
//	{
//		if (strcmp(arr1, str2) > 0)
//			strcpy(str2, arr1);
//	}
//
//}
//int main(void)
//{
//	char str[256] = { 0 };
//	char str1[256] = { 0 };
//	char str2[256] = { 0 };
//
//	fgets(str, 256, stdin);
//	int len = strlen(str);
//	int i = 0,j=0;
//	for(i=0;i<len;i++)
//	{
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			str1[j] = str[i];
//			j++;
//		}
//		else
//		{
//			str1[j] = '\0';
//			Compare(str1, str2);
//			j = 0;
//
//		}
//	}
//	printf("%s", str2);
//	return 0;
//}



//问题 D : 输出字符串
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	char ch=getchar();
//
//	char str[1010] = { 0 };
//	char answer[1010] = { 0 };
//	int i = 0,len=0;
//	int min = 1010;
//	for (i = 0; i < n; i++)
//	{
//		gets(str);
//		/*fgets(str, sizeof(str), stdin);
//		str[strlen(str) - 1] = '\0';*/
//		len = strlen(str);
//		if (len < min)
//		{
//			min = len;
//			strcpy(answer, str);
//		}
//	}
//
//	printf("%s", answer);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	int n, i;
//	scanf("%d", &n);
//	char ch, str[1001], min[1001];
//	ch = getchar();
//	gets(str);
//    strcpy(min, str);
//    for (i = 1; i <= n - 1; i++)
//    {
//        gets(str);
//        if (strlen(str) < strlen(min))
//            strcpy(min, str);
//    }
//    printf("%s", min);
//	return 0;
//}




//问题 F : Caisa and Sugar
//#include<stdio.h>
//int main(void)
//{
//	int n, s,i=0;
//	int flag = 0;
//	int x, y,max,ret;
//	x = y =ret=0;
//	max = -1;
//	scanf("%d%d", &n, &s);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%d", &x, &y);
//		if (s > x && y >= 0)
//		{
//			if (y == 0)
//			{
//				if(max<0)
//				max = 0;
//			}
//			else
//			{
//				ret = 100 - y;
//				if (ret > max)
//					max = ret;
//			}
//		}
//		if (x == 0 && y == 0)
//		{
//			if (max < 0)
//				max = 0;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int n, s, i = 0,x,y;
//	int flag = 0;
//	int min = 1000;
//	scanf("%d%d", &n, &s);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%d", &x, &y);
//		if (y == 0)
//		{
//			y = 100;
//			if (x <= s && y < min)
//			{
//				min = y;
//				flag = 1;
//			}
//		}
//		else if (x < s && y < min)
//		{
//			min = y;
//			flag = 1;
//		}
//	}
//	if (flag) printf("%d\n", 100 - min);
//	else printf("-1\n");
//	
//	return 0;
//}

#include<stdio.h>
int max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    int n, s, ans = -1, x, y;
    scanf("%d%d", &n, &s);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &x, &y);
        if (x < s || (x == s && y == 0))
            ans = max(ans, y == 0 ? 0 : 100 - y);
    }
    printf("%d\n", ans);
    return 0;
}