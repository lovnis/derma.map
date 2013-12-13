#ifndef MODEL_H
#define MODEL_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class Model
{
public:
    Model();
    bool createConnection();
    QSqlDatabase db;
};

#endif // MODEL_H
