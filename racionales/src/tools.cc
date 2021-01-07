


#include <iostream>
#include <cstdlib> 
#include "tools.h"

void Usage(int argc, char *argv[]) {
  if (argc <= 2) {
     std::cout << argv[0] << "  -- Números Racionales" << std::endl;
     std::cout << "Modo de uso: " << argv[0] << " fichero_entrada fichero_salida" << std::endl;
     std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
     exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
      std::cout << argv[0] << "  -- Números Racionales" << std::endl;
     std::cout << "Modo de uso: " << argv[0] << " fichero_entrada fichero_salida" << std::endl;
     std::cout << "fichero_entrada: Fichero de texto conteniendo líneas con un par de números racionales: `a/b c/d` separados por un espacio" << std::endl;
     std::cout << "fichero_salida:  Fichero de texto que contendrá líneas con las operaciones realizadas: `a/b + c/d = n/m`" << std::endl;
     exit(EXIT_SUCCESS);
  }
}