/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file fechas_main.cc
  * @author Laura Dorta Marrero 
  * @date 03 01 2021
  * @brief Al ejecutar el programa se escribirá dd/mm/aa N fichero_salida.txt . El programa deberá imprimir en el fichero de salida (tercer parámetro)
  *        las N (segundo parámetro) fechas cronológicamente posteriores a la introducida (primer parámetro)
  *        con una separación de un día entre fechas sucesivas.
  * @bug Cuando pasa de mes se empieza repetir el primer día de ese mes.
  */
#include <iostream>
#include <fstream>
#include <string>
#include "fechas.h"

using namespace std; 

 int main(int argc, char* argv[]){
  Usage(argc,argv);

  string hola {argv[1]}, n {argv[2]}, salida{argv[3]};
  int repeticion = stoi(n);

 string hola2;
 int dia, mes, anyo, post;

 for ( int i = 0; hola[i] != '/'; i++){
   hola2 += hola[i];
   post = i;
 } 
 dia = stoi(hola2);
hola2 = " ";

 for ( int i = post + 2; hola[i] != '/'; i++){
   hola2 += hola[i];
   post = i;
}
 mes = stoi(hola2);
 hola2 = " ";

 for ( int i = post + 2; hola[i] != ' '; i++){
   hola2 += hola[i];
   post = i;
}
 anyo = stoi(hola2);

 ofstream fichero_fechas;
 fichero_fechas.open(salida, ios_base::out);

  for (int i = 0; i < repeticion; i++){
    fichero_fechas << Dia(dia, mes, anyo) << "/" << mes_anyo(dia, mes, anyo) 
    << "/" << Anyo(dia, mes, anyo) << endl;
    dia++;
    
    
  }
 }