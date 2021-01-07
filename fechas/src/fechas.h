/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file fechas.h
  * @author Laura Dorta Marrero 
  * @date 03 01 2021
  * @brief Al ejecutar el programa se escribirá dd/mm/aa N fichero_salida.txt . El programa deberá imprimir en el fichero de salida (tercer parámetro)
  *        las N (segundo parámetro) fechas cronológicamente posteriores a la introducida (primer parámetro)
  *        con una separación de un día entre fechas sucesivas.
  * @bug No hay bugs conocidos
  */
#include <iostream>
using namespace std; 

void Usage(int argc,char *argv[]);

bool es_bisiesto(int anyo);

int dias_mes(int mes, int anyo);

int Dia(int dia, int mes, int anyo);

int mes_anyo(int dia, int mes, int anyo);

int Anyo(int dia, int mes, int anyo);