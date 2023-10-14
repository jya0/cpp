/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InvalidFormTypeException.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:38:21 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 16:38:51 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"InvalidFormTypeException.hpp"

const char	*Intern::InvalidFormTypeException::what(void) const throw()
{
	return ("Intern::InvalidFormTypeException");
};