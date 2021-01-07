


#include <iostream>
#include <fstream>
using namespace std;

#ifndef RACIONAL_H
#define RACIONAL_H

class Racional {

    private:
     int numerador_;
     int denominador_;
     string racional_;

    public:
     Racional(string racional);
     void SetRacional(string racional);
     string GetRacional(){return racional_;}
     int GetNumerador(){return numerador_;}
     int GetDenominador(){return denominador_;}


     int Sumar(char* argv[], int a, int b, int c, int d);
     int Restar(char* argv[], int a, int b, int c, int d);
     int Multiplicar(char *argv[], int a, int b, int c, int d);
     int Dividir(char *argv[], int a, int b, int c, int d);
     int Comparar(char *argv[], int a, int b, int c, int d);

};
#endif