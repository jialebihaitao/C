#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//KiKiѧϰ�˽ṹ���ָ�룬���˽��˽ṹ�����Ϳ��Զ�����������ͬ���ͳ�Ա����ָ�뱾�����ڴ��ַ�����������ݵ�����һ�ַ�ʽ���������뽫������������ͨ���ṹ���ָ��ķ�ʽ������һ���γ�һ��������������ÿ������ǽṹ�����ͣ������������ݳ�Ա��data���ͽṹ��ָ�����ͳ�Ա��next����ÿ������ָ�벿��ָ����һ������Ľ�㡣���彨���������£�������n���������������������˳����һ����ͷ���ĵ�����������һ������m,���������е�ֵΪm�Ľ��ȫ��ɾ�������ɾ����ĵ�������Ϣ��
//
//��������:
//�������У�
//��һ���������ݸ���n (3��n��100);
//�ڶ�����������n���������ÿո�ָ�;
//
//������������ɾ������m��
//
//�������:
//�������У�
//��һ��������ɾ����ĵ������ȣ�
//
//�ڶ�������������ɾ����ĵ��������ݡ�
//
//
//ʾ��1
//����
//5
//1 2 2 3 4
//2
//���
//3
//1 3 4

#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};
int main()
{
	int n = 0;
	struct Node* list = NULL;
	struct Node* tail = NULL;
	//������
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		int data = 0;
		scanf("%d", &data);
		struct Node *n = (struct Node*)malloc(sizeof(struct Node));
		n->data = data;
		n->next = NULL;
		if (list == NULL)
		{
			list = n;
			tail = list;
		}
		else
		{
			tail->next = n;
			tail = tail->next;
		}
	}
	//ɾ�����
	int del = 0;
	scanf("%d", &del);
	struct Node *cur = list;
	struct Node *prev = NULL;
	while (cur)
	{
		//�ҵ���
		if (cur->data == del)
		{
			struct Node* pd = cur;
			//���ɾ�����ǵ�һ�����
			if (cur == list)
			{
				list = list->next;
				cur = list;
			}
			else
			{
				//ɾ���Ĳ��ǵ�һ�����
				prev->next = cur->next;
				cur = prev->next;
			}
			n--;
			free(pd);
		}
		else//�Ҳ���
		{
			prev = cur;
			cur = cur->next;
		}
	}
	cur = list;
	printf("%d\n", n);
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	//�ͷſռ�
	cur = list;
	while (cur)
	{
		del = cur;
		cur = cur->next;
		free(del);
	}
	return 0;
}