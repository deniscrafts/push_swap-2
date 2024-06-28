/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:10:29 by denrodri          #+#    #+#             */
/*   Updated: 2024/06/26 19:11:25 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# define BUFFER_SIZE 4
# include <fcntl.h>
# include "../push_swap/push_swap.h"
# include "../push_swap/libft/libft.h"

typedef struct s_list
{
	char			*str_buf;
	struct s_list	*next;
}				t_list;

int				found_newline(t_list *list);
t_list			*find_last_node_2(t_list *list);
char			*get_line(t_list *list);
void			copy_str(t_list *list, char *str);
int				len_to_newline(t_list *list);
void			polish_list(t_list **list);
char			*get_next_line(int fd);
void			dealloc(t_list **list, t_list *clean_node, char *buf);
void			create_list(t_list **list, int fd);

#endif
