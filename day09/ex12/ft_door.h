/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 11:06:56 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/16 12:21:52 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define OPEN 0
# define CLOSE 1
# define TRUE 1
# define FALSE 0
# define EXIT_SUCCESS 0
# include <unistd.h>

typedef struct	s_door
{
	int state;
}				t_door;

void			ft_putstr(char *str);
int				close_door(t_door *door);
int				open_door(t_door *door);
int				is_door_close(t_door *door);
int				is_door_open(t_door *door);

#endif
