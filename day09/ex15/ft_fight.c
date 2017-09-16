/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 15:09:02 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/16 15:09:25 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fight.h"
#include <unistd.h>

void	ft_fight(t_perso *attack, t_perso *def, t_damage *dam)
{
	if (def->pv - dam->dm >= 0)
	{
		if (def->pv - dam->dm == 0)
			attack->dead = 1;
		def->pv = def->pv - dam->dm;
	}
	else
	{
		attack->dead = 1;
		def->pv = 0;
	}
	if (attack->dead != 0)
	{
		write(1, def->name, def->namesize);
		write(1, " is dead.\n", 10);
	}
	else
		write_perso(attack, def, dam);
	return ;
}

void	write_perso(t_perso *attack, t_perso *def, t_damage *dam)
{
	write(1, attack->name, attack->namesize);
	write(1, " does a judo ", 13);
	write(1, dam->name, dam->namesize);
	write(1, " on ", 4);
	write(1, def->name, def->namesize);
	write(1, "\n", 1);
}

void	init_perso(t_perso *perso, char *name, int namesize, int pv)
{
	perso->pv = pv;
	perso->name = name;
	perso->namesize = namesize;
	perso->dead = 0;
}

void	init_damage(t_damage *dam, char *name, int namesize, int dm)
{
	dam->dm = dm;
	dam->name = name;
	dam->namesize = namesize;
}
