#ifndef DERMA_H
#define DERMA_H

#include <QMainWindow>

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
    Ui::Derma *ui;
};

#endif // DERMA_H
