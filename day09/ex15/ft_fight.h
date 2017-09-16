/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 15:10:50 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/16 15:11:29 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIGHT_H
# define FT_FIGHT_H

typedef struct	s_perso
{
	char	*name;
	int		namesize;
	float	life;
	int		age;
	int		pv;
	int		dead;
	char	*profession;
}				t_perso;

typedef struct	s_damage
{
	char	*name;
	int		namesize;
	int		dm;
}				t_damage;

#endif
