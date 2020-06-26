/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bontiman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 07:57:09 by bontiman          #+#    #+#             */
/*   Updated: 2020/06/26 09:39:56 by bontiman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest,char *src,unsigned int n)
{
	unsigned	int i;
	
	i = 0;

	while(src[i] != '\0' || i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';
	return(dest);
}

//int main()
//{
//	char a[50] = "bongani";
//	char b[50];
//	ft_strncpy(b,a,3);
//	printf("%s",b);
//	return(0);
//}
