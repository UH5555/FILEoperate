#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);//00 00 27 10
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件test.txt
//	// ..   表示上一级路径
//	// .    表示当前路径
//	//相对路径
//	//fopen("test.txt", "r");
//	//绝对路径
//	//fopen("U:\\学习\\C\\code\\learning\\test_0508\\test.txt", "r");
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开文件
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('c', pfWrite);
//	fputc('b', pfWrite);
//	fputc('a', pfWrite);
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("TEST.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	printf("%c",fgetc(pfRead));//c
//	printf("%c", fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//a
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//键盘 - 标准输入设备
//屏幕 - 标准输出设备
//是一个程序默认打开的两个流设备
// 
//stdio FILE*
//stdout FILE*
//stderr FILE*

int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);

	return 0;
}