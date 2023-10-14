/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:29:50 by jyao              #+#    #+#             */
/*   Updated: 2023/10/13 16:00:13 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"GradeTooLowException.hpp"

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Form::GradeTooLowException");
};