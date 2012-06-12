#include "testgit.h"

testGit::testGit(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	QLabel *label = new QLabel(this);
	QPushButtn *button = new  QPushButton(this);


	QTextEdit *edit = new QTextEdit(this);
}

testGit::~testGit()
{

}

void testGit::showText()
{
	label->setText("ololo");
}

void testGit::pressButton()
{
}

