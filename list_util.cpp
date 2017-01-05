#include "list_util.h"
void Inserare(Lista *Prim, QString s, int x)
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
float conv(conv_len Us, conv_len Ud, float val)
{
    return val/Us.mult * Ud.mult;
}

float v;
