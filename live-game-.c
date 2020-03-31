#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define High 25  // 游戏画面尺寸
#define Width 50

void clean(int x,int y)//类似于清屏函数
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle,pos);
}

void init() // 数据初始化
{
	int i,j;
	for (i=0;i<High;i++) // 初始化
		for (j=0;j<Width;j++)
		{
			cells[i][j] = 1;
		}
}

void show()  // 显示画面
{
	clean(0,0);  // 清屏
	for (i=1;i<=High-1;i++)
	{
		for (j=1;j<=Width-1;j++)
		{
			if (cells[i][j]==1)
				printf("□");  //   输出活的细胞
			else
				printf("■");  //   输出空格			
		}
		printf("\n");
	}
	Sleep(50); //调用sleep函数调整间隔时间
}

void main(){
}