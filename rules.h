#ifndef RULES_H
#define RULES_H

#include <QMainWindow>

namespace Ui {
class Rules;
}

class Rules : public QMainWindow
{
    Q_OBJECT

public:
    explicit Rules(QWidget *parent = 0);
    ~Rules();

private:
    Ui::Rules *ui;
};

#endif // RULES_H
