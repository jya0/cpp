/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:51:46 by jyao              #+#    #+#             */
/*   Updated: 2023/10/14 14:03:54 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ROBOTOMY_REQUEST_FORM_HPP
# define	ROBOTOMY_REQUEST_FORM_HPP

# include	<iostream>
# include	"AForm.hpp"

# define	RRF_NAME			"robotomy request"
# define	RRF_GRADE_SIGN		72
# define	RRF_GRADE_EXECUTE	45
# define	DEFAULT_TARGET		"DEFAULT_TARGET"

class	RobotomyRequestForm: public AForm {
		private:
		protected:
		public:
			RobotomyRequestForm(void);
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm(const RobotomyRequestForm &rrfREF);
			RobotomyRequestForm	&operator=(const RobotomyRequestForm &rrfREF);
			~RobotomyRequestForm(void);

			void		executeAction(void) const;
};

#endif