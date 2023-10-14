/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:15:47 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 14:03:54 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		AFORM_HPP
# define	AFORM_HPP

# include	<iostream>
# include	"Bureaucrat.hpp"

# define	HIGHEST_GRADE	1
# define	LOWEST_GRADE	150
# define	DEFAULT_GRADE	(HIGHEST_GRADE + LOWEST_GRADE) / 2
# define	DEFAULT_NAME	"DEFAULT_NAME"
# define	DEFAILT_ISSIGNED	false
# define	DEFAULT_TARGET	"DEFAULT_TARGET"

class	Bureaucrat;

class	AForm {
	private:
		const std::string	_name;
		const std::string	_target;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	protected:
		virtual void		executeAction(void) const = 0;
	public:
		AForm(void);
		AForm(const AForm &aformREF);
		AForm	&operator=(const AForm &aformREF);
		virtual ~AForm(void);

		AForm(std::string name, std::string target, int gradeToSign, int gradeToExecute);
		const std::string	&getName(void) const;
		const std::string	&getTarget(void) const;
		const bool			&getIsSigned(void) const;
		const int			&getGradeToSign(void) const;
		const int			&getGradeToExecute(void) const;

		void				beSigned(const Bureaucrat &bureaucratREF);
		void				execute(const Bureaucrat &bureaucratREF) const;

		class	GradeTooHighException;
		class	GradeTooLowException;
		class	UnsignedFormException;
};

std::ostream	&operator<<(std::ostream &lhs_ostreamREF, const AForm &rhs_aformREF);

#endif