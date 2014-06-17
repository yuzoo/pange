#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct list    //定义结构体（链表）
{
	int data;   
	struct list *next;
};
typedef struct list node;  //list的别名node
typedef node *link;        //？？
void main()
{
	link ptr,head;         //？？
	int num,i;
	ptr=(link)malloc(sizeof(node));  //声明空间
	head=ptr;
	printf("please input 5 numbers==>\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&num);
		ptr->data=num;          //输入的数放在data上
		ptr->next=(link)malloc(sizeof(node)); //再声明空间
		if(i==4) ptr->next=NULL;      //当输到第5个数时，输入结束
		else
		{	ptr=ptr->next;            //指针指向下一个地址
		}
	}
	ptr=head;                         //指针重新指向第一个数
	while(ptr!=NULL)                  //一个一个把数输出来
	{
		printf("The value is ==>%d\n",ptr->data);
		ptr=ptr->next;
	}
}
