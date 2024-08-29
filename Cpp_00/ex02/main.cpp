/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:56:00 by fivieira          #+#    #+#             */
/*   Updated: 2024/08/29 17:56:42 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int main()
{
	Account account1(1000);
	Account account2(2000);
	Account::displayAccountsInfos();
	account1.makeDeposit(500);
	account1.makeWithdrawal(200);
	account1.makeWithdrawal(1000);
	account1.makeWithdrawal(1000);
	account1.displayStatus();
	return (0);
}