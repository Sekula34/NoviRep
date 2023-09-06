/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:38:27 by fseles            #+#    #+#             */
/*   Updated: 2023/09/06 14:38:30 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int	i; 

	i = 0; 
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *) s + i);
	return (NULL); 
}
#include <stdio.h>
#include <string.h>
int main () {
   const char str[] = "This is just a String"; 
   const char ch = 'u'; 
   char *p;
   p = ft_strchr(str, ch);
   printf("String starting from %c is: %s", ch, p);
   return 0;
}
