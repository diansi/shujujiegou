#include<stdio.h>
#include"main.h"
int main()
{
	int k,i;
	int result;
	List L;
	printf("初始化一个顺序表\n");
	L=MakeEmpty();
	printf("请输入您要查找的位序:\n");
	scanf_s("%d",&k);
	result=find(k,L);
	printf("此位序的元素是：%d",result);
	printf("请输入您要查找的元素：\n");
	scanf_s("%d", &k);
	result=FindK(k,L);
	printf("此元素的位序是：%d",result);
	printf("请输入您要插入的元素及其位序：");
	scanf_s("%d%d",&k,&i);
	insert(k,i,L);
	printf("请输入您要删除元素的位序：");
	Delete(i,L);
	/*printf("此线性表的长度为：");
	result = Length(L);
	printf("%d",result);*/
	system("pause");
	return 0;
}