/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 07:31:58 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/17 09:54:45 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		while (*(s2 + 1) == '*')
			s2++;
	}
	if (*(s1 + 1) == '\0' && *s2 == '*' && *s1 != *(s2 + 1))
		return (0);
	else if (*s1 == '\0' && *s1 == *s2)
		return (1);
	else if (*s1 != *s2 && *s2 == '*' && *(s2 + 1) == *s1)
		return (1 * match(s1, s2 + 1));
	else if (*s1 == *s2)
		return (1 * match(s1 + 1, s2 + 1));
	else if (*s1 != *s2 && *s2 == '*')
		return (1 * match(s1 + 1, s2));
	else
		return (0);
}
