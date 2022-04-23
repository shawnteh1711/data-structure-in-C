/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:03:30 by steh              #+#    #+#             */
/*   Updated: 2022/04/22 13:51:57 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

typedef struct s_node 
{
	int				data;
	struct s_node	*link;
}	t_node;

#include <stdio.h>
#include <stdlib.h>

// transverse
void	count_of_nodes(t_node *head);
void	print_data(t_node *head);


// add node
void	add_at_end(t_node *head, int data);
void	add_beg(t_node **head, int d);
void	add_at_pos(t_node *head, int data, int pos);

// del node
t_node	*del_first(t_node *head);
t_node	*del_last(t_node *head);
t_node	*del_last2(t_node *head);
void	del_pos(t_node **head, int position);

// reverse
t_node	*reverse(t_node *head);
t_node	*reverse_at_pos(t_node *head, int m, int n);

# endif
