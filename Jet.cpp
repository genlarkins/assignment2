#include "Jet.h"

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
	setBrand(brand);
        setModel(model);
        setFuelType(fuelType);
	setNumberofEngines(numberOfEngines);
}

Jet::~Jet()=default;

int Jet::getnumEngines() {
	return numberOfEngines;
}

void Jet::setNumberOfEngines(int numEngines) {
	numberOfEngines = numEngines;
}

double Jet::mileageEstimate(double time) {

}
