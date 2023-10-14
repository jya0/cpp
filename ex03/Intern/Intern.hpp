/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:08:47 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 19:26:48 by jyao             ###   ########.fr       */
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

		enum formtypes {
			T_SHRUBBERY_CREATION = 0,
			T_ROBOTOMY_REQUEST,
			T_PRESIDENTIAL_PARDON,
			T_FORM_COUNT	
		};
		typedef AForm	*(Intern::*t_create_form_func)(std::string) const;
		static const t_create_form_func	createFormFuncs[T_FORM_COUNT];
		static const std::string		formTypes[T_FORM_COUNT];

		AForm	*createShrubberyCreationF(std::string target) const;
		AForm	*createRobotomyRequestF(std::string target) const;
		AForm	*createPresidentialPardonF(std::string target) const;
		AForm	*makeForm(std::string formType, std::string target) const;

		class	InvalidFormTypeException;
};


#endif