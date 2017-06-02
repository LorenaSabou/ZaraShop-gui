#include "Controller.h"
#include <vector>
#include <algorithm>
#include "CoatValidator.h"
using namespace std;

bool Controller::add_repo(Coat x)
{	

	this->validator.validate(x);
	return this->repo.add(x);
}

bool Controller::del_repo(Coat x)
{
	return this->repo.del(x);
}

bool Controller::update_repo(Coat x, Coat y)
{
	return this->repo.update(x, y);
}

void Controller::print_repo()
{
	return this->repo.print();
}

void Controller::add_bag(Coat x)
{
	if (this->bag == nullptr)
		return;
	this->bag->add(x);
}

int Controller::get_price_bag()
{
	return this->bag->get_bagPrice();
}

void Controller::print_bag()
{
	this->bag->print();
}

vector <Coat>& Controller::getAll_repo()
{
	return this->repo.getAll();
}

int Controller::getSize_repo()
{
	return this->repo.getSize();
}

vector<Coat> Controller::filter(int len)
{
	vector<Coat> vec = this->getAll_repo();
	vector<Coat> results;

	for (auto it : vec) 
		if (it > len)
			results.push_back(it);
	//copy_if(vec.begin(), vec.end(), back_inserter(results), [](const int len) { return vec < len ; });

	return results;
}

void Controller::saveShopBag(const std::string& filename)
{
	if (this->bag == nullptr)
		return;

	this->bag->setFilename(filename);
	this->bag->writeToFile();
}

void Controller::openShopBag() const
{
	if (this->bag == nullptr)
		return;

	this->bag->displayShopBag();
}

