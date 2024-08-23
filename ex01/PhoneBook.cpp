/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:40:55 by marvin            #+#    #+#             */
/*   Updated: 2024/08/22 22:40:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contactCount = 0;
}

PhoneBook::~PhoneBook() { }

void	PhoneBook::addContact(Contact contact)
{
	if (contactCount < 8)
	{
		contacts[contactCount] = contact;
		contactCount++;
	}
	else
		contacts[7] = contact;
}

Contact	PhoneBook::getContact(int index) const
{
	if (index >= 0 && index < contactCount)
		return contacts[index];
	else
		return Contact();
}

int	PhoneBook::getContactCount() const
{
	return contactCount;
}
