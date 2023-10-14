/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:16:42 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 14:13:54 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm(PPF_NAME, DEFAULT_TARGET, PPF_GRADE_SIGN, PPF_GRADE_EXECUTE)
{
};

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm(PPF_NAME, target, PPF_GRADE_SIGN, PPF_GRADE_EXECUTE)
{
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ppfREF): AForm(ppfREF)
{
	this->AForm::operator=(ppfREF);
};

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &ppfREF)
{
	if (this != &ppfREF)
	{
	}
	return (*this);
};

PresidentialPardonForm::~PresidentialPardonForm(void)
{
};

void	PresidentialPardonForm::executeAction(void) const
{
	std::cout << getTarget()
		<< " has been pardoned by Zaphod Beeblebrox."
		<< std::endl;
};