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

int key=0;//Կ��
int I, C, L;//����ѡ��

void start()
{
	key = 1;
	head = (spot*)malloc(sizeof(spot));

	printf("˵��������һ�������ļ���������ͨ�����ļ������ٴ�������\n"
		"���ܣ�apply���ڴ�����һ��spot������������ͨ��apply���������֮�����ϵ�������ϵ�����Ե�\n"
		"��������\n");

	printf("��ӭʹ��CSX o(*////��////*)q\nΪ�˷���ʹ�ã��������������Ҫ��ģʽ");
	printf("��Ҫʹ��int�ʹ洢�𣿡�1--�ǡ�");
	scanf("%d", &I);
	printf("��Ҫʹ��double�ʹ洢�𣿡�1--�ǡ�");
	scanf("%d", &C);
	printf("��Ҫʹ��char�ʹ洢�𣿡�1--�ǡ�");
	scanf("%d", &L);


}

void connect(spot*a,spot*b)//��һ���β��������һ����㣬������β������û��������½��
{
	if (key == 1)
	{
		b = (spot*)malloc(sizeof(spot));
		if (b == NULL)
		{
			printf("����ʧ��");
		}
		else
		{
			a->next = b;
			b->next = NULL;
		}
	}
	else
	{
		printf("������start�����Խ�������");
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
			printf("������start�����Խ�������");
		}
	}

}

void delete(spot* x)
{
	scanf("%d", x);//����Ҫ��ɾ���Ľڵ�

	for (spot* i = head; i->next != x; i = i->next)
	{
		i->next=x->next;
	}//�ҵ�ɾ�����ǰһ����㣬�øýڵ���ɾ������һ��������ӡ�

}