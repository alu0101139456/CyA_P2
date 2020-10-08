


#include <iostream>


void help() {
  system("clear");
  std::cout << "Instrucciones de uso\n";
  std::cout << "SYNTAX: \n\n  main [NUMBER] \n" << std::endl;
}


int main(int argc, char *argv[]) { 
	
	
	switch(argc) {
   case 2: {
      std::cout << "Por argumentos tengo en la posición [0] el nombre: " << argv[0] << " y el siguiente es: " << argv[1] << std::endl;
			std::cout << "Valor de argc: " << argc << std::endl;

      break;
    }
  default:
    help();
  	break;

 }

}




}