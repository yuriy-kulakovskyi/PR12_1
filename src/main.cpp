#include <iostream>
#include "../include/functions.h"

using namespace std;

int main() {
  std::string inputFileName, outputFileName;

  std::cout << "Введіть ім'я файлу для збереження вихідних даних (бінарний): ";
  std::cin >> inputFileName;

  createBinaryFile(inputFileName);

  std::cout << "Введіть ім'я файлу для збереження результатів (бінарний): ";
  std::cin >> outputFileName;

  filterLoggableNumbersBinary(inputFileName, outputFileName);

  printBinaryFileContent(outputFileName);

  return 0;
}