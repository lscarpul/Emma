/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:31:57 by enucci            #+#    #+#             */
/*   Updated: 2025/12/22 18:19:51 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_string;
	size_t	i;
	char	*substr;

	if (!s)
		return (NULL);
	len_string = ft_strlen(s);
	if (start >= len_string)
		len = 0;
	else if (len > len_string - start)
		len = len_string - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main(void)
// {
//     const char *s = "Hello, World!";
//     unsigned int start = 4;
//     size_t len = 5;
//     char *result = ft_substr(s, start, len);
//     if (result)
//     {
//         printf("Substring: '%s'\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed or NULL input.\n");
//     }
//     return 0;
// }