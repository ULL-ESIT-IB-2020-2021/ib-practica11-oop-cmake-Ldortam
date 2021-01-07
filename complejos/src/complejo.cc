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
#include <string>
#include "complejo.h"
using namespace std;

/*class Complejo {
 private:

    double real_;
    double imag_;

 public:
    Complejo(double real, double imag);
    void SetComplejo(double real, double imag);
    double getReal(){return real_};
    double getImag(){return imag_};
    void print(string variable);

};*/

Complejo::Complejo(int real, int imag){
   SetComplejo(real, imag);
}
void Complejo::SetComplejo(int real, int imag) {
   real_ = real;
   imag_ = imag;
}

/*class Calc {
 private:
   double complejo_;

 public:
    Calc();
    
    Calc& add(Complejo::complejo1, Complejo::complejo2);
    Calc& sub(Complejo::complejo1, Complejo::complejo2);


};*/

/*Calc::add(int n, int num) {
   result_real = complejo1.real + complejo2.real;
   result_imag = complejo1.imag + complejo2.imag;
   string part_1 = to_string(result_real);
   string part_2 = to_string(result_imag);
   string ecuacion = part_1 + " " + "+" + "(" + part_2 + ")" +"i";
   return ecuacion;
}*/

Complejo::sub(int n, int num) {

   return Complejo ( n.real - num.real, n.imag - num.imag)
  
}

Complejo::print(int n, int num) {

   cout << n << " + " << "(" << num << " i" << endl;

}

int main() {
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado;
  /*resultado = add(complejo1, complejo2);
  resultado.print();*/
  resultado = sub(complejo1, complejo2);
  resultado.print();

  return 0;
}
