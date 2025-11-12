#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;
// ANIMAL CLASS 
Animal::Animal(string name, int age, bool isHungry) {
	this->age = age;
	this->isHungry = isHungry;
	this->name = name;


}
void Animal ::  display(){
	cout << "" << name << endl;
	cout << " " << isHungry << endl;
	cout << "" << age <<endl;

}
void Animal::feed() {
	if (isHungry)
		cout << "is hungry" << endl;
	else
		cout << "isnot hungry " << endl;
}

bird::bird(float) :Animal (string name, int age, bool isHungry) {
	this->wingSpan = wingSpan;
	Animal::getage();
Animal::getishungry();
Animal::getname();

}
bird::bird() {
	this->wingSpan = false;
	


}
Reptile :: Reptile(bool isVenomous){
	Animal::getage();
Animal::getishungry();
Animal::getname();
this-> isVenomous= isVenomous;
	
}
Reptile :: Reptile(){

this-> isVenomous= false;
	
}
Reptile :: ~Reptile(){

	
}
Mamal:: (string furColor){
	Animal::getage();
Animal::getishungry();
Animal::getname();
	this-> furColor= string furColor;

}
Mamal:: Mamal (){
	this-> furColor= "";
}
Mamal::~ Mamal(){
	this-> furColor= "";
}




//  class enclosure 
Enclosure :: Enclosure (Animal* ann, int capacity, int currentCount) {
	this->ann =  new Animal[currentCount];
	this->capacity = capacity;
	this->currentCount = 0;


}
Enclosure::Enclosure() {
	this->ann = nullptr;
	this->capacity = 0;
	this->currentCount = 0;
}
Enclosure :: ~Enclosure() {}
void Enclosure::addAnimal(Animal * a) {
	if (capacity == currentCount) {
		cout << "" << endl;
		return;
	}
	else {
		this->ann[currentCount] =  *a;
	 currentCount++;
	}
}
void Enclosure::displayAnimal() {
	for (int i = 0; i <= capacity; i++) {
		cout << "animal" << ann << endl;
	}
}
Visitor::Visitor() {
	this->ticketsBought = ticketsBought;
	this->visitorName = visitorName;
}
Visitor::Visitor() {
	this->ticketsBought = 0;
	this->visitorName = "  ";
}
Visitor::~Visitor() {}
void Visitor::displayinfo() {
	cout << "" << visitorName << "" << ticketsBought << endl;
}


// ============== MAIN FUNCTION ==============
int main() {
    Animal("lion",5,true);
	Animal("parrot",2,false);
	vistor("sarah",3);
	
	
	
    
    return 0;
}
