#ifndef TESTGIT_H
#define TESTGIT_H

#include <QtGui/QMainWindow>
#include "ui_testgit.h"

class testGit : public QMainWindow
{
	Q_OBJECT

public:
	testGit(QWidget *parent = 0, Qt::WFlags flags = 0);
	~testGit();

private:
	Ui::testGitClass ui;
};

#endif // TESTGIT_H
