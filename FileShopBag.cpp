#include "FileShopBag.h"

FileShopBag::FileShopBag() : ShopBag{}, filename{ "" } {}

void FileShopBag::setFilename(const std::string& filename)
{
	this->filename = filename;
}