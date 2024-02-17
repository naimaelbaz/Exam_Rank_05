#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(){}

ASpell::ASpell(std::string name , std::string effects) : name(name), effects(effects){}

ASpell::ASpell(const ASpell& obj)
{
	*this = obj;
}
ASpell& ASpell::operator=(const ASpell& obj)
{
	if (this == &obj)
		return(*this);
	this->name = obj.name;
	this->effects = obj.effects;
	return(*this);
}

ASpell::~ASpell(){}

std::string ASpell::getName() const
{
	return this->name;
}

std::string ASpell::getEffects() const
{
	return this->effects;
}

void ASpell::launch(const ATarget& obj) const
{
	obj.getHitBySpell(*this);
}
