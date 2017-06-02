#include "Gui.h"
#include <vector>
#include "Domain.h"
#include <iostream>
#include <qmessagebox.h>
#include "RepositoryExceptions.h"
using namespace std;

Gui::Gui(Controller& c,QWidget *parent)
	: ctrl{ c },QMainWindow(parent)
{
	ui.setupUi(this);
	setLabelsColour();
	this->currentList = this->ctrl.getAll_repo();
	populate();
	connectSignals();
}

Gui::~Gui()
{

}

void Gui::setLabelsColour()
{
	this->ui.sizeLabel->setStyleSheet("QLabel{  color: white; }");
	this->ui.colorLabel->setStyleSheet("QLabel{  color: white; }");
	this->ui.photoLabel->setStyleSheet("QLabel{  color: white; }");
	this->ui.lengthLabel->setStyleSheet("QLabel{  color: white; }");
	this->ui.priceLabel->setStyleSheet("QLabel{  color: white; }");
	this->ui.quantityLabel->setStyleSheet("QLabel{  color: white; }");
	this->ui.userLabel->setStyleSheet("QLabel{  color: white; }");
	this->ui.sortRadioButton->setStyleSheet("QRadioButton{  color: white; }");
	this->ui.shuffleRadioButton->setStyleSheet("QRadioButton{  color: white; }");
}

int Gui::getSelectedIndex()
{
	if (this->ui.adminList->count() == 0)
		return -1;

	QModelIndexList idx = this->ui.adminList->selectionModel()->selectedIndexes();

	if (idx.size() == 0) {
		this->ui.sizeLineEdit->clear();
		this->ui.colorLineEdit->clear();
		this->ui.photoLineEdit->clear();
		this->ui.quantityLineEdit->clear();
		this->ui.priceLineEdit->clear();
		this->ui.lengthLineEdit->clear();
		return -1;
	}

	int i = idx.at(0).row();
	return i;

}

void Gui::listItemChanged()
{
	int index = getSelectedIndex();
	if (index == -1)
		return;

	std::vector<Coat> coats = this->currentList;

	if (index > coats.size())
		return;

	Coat c = coats[index];
	this->ui.sizeLineEdit->setText(QString::number(c.get_size()));
	this->ui.priceLineEdit->setText(QString::number(c.get_price()));
	this->ui.quantityLineEdit->setText(QString::number(c.get_quantity()));
	this->ui.photoLineEdit->setText(QString::fromStdString(c.get_photo()));
	this->ui.colorLineEdit->setText(QString::fromStdString(c.get_color()));
	this->ui.lengthLineEdit->setText(QString::number(c.get_length()));

	QFont font1;
	font1.setFamily(QStringLiteral("Agency FB"));
	font1.setPointSize(15);
	this->ui.sizeLineEdit->setFont(font1);
	this->ui.priceLineEdit->setFont(font1);
	this->ui.quantityLineEdit->setFont(font1);
	this->ui.lengthLineEdit->setFont(font1);
	this->ui.colorLineEdit->setFont(font1);
	this->ui.photoLineEdit->setFont(font1);

}

void Gui::populate()
{	
	this->ui.adminList->clear();
	QFont font1;
	font1.setFamily(QStringLiteral("Onyx"));
	font1.setPointSize(20);
	
	for (auto c : this->currentList) {
		QString info =+"Size:   " + QString::number(c.get_size()) + " | Color:   " + QString::fromStdString(c.get_color()) + " | Price:   " + QString::number(c.get_price());
		this->ui.adminList->addItem(info);
		this->ui.adminList->setFont(font1);
	}

}

void Gui::connectSignals() 
{
	connect(this->ui.adminList, &QListWidget::itemSelectionChanged, this, &Gui::listItemChanged);
	connect(this->ui.addButton, &QPushButton::clicked, this, &Gui::_add);
	connect(this->ui.deleteButton, &QPushButton::clicked, this, &Gui::_delete);
	connect(this->ui.sortRadioButton, &QRadioButton::pressed, this, &Gui::_sort);
	connect(this->ui.shuffleRadioButton, &QRadioButton::pressed, this, &Gui::_shuffle);
	connect(this->ui.updateButton, &QPushButton::clicked, this, &Gui::_update);
	connect(this->ui.filterButton, &QPushButton::clicked, this, &Gui::_filter);
	connect(this->ui.homeButton, &QPushButton::clicked, this, &Gui::_home);

}


void Gui::_add()
{
	int size = this->ui.sizeLineEdit->text().toInt();
	int price = this->ui.priceLineEdit->text().toInt();
	int quantity = this->ui.quantityLineEdit->text().toInt();
	std::string photo = this->ui.photoLineEdit->text().toStdString();
	std::string color = this->ui.colorLineEdit->text().toStdString();
	int length = this->ui.lengthLineEdit->text().toInt();
	
	Coat x = Coat(size, color, price, quantity, photo, length);
	try 
	{
		this->ctrl.add_repo(x);
		this->currentList = this->ctrl.getAll_repo();
		this->populate();
	}
	catch (CoatException& e) {
		QMessageBox box;
		box.critical(0, "Error",QString::fromStdString( e.getErrorsAsString()));
	}
	catch (RepositoryException& e2) {
		QMessageBox box;
		box.critical(0, "Error", e2.what());

	}
}

void Gui::_delete()
{
	int idx = getSelectedIndex();
	std::vector<Coat> all= this->currentList;
	Coat c = all[idx];

	this->ctrl.del_repo(c);
	this->currentList = this->ctrl.getAll_repo();
	this->populate();


}

void Gui::_update()
{
	int index = getSelectedIndex();
	std::vector<Coat> all = this->currentList;
	Coat x = all[index];
	
	int size = this->ui.sizeLineEdit->text().toInt();
	int price = this->ui.priceLineEdit->text().toInt();
	int quantity = this->ui.quantityLineEdit->text().toInt();
	std::string photo = this->ui.photoLineEdit->text().toStdString();
	std::string color = this->ui.colorLineEdit->text().toStdString();
	int length = this->ui.lengthLineEdit->text().toInt();

	Coat y = Coat(size, color, price, quantity, photo, length);
	
	try 
	{
		this->ctrl.update_repo(x, y);
		this->currentList = this->ctrl.getAll_repo();
		this->populate();
	}
	catch (RepositoryException& e)
	{
		QMessageBox box;
		box.critical(0, "Error", e.what());
	}

}

void Gui::_sort()
{
	this->currentList = this->ctrl.getAll_repo();
	std::sort(this->currentList.begin(), this->currentList.end());
	this->populate();
}

void Gui::_shuffle()
{
	this->currentList = this->ctrl.getAll_repo();
	std::random_shuffle(this->currentList.begin(), this->currentList.end());
	this->populate();

}

void Gui::_filter()
{
	int len = this->ui.lengthLineEdit->text().toInt();
	this->currentList = this->ctrl.filter(len);
	this->populate();
}

void Gui::_home()
{
	this->currentList = this->ctrl.getAll_repo();
	this->populate();
}