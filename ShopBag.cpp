#include "ShopBag.h"
#include <fstream>
#include <vector>
#include <cassert>
#include <string>
using namespace std;

void ShopBag::add(Coat x)
{
	this->v.push_back(x);
	this->price += x.get_price();
}

void ShopBag::print()
{
	int sum = 0;

	if (this->v.size() == 0) {
		std::cout << "Empty cart!" << "\n";
		return;
	}
	for (auto it : this->v){
		std::cout << "Size: " << it.get_size() << " Color: " << it.get_color() << " Price: " << it.get_price() << '\n';
		sum += it.get_price();
	}
	
	cout << "\n Total sum:" << sum << "\n";

	
}

int ShopBag::get_bagPrice()
{
	return this->price;
}


int ShopBag::getSize()
{
	return this->v.size();
}
