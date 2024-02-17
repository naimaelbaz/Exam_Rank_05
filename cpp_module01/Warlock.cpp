#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) : name(name), title(title)
{
	std::cout<< this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!\n";
}

const std::string& Warlock::getName() const
{
	return this->name;
}

const std::string& Warlock::getTitle() const{
	return this->title;
}

void Warlock::setTitle(const std::string& title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name <<", " << this->title << "!\n";
}

void Warlock::learnSpell(ASpell *ptr)
{
	spells[ptr->getName()] = ptr;
}
void Warlock::forgetSpell(std::string name)
{
	spells.erase(name);
}

void Warlock::launchSpell(std::string name, const ATarget& obj)
{
	std::map<std::string, ASpell*>::iterator it = spells.find(name);
	if (it != spells.end())
		it->second->launch(obj);
}