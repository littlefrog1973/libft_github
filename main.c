#include <libft.h>
#include <stdio.h>

void	del(void *ch)
{
	char	*chr;
	int	i;

	chr = (char *) ch;
	i = 0;
	while(chr[i] != '\0')
	{
		chr[i] = 0;
	}
//	free(ch);
}
		

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
	void	(*del_ptr)(void *);

	del_ptr = &del;
	node0 = ft_lstnew((void *) "abc");
	node1 = ft_lstnew((void *) "def");
	node2 = ft_lstnew((void *) "ghi");
	node3 = ft_lstnew((void *) "jkl");
	node4 = ft_lstnew((void *) "xyz");

	head = &node0;
	ft_lstadd_front(head, node1);
	ft_lstadd_back(head, node2);
	ft_lstadd_back(head, node3);
	node4->next = node1;
	printf("node 4->content = %s\n", node4->content);
//	ft_lstdelone(node4, del_ptr);
//	ft_lstdelone(node3,(*del_ptr)(node3->content));
//	(*del_ptr)(node3->content);
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
}
