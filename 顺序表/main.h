#define MAXSIZE 200
#include<stdio.h>
typedef struct 
{
	int date[MAXSIZE];
	int last;
}List;
List L ,*PtrL;
List MakeEmpty();//��ʼ��һ��˳���
int find(int k,List L);//����λ��K������ӦԪ��
int FindK(int k, List L);//����K���ֵĵ�һ��λ��
void insert(int k,int i,List L);//��λ��iǰ����һ��Ԫ��K
void Delete(int i,List L);//ɾ��ָ��λ��i��Ԫ��
int Length(List L);//�������Ա�ĳ���
