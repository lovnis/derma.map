#ifndef DERMA_H
#define DERMA_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class Derma;
}

class Derma : public QMainWindow
{
    Q_OBJECT

public:
    explicit Derma(QWidget *parent = 0);
    ~Derma();

private:
    bool createConnection();
    Ui::Derma *ui;
};

#endif // DERMA_H
