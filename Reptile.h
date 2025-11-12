#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here


class Reptile : public Animal {
private:

	bool isVenomous;
public:
Reptile(bool isVenomous);
Reptile();
~Reptile();


};






#endif
