/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:28:04 by jyao              #+#    #+#             */
/*   Updated: 2023/10/13 16:00:05 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"GradeTooHighException.hpp"

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Form::GradeTooHighException");
};