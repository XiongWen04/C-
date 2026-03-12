#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}Node,*LinkList;

void InsertNode(Node** L,int data)
{
	if(*L == NULL)
	{
		*L = (Node*)malloc(sizeof(Node));
		(*L)->next = NULL;
		(*L)->data = data;
	}
	else
	{
		Node* p = (Node*)malloc(sizeof(Node));
		p->data = data;
		p->next = *L;
		*L = p;
	}
}

void DeleteNode(Node** L)
{
	if(*L == NULL)
		return;
	Node* p = *L;
	*L = (*L)->next;
	free(p);
	p = NULL;
}

void DeleteList(Node** L)
{
	Node* p = NULL;
	while(*L != NULL)
	{
		p = *L;
		*L = (*L)->next;
		free(p);
		p = NULL;
	}
}

int main()
{
	
	return 0;
}