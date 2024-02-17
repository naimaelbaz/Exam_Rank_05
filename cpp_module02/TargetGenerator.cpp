#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget *ptr)
{
	book[ptr->getType()] = ptr;
}
void TargetGenerator::forgetTargetType(std::string const &type)
{
	book.erase(type);
}

ATarget* TargetGenerator::createTarget(std::string const &type)
{
	std::map<std::string, ATarget*>::iterator it = book.find(type);
	if (it != book.end())
		return it->second;
	return NULL;
}