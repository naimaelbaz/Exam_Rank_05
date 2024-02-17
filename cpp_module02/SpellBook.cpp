#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell *ptr)
{
	spells[ptr->getName()] = ptr;
}
void SpellBook::forgetSpell(std::string const &name)
{
	spells.erase(name);
}

ASpell* SpellBook::createSpell(std::string const &name)
{
	std::map<std::string, ASpell*>::iterator it = spells.find(name);
	if (it != spells.end())
		return it->second;
	return NULL;
}