/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:28:04 by jyao              #+#    #+#             */
/*   Updated: 2023/10/13 18:00:33 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"GradeTooHighException.hpp"

const char	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("AForm::GradeTooHighException");
};