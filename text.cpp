#include <iostream>
#include <windows.h>
using namespace std;
void setWindowsStyle();



void setWindowsStyle()
{
	//���� ��ɫ ����
	system("title �û�����");
	system("color f0");
	system("mode con cols=30 lines=8");
}
int main()
{
	setWindowsStyle();//�����ʽ
	while (1)
	{
		printf("\n");
		printf("\n");
		printf("\n");
		printf("�����ˣ�����");
		printf("\t��������˧��");
		printf("\n");
		Sleep(1000);
		system("cls");
		Sleep(100);
	}
	system("pause");
	return 0;
}