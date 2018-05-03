#include"main.h"
List MakeEmpty()
{
	List *PtrL;
	PtrL = (List *)malloc(sizeof(List));
	PtrL->last = -1;
	return *PtrL;
}
int find(int k, List L)
{
	int i = 0;
	while (i <= PtrL->last&&PtrL->date[i] != k)
		i++;
	if (i > PtrL->last)
		return -1;
	else
		return i;
}
int FindK(int k,  List L)
{
	int i = 0;
	while (i<=PtrL->last&&i!=k)
	{
		i++;
	}
	return PtrL->date[i];
	
}
void insert(int k, int i, List L)
{
	int j;
	if (PtrL->last >= MAXSIZE - 1)
	{
		printf("����\n");
		return;
	}
	if (i<1 || i>PtrL->last + 2)
	{
		printf("λ�ò��Ϸ���\n");
		return;
	}
	for (j = PtrL->last; j >= i - 1; j--)
		PtrL->date[j + 1] = PtrL->date[j];
	PtrL->date[i - 1] = k;
	PtrL->last++;
	return;

}
void Delete(int i ,List L)
{
	int j;
	if (i<1 || i>PtrL->last + 1)
	{
		printf("�����ڵ�%d��Ԫ��\n",i);
		return;
	}
	for (j = i; j <= PtrL->last; j++)
	{
		PtrL->date[j - 1] = PtrL->date[j];
	}
	PtrL->last--;
	return;
}