/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 12:30:54 by steh              #+#    #+#             */
/*   Updated: 2022/04/22 12:33:49 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	add_at_end(t_node *head, int data)
{
	t_node	*ptr;
	t_node	*temp;

	ptr = head;
	temp = malloc(sizeof(t_node));
	temp->data = data;
	temp->link = NULL;
	while (ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
}

void	add_beg(t_node **head, int d)
{
	t_node	*ptr;
	ptr = malloc(sizeof(t_node));
	ptr->data = d;
	ptr->link = NULL;

	ptr->link = *head;
	*head = ptr;
}

void	add_at_pos(t_node *head, int data, int pos)
{
	t_node *ptr;
	t_node *ptr2;

	ptr = head;
	ptr2 = malloc(sizeof(t_node));
	ptr2->data = data;
	ptr2->link = NULL;
	pos--;
	while (pos != 1)
	{
		ptr = ptr->link;
		pos--;
	}
	ptr2->link = ptr->link;
	ptr->link = ptr2;
}
