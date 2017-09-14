// Include header file with class declaration.
#include "soda.h"

// Definition of Soda constructor. Use the initializer list to initialize all member variables.
Soda::Soda(std::string name, unsigned int price, unsigned int inventory)
    : name_(name)       // Initializer list. List should be in same order as variable declarations in the header file!
    , price_(price)
    , inventory_(inventory)
{

}
