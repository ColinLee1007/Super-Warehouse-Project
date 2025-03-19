#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "membermanager.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void addMember();
    void removeMember();
    void searchMember();
    void displayAllMembers();
    void updateMember();  // 🔹 New function for updating members

private:
    Ui::MainWindow *ui;
    MemberManager memberManager;
};

#endif // MAINWINDOW_H
