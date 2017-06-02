#pragma once
#include "Domain.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class ShopBag {

protected:
	std::vector<Coat> v;// Acts as a repository of coats(the shop bag)
	int price;// Variable where we keep the total sum of the elements' prices from the shopbag.

public:

	//Costructor
	ShopBag() : price(0) {};

	//Gets a coat object and adds it to the shop bag
	void add(Coat x);

	//Prints the repository
	void print();

	//Returns the total price 
	int get_bagPrice();

	//output: pointer to the first coat in the bag
	std::vector<Coat>& getAll(){return this->v;};

	//returns the size of the bag
	int getSize();

};