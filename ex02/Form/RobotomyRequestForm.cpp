/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:51:48 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 14:07:02 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"RobotomyRequestForm.hpp"
#include	<cstdlib>
#include	<ctime>

RobotomyRequestForm::RobotomyRequestForm(void): AForm(RRF_NAME, DEFAULT_TARGET, RRF_GRADE_SIGN, RRF_GRADE_EXECUTE)
{
};

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm(RRF_NAME, target, RRF_GRADE_SIGN, RRF_GRADE_EXECUTE)
{
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rrfREF): AForm(rrfREF)
{
	this->AForm::operator=(rrfREF);
};

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rrfREF)
{
	if (this != &rrfREF)
	{
	}
	return (*this);
};

RobotomyRequestForm::~RobotomyRequestForm(void)
{
};

void	RobotomyRequestForm::executeAction(void) const
{
	srand(time(NULL));
	if (rand() % 2)
	{
		std::cout << "*** DRILLING NOISES *** "
			<< getTarget()
			<< " has been robotomized."
			<< std::endl;
	}
	else
	{
		std::cout << "Robotomy failed!"
			<< std::endl;
	}
};
