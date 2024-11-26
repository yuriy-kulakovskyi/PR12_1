#include "../include/functions.h"
#include <iostream>
#include <fstream>
#include <string>

void createBinaryFile(const std::string& fileName) {
  std::ofstream outFile(fileName, std::ios::binary);
  if (!outFile) {
    std::cerr << "Помилка відкриття файлу для запису: " << fileName << std::endl;
    return;
  }

  std::cout << "Введіть дійсні числа для запису у файл (введіть будь-яку букву для завершення): " << std::endl;
  double value;
  while (std::cin >> value) {
    outFile.write(reinterpret_cast<const char*>(&value), sizeof(value));
  }

  std::cin.clear(); // Очищення стану потоку
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  outFile.close();
}

bool isValidForLog(double x) {
  return x > 0;
}

void filterLoggableNumbersBinary(const std::string& inputFileName, const std::string& outputFileName) {
  std::ifstream inFile(inputFileName, std::ios::binary);
  if (!inFile) {
    std::cerr << "Помилка відкриття файлу для читання: " << inputFileName << std::endl;
    return;
  }

  std::ofstream outFile(outputFileName, std::ios::binary);
  if (!outFile) {
    std::cerr << "Помилка відкриття файлу для запису: " << outputFileName << std::endl;
    return;
  }

  double value;
  while (inFile.read(reinterpret_cast<char*>(&value), sizeof(value))) {
    if (isValidForLog(value)) {
      outFile.write(reinterpret_cast<const char*>(&value), sizeof(value));
    }
  }

  inFile.close();
  outFile.close();
}

void printBinaryFileContent(const std::string& fileName) {
  std::ifstream inFile(fileName, std::ios::binary);
  if (!inFile) {
    std::cerr << "Помилка відкриття файлу для читання: " << fileName << std::endl;
    return;
  }

  double value;
  std::cout << "Вміст файлу " << fileName << ":" << std::endl;
  while (inFile.read(reinterpret_cast<char*>(&value), sizeof(value))) {
    std::cout << value << " ";
  }
  std::cout << std::endl;

  inFile.close();
}