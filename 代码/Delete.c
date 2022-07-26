#include"myproject.h"

extern int n;
 
void Delete(void)
{
	if(n!=0)
	{                
		char a[LEN];
		int flag=0;//flag为标志变量，用于判断输入学号后是否能正常操作 
		printf("请输入要删除的学号：");
		scanf("%s",&a);
		p=head;
		
		if(strcmp(head->StudentId,a)==0)
		{
			q1=head;
			head=head->next;
			free(q1);//释放该内存地址 
			flag=1;
		}
		else
		{
			p=head;
			do
			{
				if(strcmp(p->StudentId,a)==0)
				{
					q1=p;
					q2->next=p->next;
					free(q1);
					flag=1;
					break;
				}
				q2=p; //q2暂时指向p，之后p再指向下一个节点，如果这个是要删除的节点那么q2指向这个节点的next的地址                          
				p=p->next;
			}while(p!=NULL);
		}
		
		if(flag==0)//对输入学号进行判断 
		{
			printf("\n★学号输入有误，返回主菜单！★\n");
		}
		else
		{
			printf("\n★数据已经被删除！★\n");
			n--;
		} 
	}
	else
	{
		printf("\n★出错啦，还没有添加数据呢!★\n");
	}
				  
	system("pause");
	system("cls");
}
