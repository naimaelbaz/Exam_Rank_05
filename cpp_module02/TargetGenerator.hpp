#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
private:
	std::map<std::string, ATarget*> book;
	TargetGenerator(const TargetGenerator& obj);
	TargetGenerator& operator=(const TargetGenerator& obj);
public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget* ptr);
	void forgetTargetType(std::string const &type);
	ATarget* createTarget(std::string const &type);
};

#endif