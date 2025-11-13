/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamacia <juamacia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 22:06:21 by juamacia          #+#    #+#             */
/*   Updated: 2025/11/13 22:18:29 by juamacia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	nb;
	int	sign;

    sum = 0;
    sign = 1;
    while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
        nptr++;
    if (*nptr == '-' || *nptr == '+')
    {
        if (*nptr == '-')
            sign = -1;
        nptr++;
    }
    while (*nptr >= '0' && *nptr <= '9')    
    {
        sum = sum * 10 + (*nptr - '0');
        nptr++;
    }   
    return (sum * sign);
}