#include "Repository.h"
#include <fstream>
#include <cassert>
#include <vector>
#include <iostream>
#include <algorithm>
#include "RepositoryExceptions.h"
#include <string>
using namespace std;


Repository::Repository(const std::string& filename)
{
	this->fileName = filename;
	this->readFromFile();
}

void Repository::readFromFile()
{
	ifstream file(this->fileName);

	if (!file.is_open())
		throw FileException("The file could not be opened!");

	Coat c;
	while (file >> c)
		this->v.push_back(c);
	file.close();
	
}

void Repository::writeToFile()
{
	ofstream file(this->fileName);
	if (!file.is_open())
		throw FileException("The file could not be opened!");

	for (auto c : this->v)
	{
		file << c;
	}

	file.close();
}

bool Repository::add(Coat x)
{
	auto pos = find(v.begin(),v.end(), x);
	if (pos != v.end()) {
		throw DuplicateCoatException();
		return false;
	}

	this->v.push_back(x);
	this->writeToFile();
	return true;

}

bool Repository::del(Coat x) //TODO: Not working. can't read string
{
	auto pos = find(this->v.begin(),this->v.end(),x);
	if (pos == this->v.end()) {
		throw InexistentCoatException();
		return false;
	}

	int index = getPosition(x.get_size(),x.get_color());
	this->v.erase(this->v.begin()+index);
	this->writeToFile();
	return true;

	// VERSION WITHOUT THE FIND FUNCTION
	//int i = 0;
	//for (auto coat : this->v) {
	//	if (coat.get_size() == x.get_size() && coat.get_color() == x.get_color())
	//		break;
	//	i++;
	//}

	//if (i == this->v.size())
	//{
	//	throw InexistentCoatException();
	//	return false;
	//}
	//else
	//{
	//	this->v.erase(this->v.begin() + i);
	//	this->writeToFile();
	//	return true;
	//}
}

bool Repository::update(Coat x, Coat y)
{
	auto pos = find(this->v.begin(), this->v.end(), x);
	if (pos == this->v.end()) {
		throw InexistentCoatException();
		return false;
	}
	this->del(x);
	this->add(y);
	this->writeToFile();

	return true;
}


void Repository::print()
{
	for (auto it : v)
		it.print_coat();
}

int Repository::getSize()
{
	return this->v.size();
}

vector<Coat>& Repository::getAll()
{
	return this->v;
}

int Repository::getPosition(int size,const string& color)
{
	int counter = 0;
	for (Coat mov : v)
	{
		if (mov.get_size() == size && mov.get_color()==color)
			return counter;
		counter++;
	}
	return -1;
}