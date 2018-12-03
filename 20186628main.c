#include "20186628.h"

int main()
{
	int input;
	
	node* new;
	node* head = NULL;
	char tmp[20] = { NULL };

	printf("입력 시작(Ctrl+z를 입력하면 종료):");
	while (1)
	{
		gets_s(tmp, 19);
		input = atoi(tmp);

		if (feof(stdin)) {
			printf("입력을 종료합니다.\n");
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