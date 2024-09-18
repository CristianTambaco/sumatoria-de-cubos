#include <iostream>
#include <cmath>
using namespace std;

int main() {
int n;
float sumatoria, sumatoria_cubos;

cout<<"** Sumatoria de cubos **"<<endl;
cout<<"Ingrese un numero: ";
cin>> n;
sumatoria = n*(n+1)/2;
sumatoria_cubos = pow(sumatoria, 2);
cout<<"La suma de los cubos es: "<< sumatoria_cubos<< endl;

return 0;
}

