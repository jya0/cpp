/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:19:45 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 19:44:16 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Intern.hpp"
#include	"InvalidFormTypeException.hpp"

Intern::Intern(void)
{
};

Intern::Intern(const Intern &internREF)
{
	*this = internREF;
};

Intern	&Intern::operator=(const Intern &internREF)
{
	if (this != &internREF)
	{
	}
	return (*this);
};

Intern::~Intern(void)
{
};

AForm	*Intern::createShrubberyCreationF(std::string target) const
{
	return (new ShruberryCreationForm(target));
};

AForm	*Intern::createRobotomyRequestF(std::string target) const
{
	return (new RobotomyRequestForm(target));
};

AForm	*Intern::createPresidentialPardonF(std::string target) const
{
	return (new PresidentialPardonForm(target));
};

AForm	*Intern::makeForm(std::string formType, std::string target) const
{
	AForm	*(Intern::*createFormFuncPTR)(std::string) const;

	createFormFuncPTR = NULL;
	createFormFuncPTR = (createFormFuncPTR == NULL && !formType.compare(SCF_NAME)) ? &Intern::createShrubberyCreationF : createFormFuncPTR;
	createFormFuncPTR = (createFormFuncPTR == NULL && !formType.compare(RRF_NAME)) ? &Intern::createRobotomyRequestF : createFormFuncPTR;
	createFormFuncPTR = (createFormFuncPTR == NULL && !formType.compare(PPF_NAME)) ? &Intern::createPresidentialPardonF : createFormFuncPTR;
	if (createFormFuncPTR == NULL)
	{
		std::cerr << "Invalid form type: "
			<< formType
			<< std::endl;
		throw (Intern::InvalidFormTypeException());
	}
	return ((this->*createFormFuncPTR)(target));
};

/* AForm	*Intern::makeForm(std::string formType, std::string target) const
{
	Intern::t_create_form_func	createFormFunc;

	createFormFunc = NULL;
	for (int i = 0; i < T_FORM_COUNT; ++i)
	{
		if (!Intern::formTypes[i].compare(formType))
		{
			createFormFunc = Intern::createFormFuncs[i];
			break ;
		}
	}
	if (createFormFunc == NULL)
	{
		std::cerr << "Invalid form type: "
			<< formType
			<< std::endl;
		throw (Intern::InvalidFormTypeException());
	}
	return ((this->*createFormFunc)(target));
}; */

const std::string					Intern::formTypes[T_FORM_COUNT] = {SCF_NAME, RRF_NAME, PPF_NAME};

const Intern::t_create_form_func	Intern::createFormFuncs[T_FORM_COUNT] = {&Intern::createShrubberyCreationF, &Intern::createRobotomyRequestF, &Intern::createPresidentialPardonF};