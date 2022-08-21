#include <iostream>

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

namespace {

void leak_check() {
  std::string n;

  std::cout << "\n[Leak Check]" << std::endl;
  system("leaks cpp04_ex03.out | grep Process");

  std::cout << std::endl << "* please press Enter to do Next Test! *" << std::endl;
  std::getline(std::cin, n);
}

void my_test() {
  std::string n;
  Character   target;
  AMateria*   ap;

  // Ice Test
  Ice* ice = new Ice;

  std::cout << "[AMateria Test]" << std::endl;
  std::cout << "type_   : " << ice->getType() << std::endl;
  std::cout << "usable_ : " << ice->getDroppedStatus() << std::endl;
  ice->setDroppedStatus(YES);
  std::cout << "after setUsable : " << ice->getDroppedStatus() << std::endl;

  std::cout << std::endl << "[Ice Test]" << std::endl;
  std::cout << "Use:" << std::endl;
  ice->use(target);

  ap = ice->clone();
  std::cout << "Clone:" << std::endl;
  std::cout << "type_   : " << ap->getType() << std::endl;
  std::cout << "usable_ : " << ap->getDroppedStatus() << std::endl;
  ap->setDroppedStatus(NO);
  std::cout << "after setUsable : " << ap->getDroppedStatus() << std::endl;
  std::cout << "Use:" << std::endl;
  ap->use(target);
  delete ap;
  delete ice;
  leak_check();

  // Cure Test
  Cure* cure = new Cure;

  std::cout << "[AMateria Test]" << std::endl;
  std::cout << "type_   : " << cure->getType() << std::endl;
  std::cout << "usable_ : " << cure->getDroppedStatus() << std::endl;
  cure->setDroppedStatus(YES);
  std::cout << "after setUsable : " << cure->getDroppedStatus() << std::endl;

  std::cout << std::endl << "[Cure Test]" << std::endl;
  std::cout << "Use:" << std::endl;
  cure->use(target);

  ap = cure->clone();
  std::cout << "Clone:" << std::endl;
  std::cout << "type_   : " << ap->getType() << std::endl;
  std::cout << "usable_ : " << ap->getDroppedStatus() << std::endl;
  ap->setDroppedStatus(NO);
  std::cout << "after setUsable : " << ap->getDroppedStatus() << std::endl;
  std::cout << "Use:" << std::endl;
  ap->use(target);

  delete ap;
  delete cure;
  leak_check();

  // Character Test
  std::cout << "[Character Basic Test]" << std::endl;
  ICharacter* c1 = new Character("kipark");
  ICharacter& cr1 = *c1;

  std::cout << "getName : " << cr1.getName() << std::endl;
  cr1.equip(new Ice);
  cr1.equip(new Cure);
  cr1.equip(new Cure);
  cr1.equip(new Ice);
  cr1.unequip(1);
  cr1.unequip(2);
  cr1.use(0, target);
  cr1.use(1, target);
  cr1.use(2, target);
  cr1.use(3, target);

  delete c1;
  leak_check();

  std::cout << "[Character Use Test]" << std::endl;
  Character* c2 = new Character("jibae");
  Character& cr2 = *c2;

  std::cout << "getName : " << cr2.getName() << std::endl;
  cr2.equip(new Ice);
  cr2.equip(new Cure);
  cr2.equip(new Cure);
  cr2.use(0, target);
  cr2.use(1, target);
  cr2.use(2, target);
  cr2.use(3, target);
  std::cout << "test index out of range:" << std::endl;
  cr2.use(-1, target);
  cr2.use(4, target);

  delete c2;
  leak_check();

  std::cout << "[Character Equip Test]" << std::endl;
  Character* c3 = new Character("jkong");
  Character& cr3 = *c3;

  std::cout << "getName : " << cr3.getName() << std::endl;
  cr3.equip(new Ice);
  cr3.equip(new Ice);
  cr3.equip(new Ice);
  cr3.equip(new Ice);
  cr3.equip(new Cure);
  cr3.use(0, target);
  cr3.use(1, target);
  cr3.use(2, target);
  cr3.use(3, target);

  delete c3;
  leak_check();

  std::cout << "[Character Unequip Test]" << std::endl;
  Character* c4 = new Character("mgo");
  Character& cr4 = *c4;

  std::cout << "getName : " << cr4.getName() << std::endl;
  cr4.unequip(1);
  cr4.equip(new Ice);
  cr4.equip(new Ice);
  cr4.use(0, target);
  cr4.use(1, target);
  cr4.unequip(0);
  cr4.unequip(0);
  cr4.unequip(-1);
  cr4.unequip(4);

  delete c4;
  leak_check();

  // MateriaSource Test
  std::cout << "[MateriaSource Test]" << std::endl;

  IMateriaSource* msc_ptr = new MateriaSource();

  msc_ptr->learnMateria(new Ice);
  msc_ptr->learnMateria(new Ice);
  msc_ptr->learnMateria(new Ice);
  msc_ptr->learnMateria(new Ice);
  msc_ptr->learnMateria(new Cure);

  AMateria* m;
  m = msc_ptr->createMateria("cure");
  if (m)
    std::cout << m->getType() << std::endl;
  else
    std::cout << "materia isn't created" << std::endl;
  m = msc_ptr->createMateria("ice");
  if (m)
    std::cout << m->getType() << std::endl;
  else
    std::cout << "materia isn't created" << std::endl;

  delete msc_ptr;
  leak_check();
}
}  // namespace

int main() {
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  ICharacter* me = new Character("me");
  AMateria*   tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  ICharacter* bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);
  delete bob;
  delete me;
  delete src;

  my_test();

  return 0;
}