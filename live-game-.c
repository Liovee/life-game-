#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define High 25  // ��Ϸ����ߴ�
#define Width 50

void clean(int x,int y)//��������������
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle,pos);
}

void init() // ���ݳ�ʼ��
{
	int i,j;
	for (i=0;i<High;i++) // ��ʼ��
		for (j=0;j<Width;j++)
		{
			cells[i][j] = 1;
		}
}

void show()  // ��ʾ����
{
	clean(0,0);  // ����
	for (i=1;i<=High-1;i++)
	{
		for (j=1;j<=Width-1;j++)
		{
			if (cells[i][j]==1)
				printf("��");  //   ������ϸ��
			else
				printf("��");  //   ����ո�			
		}
		printf("\n");
	}
	Sleep(50); //����sleep�����������ʱ��
}

void main(){
}