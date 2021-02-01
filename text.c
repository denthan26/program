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
		printf("请猜数字>:");
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
	printf("**********************\n");
	printf("*** 1.PLAY   0.EXIT***\n");
	printf("**********************\n");
}
int main()
{
	int input = 0;
	int arr = 0;
	char a[5] = { 0 };
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
		printf("如果继续，输入1；结束输入0\n");
		printf("请输入>: ");
		scanf("%d", &arr);
		if (arr == 1)
		{
			break;
		}
		else
		{
			goto finish;
		}
        
	} while (input);
finish://结束游戏，进入关机程序
	printf("你真的不玩了吗？(ノへ￣、)\n");
	printf("确定不玩/再玩一会 , y/n  ");
	scanf("%s\n", &a);
	if (strcmp(a, "n") == 0)
	{
		//输入n，玩家再玩会，结束
		printf("不跟你玩了拜拜(○｀ 3′○)");
		
	}
	else//玩家不玩了，进入关机程序
	{
		printf("真的要与宝宝说再见了吗？\n");

	}
	return 0;
}