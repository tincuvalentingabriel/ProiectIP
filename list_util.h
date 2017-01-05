#ifndef LIST_UTIL_H
#define LIST_UTIL_H
#include<QString>

struct Lista {
    QString nume;
    int valoare;
    Lista *urm;
    Lista *ultim;
};

void Inserare(Lista *Prim, QString s, int x);



struct conv_len
{
    QString name;
    float mult;
};

float conv(conv_len Us, conv_len Ud, float val);

#endif // LIST_UTIL_H
