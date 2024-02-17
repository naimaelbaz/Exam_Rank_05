#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
private:
	std::map<std::string, ASpell*> spells;
	SpellBook(const SpellBook& obj);
	SpellBook& operator=(const SpellBook& obj);
public:
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell *ptr);
	void forgetSpell(std::string const &name);
	ASpell* createSpell(std::string const &name);
};

#endif