#include"myproject.h"

extern int n;

void Seek(void)
{
	int b,flag=0;//flag为标志变量，用于判断输入学号后是否能正常操作
	char a[LEN];
	
	if(n!=0)
	{
		printf("\n1.按学号查找:\n");
		printf("2.按学院查找:\n");
		printf("3.按专业查找:\n");
		printf("4.按班级查找:\n");
		printf("请从序号1-4中选择:");
		scanf("%d",&b);
		if(b>=1 && b<=4)
		{
			printf("请输入要查找的名称：");
			scanf("%s",&a);
			p=head;//指针指向开头
			switch(b)
			{
				case 1://按学号查找 
					do
					{	                                      
						if(strcmp(a,p->StudentId)==0)
						{
							printf("\n信息已被找到：\n学号\t\t姓名\t\t年龄\t性别\t学院\t\t专业\t\t班级\t\t电话\n");
							printf("%-16s%-16s%-8s%-8s%-16s%-16s%-16s%-16s\n",p->StudentId,p->StudentName,p->StudentAge,p->StudentSex,p->StudentCollege,p->StudentMajor,p->StudentClass,p->StudentTelephoneNumber);
							flag=1;
						}
						p=p->next;//指针指向下一个节点                            
					}while(p!=NULL);
					break;
				case 2://按学院查找 
					do
					{	                                      
						if(strcmp(a,p->StudentCollege)==0)
						{
							printf("\n学号\t\t姓名\t\t年龄\t性别\t学院\t\t专业\t\t班级\t\t电话\n");
							printf("%-16s%-16s%-8s%-8s%-16s%-16s%-16s%-16s\n",p->StudentId,p->StudentName,p->StudentAge,p->StudentSex,p->StudentCollege,p->StudentMajor,p->StudentClass,p->StudentTelephoneNumber);
							flag=1;
						}
						p=p->next;                          
					}while(p!=NULL);
					break;
				case 3://按专业查找 
					do
					{	                                      
						if(strcmp(a,p->StudentMajor)==0)
						{
							printf("\n学号\t\t姓名\t\t年龄\t性别\t学院\t\t专业\t\t班级\t\t电话\n");
							printf("%-16s%-16s%-8s%-8s%-16s%-16s%-16s%-16s\n",p->StudentId,p->StudentName,p->StudentAge,p->StudentSex,p->StudentCollege,p->StudentMajor,p->StudentClass,p->StudentTelephoneNumber);
							flag=1;
						}
						p=p->next;                          
					}while(p!=NULL);
					break;
				case 4://按班级查找 
					do
					{	                                      
						if(strcmp(a,p->StudentClass)==0)
						{
							printf("\n学号\t\t姓名\t\t年龄\t性别\t学院\t\t专业\t\t班级\t\t电话\n");
							printf("%-16s%-16s%-8s%-8s%-16s%-16s%-16s%-16s\n",p->StudentId,p->StudentName,p->StudentAge,p->StudentSex,p->StudentCollege,p->StudentMajor,p->StudentClass,p->StudentTelephoneNumber);
							flag=1;
						}
						p=p->next;                            
					}while(p!=NULL);
					break;
			 } 
			system("pause");
			if(flag==0)//a的值输入错误 
			{
				printf("\n★输入有误，返回主菜单！★\n");
				system("pause");
			}
		}
		else//b的值输入错误 
		{
			printf("★输入错误,返回主菜单!★\n");
        	system("pause");
		}		
	}
    else//未添加数据 
    {
		printf("\n★出错啦，还没有添加数据呢!★\n");
		system("pause");
    }
} 
