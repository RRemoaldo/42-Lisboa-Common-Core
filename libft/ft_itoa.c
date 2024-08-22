/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:17:45 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:45:02 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			len;
	long int	negnum;

	negnum = n;
	len = ft_len(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	else if (negnum < 0)
	{
		negnum *= -1;
		result[0] = '-';
	}
	else if (negnum == 0)
		result[0] = '0';
	result[len] = '\0';
	while (negnum > 0)
	{
		len--;
		result[len] = (negnum % 10) + '0';
		negnum /= 10;
	}
	return (result);
}

/*int main()
{
	int test_cases[] = {0, 123, -456, 7890, -12345};
	int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

	printf("Testing ft_itoa function:\n");
	for (int i = 0; i < num_cases; i++)
	{
		int num = test_cases[i];
		char *result = ft_itoa(num);
		if (result == NULL) 
		{
			printf("Memory allocation failed for test case %d\n", num);
			continue;
		}
		printf("Number: %d, Result: %s\n", num, result);
		free(result);
	}

	return (0);
}*/
