#include "Character.hpp"

Character::Character(void)
{
	for (size_t i = 0; i < 4; i++)
		inv[i] = NULL;
}

Character::Character(std::string name) : name(name)
{
	for (size_t i = 0; i < 4; i++)
		inv[i] = NULL;
}

Character::Character(const Character &toCopy) : name(toCopy.name)
{
	(*this) = toCopy;
}

Character	&Character::operator = (const Character &toCopy)
{
	for (size_t i = 0; i < 4; i++)
		inv[i] = toCopy.inv[i];
	return (*this);
}

Character::~Character(void)
{	
}

std::string	const & Character::getName() const
{
	return (name);
}

void		Character::equip(AMateria* m)
{	
	int i = 0;

	while(i < 4)
	{	
		if (inv[i] == NULL)
		{
			inv[i] = m;
			return ;
		}
		i++;
	}
	delete m;
	std::cout << "Inventory is full" << std::endl;
}

void		Character::unequip(int i)
{
	inv[i] = NULL;
}

void		Character::use(int i, ICharacter& target)
{
	if (inv[i] != NULL)
		inv[i]->use(target);
	else
		std::cout << "No materia in slot " << i << std::endl;
}

