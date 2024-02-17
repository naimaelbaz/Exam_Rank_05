#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(std::string type) : type(type){}

ATarget::ATarget(const ATarget& obj)
{
	*this = obj;
}
ATarget& ATarget::operator=(const ATarget& obj)
{
	if (this == &obj)
		return(*this);
	this->type = obj.type;
	return(*this);
}

ATarget::~ATarget(){}

std::string ATarget::getType() const
{
	return this->type;
}


void ATarget::getHitBySpell(const ASpell& obj) const
{
	std::cout << this->type << " has been " << obj.getEffects() << "!\n";
}