#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

void createBinaryFile(const std::string& fileName);
bool isValidForLog(double x);
void filterLoggableNumbersBinary(const std::string& inputFileName, const std::string& outputFileName);
void printBinaryFileContent(const std::string& fileName);

#endif
