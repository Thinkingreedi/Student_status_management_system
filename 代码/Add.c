#include"myproject.h"

extern int n;

void Add(void)
{ 
	p1=(struct student *)malloc(sizeof(struct student));//动态内存分配 
	int m;
	
	printf("***输入样例:2020160101  lihua  20  M  xinxixueyuan  jisuanji  jike2001  1001011***\n"); 
	printf("***********************请 不 要 重 复 输 入 学 号 哦 ！***************************\n"); 
	 
	if(n==0)
	{
		head=p1;
		printf("学生学号：");
		scanf("%s",&p1->StudentId);		
	}                               
	else 
	{
		p2->next=p1;
loop:	printf("学生学号：");
		scanf("%s",&p1->StudentId);
		q=head;
		m = n;
		while(m--)//m控制循环次数 
		{	                                      	
			if(strcmp(p1->StudentId,q->StudentId)==0)
			{
				printf("\n您输入的学号重复，请重新输入！\n");
				goto loop; 
			}
			q=q->next;                 
		}
	}
				                         
	printf("学生姓名：");
	scanf("%s",&p1->StudentName);
	printf("学生年龄：");
	scanf("%s",&p1->StudentAge);
	printf("学生性别：");
	scanf("%s",&p1->StudentSex);
	printf("学生学院：");
	scanf("%s",&p1->StudentCollege);
	printf("学生专业：");
	scanf("%s",&p1->StudentMajor);
	printf("学生班级：");
	scanf("%s",&p1->StudentClass);
	printf("学生电话：");
	scanf("%s",&p1->StudentTelephoneNumber);

	p2=p1;                   //p2指向p1所在的地址
	p2->next=NULL;           //链表结束标志
	n++;                     //n用于记录数据输入量 
	system("pause");         //系统暂停函数 
	system("cls");           //系统清屏函数 
}
