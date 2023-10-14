/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:15:47 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 12:04:47 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FORM_HPP
# define	FORM_HPP

# include	<iostream>
# include	"Bureaucrat.hpp"

# define	HIGHEST_GRADE	1
# define	LOWEST_GRADE	150
# define	DEFAULT_GRADE	(HIGHEST_GRADE + LOWEST_GRADE) / 2
# define	DEFAULT_NAME	"DEFAULT_NAME"
# define	DEFAILT_ISSIGNED	false

class	Bureaucrat;

class	Form {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	protected:
	public:
		Form(void);
		Form(const Form &formREF);
		Form	&operator=(const Form &formREF);
		~Form(void);

		Form(std::string name, int gradeToSign, int gradeToExecute);
		const std::string	&getName(void) const;
		const bool			&getIsSigned(void) const;
		const int			&getGradeToSign(void) const;
		const int			&getGradeToExecute(void) const;

		void				beSigned(const Bureaucrat &bureaucratREF);

		class	GradeTooHighException;
		class	GradeTooLowException;
};

std::ostream	&operator<<(std::ostream &lhs_ostreamREF, const Form &rhs_formREF);

#endif