#include <iostream>
#include <vector>
#include <iomanip>
#include <unordered_map>

using namespace std;

int moda(vector<int> &lista);
vector<int> leerConsola();
int numero;

vector<int> leerConsola() {
  vector<int>lista;
  while (true){
    cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:";
    cin>>numero;
    if (numero<0){
      break;
    }
    else{
      lista.push_back(numero);
    }
  }
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
    return lista;
}

int moda(vector<int> &lista) {
  unordered_map<int,int> map;
  for (int i=0;i<lista.size();i++){
    map[lista[i]]++;
  }
  int moda, max = -10;
    for (auto &it : map) {
        if (it.second > max) {
            max = it.second;
            moda = it.first;
        }
    }
    return moda;
    /*
    La moda es el elemento que mas se repite en la lista de elementos
     */
    
}


int main() {
    cout<<"Calcular la moda de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
}
