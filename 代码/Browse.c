#include"myproject.h"

extern int n; 

void Browse(void)
{
	if(n!=0)
	{
		p=head;//p先指向开头
		printf("学号\t\t姓名\t\t年龄\t性别\t学院\t\t专业\t\t班级\t\t电话\n");//\t为水平制表符，相当于8个空格 
		do
		{
			printf("%-16s%-16s%-8s%-8s%-16s%-16s%-16s%-16s\n",p->StudentId,p->StudentName,p->StudentAge,p->StudentSex,p->StudentCollege,p->StudentMajor,p->StudentClass,p->StudentTelephoneNumber);
			p=p->next;//p打印结束 把p指向next以判断下一个区域有没有内容
		}while(p!=NULL);//只要p指向的内存区域有数据，就打印内容
	}
	else
	{
		printf("\n★还没有添加数据呢!★\n");		
	}
	system("pause");
	system("cls");
}
