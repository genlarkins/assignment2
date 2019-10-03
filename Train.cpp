#include "Train.h"

Train::Train(string brand, string model, string fuelType, int towWeight, string loc){
	setBrand(brand);
    	setModel(model);
    	setFuelType(fuelType);
	settowWeight(towWeight);
	setLocation(loc);
}

Train::~Train() = default;

string Train::getLocation(){
	return location;
}


int Train::gettowWeight(){
	return towWeight;
}

void Train::setLocation(string loc){
	location = loc;
}

void Train::settowWeight(int weight){
	towWeight = weight;
}

double Train::mileageEstimate(double time){
	double mileage;
	if(location == "City")
	{
	        std::random_device rd; // obtain a random number from hardware
	        std::mt19937 eng(rd()); // seed the generator
	        std::uniform_int_distribution<> distr(20, 50); // define the range
	        int randomnum = distr(eng)/60;
	        //credit for code that generates random number: https://stackoverflow.com/questions/7560114/random-number-c-in-some-range
		mileage = randomnum * time;
	}
	else
		mileage = 2*time;
	return mileage;
}

string Train::toString(){
	return "-> Train\n" + PoweredVehicle::toString() + "\n\tTow Weight: " +
           gettowWeight();
}
