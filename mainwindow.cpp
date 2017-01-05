#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    conv_len b[] = { {"mm", 1000},{"dm", 10},{"cm", 100}, {"ft", 3.2808},{"inch", 39.370}, {"m", 1},{"yd", 1.0936}, {"nmi", 0.0005}, {"mi", 0.0006}, {"km", 0.001} };

    length_items = new Lista;
    length_items->ultim = nullptr;

    for (int i = 0; i<9; i++)
    {
    Inserare(length_items , b[i].name, b[i].mult);
    }



    conv_len c[] = {{"ari", 0.01}, {"acri", 0.0002}, {"cm^2", 10000}, {"ft^2", 10.764}, {"ha", 0.0001},{"inch^2", 1549.90}, {"km^2", 0.000001}, {"m^2", 1}, {"mm^2", 1000000}, {"yd^2", 1.1959}};
    area_items = new Lista;
    area_items->ultim = nullptr;
    for(int i=0;i<9;i++)
    {
        Inserare(area_items, c[i].name, c[i].mult);
    }

    conv_len d[] = {{"cl", 99999.99}, {"cm^3", 1000000}, {"dl", 10000}, {"dm^3", 1000}, {"ft^3", 35.310}, {"gal(UK)", 219.973}, {"gal(US)", 264.200}, {"inch^3", 61023.744}, {"l", 1000}, {"m^3", 1}, {"ml", 1000000}, {"yd^3", 1.3079}};
    volume_items = new Lista;
    volume_items->ultim = nullptr;
    for (int i=0; i<12;i++)
    {
        Inserare (volume_items, d[i].name, d[i].mult);
    }

    conv_len e[] = {{"mileniu", 2.74167343}, {"deceniu", 0.00027397}, {"an", 0.00273972}, {"sapt", 0.14285714}, {"zi", 1}, {"ora", 24}, {"min", 1440}, {"sec", 86400}, {"decisec", 864000}, {"centisec", 8640000}, {"milisec", 86400000}, {"micrsec", 86400000000}, {"nanosec", 86400000000}, {"picosec", 86400000000000000}};
    time_items = new Lista;
    time_items->ultim = nullptr;
    for (int i=0;i<14;i++)
    {
        Inserare(time_items, e[i].name, e[i].mult);
    }

    conv_len f[] = {{"km/h", 3.5999}, {"mph", 2.2369}, {"m/s", 1}};
    speed_items = new Lista;
    speed_items->ultim = nullptr;
    for (int i=0; i<3;i++)
    {
        Inserare(speed_items, f[i].name, f[i].mult);
    }

    conv_len g[] = {{"F", 33.8}, {"K", 274.15}, {"R", 493.47}, {"C", 1}};
    temperature_items = new Lista;
    temperature_items->ultim = nullptr;
    for (int i=0;i<4; i++)
    {
        Inserare(temperature_items, g[i].name, g[i].mult);
    }

    conv_len h[] = {{"kg", 0.001}, {"mg", 1000.000}, {"t", 0.000001}, {"g", 1}};
    weight_items = new Lista;
    weight_items->ultim = nullptr;
    for(int i=0; i<4; i++)
    {
        Inserare (weight_items, h[i].name, h[i].mult);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::SelectionUnit(QString index)
{
    if (index == "lungime")
    {

        ui->unit_1->clear();
        ui->unit_2->clear();
        Lista *p=length_items;
        while(p)
        {
             ui->unit_1->addItem(p->nume);
             ui->unit_2->addItem(p->nume);
             p=p->urm;
        }


    }
    if (index=="arie")
    {
        ui->unit_1->clear();
        ui->unit_2->clear();
        Lista *p=area_items;
        while(p)
        {
            ui->unit_1->addItem(p->nume);
            ui->unit_2->addItem(p->nume);
            p=p->urm;
        }
    }
    if (index == "volum")
    {
        ui->unit_1->clear();
        ui->unit_2->clear();
        Lista *p=volume_items;
        while(p)
        {
            ui->unit_1->addItem(p->nume);
            ui->unit_2->addItem(p->nume);
            p=p->urm;
        }
    }
    if (index == "timp")
    {
        ui->unit_1->clear();
        ui->unit_2->clear();
        Lista *p = time_items;
        while (p)
        {
            ui->unit_1->addItem(p->nume);
            ui->unit_2->addItem(p->nume);
            p=p->urm;
        }
    }
    if (index == "viteza")
    {
        ui->unit_1->clear();
        ui->unit_2->clear();
        Lista *p = speed_items;
        while (p)
        {
            ui->unit_1->addItem(p->nume);
            ui->unit_2->addItem(p->nume);
            p=p->urm;
        }
    }
    if (index == "temperatura")
    {
        ui->unit_1->clear();
        ui->unit_2->clear();
        Lista *p = temperature_items;
        while (p)
        {
            ui->unit_1->addItem(p->nume);
            ui->unit_2->addItem(p->nume);
            p=p->urm;
        }
    }
    if (index=="masa")
    {
        ui->unit_1->clear();
        ui->unit_2->clear();
        Lista *p = weight_items;
        while (p)
        {
            ui->unit_1->addItem(p->nume);
            ui->unit_2->addItem(p->nume);
            p=p->urm;
        }
    }

}


