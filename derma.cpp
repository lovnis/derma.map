#include "derma.h"
#include "ui_derma.h"

Derma::Derma(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Derma)
{
    createConnection();
    ui->setupUi(this);
}

Derma::~Derma()
{
    delete ui;
}


bool Derma::createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dermadb");
    if (!db.open()) {
        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("Unable to establish a database connection.\n"
                     "This example needs SQLite support. Please read "
                     "the Qt SQL driver documentation for information how "
                     "to build it.\n\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        return false;
    }

        QSqlQuery query;
        query.exec("create table patients (id int primary key, "
                   "firstname varchar(20), lastname varchar(20))");
        query.exec("insert into patients values(101, 'Danny', 'Young')");
        query.exec("insert into patients values(102, 'Christine', 'Holand')");
        query.exec("insert into patients values(103, 'Lars', 'Gordon')");

    return true;
}
