/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UnsignedFormException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:19:55 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 13:20:21 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"UnsignedFormException.hpp"

const char	*AForm::UnsignedFormException::what(void) const throw()
{
	return ("AForm::UnsignedFormException");
};