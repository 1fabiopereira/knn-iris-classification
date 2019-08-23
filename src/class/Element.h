#ifndef CLASS_DISTANCE_H_
#define CLASS_DISTANCE_H_

#include <string>

class Element {
	private:
		std::string className;
		double a, b, c, d;

	public:
		Element(double a, double b,double c, double d, std::string className);
		std::string GetClassName();
		double GetA();
		double GetB();
		double GetC();
		double GetD();
};

#endif
