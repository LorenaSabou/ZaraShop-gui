#include "CoatValidator.h"

using namespace std;


std::vector<std::string> CoatException::getErrors() const
{
	return this->errors;
}
std::string CoatException::getErrorsAsString() const
{
	string err;
	for (auto e : this->errors)
		err += e;
	return err;
}
void CoatValidator::validate(const Coat & c)
{
	vector<string> errors;
	if (c.get_size() < 30 || c.get_size() > 50)
		errors.push_back("The size must be an integer between 30 and 50!\n");
	if (c.get_color().size() < 3)
		errors.push_back("The colour cannot be less than 3 characters!\n");
	if (c.get_price() < 0)
		errors.push_back("Price cannot be a negative number!\n");
	if (c.get_quantity() < 0)
		errors.push_back("Quantity cannot be negative!\n");
	if (c.get_length() < 0)
		errors.push_back("Length cannot be negative!\n");


	// search for "www" or "http" at the beginning of the source string
	int posWww = c.get_photo().find("www");
	int posHttp = c.get_photo().find("http");
	if (posWww != 0 && posHttp != 0)
		errors.push_back("The photo source must start with one of the following strings: \"www\" or \"http\"");

	if (errors.size() > 0)
		throw CoatException(errors);
}
