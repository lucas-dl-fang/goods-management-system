/*
	// modified data
    QLineEdit *lineEdit;
    // submit modification
    QPushButton *pushButton;
    // cancel modification
    QPushButton *pushButton_2;
*/

#ifndef MODI_DIALOG_H
#define MODI_DIALOG_H

#include <QWidget>
#include<QSqlDatabase>
#include<QSqlQuery>

#include <QMessageBox>
#include "result.h"


namespace Ui {
class modi_dialog;
}

class modi_dialog : public QWidget
{
    Q_OBJECT

public:
    //parent1: parent widget pointer
    explicit modi_dialog(QStringList & list ,int column,result *parent1, QWidget *parent = 0);
    ~modi_dialog();

private slots:
    //submit
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();

private:
    Ui::modi_dialog *ui;
    QSqlDatabase db;
    QStringList list;
    result * parent;
    int column;
};

#endif // MODI_DIALOG_H
