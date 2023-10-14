/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:29:50 by jyao              #+#    #+#             */
/*   Updated: 2023/10/13 15:58:59 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"GradeTooLowException.hpp"

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Bureaucrat::GradeTooLowException");
};