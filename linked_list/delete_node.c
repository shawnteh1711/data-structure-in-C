/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 12:31:52 by steh              #+#    #+#             */
/*   Updated: 2022/04/22 12:47:41 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

t_node	*del_first(t_node *head)
{
	t_node	*temp;

	if (head == NULL)
		printf("List is already empty!");
	else
	{
		temp = head;
		head = head->link;
		free(temp);
		temp = NULL;
	}
	return (head);
}

t_node	*del_last(t_node *head)
{
	t_node	*temp;
	t_node	*temp2;

	if (head == NULL)
		printf("List is already empty!");
	else if (head->link == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		temp = head;
		temp2 = head;
		while (temp->link != NULL)
		{
			temp2 = temp;
			temp = temp->link;
		}
		temp2->link = NULL;
		free(temp);
		temp = NULL;
	}
	return (head);
}

t_node	*del_last2(t_node *head)
{
	t_node	*temp;

	if (head == NULL)
		printf("List is already empty!");
	else if (head->link == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		temp = head;
		while (temp->link->link != NULL)
			temp = temp->link;
		free(temp->link);
		temp->link = NULL;
	}
	return (head);
}

void	del_pos(t_node **head, int position)
{
	t_node	*current;
	t_node	*previous;

	current = *head;
	previous = *head;
	if (*head == NULL)
		printf("List is already empty!");
	else if (position == 1)
	{
		*head = current->link;
		free(current);
		current = NULL;
	}
	else
	{
		while (position != 1)
		{
			previous = current;
			current = current->link;
			position--;
		}
		previous->link = current->link;
		free(current);
		current = NULL;
	}
}
