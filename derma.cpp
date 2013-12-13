#include "derma.h"
#include "ui_derma.h"

Derma::Derma(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Derma)
{
    model = new Model();
    createConnection();
    ui->setupUi(this);
}

Derma::~Derma()
{
    delete ui;
}


bool Derma::createConnection()
{

    if (!model->createConnection()){
        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("Unable to establish a database connection.\n"
                     "This example needs SQLite support. Please read "
                     "the Qt SQL driver documentation for information how "
                     "to build it.\n\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        return false;
    }

    return true;
}
