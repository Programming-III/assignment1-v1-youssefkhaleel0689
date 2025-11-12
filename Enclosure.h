#pragma once
#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include "ANIMAL.H"
#include <iostream>
using namespace std;
#include <string>

class Enclosure :public Animal  {
private:
	Animal* ann;
	int capacity;
	int currentCount;
public :
	void addAnimal(Animal * a);
	void displayAnimal();
	Enclosure(Animal* ann,int capacity, int currentCount);
	Enclosure();
	~Enclosure();


};
#endif // !ENCLOSURE_H
