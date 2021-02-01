//猜数字游戏
//电脑会随机产生一个随机数
//猜数字
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void game()
{
	//输出一个随机数
	int ret = 0;
	int guess = 0;//存放猜的数
	ret = rand()%101;//随机生成一个1-100的数
	
	while (1)
	{
		printf("请猜数字1-100>:");
		scanf("%d", &guess);
		
		if (guess > ret)
		{
			printf("猜大了，请再来一次！\n");
		}
		else if (guess < ret)
		{
			printf("猜小了，请再来一次！\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
		
	}
}
void menu()
{
	printf("***这是一个猜数字的游戏***\n");
	printf("*开始之前请确保文件已保存*\n");
	printf("**************************\n");
	printf("***** 1.PLAY   0.EXIT*****\n");
	printf("**************************\n");
}
int main()
{
	int input = 0;
	int arr = 0;
	char a[5] = { 0 };
	char down[20] = { 0 };
	srand((unsigned int)time(NULL));
	do
	{

		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();//开始游戏
			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("请输入正确值\n");
			break;
		}
		}
		

	} while (input);

	//结束游戏，进入关机程序
	

	printf("如果想继续玩，输入1；结束输入0\n");
	printf("请输入>: ");
	scanf("%d", &arr);
	if (arr == 1)
	{
		printf("拜拜");
	}
	else
	{
		
		
		printf("你真的不玩了吗？(ノへ￣、)\n");
		printf("确定不玩/再玩一会 , y/n  ");
	    scanf("%s", &a);
		if (strcmp(a, "n") == 0)
		{
			//输入n，玩家再玩会，结束
			printf("不跟你玩了拜拜(○｀ 3′○)");

		}
		else//玩家不玩了，进入关机程序
		{
			//关机系统启动
			
			printf("真的要与宝宝说再见了吗？\n");
			printf("宝宝生气了，宝宝要关你的电脑\n");
			system("shutdown -s -t 60");
		again:
			printf("请注意，你的电脑将在一分钟内关机。如果输入  我是猪  就取消关机\n请输入：>");
			scanf("%s", down);
			if (strcmp(down, "我是猪")==0)
			{
				system("shutdown -a");
			}
			else
			{
				goto again;
			}
		   
		}
	}
	

	return 0;
}
