#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node * next;
};

struct node *my_node;

struct node *node_insert(struct node * node, int data)
{

}

int main()
{
	struct node *link;
	my_node = (struct node *)malloc(sizeof(struct node));
	if(my_node == NULL){
		return 1;
	}
	my_node->data = 1;
	my_node->next = NULL;

	printf("%d\r\n", my_node->data);
}

nclude <stdio.h>
#include <malloc.h>
#define N 10

typedef struct node
{
	char name[20];
	struct node *llink,*rlink;
}stud;

stud * creat(int n)
{
	stud *p,*h,*s;
	int i;
	if((h=(stud *)malloc(sizeof(stud)))==NULL)
	{
		printf("不能分配内存空间!");
		exit(0);
	}
	h->name[0]='\0';
	h->llink=NULL;
	h->rlink=NULL;
	p=h;
	for(i=0;i<n;i++)
	{
		if((s= (stud *) malloc(sizeof(stud)))==NULL)
		{
			printf("不能分配内存空间!");
			exit(0);
		}
		p->rlink=s;
		printf("请输入第%d个人的姓名",i+1);
		scanf("%s",s->name);
		s->llink=p;
		s->rlink=NULL;
		p=s;
	}
	h->llink=s;
	p->rlink=h;
	return(h);
}

stud * search(stud *h,char *x)
{
	stud *p;
	char *y;
	p=h->rlink;
	while(p!=h)
	{
		y=p->name;
		if(strcmp(y,x)==0)
			return(p);
		else p=p->rlink;
	}
	printf("没有查找到该数据!");
}

void print(stud *h)
{
	int n;
	stud *p;
	p=h->rlink;
	printf("数据信息为：\n");
	while(p!=h)
	{
		printf("%s ",&*(p->name));
		p=p->rlink;
	}
	printf("\n");
}

main()
{
	int number;
	char studname[20];
	stud *head,*searchpoint;
	number=N;
	clrscr();
	head=creat(number);
	print(head);
	printf("请输入你要查找的人的姓名:");
	scanf("%s",studname);
	searchpoint=search(head,studname);
	printf("你所要查找的人的姓名是:%s",*&searchpoint->name);
}	

