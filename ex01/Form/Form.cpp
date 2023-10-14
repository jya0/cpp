/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:33:24 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 12:04:47 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Form.hpp"
#include	"GradeTooHighException.hpp"
#include	"GradeTooLowException.hpp"

static void	validateGrade(int grade)
{
	if (grade < HIGHEST_GRADE)
		throw (Form::GradeTooHighException());
	if (grade > LOWEST_GRADE)
		throw (Form::GradeTooLowException());
};

Form::Form(void): _name(DEFAULT_NAME), _isSigned(DEFAILT_ISSIGNED), 
	_gradeToSign(DEFAULT_GRADE), _gradeToExecute(DEFAULT_GRADE)
{
	validateGrade(_gradeToSign);
	validateGrade(_gradeToExecute);
};

Form::Form(const Form &formREF): _name(formREF.getName()),
	_gradeToSign(formREF.getGradeToSign()), _gradeToExecute(formREF.getGradeToExecute())
{
	validateGrade(_gradeToSign);
	validateGrade(_gradeToExecute);
	*this = formREF;
};

Form	&Form::operator=(const Form &formREF)
{
	if (this != &formREF)
	{
		_isSigned = formREF.getIsSigned();
	}
	return (*this);
};

Form::~Form(void)
{
};

Form::Form(std::string name, int gradeToSign, int gradeToExecute): _name(name), _isSigned(DEFAILT_ISSIGNED),
	_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	validateGrade(_gradeToSign);
	validateGrade(_gradeToExecute);
}

const std::string	&Form::getName(void) const
{
	return (_name);	
}

const bool	&Form::getIsSigned(void) const
{
	return (_isSigned);
}

const int	&Form::getGradeToSign(void) const
{
	return (_gradeToSign);
}

const int	&Form::getGradeToExecute(void) const
{
	return (_gradeToExecute);
}

void	Form::beSigned(const Bureaucrat &bureaucratREF)
{
	if (_isSigned == true)
	{
		std::cout << "Form is already signed!" << std::endl;
		std::cout << *this << std::endl;
		return ;
	}
	if (bureaucratREF.getGrade() > _gradeToSign)
		throw (Form::GradeTooLowException());
	_isSigned = true;
}

std::ostream	&operator<<(std::ostream &lhs_ostreamREF, const Form &rhs_formREF)
{
	lhs_ostreamREF << rhs_formREF.getName() 
		<< ", form signed status " 
		<< rhs_formREF.getIsSigned()
		<< ", form grade to sign "
		<< rhs_formREF.getGradeToSign()
		<< ", form grade to execute "
		<< rhs_formREF.getGradeToExecute()
		<< '.';
	return (lhs_ostreamREF);
};
