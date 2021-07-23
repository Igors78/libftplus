/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 07:37:45 by ioleinik          #+#    #+#             */
/*   Updated: 2021/05/14 07:39:57 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int ch)
{
	unsigned char	c;

	c = (unsigned char)(ch);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
