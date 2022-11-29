#include "Ice.hpp"

// Constructors
Ice::Ice()
{
	_type = "ice";
}

Ice::Ice(const Ice &copy)
{
	_type = copy.getType();
}


// Destructor
Ice::~Ice()
{
}


// Operators
Ice & Ice::operator=(const Ice &assign)
{
	_type = assign.getType();
	return *this;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}