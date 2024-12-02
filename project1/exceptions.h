#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H
#include <exception>
using namespace std;

class SeatUnavailableException : public exception {
public:
    const char* what() const noexcept override {
        return "The seat is already taken.";
    }
};

class FileOperationException : public exception {
public:
    const char* what() const noexcept override {
        return "Error occurred during file operation.";
    }
};

#endif
