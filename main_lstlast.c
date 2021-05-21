#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *s1 = "old";
	char *s2 = "new";
	char *s3 = "latest";

	t_list *root = ft_lstnew(s1);
	ft_lstadd_front(&root, ft_lstnew(s2));
	ft_lstadd_front(&root, ft_lstnew(s3));

	t_list *last = ft_lstlast(root);
	printf("%s\n", (char *)last);

	free (root);
	free (last);
}