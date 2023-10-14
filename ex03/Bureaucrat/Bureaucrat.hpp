/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:30:37 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 14:59:12 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BUREAUCRAT_HPP
# define	BUREAUCRAT_HPP

# include	<iostream>
# include	"AForm.hpp"

# define	HIGHEST_GRADE	1
# define	LOWEST_GRADE	150
# define	DEFAULT_GRADE	(HIGHEST_GRADE + LOWEST_GRADE) / 2
# define	DEFAULT_NAME	"DEFAULT_NAME"

class	AForm;

class	Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	protected:
	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &bureaucratREF);
		Bureaucrat	&operator=(const Bureaucrat &bureaucratREF);
		~Bureaucrat(void);

		Bureaucrat(std::string name, int grade);
		const std::string	&getName(void) const;
		const int			&getGrade(void) const;

		void				increaseGrade(void);
		void				decreaseGrade(void);
		void				signForm(AForm &aformREF) const;
		void				executeForm(AForm &aformREF) const;

		class	GradeTooHighException;
		class	GradeTooLowException;
};

std::ostream	&operator<<(std::ostream &lhs_ostreamREF, const Bureaucrat &rhs_bureaucratREF);

#endif