#include <iostream>
#include <string.h>
#include <vector>
#include <bitset>
#include <stdio.h>
#include <sstream>

typedef std::vector<std::bitset<8>> bitvector8;
typedef std::vector<int> intvector;
typedef std::bitset<8> byte;



bitvector8 ASCIIToBinary(intvector numbers){
  bitvector8 bytes;

  for (int i = 0; i < numbers.size(); i++){
    std::bitset<8> codigobit(numbers[i]);
    bytes.push_back(codigobit);
  }

  return bytes;
}



std::bitset<8> IntToBinary(int number){
  std::bitset<8> codigobit(number);

  return codigobit;
}



std::vector<std::bitset<8>> StringToBinary(std::string string){
  std::vector<int> ascii;
  std::vector<std::bitset<8>> bytes;
  
  for (int i = 0; i < string.size(); i++)
  {
    ascii.push_back(string[i]);
  }
  
  for (int i = 0; i < ascii.size(); i++)
  {
    std::bitset<8> codigobit(ascii[i]);
    bytes.push_back(codigobit);
  } 

  return bytes;
}



std::vector<int> StringToASCII(std::string string){
  std::vector<int> ascii;
  
  for (int i = 0; i < string.size(); i++)
  {
    ascii.push_back(string[i]);
  }

  return ascii;
}



std::vector<std::bitset<8>> BinaryToBitset(std::string string, int len){
  std::vector<std::bitset<8>> bitset;
  std::bitset<8> byte;
  std::string aux;
  for (int i = 0; i < len; i++){
    for (int j = 0; j < 8; j++){
      aux.push_back(string[0]);
      string.erase(0,1);
    }
    std::bitset<8> byte(aux);
    bitset.push_back(byte);
    aux.clear();
  }
  return bitset;
}



std::vector<std::bitset<8>> AddBinary(std::vector<std::bitset<8>> clave, std::vector<std::bitset<8>> mensaje){
  std::vector<std::bitset<8>> SumaBinario;
  if(clave.size() == mensaje.size()){
    for(int i = 0; i < clave.size(); i++){
      SumaBinario.push_back(clave[i]^=mensaje[i]);
    }
  }
  else{
    std::cout << "Introduzca el tamaño del mensaje original correcto, incluyendo espacios." << std::endl;
  }
  return SumaBinario;
}



std::string BinaryToString(std::vector<std::bitset<8>> bytes){
  std::vector<int> ascii;
  std::string string;

  for (int i = 0; i < bytes.size(); i++){
    ascii.push_back(bytes[i].to_ulong());
  }

  for (int i = 0; i < ascii.size(); i++){
    string.push_back((char) ascii[i]);
  }

  return string;
}



std::vector<int> BinaryToASCII(std::vector<std::bitset<8>> bytes){
  std::vector<int> ascii;

  for (int i = 0; i < bytes.size(); i++){
    ascii.push_back(bytes[i].to_ulong());
  }

  return ascii;
}



void PrintBitset(std::vector<std::bitset<8>> bytes){
  for(int i = 0; i < bytes.size(); i++){
    std::cout << bytes[i].to_string();
  }
  std::cout << std::endl;
}



std::string DecimalToHex(int decimalNumber){
  std::stringstream resultStream;
  resultStream << std::hex << decimalNumber;
  std::string resultString ( resultStream.str() );

  return resultString;
}



int HexToDecimal(std::string hexNumber){
  int result;
  std::stringstream converterStream;
  converterStream << hexNumber;
  converterStream >> std::hex >> result;

  return result;
}



byte HexToBinary(std::string hexnumber){

  return IntToBinary(HexToDecimal(hexnumber));

}



std::string ByteToHex(byte byte1){
  
  return DecimalToHex(byte1.to_ulong());

}



std::vector<std::string> swap(std::vector<std::string> vector, int index1, int index2){
  std::string aux;
  aux = vector.at(index1);
  vector.at(index1) = vector.at(index2);
  vector.at(index2) = aux;

  return vector;
}

intvector database(int prn_id) {
  intvector indices;
  switch(prn_id){
    case 1:
      indices.push_back(2);
      indices.push_back(6);
      break;
    case 2:
      indices.push_back(3);
      indices.push_back(7);
      break;
    case 3:
      indices.push_back(4);
      indices.push_back(8);
      break;
    case 4:
      indices.push_back(5);
      indices.push_back(9);
      break;
    case 5:
      indices.push_back(1);
      indices.push_back(9);
      break;
    case 6:
      indices.push_back(2);
      indices.push_back(10);
      break;
    case 7:
      indices.push_back(1);
      indices.push_back(8);
      break;
    case 8:
      indices.push_back(2);
      indices.push_back(9);
      break;
    case 9:
      indices.push_back(3);
      indices.push_back(10);
      break;
    case 10:
      indices.push_back(2);
      indices.push_back(3);
      break;
    case 11:
      indices.push_back(3);
      indices.push_back(4);
      break;
    case 12:
      indices.push_back(5);
      indices.push_back(6);
      break;
    case 13:
      indices.push_back(6);
      indices.push_back(7);
      break;
    case 14:
      indices.push_back(7);
      indices.push_back(8);
      break;
    case 15:
      indices.push_back(8);
      indices.push_back(9);
      break;
    case 16:
      indices.push_back(9);
      indices.push_back(10);
      break;
    case 17:
      indices.push_back(1);
      indices.push_back(4);
      break;
    case 18:
      indices.push_back(2);
      indices.push_back(5);
      break;
    case 19:
      indices.push_back(3);
      indices.push_back(6);
      break;
    case 20:
      indices.push_back(4);
      indices.push_back(7);
      break;
    case 21:
      indices.push_back(5);
      indices.push_back(8);
      break;
    case 22:
      indices.push_back(6);
      indices.push_back(9);
      break;
    case 23:
      indices.push_back(1);
      indices.push_back(3);
      break;
    case 24:
      indices.push_back(4);
      indices.push_back(6);
      break;
    case 25:
      indices.push_back(5);
      indices.push_back(7);
      break;
    case 26:
      indices.push_back(6);
      indices.push_back(8);
      break;
    case 27:
      indices.push_back(7);
      indices.push_back(9);
      break;
    case 28:
      indices.push_back(8);
      indices.push_back(10);
      break;
    case 29:
      indices.push_back(1);
      indices.push_back(6);
      break;
    case 30:
      indices.push_back(2);
      indices.push_back(7);
      break;
    case 31:
      indices.push_back(3);
      indices.push_back(8);
      break;
    case 32:
      indices.push_back(4);
      indices.push_back(9);
      break;
  }

  return indices;
}