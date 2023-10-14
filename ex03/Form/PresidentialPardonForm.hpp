/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:14:53 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 14:08:06 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PRESIDENTIAL_PARDON_FORM
# define	PRESIDENTIAL_PARDON_FORM

# include	<iostream>
# include	"AForm.hpp"

# define	PPF_NAME			"presidential pardon"
# define	PPF_GRADE_SIGN		25
# define	PPF_GRADE_EXECUTE	5
# define	DEFAULT_TARGET		"DEFAULT_TARGET"

class	PresidentialPardonForm: public AForm {
		private:
		protected:
		public:
			PresidentialPardonForm(void);
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm(const PresidentialPardonForm &ppfREF);
			PresidentialPardonForm	&operator=(const PresidentialPardonForm &ppfREF);
			~PresidentialPardonForm(void);

			void		executeAction(void) const;
};

#endif