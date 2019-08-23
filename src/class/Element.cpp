#include "Element.h"

// Constructor
Element::Element(double a, double b, double c, double d, const std::string className){
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->className = className;
};

std::string Element::GetClassName(){
	return this->className;
};

double Element::GetA(){
	return this->a;
};


double Element::GetB(){
	return this->b;
};


double Element::GetC(){
	return this->c;
};


double Element::GetD(){
	return this->d;
};
