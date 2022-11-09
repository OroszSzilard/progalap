#include <stdio.h>
#include <math.h>
typedef struct pont
{
    double x,y;
} Pont;


typedef struct kor 
{
    Pont kp;
    double r;
} Kor;



void beolvas(Kor*k)
{
    scanf("%lf %lf %lf", &k->kp.x, &k->kp.y, &k->r);
    return ;
}

int atfed(Kor k1, Kor k2); 




int main(void) 
{

    Kor a, b;
    beolvas(&a);
    beolvas(&b);

    if(atfed[a,b])
    {
        printf("Atfedik egymast");
    }
    else
    {
        printf("Nem fedik at egymast");
    }

    

    return 0;


}