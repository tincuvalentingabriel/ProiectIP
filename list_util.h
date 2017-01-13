#ifndef LIST_UTIL_H
#define LIST_UTIL_H
#include<QString>

struct Lista {
    QString nume;
    double valoare;
    Lista *urm;
    Lista *ultim;
};

void Inserare(Lista *Prim, QString s, double x);

double cautare (Lista*, QString);

struct conv_len
{
    QString name;
    double mult;
};

double conv(double Us, double Ud, double val);

#endif // LIST_UTIL_H
