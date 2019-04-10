#include <stdio.h>
#include <stdlib.h>

struct Node{
	int value;
	Node *next;
};

typedef Node* NodePtr;

/* Insert Nodes at Head */

int InsertNode(NodePtr* ptrHead, int value)
{
	printf("[+] Insert Node: %d \n ", value);

	NodePtr tempPtr = (NodePtr)malloc(sizeof(Node));

	if(!tempPtr)
	{
		return -1;
	}

	tempPtr->value = value;

	tempPtr->next = *ptrHead;

	*ptrHead = tempPtr;

	return 1;
}

/* Print the List */

void PrintList(NodePtr head)
{
	while(head)
	{
		printf("[*] value: %d \n", head->value);
		head = head->next;
	}
}

/* Insert an Element At the End (Given the Head Pointer) */

int InsertAtEnd(NodePtr* ptrHead, int value)
{
	printf("[+] Insert element at %d \n", value);

	NodePtr head = *ptrHead;

	NodePtr tempNode = (NodePtr)malloc(sizeof(Node));

	if(!tempNode)
	{
		return -1;
	}

	tempNode->value = value;

	tempNode->next = NULL;

	if(head==NULL)
	{
		tempNode->next = *ptrHead;

		*ptrHead = tempNode;

		return 1;
	}

	while(head->next != NULL)
	{
		head = head->next;
	}

	tempNode->next = head->next;

	head->next = tempNode;

	return 1;
}

int SortedInsert(NodePtr* ptrHead, int value)
{
	NodePtr curr = *ptrHead;

	NodePtr tempNode = (NodePtr)malloc(sizeof(Node));

	printf("[+] Insert element %d \n", value);

	if(!tempNode)
	{
		return -1;
	}

	tempNode->value = value;

	tempNode->next = NULL;

	if(curr == NULL || curr->value > value)
	{
		tempNode->next = *ptrHead;

		*ptrHead = tempNode;

		return 1;
	}

	while(curr->next != NULL && curr->next->value < value)
	{
		curr = curr->next;
	}

	tempNode->next=curr->next;

	curr->next = tempNode;

	return 1;
}

int ListSearch(NodePtr head, int value)
{
	while(head)
	{
		if(head->value == value)
		{
			printf("[*] The value was located!\n");

			return 1;
		}
		head = head->next;
	}
	return 0;
}

/* Delete the Head of the List */

void DeleteFirstNode(NodePtr* ptrHead)
{
	printf("[!] Deleting the first node \n");

	NodePtr tempNode = *ptrHead;

	if(tempNode == NULL)
	{
		return;
	}

	*ptrHead = tempNode->next;

	free(tempNode);
}

/* Delete from a Given Index */

void DeleteNode(NodePtr* ptrHead, int delValue)
{
	printf("[!] Delete Node\n");

	NodePtr currNode = *ptrHead;

	NodePtr nextNode;

	if(currNode->value == delValue)
	{
		*ptrHead = currNode->next;
		free(currNode);
		return;
	}

	while(currNode!=NULL)
	{
		nextNode = currNode->next;
	}

	if(nextNode && nextNode->value == delValue)
	{
		currNode->next = nextNode->next;
		free(nextNode);
		return;
	}
	else
	{
		currNode = nextNode;
	}
}

int FindLength(NodePtr head)
{
	int count = 0;

	while(head)
	{
		count++;
		head = head->next;
	}
	return count;
}

/* Main Function with list Creation */

int main()
{
	NodePtr head = NULL;

	for(int i = 10; i > 0; --i)
	{
		SortedInsert(&head, i);
	}

	PrintList(head);

	int q;

	printf("[~] Enter a query value-> \n");

	scanf("%d", &q);

	int r = ListSearch(head,q);

	//DeleteFirstNode(&head);

  //DeleteNode(&head, 3);

	int l = FindLength(head);

	printf("[~] List is %d nodes long \n", l);

	return 0;
}
