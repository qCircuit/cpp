#include <iostream>

int main() {
    int a = 10, b = 5;
    std::cout << "enteros: suma es " << a + b << std::endl;

    bool c = true, d = false;
    std::cout << "booleanos: true, false, suma: " << c, d, c + d << std::endl;
}



bool: A Boolean data type that represents true or false values.
Example: bool myBool = true;

string: A data type that represents a sequence of characters.
Example: string myString = "Hello, world!";

array: A data type that represents a fixed-size collection of elements of the same type.
Example: int myArray[3] = {1, 2, 3};

struct: A user-defined data type that groups together variables of different data types under a single name.
Example: struct Person {
string name;
int age;
};

pointer: A data type that stores the memory address of another variable.
Example: int* myPointer = &myInt;

enum: A data type that defines a set of named values.
Example: enum Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };