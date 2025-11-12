#pragma once
#ifndef VISITOR_H
#define VISITOR_H
#include <iostream>
using namespace std;
#include <string>
class Visitor {
private:
	string visitorName;
	int ticketsBought;
public:
	Visitor(string visitorName, int ticketsBought);
	Visitor();
	~Visitor();
	
	void displayinfo();
	


};

#endif // !VISITOR_H

