/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:45:13 by aanghel           #+#    #+#             */
/*   Updated: 2021/10/05 13:56:59 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		 j++;
	while (src[i] != '\0' && nb > 0)
	{
		dest[j] = src[i];
		i++;
		j++;
		nb--;
	}
	dest[j] = '\0';
	return (dest);
}
