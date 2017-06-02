#pragma once
#include <string>
#include <iostream>
#include <Windows.h>
#include <shellapi.h>


class Coat {

protected:
	int size;
	std::string color;
	int price;
	int quantity;
	std::string photo;
	int length;

public:
	Coat() : size(0), color(""), price(0), quantity(0), photo(""),length(0) {};
	Coat(int size, const std::string& color, int price, int quantity, const std::string& photo,int length);
	~Coat() = default;

	int get_price() const{ return price; }
	int get_size() const{ return size; }
	int get_quantity() const{ return quantity; }
	int get_length()const { return length; }
	std::string get_color() const{ return color; }
	std::string get_photo() const{ return photo; }

	void set_price(int p) { this->price = p; }
	void set_size(int s) { this->size = s; }
	void set_length(int l) {this->length = l;}
	void set_color(std::string c) { this->color = c; }
	void set_photo(std::string ph) { this->photo = ph; }
	void set_quantity(int q) { this->quantity = q; }

	void see_photo();
	void print_coat();

	bool operator==(const Coat& anotherCoat);
	bool operator<(const Coat& coat) { return this->price < coat.get_price(); };
	bool operator>(int cmpLenght);
	friend std::istream& operator >> (std::istream& is, Coat& c);
	friend std::ostream& operator<<(std::ostream& os, const Coat& c);
};
