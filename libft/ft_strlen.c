/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msiivone <msiivone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:53:37 by msiivone          #+#    #+#             */
/*   Updated: 2019/11/06 02:00:33 by msiivone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int y;

	y = 0;
	while (str[y] != '\0')
	{
		y++;
	}
	return (y);
}
