#include <iostream>
#include <windows.h>
using namespace std;
void setWindowsStyle();



void setWindowsStyle()
{
	//标题 颜色 长宽
	system("title 用户输入");
	system("color f0");
	system("mode con cols=30 lines=8");
}
int main()
{
	setWindowsStyle();//界面格式
	while (1)
	{
		printf("\n");
		printf("\n");
		printf("\n");
		printf("（＞人＜；）");
		printf("\t徐以亮是帅比");
		printf("\n");
		Sleep(1000);
		system("cls");
		Sleep(100);
	}
	system("pause");
	return 0;
}