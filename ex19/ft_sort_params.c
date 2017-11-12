/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:21:49 by ymarcill          #+#    #+#             */
/*   Updated: 2017/11/07 23:01:13 by ymarcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_tri(int argc, char **argv)
{
	int		i;
	int		j;
	char	*x;

	i = 0;
	j = 1;
	while (j < argc)
	{
		i = j + 1;
		while (i < argc)
		{
			if (ft_strcmp(argv[j], argv[i]) > 0)
			{
				x = argv[i];
				argv[i] = argv[j];
				argv[j] = x;
			}
			i++;
		}
		j++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	ft_tri(argc, argv);
	if (argc > 0)
	{
		while (argv[i] != '\0')
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
}
