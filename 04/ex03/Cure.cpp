#include "Cure.hpp"

// Constructors
Cure::Cure()
{
	_type = "cure";
}

Cure::Cure(const Cure &copy)
{
	_type = copy.getType();
}


// Destructor
Cure::~Cure()
{
}


// Operators
Cure & Cure::operator=(const Cure &assign)
{
	_type = assign.getType();
	return *this;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}