#include "20186628.h"

int main()
{
	int input;
	
	node* new;
	node* head = NULL;
	char tmp[20] = { NULL };

	printf("�Է� ����(Ctrl+z�� �Է��ϸ� ����):");
	while (1)
	{
		gets_s(tmp, 19);
		input = atoi(tmp);

		if (feof(stdin)) {
			printf("�Է��� �����մϴ�.\n");
			break;
		}
		new = make_node(input);
		append_node(&head, new);
	}

	print_node(head);
	int count = count_node(head);
	printf("%d\n", count);

	print_center_node(&head, count);
	remove_odd_node(&head);
	print_reverse_node(&head, count);

	remove_odd_node(&head);
	print_node(head);
}