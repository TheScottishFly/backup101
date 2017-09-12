/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 19:39:11 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/12 19:53:13 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int length;
	int i;
	char *new_str;

	length = 0;
	i = 0;
	while(src[length])
		length++;
	new_str = malloc((length - 1) * sizeof(char));
	if (new_str == NULL)
		exit(0);
	while(src[i])
	{
		new_str[i] = src[i];
	i++;
	}
	return (new_str);
}

int main()
{
	char str[20] = "Hello World";
	printf("%s\n", ft_strdup(str));

	return 0;
}

