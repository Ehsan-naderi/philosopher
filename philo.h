/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaderi <mnaderi@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:54:24 by mnaderi           #+#    #+#             */
/*   Updated: 2022/02/04 02:26:13 by mnaderi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <sys/time.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_args
{
	int				n_of_philo;
	int				t_to_die;
	int				t_to_eat;
	int				t_to_sleep;
	int				num_m_eat;
	struct timeval	start_time;
	pthread_mutex_t	mutex_write;
}	t_args;

typedef struct	s_philosophers
{
	int				ph_num;
	t_args			*args;
}	t_philosophers;

typedef struct	s_ph
{
	t_args			arg;
	t_philosophers	philo;
}	t_ph;

int		parse_args(int argc, char **argv, t_ph *ph);
int		philo_atoi(const char *str);
int		is_num(char **argv, int i, int j);

#endif
