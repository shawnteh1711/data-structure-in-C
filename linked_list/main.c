/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:59:34 by steh              #+#    #+#             */
/*   Updated: 2022/04/22 20:57:09 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

int main(void)
{
	t_node *head;
	t_node *current;

	// first node
	head = (t_node *)malloc(sizeof(t_node));
	head->data = 45;
	head->link = NULL;

	// second node
	current = malloc(sizeof(t_node));
	current->data = 98;
	current->link = NULL;
	head->link = current;

	// third node
	current = malloc(sizeof(t_node));
	current->data = 33;
	current->link = NULL;
	head->link->link = current;
	add_at_end(head, 67);
	add_at_end(head, 22);
	add_beg(&head, 3);
	add_at_pos(head, 50, 3);
	head = del_first(head);
	// head = del_last(head);
	head = del_last2(head);
	head = del_last2(head);
	head = del_last2(head);
	del_pos(&head, 2);
	print_data(head);
	// head = reverse(head);
	head = reverse_at_pos(head, 1, 2);
	printf("\n");
	print_data(head);
	// count_of_nodes(head);

	return (0);
}