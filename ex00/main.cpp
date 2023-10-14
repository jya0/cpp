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
#include	"GradeTooHighException.hpp"
#include	"GradeTooLowException.hpp"

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
			Bureaucrat	bureaucratA("MLBB", -2347624);
			std::cout << bureaucratA << std::endl;
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
			Bureaucrat	bureaucratA("MLBB", 1246124);
			std::cout << bureaucratA << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		pauseFunction();
	}
	{
		std::cout << "____________________________________" << std::endl;
		std::cout << "TEST 3 increase and decrease grade without overflow" << std::endl;
		try {
			Bureaucrat	bureaucratA("MLBB", 42);
			std::cout << bureaucratA << std::endl;
			bureaucratA.increaseGrade();
			std::cout << bureaucratA << std::endl;
			bureaucratA.decreaseGrade();
			bureaucratA.decreaseGrade();
			std::cout << bureaucratA << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		pauseFunction();
	}
	{
		std::cout << "____________________________________" << std::endl;
		std::cout << "TEST 4 increase grade with overflow" << std::endl;
		try {
			Bureaucrat	bureaucratA("MLBB", 2);
			std::cout << bureaucratA << std::endl;
			bureaucratA.increaseGrade();
			std::cout << bureaucratA << std::endl;
			bureaucratA.increaseGrade();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		pauseFunction();
	}
	{
		std::cout << "____________________________________" << std::endl;
		std::cout << "TEST 5 decrease grade with overflow" << std::endl;
		try {
			Bureaucrat	bureaucratA("MLBB", 149);
			std::cout << bureaucratA << std::endl;
			bureaucratA.decreaseGrade();
			std::cout << bureaucratA << std::endl;
			bureaucratA.decreaseGrade();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		pauseFunction();
	}
	return (0);
}