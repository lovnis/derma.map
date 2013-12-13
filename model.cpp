#include "model.h"

Model::Model()
{
}

bool Model::createConnection()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dermadb");

    if (!db.open())
        return false;

    QSqlQuery query;

    QString sqlQuery = QString("SELECT name FROM sqlite_master WHERE type ='table' AND name = :tablename ");
    query.prepare(sqlQuery);
    query.bindValue(":tablename", QString("patients"));
    query.exec();

    bool patientsTableExists = query.first();

    if(!patientsTableExists){
        query.exec("create table patients (id int primary key, "
                   "firstname varchar(20), lastname varchar(20))");
        query.exec("insert into patients values(101, 'Danny', 'Young')");
        query.exec("insert into patients values(102, 'Christine', 'Holand')");
        query.exec("insert into patients values(103, 'Lars', 'Gordon')");
    }

    return true;
}
