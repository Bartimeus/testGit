#include "testgit.h"

testGit::testGit(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	QLabel *label = new QLabel(this);
}

testGit::~testGit()
{

}

void testGit::showText()
{
	label->setText("ololo");
}
