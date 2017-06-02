#pragma once
#include "FileShopBag.h"
#include <string>

class CSVShopBag : public FileShopBag
{
public:
	/*
	Writes the shopping basket to file.
	Throws: FileException - if it cannot write.
	*/
	void writeToFile() override;

	/*
	Displays the bag using Microsoft Excel.
	*/
	void displayShopBag() const override;
};

