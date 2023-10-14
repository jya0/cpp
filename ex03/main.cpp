/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:27:54 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 17:07:10 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Intern.hpp"
#include	"AForm.hpp"
#include	"Bureaucrat.hpp"

static void	pauseFunction()
{
	std::cout << "Press enter to continue... ";
	std::cin.get();
	std::cout << std::endl;
}

int	main(void)
{
	{
		std::cout << "____________________________________" << std::endl;
		std::cout << "TEST 1 intern creating all valid forms" << std::endl;
		try {
			AForm		*randomForm;
			Bureaucrat	bozoA("BozoA", 1);
			Intern		internA;

			randomForm = internA.makeForm(SCF_NAME, "Your bed");
			bozoA.signForm(*randomForm);
			bozoA.executeForm(*randomForm);
			pauseFunction();
			delete (randomForm);
			randomForm = internA.makeForm(RRF_NAME, "Your badongadong");
			bozoA.signForm(*randomForm);
			bozoA.executeForm(*randomForm);
			pauseFunction();
			delete (randomForm);
			randomForm = internA.makeForm(PPF_NAME, "Your SUS_DOGE");
			bozoA.signForm(*randomForm);
			bozoA.executeForm(*randomForm);
			pauseFunction();
			delete (randomForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "____________________________________" << std::endl;
		std::cout << "TEST 2 intern creating invalid forms" << std::endl;
		try {
			AForm		*randomForm;
			Bureaucrat	bozoA("BozoA", 1);
			Intern		internA;

			randomForm = internA.makeForm("Can I see your manager", "Your bed");
			bozoA.signForm(*randomForm);
			bozoA.executeForm(*randomForm);
			pauseFunction();
			delete (randomForm);
			randomForm = internA.makeForm("", "Your badongadong");
			bozoA.signForm(*randomForm);
			bozoA.executeForm(*randomForm);
			pauseFunction();
			delete (randomForm);
			randomForm = internA.makeForm("AMOGUS", "Your SUS_DOGE");
			bozoA.signForm(*randomForm);
			bozoA.executeForm(*randomForm);
			pauseFunction();
			delete (randomForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}