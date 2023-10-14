/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:27:54 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 17:03:02 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"
#include	"Form.hpp"

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
		std::cout << "TEST 1 initialize with too high grade" << std::endl;
		try {
			Form	formA("MLBB_FEEDBACK", -2347624, -235932);

			std::cout << formA << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		pauseFunction();
	}
	{
		std::cout << "____________________________________" << std::endl;
		std::cout << "TEST 2 initialize with too low grade" << std::endl;
		try {
			Form	formA("MLBB_FEEDBACK", 1246124, 1233247);

			std::cout << formA << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		pauseFunction();
	}
	{
		std::cout << "____________________________________" << std::endl;
		std::cout << "TEST 3 bureaucrat sign form with high enough grade" << std::endl;
		try {
			Bureaucrat	bureaucratA("MLBB", 42);
			Form		formA("MLBB_FEEDBACK", 42, 42);

			std::cout << bureaucratA << std::endl;
			std::cout << formA << std::endl;
			bureaucratA.signForm(formA);
			std::cout << formA << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		pauseFunction();
	}
	{
		std::cout << "____________________________________" << std::endl;
		std::cout << "TEST 4 bureaucrat sign form with low grade" << std::endl;
		try {
			Bureaucrat	bureaucratA("MLBB", 42);
			Form		formA("MLBB_FEEDBACK", 42, 42);

			bureaucratA.decreaseGrade();
			std::cout << bureaucratA << std::endl;
			std::cout << formA << std::endl;
			bureaucratA.signForm(formA);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		pauseFunction();
	}
	{
		std::cout << "____________________________________" << std::endl;
		std::cout << "TEST 5 bureaucrat signing form again" << std::endl;
		try {
			Bureaucrat	bureaucratA("MLBB", 42);
			Form		formA("MLBB_FEEDBACK", 42, 42);

			std::cout << bureaucratA << std::endl;
			std::cout << formA << std::endl;
			bureaucratA.signForm(formA);
			std::cout << formA << std::endl;
			bureaucratA.signForm(formA);
			std::cout << formA << std::endl;
			bureaucratA.signForm(formA);
			std::cout << formA << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		pauseFunction();
	}
	return (0);
}