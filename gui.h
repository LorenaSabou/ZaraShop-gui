#ifndef Gui_H
#define Gui_H

#include <QtWidgets/QMainWindow>
#include "ui_new.h"
#include "Controller.h"

class Gui : public QMainWindow
{
	Q_OBJECT

public:
	Gui(Controller& c,QWidget *parent = 0);
	~Gui();


public slots:
	void _add();
	void _delete();
	void _update();
	void _filter();
	void _sort();
	void _shuffle();
	void _home();

private:
	int mode; //this serves for shuffling / sorting the administrator list 
	Ui::MainWindow ui;
	Controller& ctrl;
	std::vector<Coat> currentList;


	void setLabelsColour();
	void connectSignals();
	int getSelectedIndex();
	void listItemChanged();
	void populate();

};

#endif // Gui_H
