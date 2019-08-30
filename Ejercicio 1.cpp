#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

float promedio(vector<int> &lista);
vector<int> leerConsola();
int numero;

vector<int> leerConsola() {
  vector<int>lista;
  while (true){
    cout<<"Ingrese un número positivo, escribir -1 para dejar de ingresar números: ";
    cin>>numero;
    if (numero < 0){
      break;
    } 
    else{
      lista.push_back(numero);
    }
  }
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
    return lista;
}

float promedio(vector<int> &lista) {
  float prom;
  int a;
  for (auto i:lista){
    a = a + i ;
  }
  prom = a/lista.size() ;
    /*
    El promedio es la suma de todos los elementos dividido entre el total de elementos
     */
    return prom;
  
}

int main() {
    cout<<"Calcular el promedio de los ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = promedio(leer_usuario);
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";
}