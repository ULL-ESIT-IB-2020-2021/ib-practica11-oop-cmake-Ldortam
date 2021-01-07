/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Laura Dorta Marrero
 * @date 06 01 2021
 * @brief 
 *
 */


#include <iostream>
using namespace std;

#ifndef __COMPLEJO_H__
#define __COMPLEJO_H__

class Complejo {

 private:
    int real_;
    int imag_;

 public:
    Complejo(int real, int imag);
    void SetComplejo(int real, int imag);
    int getReal(){return real_;}
    int getImag(){return imag_;}
    //void add(int n, int num);
    void sub(int n, int num);
    void print(int n, int num);

};

#endif