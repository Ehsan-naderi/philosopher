/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaderi <mnaderi@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 01:41:27 by mnaderi           #+#    #+#             */
/*   Updated: 2022/03/02 20:24:54 by mnaderi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	philo_atoi(const char *str)
{
	long	res;
	int		i;

	res = 0;
	i = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

int	is_num(char **argv, int i, int j)
{
	while (argv[j])
	{
		while (argv[j][i])
		{
			if (argv[j][i] < '0' || argv[j][i] > '9' || ft_strlen(argv[j]) > 10)
				return (0);
			i++;
		}
		i = 0;
		j++;
	}
	return (1);
}

int	parse_args(int argc, char **argv, t_ph *ph)
{
	if ((argc == 5 || argc == 6) && is_num(argv, 0, 1))
	{
		ph->arg.n_of_philo = ft_atoi(argv[1]);
		ph->arg.t_to_die = ft_atoi(argv[2]);
		ph->arg.t_to_eat = ft_atoi(argv[3]);
		ph->arg.t_to_sleep = ft_atoi(argv[4]);
		ph->arg.num_m_eat = -1;
		if (argc == 6)
			ph->arg.num_m_eat = ft_atoi(argv[5]);
		return (1);
	}
	return (0);
}
