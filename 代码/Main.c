#include"myproject.h"

int n = 0;//n用来记录学生信息数据输入量

int main(void)
{
	system("color 0F");//背景色为黑色，前景色为亮白色 
	int a=1;//main中两个循环的执行条件和switch的表达式 
	char acc[16],pas[16];
	while(a!=0)//a判断循环的执行 
    {
    	system("cls");
		printf("★请输入账号:\n");
	    scanf("%s",acc);
	    printf("★请输入密码:\n");
	    scanf("%s",pas);		
	    
	    if((strcmp(acc,"admin")==0)&&(strcmp(pas,"123456")==0))
	    {
	        system("cls");
		    printf("************欢迎使用学生学籍管理系统************\n"); 
		    printf("\n★第一次进入系统请先保存学生信息建立相关文档！★\n");
			printf("\n★每次使用该系统时请读取学生信息以便对其操作！★\n");
			printf("\n★每次退出该系统时请保存学生信息一方数据丢失！★\n");
			printf("\n★请按系统显示序号正确输入，否则将会出现错误！★\n");
			printf("\n★系统还有很多功能有待完善，欢迎联系提供意见！★\n\n");
			system("pause");

	        while(a!=0)
			{
				system("cls");
				printf("******************** 学 生 学 籍 管 理 系  统 ********************\n");
				printf("*                        ★1.增加学生信息                        *\n");
				printf("*                        ★2.显示学生信息                        *\n");
				printf("*                        ★3.查找学生信息                        *\n");
				printf("*                        ★4.删除学生信息                        *\n");
				printf("*                        ★5.修改学生信息                        *\n");
				printf("*                        ★6.统计学生信息                        *\n");
				printf("*                        ★7.读取学生信息                        *\n");
				printf("*                        ★8.保存学生信息                        *\n");
				printf("*                        ★0.退出学生系统                        *\n");
				printf("******************************************************************\n"); 
				printf("                         请从序号0-8中选择:");
				
				scanf("%d",&a);
				
				if(a>=0 && a<=8)
				{
					switch(a)//a控制子函数的调用 
					{
					case 1:
						Add();break;
					case 2:
						Browse();break;
					case 3:
						Seek();break;
					case 4:
						Delete();break;
		     		case 5:
		     			Modify();break;
					case 6:
						Statistics();break;
					case 7:
						Read();break;
					case 8:
						Save();break;
					}
				}
				else//a的值输入错误 
				{
					printf("★您的输入错误，将返回主菜单!★\n");
					system("pause");
				}
			}
	    }
	    else//账号密码输入错误 
	    {
	        printf("★账号或密码输入错误，请再次尝试!★\n");
	        system("pause");
	    }     
    }	
	return 0;
}
