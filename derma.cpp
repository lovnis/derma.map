#include "derma.h"
#include "ui_derma.h"

Derma::Derma(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Derma)
{
    ui->setupUi(this);
}

Derma::~Derma()
{
    delete ui;
}
