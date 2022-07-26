#include"myproject.h" 

extern int n;

void Statistics(void)
{
	int c,d=0;
	char a[LEN];
	printf("\n当前已存储%d个学生的学籍信息！\n",n);
	printf("请输入你想统计的人数:\n");
	printf("1：统计学院人数\n");
	printf("2：统计专业人数\n");
	printf("3：统计班级人数\n");
	scanf("%d",&c);
	
	if(c>=1&&c<=3) 
	{
		printf("请输入要统计的名称：");
		scanf("%s",a);
		p=head;	
		switch(c)
		{
			case 1://统计学院人数 
				do
				{	                                      
					if(strcmp(a,p->StudentCollege)==0)
					{
						d++;
					}
					p=p->next;                           
				}while(p!=NULL);
				break;
			case 2://统计专业人数 
				do
				{	                                      
					if(strcmp(a,p->StudentMajor)==0)
					{
						d++;
					}
					p=p->next;                          
				}while(p!=NULL);
				break;
			case 3://统计班级人数 
				do
				{	                                      
					if(strcmp(a,p->StudentClass)==0)
					{
						d++;
					}
					p=p->next;                            
				}while(p!=NULL);
				break; 
		}
		printf("统计得到人数为%d人\n",d);
		system("pause");		
	}
    else
    {
        printf("★输入错误,返回主菜单!!★\n");
        system("pause");
    }
}
