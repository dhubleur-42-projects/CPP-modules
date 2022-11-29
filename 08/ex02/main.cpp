/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:10:14 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/10 11:40:09 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <iostream>
#include <list>

int main()
{
	{
		std::cout << "========== Subject test : MutantStack ==========" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	
	{
		std::cout << "========== Subject test : List ==========" << std::endl;
		std::list<int> mstack;
		mstack.push_front(5);
		mstack.push_front(17);
		std::cout << mstack.front() << std::endl << std::endl;
		mstack.pop_front();
		std::cout << mstack.size() << std::endl << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	{
		std::cout << "========== Basic test ==========" << std::endl;
		MutantStack<int> mstack;
		for(int i = 0; i < 10; i++)
			mstack.push(i);
		for(int i = 0; i < 10; i++)
		{
			std::cout << mstack.top() << std::endl;
			mstack.pop();
		}
	}

	return 0;
}