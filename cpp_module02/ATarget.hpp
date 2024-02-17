#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ATarget
{
private:
	std::string type;
public:
	ATarget();
	ATarget(std::string type);
	ATarget(const ATarget& obj);
	ATarget& operator=(const ATarget& obj);
	virtual ~ATarget();

	std::string getType() const;

	virtual ATarget *clone() const = 0;
	void getHitBySpell(const ASpell& obj) const;
};

#endif