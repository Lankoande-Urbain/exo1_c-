#include<iostream>
#include<cmath>

using namespace std;

int main()
{    int x;
   double const PI=22.0/7.0;
    
    cout << "Entrer un nombre : ";
    cin >> x;
    cout <<"Le carrée de " <<x <<" est " << x*x;
    cout <<"\nLa racine carrée de " <<x <<"est " << sqrt(x);
    cout <<"\nLe périmètre du cercle de Royan " <<x <<" est" <<2*PI*x <<endl;
    cout <<"l'air du cercle de royon " <<x <<" est " << PI*x*x << endl;
    cout <<"la longueur de la diagonale du carrée de côté" << x <<" est " <<sqrt(2)*x <<endl;
    return 0;
}