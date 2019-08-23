#include "Classify.h"
#include "Distance.h"

string Classify::classification(vector<Element>& elements, Element& element, int K){
	if (K % 2 == 0) {
		K--;

		if (K <= 0) {
			K = 1;
		}
	}

	int numberOfElements = elements.size();
	set<pair<double, int> > distanceOfElements;

	for (int i = 0; i < numberOfElements; i++) {
		double distance = Distance::euclideanDistance(elements[i], element);
		distanceOfElements.insert(make_pair(distance, i));
	}

	set<pair<double, int > >::iterator it;

	vector<int> countClass(3);

	int countK = 0;

	for (it = distanceOfElements.begin(); it != distanceOfElements.end(); it++) {
		string className = elements[it->second].GetClassName();

		if (className == "Iris-setosa") {
			countClass[0]++;
		} else if (className == "Iris-versicolor") {
			countClass[1]++;
		} else {
			countClass[2]++;
		}

		if (countK > K) {
			break;
		}

		countK++;
	}

	string classification;

	if (countClass[0] >= countClass[1] && countClass[0] >= countClass[2]) {
		classification = "Iris-setosa";
	} else if (countClass[1] >= countClass[0] && countClass[1] >= countClass[2]) {
		classification = "Iris-versicolor";
	}  else {
		classification = "Iris-virginica";
	}

	return classification;
};
