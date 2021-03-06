#include "modi_dialog.h"
#include "ui_modi_dialog.h"
#include "common.h"

modi_dialog::modi_dialog(QStringList &list,int column,result *parent1,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modi_dialog),
    list(list),
    parent(parent1),
    column(column) {
    ui->setupUi(this);
    init_db(db);
}

modi_dialog::~modi_dialog()
{
    delete ui;
}

//submit
void modi_dialog::on_pushButton_clicked(){
	QString data = ui->lineEdit->text();
	QSqlQuery q;
	QString sql;
	if(column==0){

		sql = "update goodsinfo set goodsname=:data "
		" where goodsname  = :goodsname "
		" and contact = :contact";
		q.prepare(sql);
		q.bindValue(":goodsname",list.at(0));
		q.bindValue(":contact",list.at(2));
		q.bindValue(":data",data);
		//QMessageBox::information(this,"success",q.executedQuery());

		if(q.exec()){
			//QMessageBox::information(this,"success","successfully update goodsname");
			emit parent->emitSignal();
			this->close();

		}
		else{
			QMessageBox::information(this,"fail","fail  to update");

		}
	}
	else if (column == 1){

		sql = "update eiinfo set ei=:data "
		" where goodsname  = :goodsname "
		" and contact = :contact and ei=:ei";
		q.prepare(sql);
		q.bindValue(":goodsname",list.at(0));
		q.bindValue(":contact",list.at(2));
		q.bindValue(":ei",list.at(1));
		q.bindValue(":data",data);
		//QMessageBox::information(this,"success",q.executedQuery());

		if(q.exec()){
			//QMessageBox::information(this,"success","successfully update goodsname");
			emit parent->emitSignal();
			this->close();

		}
		else{
			QMessageBox::information(this,"fail","fail  to update");

		}
	}
	else if (column == 2){

		sql = "update goodsinfo set place=:data "
		" where goodsname  = :goodsname "
		" and contact = :contact";
		q.prepare(sql);
		q.bindValue(":goodsname",list.at(0));
		q.bindValue(":contact",list.at(2));
		q.bindValue(":data",data);
		//QMessageBox::information(this,"success",q.executedQuery());

		if(q.exec()){
			//QMessageBox::information(this,"success","successfully update goodsname");
			emit parent->emitSignal();
			this->close();

		}
		else{
			QMessageBox::information(this,"fail","fail  to update");

		}
	}

	else if (column ==3){

		sql = "update goodsinfo set source=:data "
		" where goodsname  = :goodsname "
		" and contact = :contact";
		q.prepare(sql);
		q.bindValue(":goodsname",list.at(0));
		q.bindValue(":contact",list.at(2));
		q.bindValue(":data",data);
		//QMessageBox::information(this,"success",q.executedQuery());

		if(q.exec()){
			//QMessageBox::information(this,"success","successfully update goodsname");
			emit parent->emitSignal();
			this->close();

		}
		else{
			QMessageBox::information(this,"fail","fail  to update");

		}
	}

	else if (column ==4){

		sql = "update goodsinfo set number=:data "
		" where goodsname  = :goodsname "
		" and contact = :contact";
		q.prepare(sql);
		q.bindValue(":goodsname",list.at(0));
		q.bindValue(":contact",list.at(2));
		q.bindValue(":data",data);
		//QMessageBox::information(this,"success",q.executedQuery());

		if(q.exec()){
			//QMessageBox::information(this,"success","successfully update goodsname");
			emit parent->emitSignal();
			this->close();

		}
		else{
			QMessageBox::information(this,"fail","fail  to update");

		}
	}
	else if (column ==5){

		sql = "update goodsinfo set price=:data "
		" where goodsname  = :goodsname "
		" and contact = :contact";
		q.prepare(sql);
		q.bindValue(":goodsname",list.at(0));
		q.bindValue(":contact",list.at(2));
		q.bindValue(":data",data);
		//QMessageBox::information(this,"success",q.executedQuery());

		if(q.exec()){
			//QMessageBox::information(this,"success","successfully update goodsname");
			emit parent->emitSignal();
			this->close();

		}
		else{
			QMessageBox::information(this,"fail","fail  to update");

		}
	}

	//contact name
	else if (column ==7){

		sql = "update contact set contact=:data "
		" where contact = :contact";
		q.prepare(sql);
		q.bindValue(":goodsname",list.at(0));
		q.bindValue(":contact",list.at(2));
		q.bindValue(":data",data);
		//QMessageBox::information(this,"success",q.executedQuery());

		if(q.exec()){
			//QMessageBox::information(this,"success","successfully update goodsname");
			emit parent->emitSignal();
			this->close();

		}
		else{
			QMessageBox::information(this,"fail","fail  to update");

		}
	}

	//tel
	else if (column ==8){

		/*
		update contact set tel="1234"
		 and contact = "yammy"
		*/
		sql = "update contact set tel=:data "
		" where contact = :contact";
		q.prepare(sql);
		q.bindValue(":goodsname",list.at(0));
		q.bindValue(":contact",list.at(2));
		q.bindValue(":data",data);
		//QMessageBox::information(this,"success",q.executedQuery());

		if(q.exec()){
			//QMessageBox::information(this,"success","successfully update goodsname");
			emit parent->emitSignal();
			this->close();

		}
		else{
			QMessageBox::information(this,"fail","fail  to update");

		}
	}
		else if (column ==9){

		sql = "update contact set apartment=:data "
		" where contact = :contact";
		q.prepare(sql);
		q.bindValue(":goodsname",list.at(0));
		q.bindValue(":contact",list.at(2));
		q.bindValue(":data",data);
		//QMessageBox::information(this,"success",q.executedQuery());

		if(q.exec()){
			//QMessageBox::information(this,"success","successfully update goodsname");
			emit parent->emitSignal();
			this->close();

		}
		else{
			QMessageBox::information(this,"fail","fail  to update");

		}
	}
}

void modi_dialog::on_pushButton_2_clicked(){

}