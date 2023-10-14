/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:33:24 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 14:14:54 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"AForm.hpp"
#include	"GradeTooHighException.hpp"
#include	"GradeTooLowException.hpp"
#include	"UnsignedFormException.hpp"

static void	validateGrade(int grade)
{
	if (grade < HIGHEST_GRADE)
		throw (AForm::GradeTooHighException());
	if (grade > LOWEST_GRADE)
		throw (AForm::GradeTooLowException());
};

AForm::AForm(void): _name(DEFAULT_NAME), _target(DEFAULT_TARGET), _isSigned(DEFAILT_ISSIGNED), 
	_gradeToSign(DEFAULT_GRADE), _gradeToExecute(DEFAULT_GRADE)
{
	validateGrade(_gradeToSign);
	validateGrade(_gradeToExecute);
};

AForm::AForm(const AForm &aformREF): _name(aformREF.getName()), _target(aformREF.getTarget()),
	_gradeToSign(aformREF.getGradeToSign()), _gradeToExecute(aformREF.getGradeToExecute())
{
	validateGrade(_gradeToSign);
	validateGrade(_gradeToExecute);
	*this = aformREF;
};

AForm	&AForm::operator=(const AForm &aformREF)
{
	if (this != &aformREF)
	{
		_isSigned = aformREF.getIsSigned();
	}
	return (*this);
};

AForm::~AForm(void)
{
};

AForm::AForm(std::string name, std::string target, int gradeToSign, int gradeToExecute): _name(name), _target(target), _isSigned(DEFAILT_ISSIGNED),
	_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	validateGrade(_gradeToSign);
	validateGrade(_gradeToExecute);
}

const std::string	&AForm::getName(void) const
{
	return (_name);
}

const std::string	&AForm::getTarget(void) const
{
	return (_target);
}

const bool	&AForm::getIsSigned(void) const
{
	return (_isSigned);
}

const int	&AForm::getGradeToSign(void) const
{
	return (_gradeToSign);
}

const int	&AForm::getGradeToExecute(void) const
{
	return (_gradeToExecute);
}

void	AForm::beSigned(const Bureaucrat &bureaucratREF)
{
	if (_isSigned == true)
	{
		std::cout << "AForm is already signed!" << std::endl;
		std::cout << *this << std::endl;
		return ;
	}
	if (bureaucratREF.getGrade() > _gradeToSign)
		throw (AForm::GradeTooLowException());
	_isSigned = true;
}

void	AForm::execute(const Bureaucrat &bureaucratREF) const
{
	if (_isSigned == false)
		throw (AForm::UnsignedFormException());
	if (bureaucratREF.getGrade() > _gradeToExecute)
		throw (AForm::GradeTooLowException());
	executeAction();
}

std::ostream	&operator<<(std::ostream &lhs_ostreamREF, const AForm &rhs_aformREF)
{
	lhs_ostreamREF << rhs_aformREF.getName() 
		<< ", form signed status " 
		<< rhs_aformREF.getIsSigned()
		<< ", form grade to sign "
		<< rhs_aformREF.getGradeToSign()
		<< ", form grade to execute "
		<< rhs_aformREF.getGradeToExecute()
		<< '.';
	return (lhs_ostreamREF);
};
