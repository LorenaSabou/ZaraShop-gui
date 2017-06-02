#pragma once
#include "FileShopBag.h"
#include <string>
class HTMLShopBag : public FileShopBag
{
public:
	/*
	Writes the shopping basket to file.
	Throws: FileException - if it cannot write.
	*/
	void writeToFile() override;

	/*
	Displays the shopping basket using Chrome.
	*/
	void displayShopBag() const override;
};

