/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:07:55 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 19:45:17 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ShrubberyCreationForm.hpp"
#include	<fstream>
#include	<cstdio>

ShruberryCreationForm::ShruberryCreationForm(void): AForm(SCF_NAME, DEFAULT_TARGET, SCF_GRADE_SIGN, SCF_GRADE_EXECUTE)
{
};

ShruberryCreationForm::ShruberryCreationForm(std::string target): AForm(SCF_NAME, target, SCF_GRADE_SIGN, SCF_GRADE_EXECUTE)
{
};

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm &scfREF): AForm(scfREF)
{
	this->AForm::operator=(scfREF);
};

ShruberryCreationForm	&ShruberryCreationForm::operator=(const ShruberryCreationForm &scfREF)
{
	if (this != &scfREF)
	{
	}
	return (*this);
};

void	ShruberryCreationForm::executeAction(void) const
{
	std::ofstream	fileOut;

	fileOut.open(std::string(getTarget() + FILE_NAME_EXT).c_str(), std::ios::out | std::ios::app);
	if (fileOut.is_open())
	{
		fileOut << TREE_ASCII
			<< std::endl;
		fileOut.close();
	}
	else
		std::cerr << "Unable to open file!" << std::endl;
}

ShruberryCreationForm::~ShruberryCreationForm(void)
{
	std::string	fileName;

	fileName = getTarget() + FILE_NAME_EXT;
	if (remove(fileName.c_str()))
		std::cerr << "Failed to remove file "
			<< fileName
			<< std::endl;
};
