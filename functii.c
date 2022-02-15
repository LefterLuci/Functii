
#include stdio.h
#include stdlib.h
#include math.h

calculeaza daca un nr se imparte exact la 17. Daca se imparte returneaza 22 , daca nu 33.


 int calculator(int param1, int param2, int param3)
 {
     int suma, scadere, inmultire;

     if(param1==1)
        return param2+param3;
     else if(param1==2)
        return param2-param3;
    else
        return param2param3;
 }



int sumaMea(int x, int y)
{
    int suma;

    suma=x+y;

    return suma;
}








int caca(int numb_primit)
{

    if(numb_primit%17==0)
    {
        return 22;
    }
    else
    {
       return 33;
    }
}





int main()
{
    int a;

    a= calculator(1,1,1);

    printf(%dn,a);

    a= calculator(3,20,2);

    printf(%dn,a);

    return 0;
}
