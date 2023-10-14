/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:04:19 by jyao              #+#    #+#             */
/*   Updated: 2023/10/13 18:02:57 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		AFORM_GRADE_TOO_HIGH_EXCEPTION_HPP
# define	AFORM_GRADE_TOO_HIGH_EXCEPTION_HPP

# include	<exception>
# include	"AForm.hpp"

class	AForm::GradeTooHighException: public std::exception {
	private:
	protected:
	public:
		const char	*what(void) const throw();
};

#endif