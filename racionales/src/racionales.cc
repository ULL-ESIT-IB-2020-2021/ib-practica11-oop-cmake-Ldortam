


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "tools.h"
#include "racional.h"
using namespace std;

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  vector<string>numeros{};

  string entrada = argv[1], salida = argv[2], linea= "";
  fstream fichero_a_calcular;
  ofstream fichero_calculado;

  fichero_a_calcular.open(entrada, ios_base::in);
  fichero_calculado.open(salida, ios_base::out);

 while(getline(fichero_a_calcular,linea)){

     for (int i = 0; linea[i] != '/'; i++) {

         


     }

     

}