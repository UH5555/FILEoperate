#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);//00 00 27 10
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�test.txt
//	// ..   ��ʾ��һ��·��
//	// .    ��ʾ��ǰ·��
//	//���·��
//	//fopen("test.txt", "r");
//	//����·��
//	//fopen("U:\\ѧϰ\\C\\code\\learning\\test_0508\\test.txt", "r");
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	//���ļ�
//	//�ر��ļ�
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
//	//д�ļ�
//	fputc('c', pfWrite);
//	fputc('b', pfWrite);
//	fputc('a', pfWrite);
//	//�ر��ļ�
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
//	//д�ļ�
//	printf("%c",fgetc(pfRead));//c
//	printf("%c", fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//a
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//���� - ��׼�����豸
//��Ļ - ��׼����豸
//��һ������Ĭ�ϴ򿪵��������豸
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