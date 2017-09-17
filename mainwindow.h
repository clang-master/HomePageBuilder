#include <QMainWindow>
#include "createelement.h"


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAdd_New_Element_A_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
