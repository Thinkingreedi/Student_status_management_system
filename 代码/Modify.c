#include"myproject.h"

extern int n; 

void Modify(void)
{
	if(n!=0)
	{
		int b,flag=0;//flag为标志变量，用于判断输入学号后是否能正常操作 
		char a[LEN];
		printf("请输入要修改的学号：");
		scanf("%s",&a);
		p=head;
		do
		{
			if(strcmp(a,p->StudentId)==0)
			{
				printf("\n被修改人信息如下：\n学号\t\t姓名\t\t年龄\t性别\t学院\t\t专业\t\t班级\t\t电话\n");
				printf("%-16s%-16s%-8s%-8s%-16s%-16s%-16s%-16s\n",p->StudentId,p->StudentName,p->StudentAge,p->StudentSex,p->StudentCollege,p->StudentMajor,p->StudentClass,p->StudentTelephoneNumber);
				flag=1;
				break;
			}
			p=p->next;                        
		}while(p!=NULL);
		
		if(flag==0)
		{
				printf("\n★学号输入有误，返回主菜单！★\n");
		}
		else
		{
			printf("\n\n1.修改学号\n2.修改姓名\n3.修改年龄\n4.修改性别\n5.修改学院\n6.修改专业\n7.修改班级\n8.修改电话\n9.退出修改\n\n");
		
			scanf("%d",&b);
			switch(b)
			{
				case 1:
					printf("学号修改为：");
					scanf("%s",&p->StudentId);break;
				case 2:
					printf("姓名修改为：");
					scanf("%s",&p->StudentName);break;
				case 3:
					printf("年龄修改为：");
					scanf("%s",&p->StudentAge);break;
				case 4:
					printf("性别修改为：");
					scanf("%s",&p->StudentSex);break;
				case 5:
					printf("学院修改为：");
					scanf("%s",&p->StudentCollege);break;
				case 6:
					printf("专业修改为：");
					scanf("%s",&p->StudentMajor);break;
				case 7:
					printf("班级修改为：");
					scanf("%s",&p->StudentClass);break;
				case 8:
					printf("电话修改为：");
					scanf("%s",&p->StudentTelephoneNumber);break;
				case 9:
					break;
				}
			printf("\n\n★操作成功!★\n\n");
		}
	}			
	else
	{
		printf("\n★出错啦，还没有添加数据呢!★\n");
	}
			
	system("pause");
	system("cls");
}
