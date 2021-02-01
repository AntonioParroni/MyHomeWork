#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<conio.h>
#include<windows.h>
#include <cstring>
#include <cmath>

using namespace std;



int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int BUFFSIZE = 256;
	char buff[BUFFSIZE];

	// ������ 1
	{
		int code = getchar(); //���������� �������� �������(���� �� ����), ������� ������������ ������ �� ����������. ����� ����� ������� ����� ������ ������� Enter. ������������ ���� - stdio.h
		cout << code << endl;
	}
	// ������ 2
	{
		int code = _getch(); //���������� �����������, ������ ������ �� ������ �� ������������. ������������ ���� ��� ����������� �������� ���������� ���������. ������������ ���� - conio.h
		cout << code << endl;
	}
	// ������ 3
	{
		int code = 65;
		putchar(code); //������� ������ c �� �����. � ������ ������ ���������� ��� ������ c, � ��������� ����� - EOF. ������������ ���� - stdio.h
		cout << endl;
	}
	// ������ 4
	{
		cin.ignore();
		gets_s(buff);
		cout << buff << endl; // ������ �������, ������� ������� � ���������, �� ��� ���, ���� �� ���������� ������ ����� ������, ������� ���������� ������� ��������. ������������������ ����������� �������� ������������ � ������� ������, ���������� ���������� s. � ������ ������ ���������� �������� s, � ������ ������ - ����. ������������ ���� - stdio.h
	}
	// ������ 5
	{
		gets_s(buff);
		puts(buff); // ������� ������, �������� ���������� const char *s. ������������ ���� - stdio.h

	}
	// ������ 6_1
	{
		gets_s(buff);
		char str[256] = "������ ";
		strcpy(str, buff); //�������� ������ buff � ������ str, ������� ������ ���������. ���������� str.
		cout << buff << endl;
	}
	// ������ 6_2
	{
		gets_s(buff);
		char str[256] = "������ ";
		strcat(str, buff); //���������� �������� ������ buff � �������������� ������ str, ����������� ������ � ���������. ���������� str.
		cout << buff << endl;
	}
	// ������ 7
	{
		int maxlen = 6;
		char scr[256] = "���� !, ���� !", dest[256] = "������ ";
		strncat(dest, scr, maxlen); //���������� maxlen �������� �������� ������ scr � �������������� ������ dest, ����������� ����� ������ � ���������. ���������� dest.
		cout << dest << endl;
	}
	// ������ 8
	{
		char str[256] = "���������������� �� �++ ";
		char c = 'C';
		char * pts = strchr(str, c);//���� � ������ str ������ ��������� ������� c, ������� � ������ ������. � ������ ������ ���������� ��������� �� ��������� ������, ����� ���������� ����.
		cout << pts << endl;
		//char *strrchr(const char *str, c); - ���������� �����������, ������ ����� �������������� � ����� ������.
	}

	//������ 9
	{
		const char *buf1 = "aaa", *buf2 = "bbb", *buf3 = "ccc";
		int ptr;
		ptr = strcmp(buf2, buf1); // ���������� ��� ������. ���������� ������������� ��������, ���� s1<s2; ����, ���� s1==s2; ������������� ��������, ���� s1>s2. ��������� - ��������� �� ������������ ������.
		if (ptr > 0)
			cout << "����� 2 ������ ��� ����� 1" << endl;
		else
			cout << "����� 2 - ������ ��� ����� 1" << endl;
		ptr = strcmp(buf2, buf3);
		if (ptr > 0)
			cout << "����� 2 ������ ��� ����� 3" << endl;
		else
			cout << "����� 2 - ������ ��� ����� 3" << endl;


		const  char *buf11 = "aaa", *buf22 = "aaa";
		ptr = strcmp(buf22, buf11);
		if (ptr == 0)
			cout << "buf22 == buf11 " << endl;
		else
			cout << "buf22 != buf11 " << endl;

		const  char * BUFF1 = "AAA", *BUFF2 = "aaa";

		if (0 == _stricmp(BUFF1, BUFF2)) // ���������� �����������, ������ ��������� �������������� ��� ����� �������� ��������.
			cout << "buf1 == buf2 " << endl;
		else
			cout << "buf2 != buf1 " << endl;


		const    char * BUFF3 = "aaaccc", *BUFF4 = "aaabbb";
		int maxlen = 3;

		if (0 == strncmp(BUFF3, BUFF4, maxlen)) // ���������� �����������, ������ ������������ ������ maxlen ��������.
			cout << "buf3 == buf4 " << endl;
		else
			cout << "buf3 != buf4 " << endl;

		const     char * BUFF5 = "AAAccc", *BUFF6 = "aaabbb";
		maxlen = 3;

		if (0 == _strnicmp(BUFF5, BUFF6, maxlen)) // ���������� �����������, ������ ������������ ������ maxlen �������� ��� ����� ��������.
			cout << "buf5 == buf6 " << endl;
		else
			cout << "buf5 != buf6 " << endl;

	}
	//������ 10
	{
		const    char *string1 = "1234567890";
		const   char *string2 = "ss123459";
		int length;
		length = strspn(string1, string2); //���������� ����� ������������ ��������� ��������� ������ string1,���������� �������� �� ������ ������ string2.
		cout << length << endl;
	}
	//������ 11
	{
		const   char *string1 = "1234567890";
		int size = strlen(string1); //���������� ����� ������ string1 - ���������� ��������, �������������� �������� �������.
		cout << size << endl;
	}
	//������ 12
	{
		char str[256] = "AAbbCCddEE";
		_strlwr(str);//����������� ��� ��������� (�������) ����� � �������� (�����) � ������ str.
		cout << str << endl;
	}
	//������ 13
	{
		char str[256] = "AAbbCCddEE";
		_strupr(str);//����������� ��� �������� (�����) ����� � ��������� (�������) � ������ str.
		cout << str << endl;
	}
	//������ 14
	{
		char str[256] = "������";
		int n = 1;
		char c = 'S';
		_strnset(str, c, n);//��������� ������ str ��������� c. �������� n ������ ���������� ����������� �������� � ������.
		cout << str << endl;
	}
	//������ 15
	{
		char s1[256] = "ABCDEFG", s2[256] = "MKD";
		char * pt = strpbrk(s1, s2); //���� � ������ s1 ������ ��������� ������ ������� �� ������ s2. ���������� ��������� �� ������ ��������� ������ ��� ���� - ���� ������ �� ������.
		cout << pt << endl;
	}
	//������ 16
	{
		char str[256] = "ABCDE";
		_strrev(str);//�������� ������� ���������� �������� � ������ �� �������� (����� ������������ �������� �������). ������� ���������� ������ str.
		cout << str << endl;
	}
	//������ 17
	{
		char str[256] = "������!!!";
		char c = 'A';
		_strset(str, c);//�������� ��� ������� ������ s �������� �������� c.
		cout << str << endl;
	}
	//������ 18
	{
		const   char *s1 = "12345dza67890";
		const   char *s2 = "a";
		int length;
		length = strcspn(s1, s2);//��������� ����� ������������ ��������� ��������� ������ s1,��������� ������� �� ������ s2.
		cout << length << endl;
	}
	//������ 19
	{
		char s1[256] = "����, ���, ���, ������, ����";
		char s2[256] = "���";
		char * pt = strstr(s1, s2);//���� � ������ s1 ������ s2. ���������� ����� ������� ������� ��������� ������ s2. ���� ������ ����������� - ���������� ����.
		cout << pt << endl;
	}
	//������ 20
	{
		char s1[256] = "����,���:���;������!����<�����>����";
		char s2[256] = ",:;!<>";

		char * pt;
		pt = strtok(s1, s2);//����� �������� ������ s1 �� ������� (���������), ����������� ����� ��� ����������� ��������� �� ������ s2.
		if (pt)
			cout << pt << endl;
		while (pt)
		{
			pt = strtok(NULL, s2);
			if (pt)
				cout << pt << endl;
		}
	}

	//������ 21
	{
		char s[256] = "23.45";
		char s1[256] = "45";

		double ch = atof(s);//����������� ������ s � ����� � ��������� ������ ���� double. ������������ ���� - math.h
		cout << ch << endl;

		int res = atoi(s1);//����������� ������ s � ����� ���� int. ���������� �������� ��� ����, ���� ������ ������������� ������. ������������ ���� - stdlib.h
		cout << res << endl;

		int value = 255;
		char s2[256];
		int radix = 10;
		_itoa(value, s2, radix);//����������� �������� ������ ���� value � ������ s2. ���������� ��������� �� �������������� ������. �������� radix - ��������� ������� ���������, ������������ ��� �������������� (�� 2 �� 36). ������������ ���� - stdlib.h
		cout << s2 << endl;

	}


}

