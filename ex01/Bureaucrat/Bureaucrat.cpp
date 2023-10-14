/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:42:49 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 15:18:52 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"
#include	"GradeTooHighException.hpp"
#include	"GradeTooLowException.hpp"

static void	validateGrade(int grade)
{
	if (grade < HIGHEST_GRADE)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > LOWEST_GRADE)
		throw (Bureaucrat::GradeTooLowException());
};

Bureaucrat::Bureaucrat(void): _name(DEFAULT_NAME), _grade(DEFAULT_GRADE)
{
	validateGrade(_grade);
};

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	validateGrade(_grade);
};

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &bureaucratREF)
{
	if (this != &bureaucratREF)
	{
		_grade = bureaucratREF.getGrade();
		validateGrade(_grade);
	}
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucratREF): _name(bureaucratREF.getName())
{
	*this = bureaucratREF;
}

Bureaucrat::~Bureaucrat(void)
{	
};

const std::string	&Bureaucrat::getName(void) const
{
	return (_name);
}

const int			&Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::increaseGrade(void)
{
	validateGrade(_grade - 1);
	--_grade;
};

void	Bureaucrat::decreaseGrade(void)
{
	validateGrade(_grade + 1);
	++_grade;
};

void	Bureaucrat::signForm(Form &formREF) const
{
	try {
		formREF.beSigned(*this);
		std::cout << *this
			<< " signed "
			<< formREF
			<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << *this
			<< " couldn't sign "
			<< formREF
			<< " because "
			<< e.what()
			<< std::endl;
	}
}

std::ostream	&operator<<(std::ostream &lhs_ostreamREF, const Bureaucrat &rhs_bureaucratREF)
{
	lhs_ostreamREF << rhs_bureaucratREF.getName() 
		<< ", bureaucrat grade " 
		<< rhs_bureaucratREF.getGrade() 
		<< '.';
	return (lhs_ostreamREF);
};
