#include "HTMLShopBag.h"
#include <fstream>
#include <Windows.h>
#include "RepositoryExceptions.h"
#include "Domain.h"
using namespace std;

void HTMLShopBag::writeToFile()
{
	ofstream f(this->filename);

	if (!f.is_open())
		throw FileException("The file could not be opened!");
	f << "<!DOCTYPE html><html><head><title>ShoppingBasket</title></head><body><table border =""1""><tr><td>Size</td><td>Color</td><td>Price</td><td>Quantity</td><td>Photo</td><td>Length</td></tr>";
	for (Coat c : this->v) {
		f << "<tr>";
		f << "<td>";
		f << c.get_size();
		f << "</td>";
		f << "<td>";
		f << c.get_color();
		f << "</td>";
		f << "<td>";
		f << c.get_price();
		f << "</td>";
		f << "<td>";
		f << c.get_quantity(); //TODO: PUT 1 ?? 
		f << "</td>";
		f << "<td><a href = """;
		f << c.get_photo();
		f << """>Link</a></td>";
		f << "<td>";
		f << c.get_length();
		f << "</td>";

	}
	f << "</tr></table></body></html>";
	f.close();
}


void HTMLShopBag::displayShopBag() const
{
	string aux = this->filename;
	ShellExecuteA(NULL, NULL, "chrome.exe", aux.c_str(), NULL, SW_SHOWMAXIMIZED);
}
