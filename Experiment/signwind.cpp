#include "signwind.h"
#include "ui_signwind.h"
#include <QString>

signwind::signwind(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signwind)
{
    ui->setupUi(this);
}

signwind::~signwind()
{
    delete ui;
}

void signwind::on_createacc_btn_clicked()
{
    QString name = ui->name_eidt->text();

}

