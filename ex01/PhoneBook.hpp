/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:37:59 by marvin            #+#    #+#             */
/*   Updated: 2024/08/22 22:37:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		contactCount;

	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(Contact contact);
		Contact	getContact(int index);
		int		getContactCount();
};

#endif
