#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
	fclose(pf);
	pf = NULL;
	return 0;
}