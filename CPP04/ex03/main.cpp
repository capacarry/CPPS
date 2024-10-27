#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void testLearnMoreMateriaThanCapacity() {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice()); // This should not be learned
    delete src;
}

void testUseUninitializedMateriaSlots() {
    ICharacter* me = new Character("me");
    ICharacter* bob = new Character("bob");
    std::cout << " -- Unitialized Materia test --" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
}

void testEquipMoreMateriaThanCapacity() {
  ICharacter* character = new Character("Test");
    AMateria* mat1 = new Ice();
    AMateria* mat2 = new Cure();
    AMateria* mat3 = new Ice();
    AMateria* mat4 = new Cure();
    AMateria* mat5 = new Ice();

    std::cout << " --Equip more then capacity test --" << std::endl;
    character->equip(mat1);
    character->equip(mat2);
    character->equip(mat3);
    character->equip(mat4);
    character->equip(mat5);  

    delete mat1;
    delete mat2;
    delete mat3;
    delete mat4;
    delete character;
}

void testCreateMateriaNotLearned() 
{
    {
    IMateriaSource* src = new MateriaSource();
    AMateria* tmp = src->createMateria("fire");
      std::cout << "-- Create materia not learned test --" << std::endl;
    if (tmp == NULL) {
        std::cout << "good" << std::endl;
    } else {
        std::cout << "bad" << std::endl;
    }
    delete src;
    }
    {
         IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());  // Learn "Ice" Materia
    AMateria* tmp = src->createMateria("ice");
    std::cout << "-- Create learned materia test --" << std::endl;
    if (tmp != NULL) {
        std::cout << "good" << std::endl;  // Expected behavior, as "ice" was learned
    } else {
        std::cout << "bad" << std::endl;
    }
    delete src;
    }
}


int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete (bob);
	delete (me);
	delete (src);
    

	testLearnMoreMateriaThanCapacity();
    testUseUninitializedMateriaSlots();
    testEquipMoreMateriaThanCapacity();
    testCreateMateriaNotLearned();
	return (0);


}
