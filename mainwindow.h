#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<list_util.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void SelectionUnit(QString);
    void Transform();
    void Reset();

private:
    Ui::MainWindow *ui;
    Lista *length_items;
    Lista *area_items;
    Lista *volume_items;
    Lista *time_items;
    Lista *speed_items;
    Lista *temperature_items;
    Lista *weight_items;
    Lista *energy_items;
    Lista *pressure_items;
    Lista *density_items;
    Lista *items;

private:
    void update_items();

};

#endif // MAINWINDOW_H
