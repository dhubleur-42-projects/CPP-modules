/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:46:43 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 18:04:11 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

# include <iostream>
# include <cstdlib>

Base * generate(void)
{
	int random = rand()%3;
	if(random == 1)
		return new A();
	else if(random == 2)
		return new B();
	else
		return new C();
}

void identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	if(a)
		std::cout << "Detected type from pointer is: A";
	B* b = dynamic_cast<B*>(p);
	if(b)
		std::cout << "Detected type from pointer is: B";
	C* c = dynamic_cast<C*>(p);
	if(c)
		std::cout << "Detected type from pointer is: C";
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Detected type from reference is: A";
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Detected type from reference is: B";
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Detected type from reference is: C";
	}
	catch (std::exception &e)
	{
		(void)e;
	}
}

int main()
{
	srand(time(NULL));
	for(int i =0; i < 10; i++)
	{
		Base *p = generate();
		std::cout << "Test " << i << ": ";
		identify(p);
		std::cout << ", ";
		identify(*p);
		std::cout << std::endl;
		delete(p);
	}
}