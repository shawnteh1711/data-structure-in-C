/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transverse_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:30:10 by steh              #+#    #+#             */
/*   Updated: 2022/04/22 14:16:56 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	count_of_nodes(t_node *head)
{
	int		count;
	t_node	*ptr;

	count = 0;
	if (head == NULL)
		printf("Linked List is empty");
	ptr = head;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->link;
	}
	printf("count: %d\n", count);
}

void	print_data(t_node *head)
{
	t_node	*ptr;

	if (head == NULL)
		printf("Linked List is empty");
	ptr = head;
	while (ptr->link != NULL)
	{
		printf("%d->", ptr->data);
		ptr = ptr->link;
	}
	if (ptr->link == NULL)
		printf("%d\n", ptr->data);
}
