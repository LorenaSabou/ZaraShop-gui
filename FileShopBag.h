#pragma once
#include "ShopBag.h"

class FileShopBag : public ShopBag
{
protected:
	std::string filename;

public:
	FileShopBag();
	virtual ~FileShopBag() {};

	void setFilename(const std::string& filename);
	virtual void writeToFile() = 0;
	virtual void displayShopBag() const = 0;
};

