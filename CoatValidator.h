#pragma once
#include <string>
#include "Domain.h"
#include <vector>

class CoatException
{
private:
	std::vector<std::string> errors;

public:
	CoatException(std::vector<std::string> _errors): errors{ _errors } {};
	std::string getErrorsAsString() const;
	std::vector<std::string> getErrors() const;
};

class CoatValidator
{
public:
	CoatValidator() {}
	static void validate(const Coat& c);
};


