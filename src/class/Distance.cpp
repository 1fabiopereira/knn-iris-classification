#include "Distance.h"

double Distance::euclideanDistance(Element& el1, Element& el2){
	double sum = pow((el1.GetA() - el2.GetA()), 2) +
					 pow((el1.GetB() - el2.GetB()), 2) +
					 pow((el1.GetC() - el2.GetC()), 2) +
					 pow((el1.GetD() - el2.GetD()), 2);

	return sqrt(sum);
};
