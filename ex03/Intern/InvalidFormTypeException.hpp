/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InvalidFormTypeException.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:37:30 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 16:38:13 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		INVALID_FORM_TYPE_EXCEPTION_HPP
# define	INVALID_FORM_TYPE_EXCEPTION_HPP

# include	<exception>
# include	"Intern.hpp"

class	Intern::InvalidFormTypeException: public std::exception {
	private:
	protected:
	public:
		const char	*what(void) const throw();
};

#endif