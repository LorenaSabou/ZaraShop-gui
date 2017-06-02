#include "CSVShopBag.h"
#include <fstream>
#include <Windows.h>
#include "RepositoryExceptions.h"

using namespace std;

void CSVShopBag::writeToFile()
{
	ofstream f(this->filename);

	if (!f.is_open())
		throw FileException("The file could not be opened!");

	for (auto s : this->v)
		f << s;

	f.close();
}

void CSVShopBag::displayShopBag() const
{
	string aux = "\"" + this->filename + "\""; 
									
	ShellExecuteA(NULL, NULL, "notepad.exe", aux.c_str(), NULL, SW_SHOWMAXIMIZED);
}
