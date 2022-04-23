/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:29:48 by steh              #+#    #+#             */
/*   Updated: 2022/04/22 20:17:23 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "linked_list.h"

t_node	*reverse(t_node *head)
{
	t_node	*prev;
	t_node	*next;

	prev = NULL;
	next = NULL;
	while (head != NULL)
	{
		next = head->link;
		head->link = prev;
		prev = head;
		head = next;
	}
	head = prev;
	return (head);
}

t_node	*reverse_at_pos(t_node *head, int m, int n)
{
	t_node	*prev;
	t_node	*curr;
	t_node	*next;
	t_node	*start;
	t_node	*end;
	int		i;

	prev = NULL;
	curr = head;
	i = 1;
	if (m > n)
		return (head);
	while (head != NULL && i < m)
	{
		prev = curr;		// m - 1 node
		curr = curr->link; // m node
		i++;
	}
	start = curr; // m
	end = NULL;
	i = 1;
	while (head != NULL && i <= n - m + 1)
	{
		next = curr->link; // m + 1
		curr->link = end;
		end = curr;			// n
		curr = next;		// n + 1
		i++;
	}
	if (start)
	{
		start->link = curr;
        if (prev != NULL)
            prev->link = end;
        else
            head = end;
	}
	return (head);
}