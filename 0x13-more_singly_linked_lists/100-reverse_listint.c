listint_t *reverse_listint(listint_t **head)
{
	listint_t *list, *list_start, *list_end;

	*list = *head;
	*list_start = NULL;
	*list_end = NULL;
	while (list != NULL)
	{
		list_end = list->next;
		list->next = list_start;
		list_start = list;
		list = list_end;
	}
	*head = list_start;
	return (list_start);
}
