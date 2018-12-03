#include "20186628.h"

node* make_node(int input)
{
	node* new = (node*)malloc(sizeof(node));

	if (new == NULL)
	{
		printf("�޸𸮿� ���� �߻�\n");
		return NULL;
	}

	new->value = input;
	new->next = NULL;

	return new;
}

void append_node(node** head, node* new)
{
	node* nextnode = *head;

	if (*head == NULL)
	{
		*head = new;
		return;
	}

	while (nextnode->next != NULL)
	{
		nextnode = nextnode->next;
	}

	nextnode->next = new;

	return;
}

int count_node(node* head)
{
	int count = 0;
	node* nextnode = head;
	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		count++;
	}

	return count;
}

void print_node(node* head)
{
	node* nextnode = head;
	while (nextnode != NULL)
	{
		printf("%d ", nextnode->value);
		nextnode = nextnode->next;
	}
	printf("\n");
	return;
}

void print_center_node(node** head, int count)
{
	if (count % 2) // count�� Ȧ��
	{
		int current = 1;
		node* nextnode = *head;
		while (current <= count/2)
		{
			current++;
			nextnode = nextnode->next;
		}
		printf("%d\n", nextnode->value);
	}
	else // count�� ¦��
	{
		int current = 1;
		node* nextnode = *head;
		while (current < count / 2)
		{
			current++;
			nextnode = nextnode->next;
		}
		printf("%d ", nextnode->value);
		nextnode = nextnode->next;
		printf("%d\n", nextnode->value);
	}
}

void print_reverse_node(node** head, int count)
{
	for (int j = count; j > 0; j--)
	{
		node* nextnode = *head;
		for (int i = 0; i < j; i++)
		{
			nextnode = nextnode->next;
		}
		printf("%d ", nextnode->value);
	}
	printf("\n");
}

void remove_odd_node(node** head, int count)
{
	node* nodebefore = NULL;
	node* nodenow = NULL;
	node* noderemove = NULL;
	nodebefore->next = *head;
	nodenow = *head;

	for (int i = 1; i <= count; i++)
	{
		if ((i % 2) == 1)	//Ȧ����°
		{
			nodebefore->next = nodenow->next;
			noderemove = nodenow;
			nodenow = nodenow->next;

			if (i == 1)
			{
				*head = nodenow;
			}

			free(remove);
		}
		else //¦����°
		{
			nodebefore = nodenow;
			nodenow = nodenow->next;
		}

	}

}

