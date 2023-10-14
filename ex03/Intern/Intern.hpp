/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:08:47 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 16:39:57 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		INTERN_HPP
# define	INTERN_HPP

# include	"AForm.hpp"
# include	"ShrubberyCreationForm.hpp"
# include	"RobotomyRequestForm.hpp"
# include	"PresidentialPardonForm.hpp"

class	Intern {
	private:
	protected:
	public:
		Intern(void);
		Intern(const Intern &internREF);
		Intern	&operator=(const Intern &internREF);
		~Intern(void);

		// typedef AForm	*(Intern::*t_create_form_fun)(std::string) const;
		AForm	*createShrubberyCreationF(std::string target) const;
		AForm	*createRobotomyRequestF(std::string target) const;
		AForm	*createPresidentialPardonF(std::string target) const;
		AForm	*makeForm(std::string formType, std::string target) const;

		class	InvalidFormTypeException;
};


#endif