#include "Domain.h"
#include "Util.h"

#include <shellapi.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Coat::Coat(int size, const std::string& color, int price, int quantity, const std::string& photo,int length)
{
	this->size = size;
	this->color = color;
	this->price = price;
	this->quantity = quantity;
	this->photo = photo;
	this->length = length;
}

void Coat::print_coat()
{
	std::cout << "Size: " << this->size << "| Color: " << this->color << "| Price: " << this->price << "| Quantity: " << this->quantity <<"| Length: "<< this->length <<'\n';
	std::cout << "Photo: " << this->photo <<"\n";
	std::cout << '\n';
}

void Coat::see_photo()
{
	ShellExecuteA(NULL, NULL, "chrome.exe", this->get_photo().c_str(), NULL, SW_SHOWMAXIMIZED);

}

bool Coat::operator==(const Coat& anotherCoat) {
	return this->get_size() == anotherCoat.size && this->get_color() == anotherCoat.color;
}

bool Coat::operator>(int cmpLength) {
	return this->length > cmpLength;
}

ostream & operator<<(ostream & stream, const Coat & c) {
	stream << c.size << "," << c.color << "," << c.price << "," << c.quantity<< "," << c.photo << "," << c.length << "\n";
	return stream;
}

//istream & operator >> (istream & stream, Coat & c) {
//	stream >> c.size >> c.color >> c.price >> c.quantity >> c.photo >> c.length;
//	return stream;
//}
istream & operator >> (istream & is, Coat & c) {
	string line;
	getline(is, line);
	vector<string> tokens = tokenize(line, ',');

	if (tokens.size() != 6) 
		return is;

	c.size = std::stoi(tokens[0]);
	c.color = tokens[1];
	c.price= std::stoi(tokens[2]);
	c.quantity = std::stoi(tokens[3]);
	c.photo = tokens[4];
	c.length = std::stoi(tokens[5]);
	return is;
}