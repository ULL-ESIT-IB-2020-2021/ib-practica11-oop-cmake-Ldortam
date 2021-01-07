

#include <iostream>
#include <fstream>
#include <string>
#include "racional.h"
using namespace std;

  
Racional::Racional(string racional) {
   SetRacional(racional);

}

void Racional::SetRacional(string racional) {
    racional_ = racional;
    
}
int Racional::Sumar(char *argv[], int a, int b, int c, int d) {



    numerador_ = (a*d) + (b*c);
    denominador_ = (b*d);

    cout << a << "/" << b << " + " << c << "/" << d 
         << " = " << numerador_ << "/" << denominador_ << endl;

}

int Racional::Restar(char *argv[], int a, int b, int c, int d) {

   string entrada = argv[1], salida = argv[2];
   ifstream fichero_a_calcular;
   ofstream fichero_calculado;

    fichero_a_calcular.open(entrada, ios_base::in);
    fichero_calculado.open(salida, ios_base::out);

    numerador_ = (a*d) - (b*c);
    denominador_ = (b*d);

    cout << a << "/" << b << " - " << c << "/" << d 
         << " = " << numerador_ << "/" << denominador_ << endl;
}

int Racional::Multiplicar(char *argv[], int a, int b, int c, int d) {

    numerador_ = (a*c);
    denominador_ = (b*d);

    cout << a << "/" << b << " * " << c << "/" << d 
         << " = " << numerador_ << "/" << denominador_ << endl;
}

int Racional::Dividir(char *argv[], int a, int b, int c, int d) {

    string entrada = argv[1], salida = argv[2];
    ifstream fichero_a_calcular;
    ofstream fichero_calculado;

    fichero_a_calcular.open(entrada, ios_base::in);
    fichero_calculado.open(salida, ios_base::out);

    numerador_ = (a*d);
    denominador_ = (c*b);

    cout << "(" << a << "/" << b << ")" << " / " 
         << "(" << c << "/" << d << ")"
         << " = " << numerador_ << "/" << denominador_ << endl;
}

int Racional::Comparar(char *argv[], int a, int b, int c, int d) {

    string entrada = argv[1], salida = argv[2];
    ifstream fichero_a_calcular;
    ofstream fichero_calculado;

    fichero_a_calcular.open(entrada, ios_base::in);
    fichero_calculado.open(salida, ios_base::out);

    numerador_ = (a*d);
    denominador_ = (c*b);

    cout << "(" << a << "/" << b << ")" << " < " 
         << "(" << c << "/" << d << ")"
         << " significa " << numerador_ << "<" << denominador_ << endl;
}