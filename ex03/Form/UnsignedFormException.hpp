/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UnsignedFormException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:18:58 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 13:19:30 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		AFORM_UNSIGNED_FORM_EXCEPTION_HPP
# define	AFORM_UNSIGNED_FORM_EXCEPTION_HPP

# include	<exception>
# include	"AForm.hpp"

class	AForm::UnsignedFormException: public std::exception {
	private:
	protected:
	public:
		const char	*what(void) const throw();
};

#endif