/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file fechas.cc
  * @author Laura Dorta Marrero 
  * @date 03 01 2021
  * @brief Al ejecutar el programa se escribirá dd/mm/aa N fichero_salida.txt . El programa deberá imprimir en el fichero de salida (tercer parámetro)
  *        las N (segundo parámetro) fechas cronológicamente posteriores a la introducida (primer parámetro)
  *        con una separación de un día entre fechas sucesivas.
  * @bug No hay bugs conocidos
  */
#include <iostream>
#include <string>
#include "fechas.h"

using namespace std; 



void Usage(int argc,char *argv[]){
  if (argc <= 2){ 
    string parameter{argv[1]};
  if (parameter == "--help") {
    cout << argv[0] << " - Gestión de fechas" << endl << "Modo de uso:" << argv[0] 
         << "dd/mm/aa  N fichero_salida.txt" << endl
         << "El programa deberá imprimir en el fichero de salida (tercer parámetro)" 
         << " las N (segundo parámetro) fechas cronológicamente posteriores a la introducida (primer parámetro)" 
         << "con una separación de un día entre fechas sucesivas." << endl;
         
    exit(EXIT_SUCCESS);
  }else {
   cout << argv[0] << " - Gestión de fechas" << endl
         << "Modo de uso: " << argv[0] << " dd/mm/aa N fichero_salida.txt" << endl
         << "Pruebe " << argv[0] << " --help para más información" << endl;
    exit(EXIT_SUCCESS);
    }
  }
}


bool es_bisiesto(int anyo) {
   return (anyo % 4 == 0 && anyo % 100 != 0) || anyo % 400 == 0;
}

int dias_mes(int mes, int anyo) {
   int dias = 31;
   if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
      dias = 30;
   } else if (mes == 2) {
      if (es_bisiesto(anyo)) {
         dias = 29;
      } else {
         dias = 28;
      }
   }
   return dias;
}

int Dia(int dia, int mes, int anyo) {

   if (dia > dias_mes(mes, anyo)) {
      dia = 1;
   }
   return dia;
}

int mes_anyo(int dia, int mes, int anyo) {
   if (dia > dias_mes(mes, anyo)) {
     dia = 1;
     mes++;
      if (mes > 12) {
         mes = 1;
      }
   }
   return mes ;
}


int Anyo(int dia, int mes, int anyo) {
   if (dia > dias_mes(mes, anyo)) {
      dia = 1;
      mes++;
      if (mes > 12) {
         mes = 1;
         anyo++;
      }
   }
   return anyo ;
}