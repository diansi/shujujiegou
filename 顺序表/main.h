#define MAXSIZE 200
#include<stdio.h>
typedef struct 
{
	int date[MAXSIZE];
	int last;
}List;
List L ,*PtrL;
List MakeEmpty();//初始化一个顺序表
int find(int k,List L);//根据位序K返回相应元素
int FindK(int k, List L);//查找K出现的第一次位置
void insert(int k,int i,List L);//在位置i前插入一个元素K
void Delete(int i,List L);//删除指定位序i的元素
int Length(List L);//返回线性表的长度
