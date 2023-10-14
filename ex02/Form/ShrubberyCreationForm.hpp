/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:02:31 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 14:45:37 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SHRUBBERY_CREATION_FORM_HPP
# define	SHRUBBERY_CREATION_FORM_HPP

# include	<iostream>
# include	"AForm.hpp"

# define	SCF_NAME			"shruberry creation"
# define	SCF_GRADE_SIGN		145
# define	SCF_GRADE_EXECUTE	137
# define	DEFAULT_TARGET		"DEFAULT_TARGET"

# define	FILE_NAME_EXT		"_shrubbery"
# define	TREE_ASCII			"  ,d                                      \n  88                                      \nMM88MMM 8b,dPPYba,  ,adPPYba,  ,adPPYba,  \n  88    88P\'   \"Y8 a8P_____88 a8P_____88  \n  88    88         8PP\"\"\"\"\"\"\" 8PP\"\"\"\"\"\"\"  \n  88,   88         \"8b,   ,aa \"8b,   ,aa  \n  \"Y888 88          `\"Ybbd8\"\'  `\"Ybbd8\"\'  \n"

class	ShruberryCreationForm: public AForm {
		private:
		protected:
		public:
			ShruberryCreationForm(void);
			ShruberryCreationForm(std::string target);
			ShruberryCreationForm(const ShruberryCreationForm &scfREF);
			ShruberryCreationForm	&operator=(const ShruberryCreationForm &scfREF);
			~ShruberryCreationForm(void);

			void		executeAction(void) const;
};

#endif