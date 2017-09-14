#ifndef SODA_H
#define SODA_H

#include <string>

// Soda class declaration. See .cpp file with same name for definition / implementation.
class Soda
{
public:

    // Declare public visible constructor with three parameters.
    Soda(std::string name, unsigned int price, unsigned int inventory);

    // Declare public visible variables.
    std::string name_;
    unsigned int price_;
    unsigned int inventory_;

};

#endif // SODA_H
