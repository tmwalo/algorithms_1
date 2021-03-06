/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvertex_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:02:16 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/30 16:40:16 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int		ret;

	ret = ft_isvertex(NULL);
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex("");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex("12 764 87");
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	ret = ft_isvertex("L-33 764 87");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex("room13 764 87");
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	ret = ft_isvertex("room12-room27 764 87");
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	ret = ft_isvertex("#start 764 87");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex("# comment 764 87");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex("12 764 87 9473");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex("12 764");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex("12 cat 764");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex("12 764 87 #this is a comment");
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	ret = ft_isvertex("12 764 87 # this is a comment");
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	ret = ft_isvertex("12 764 87 ##command");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex("12 764 87 this is not a comment");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex("                ");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	return (0);
}
