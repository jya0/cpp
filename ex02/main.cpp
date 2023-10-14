/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:27:54 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 15:27:04 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"
#include	"ShrubberyCreationForm.hpp"
#include	"RobotomyRequestForm.hpp"
#include	"PresidentialPardonForm.hpp"

static void	pauseFunction()
{
	std::cout << "Press enter to continue... ";
	std::cin.get();
}

int	main(void)
{
	{
		std::cout << "____________________________________" << std::endl;
		std::cout << "TEST 1 testing all successful executes" << std::endl;
		AForm			*scfForm;
		AForm			*rrfForm;
		AForm			*ppfForm;

		scfForm	= new ShruberryCreationForm("home");
		rrfForm = new RobotomyRequestForm("MLBB");
		ppfForm = new PresidentialPardonForm("Inshallah");
		try {
			Bureaucrat	bozoA("BozoA", 1);

			bozoA.signForm(*scfForm);
			bozoA.executeForm(*scfForm);
			bozoA.signForm(*rrfForm);
			bozoA.executeForm(*rrfForm);
			bozoA.signForm(*ppfForm);
			bozoA.executeForm(*ppfForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		pauseFunction();
		delete (scfForm);
		delete (rrfForm);
		delete (ppfForm);
	}
	{
		std::cout << "____________________________________" << std::endl;
		std::cout << "TEST 2 testing all execute unsigned form" << std::endl;
		AForm			*scfForm;
		AForm			*rrfForm;
		AForm			*ppfForm;

		scfForm	= new ShruberryCreationForm("home");
		rrfForm = new RobotomyRequestForm("MLBB");
		ppfForm = new PresidentialPardonForm("Inshallah");
		try {
			Bureaucrat	bozoA("BozoA", 1);

			bozoA.executeForm(*scfForm);
			bozoA.executeForm(*rrfForm);
			bozoA.executeForm(*ppfForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		pauseFunction();
		delete (scfForm);
		delete (rrfForm);
		delete (ppfForm);
	}
	{
		std::cout << "____________________________________" << std::endl;
		std::cout << "TEST 3 testing all unsuccessful executes" << std::endl;
		AForm			*scfForm;
		AForm			*rrfForm;
		AForm			*ppfForm;

		scfForm	= new ShruberryCreationForm("home");
		rrfForm = new RobotomyRequestForm("MLBB");
		ppfForm = new PresidentialPardonForm("Inshallah");
		try {
			Bureaucrat	bozoA("BozoA", 1);
			Bureaucrat	bozoB("BozoB", 150);

			bozoA.signForm(*scfForm);
			bozoB.executeForm(*scfForm);
			bozoA.signForm(*rrfForm);
			bozoB.executeForm(*rrfForm);
			bozoA.signForm(*ppfForm);
			bozoB.executeForm(*ppfForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		pauseFunction();
		delete (scfForm);
		delete (rrfForm);
		delete (ppfForm);
	}
	{
		std::cout << "____________________________________" << std::endl;
		std::cout << "TEST 4 testing exact bureaucrat grades" << std::endl;
		AForm			*scfForm;
		AForm			*rrfForm;
		AForm			*ppfForm;

		scfForm	= new ShruberryCreationForm("home");
		rrfForm = new RobotomyRequestForm("MLBB");
		ppfForm = new PresidentialPardonForm("Inshallah");
		try {
			Bureaucrat	bozoSCF("BozoSCF", SCF_GRADE_EXECUTE);
			Bureaucrat	bozoRRF("BozoRRF", RRF_GRADE_EXECUTE);
			Bureaucrat	bozoPPF("BozoPPF", PPF_GRADE_EXECUTE);

			bozoSCF.signForm(*scfForm);
			bozoSCF.executeForm(*scfForm);
			bozoRRF.signForm(*rrfForm);
			bozoRRF.executeForm(*rrfForm);
			bozoPPF.signForm(*ppfForm);
			bozoPPF.executeForm(*ppfForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		pauseFunction();
		delete (scfForm);
		delete (rrfForm);
		delete (ppfForm);
	}
	return (0);
}