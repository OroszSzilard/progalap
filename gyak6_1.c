#include <stdio.h>
typedef struct datum 
{
    int ev;
    int ho;
    int nap;

} Datum;

void beolvas(Datum *d);
void kiir(Datum d);
Datum regebbi_datum(Datum d1, Datum d2);


int main() 
{
    Datum d1, d2;

    printf("Első dátum:\n"); beolvas(&d1);
    printf("Második dátum:\n"); beolvas(&d2);

    Datum regi = regebbi_datum(d1, d2);
    kiir(regi);
    return 0;
}

void beolvas(Datum * d) 
{
    printf("Ev: "); scanf("%d", &d->ev);
    printf("Ho: "); scanf("%d", &d->ho);
    printf("Nap: "); scanf("%d", &d->nap);

    return ;
}

void kiir(Datum d) 
{
    printf("Regebbi: %d.%d.%d.\n", d.ev, d.ho, d.nap);

    return ;
}

Datum regebbi_datum(Datum d1, Datum d2) 
{
    if (d1.ev==d2.ev) 
    {
        if (d1.ho==d2.ho) 
        {
        if (d1.nap>=d2.nap) return d2;
        else return d1;
        }
        else if(d1.ho>d2.ho) return d2;
        
        else return d1;
    }
    else if (d1.ev>d2.ev) return d2;
    else return d1;
}
