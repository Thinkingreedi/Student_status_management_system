#include"myproject.h"

extern int n;
 
void Save(void)
{
    FILE *fp;
    if((fp=fopen("studentdata.txt","wb"))==NULL)//只写打开或新建一个二进制文件,只允许写数据
    {
    	printf("\n错误，无法打开文件！\n");
    	exit(0);
	}	  
    p=head;  
    while(p!=NULL)
	{  
		if(fwrite(p,sizeof(struct student),1,fp)!=1)//将数据写入文件 
		{
			printf("\n写入数据出错\n");  
			fclose(fp);
			break;
        }  
        p=p->next;  
    }  
    fclose(fp);//文件关闭  
	printf("\n★存储完成★\n");
	system("pause");
	system("cls");
}
void Read(void)
{
	FILE *fp;
	if((fp=fopen("studentdata.txt","rb+"))==NULL)//读写打开一个二进制文件，允许读数据 
	{
		printf("\n错误，无法打开文件!\n");
		exit(0);
	}
    do
	{ 
		p1=malloc(sizeof(struct student));
		if(n==0)//判断链表开头                                     
		{
			head=p1;	
		}                                     
		else
		{
			p2->next=p1; //p2的结尾所指向的地址是p1			
		}
		fread(p1,sizeof(struct student),1,fp);//对文件数据进行读取 
		p2=p1;
		n++;
    }while(p2->next!=NULL);
    fclose(fp);
	printf("\n★读取完成!★\n");
	system("pause");
	system("cls");
}
