/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:41:40 by ayellin           #+#    #+#             */
/*   Updated: 2019/10/25 15:34:01 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_GET_NEXT_LINE_H
# define GNL_GET_NEXT_LINE_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# define BUFF_SIZE  16

int		get_next_line(const int fd, char **line);

#endif
