#pragma once
#include "Repository.h"
#include "Domain.h"
#include "FileShopBag.h"
#include "ShopBag.h"
#include "CoatValidator.h"

class Controller {

private:
	Repository repo;
	FileShopBag* bag;
	CoatValidator validator;
public:
	//Required operations on the two lists
	Controller(const Repository& r, FileShopBag* p, CoatValidator v) : repo{ r }, bag{ p }, validator{ v } {};
	bool add_repo(Coat x);
	bool del_repo(Coat x);
	bool update_repo(Coat x, Coat y);
	void print_repo();
	std::vector<Coat> Controller::filter(int len);

	void add_bag(Coat x);
	int get_price_bag();
	void print_bag();

	//Functions which provide informations about the repository 
	std::vector<Coat>& getAll_repo();
	int getSize_repo();

	//Functions which provide information about the shopping bag
	std::vector<Coat>& getAll_bag();
	int getSize_bag();

	FileShopBag* getShopBag() { return bag; }
	/*
	Saves the basket.
	Throws: FileException - if the given file cannot be opened.
	*/
	void Controller::saveShopBag(const std::string& filename);

	/*
	Opens the basket, with an appropriate application.
	Throws: FileException - if the given file cannot be opened.
	*/
	void Controller::openShopBag() const;
};