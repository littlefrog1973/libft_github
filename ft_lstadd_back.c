/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:59:46 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/07/01 17:11:00 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*running;

	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		running = *lst;
		while (running->next != NULL)
		{
			running = running->next;
		}
		running->next = new;
		new->next = NULL;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*node0;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	**head;
	t_list	**current;
	int	i;

	node0 = ft_lstnew((void *) "abc");
	node1 = ft_lstnew((void *) "def");
	node2 = ft_lstnew((void *) "ghi");
	node3 = ft_lstnew((void *) "jkl");
	node4 = ft_lstnew((void *) "xyz");

	head = &node0;
	ft_lstadd_back(head, node1);
	ft_lstadd_back(head, node2);
	ft_lstadd_back(head, node3);
	ft_lstadd_back(head, node4);
	printf("node 4->content = %s\n", node4->content);
	printf("head's content = %s\n",(char *) (*head)->content);
	i = 0;
	current = head;
	while ((*current != NULL))
	{
		printf("node %d = %s\n", i, (char *) (*current)->content);
		*current = (*current)->next;
		i++;
	}
	return (0);
}*/
