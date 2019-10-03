#include "Jet.h"
#include <random>

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
	std::random_device rd; // obtain a random number from hardware
	std::mt19937 eng(rd()); // seed the generator
	std::uniform_int_distribution<> distr(40, 100); // define the range
	int randomnum = distr(eng);
	//credit for code that generates random number: https://stackoverflow.com/questions/7560114/random-number-c-in-some-range


	double mileage = randomnum * time;
	if(fuelType == "Rocket" && numberOfEngines >= 3)
		mileage += mileage * .055;
	return mileage;
}

string Jet::toString(){
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " + getnumEngines();
}
