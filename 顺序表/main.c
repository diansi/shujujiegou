#include<stdio.h>
#include"main.h"
int main()
{
	int k,i;
	int result;
	List L;
	printf("��ʼ��һ��˳���\n");
	L=MakeEmpty();
	printf("��������Ҫ���ҵ�λ��:\n");
	scanf_s("%d",&k);
	result=find(k,L);
	printf("��λ���Ԫ���ǣ�%d",result);
	printf("��������Ҫ���ҵ�Ԫ�أ�\n");
	scanf_s("%d", &k);
	result=FindK(k,L);
	printf("��Ԫ�ص�λ���ǣ�%d",result);
	printf("��������Ҫ�����Ԫ�ؼ���λ��");
	scanf_s("%d%d",&k,&i);
	insert(k,i,L);
	printf("��������Ҫɾ��Ԫ�ص�λ��");
	Delete(i,L);
	/*printf("�����Ա�ĳ���Ϊ��");
	result = Length(L);
	printf("%d",result);*/
	system("pause");
	return 0;
}