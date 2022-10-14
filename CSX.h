#include <malloc.h>
#include <stdio.h>

int chiefS=0, S1=0, S2=0, S3=0;

typedef struct spot
{
	int value;
	double content;
	char letter;

	struct spot* next; 
	

}spot;

spot* head;

int key=0;//钥匙
int I, C, L;//功能选择

void start()
{
	key = 1;
	head = (spot*)malloc(sizeof(spot));

	printf("说明：这是一个链表文件，您可以通过该文件来快速创造链表\n"
		"功能：apply：在创造了一个spot变量后，您可以通过apply来创立结点之间的联系，这个联系是线性的\n"
		"先这样吧\n");

	printf("欢迎使用CSX o(*////▽////*)q\n为了方便使用，请告诉我你所需要的模式");
	printf("需要使用int型存储吗？【1--是】");
	scanf("%d", &I);
	printf("需要使用double型存储吗？【1--是】");
	scanf("%d", &C);
	printf("需要使用char型存储吗？【1--是】");
	scanf("%d", &L);


}

void connect(spot*a,spot*b)//第一个形参输入最后一个结点，后面的形参输入用户声明的新结点
{
	if (key == 1)
	{
		b = (spot*)malloc(sizeof(spot));
		if (b == NULL)
		{
			printf("请求失败");
		}
		else
		{
			a->next = b;
			b->next = NULL;
		}
	}
	else
	{
		printf("请输入start函数以解锁功能");
	}
}

void ergo(void)
{
	for (spot* i =head ;i ->next != NULL; i = i->next)
	{
		if (key == 1)
		{
			if (I==1)
			{
				scanf("%d", &i->value);
			}
			if (C==1)
			{
				scanf("%d", &i->content);
			}
			if (L==1)
			{
				scanf("%d", &i->letter);
			}
		}
		else
		{
			printf("请输入start函数以解锁功能");
		}
	}

}

void delete(spot* x)
{
	scanf("%d", x);//输入要被删除的节点

	for (spot* i = head; i->next != x; i = i->next)
	{
		i->next=x->next;
	}//找到删除结点前一个结点，让该节点与删除结点后一个结点链接。

}