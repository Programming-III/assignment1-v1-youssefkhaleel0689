#pragma once
#include <iostream>
using namespace std;
#include <string>
#ifndef ANIMAL_H
#define ANIMAL_H
class Animal {
private:
	string name;
	int age;
	bool isHungry;

public:
	Animal(string , int ,bool);
	Animal();
	~Animal();
	void display();
	void feed();


};
#endif // !ANIMAL_H
