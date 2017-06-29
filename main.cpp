#include <QApplication>
#include <QSplashScreen>
#include <QThread>
#include <QString>
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen ss(QPixmap(":/new/prefix1/pictures/start.jpg"));
    ss.show();
    a.processEvents();
    QThread::sleep(1);
    ss.showMessage("Welcome to Red7", Qt::AlignCenter, Qt::white);
    a.processEvents();
    QThread::sleep(1);

    Login *w = new Login;
    w->show();
    return a.exec();
}
