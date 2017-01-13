#include "list_util.h"
void Inserare(Lista *Prim, QString s, double x)
{
    Lista *q;
    if (Prim->ultim==nullptr)
    {
        q=Prim;
    }
    else
    {
       q=new Lista;
       Prim->ultim->urm=q;
    }
    q->nume=s;
    q->valoare = x;
    q->urm=nullptr;
    q->ultim=nullptr;
     Prim->ultim=q;
}

double cautare (Lista* L, QString x )
{
    Lista* p = L;
    while (p!=nullptr)
    {
        if (p->nume == x)
        {
            return p->valoare;
        }
        p=p->urm;
    }
    return 0;
}

double conv(double Us, double Ud, double val)
{
    return val/Us * Ud;
}
