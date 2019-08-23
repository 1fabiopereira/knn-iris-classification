#include <iostream>
#include <vector>
#include "class/Element.h"
#include "class/Distance.h"
#include "class/Classify.h"

using namespace std;


int main() {

	vector<Element> elements;
	const int K = 2;
	int training = 100;

	for (int i = 0; i < training; i++) {
		string className;
		double a, b, c, d;

		cin >> a >> b >> c >> d >> className;

		elements.push_back(Element(a, b, c, d, className));
	}

	int tests = 0;

	int testSize = 150 - training;

	for (int i = 0; i < testSize; i++) {
		string className;
		double a, b, c, d;

		cin >> a >> b >> c >> d >> className;
		Element element(a, b, c, d, className);
		string classified = Classify::classification(elements, element, K);

		cout << "Expected: " << className << endl;
		cout << "Result: " << classified << endl;
		cout << "=====================================================" << endl;

		if (classified == className) {
			tests++;
		}
	}

	cout << "Hits: " << tests << endl;
	cout << "Misses: " << testSize - tests << endl;

	return 0;
}
