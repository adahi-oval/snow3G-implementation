#include "converters.cc"



byte mod8(byte op, byte constant, int position){
  int bit_significativo;
  
  for (int i = 0; i < position; i++){
    bit_significativo = op[7];
    op = op<<1;

    if(bit_significativo == 1){
      std::cout << "  " << op << " + " << constant;
      
      op^=constant;

      std::cout << " = " << op << std::endl;
    }
    else{
      std::cout << "  " << op << std::endl;
    }
  }

  return op;
}



byte BinaryProduct(byte op1, byte op2, byte constant){
  byte aux;
  byte result;

  for (int i = 0; i < op2.size(); i++){
    if(op2[i] == 1){
      aux = mod8(op1, constant, i);
      std::cout << "Byte posición " << i << ": " << aux << std::endl;
      result^=aux;
    }
  }

  return result;
}




int main(void){
  int option;
  unsigned long num;
  std::string string1;
  std::string string2;
  byte constant(std::string("00000000"));
  
  std::cout << "Que algoritmo va a utilizar?" << std::endl << "  1. Snow 3G" << std::endl << "  2. AES" << std::endl;
  std::cin >> option;

  if(option == 1){
    byte constante(std::string("10101001"));
    constant|=constante;
  }
  if(option == 2){
    byte constante(std::string("00011011"));
    constant|=constante;
  }

  std::cout << "Introduzca el primer byte en Hexadecimal." << std::endl;
  std::cin >> std::hex >> num;
  byte op1(num);

  std::cout << "Introduzca el segundo byte en Hexadecimal." << std::endl;
  std::cin >> std::hex >> num;
  byte op2(num);
    
  std::cout << std::endl;

  byte resultado = BinaryProduct(op1, op2, constant);

  std::cout << std::endl << "El resultado es: " << resultado << " que equivale a " << ByteToHex(resultado) << std::endl;

  return 0;
}