/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_engine.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:46:34 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/02/25 01:26:20 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_engine(char *dictionary, char *av)
{
	char	**arr;
	char	**array;
	int		j;
	int		counter_rows;
	int		i;

	i = 0;
	j = 0;
	arr = ft_allocate(av);
	array = ft_copy_dict_array(dictionary);
	counter_rows = ft_counter_rows(ft_read_dict(dictionary));
	if (arr[0][0] == 48  && arr[0][1] == 48 && arr[0][2] == 48)
	{
		ft_read_words(ft_strstr(array, counter_rows, 48));
		return (0);
	}
	while (i < (ft_strlen(av) / 3 + ft_module(av)))
	{
		ft_engine_nest(arr[i], array, counter_rows);
		if (ft_strcmp(arr[i++], "000") != 0)
			ft_ord(array, counter_rows, ft_strlen(av) / 3 + ft_module(av), i);
	}
	free(arr);
	free(array);
	return (0);
}
