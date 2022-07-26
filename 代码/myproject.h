#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#define LEN 16//最大字符数，可根据实际修改 

struct student 
{
	char StudentId[LEN];                //学生学号 
	char StudentName[LEN];              //学生姓名 
	char StudentAge[LEN];               //学生年龄 
	char StudentSex[LEN];               //学生性别 
	char StudentCollege[LEN];           //学生学院 
	char StudentMajor[LEN];             //学生专业 
	char StudentClass[LEN];             //学生班级 
	char StudentTelephoneNumber[LEN];   //学生电话 
	struct student *next;
}*head,*p,*q,*p1,*p2,*q1,*q2;//head表示开头，*p,*q,*p1,*p2,*q1,*q2是在函数中用到的结构体指针 

void Add(void);              //增添函数 
void Delete(void);           //删除函数 
void Seek(void);             //查找函数 
void Modify(void);           //修改函数 
void Browse(void);           //浏览函数 
void Statistics(void);       //统计函数 
void Save(void);             //保存函数 
void Read(void);             //读取函数 

