/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:04:19 by jyao              #+#    #+#             */
/*   Updated: 2023/10/13 17:21:37 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FORM_GRADE_TOO_HIGH_EXCEPTION_HPP
# define	FORM_GRADE_TOO_HIGH_EXCEPTION_HPP

# include	<exception>
# include	"Form.hpp"

class	Form::GradeTooHighException: public std::exception {
	private:
	protected:
	public:
		const char	*what(void) const throw();
};

#endif