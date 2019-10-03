#include "Skateboard.h"
#include <random>

Skateboard::Skateboard(string brand, string model)
{
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = deafult;

double Skateboard::mileageEstimate(double time)
{
	std::random_device rd; // obtain a random number from hardware
        std::mt19937 eng(rd()); // seed the generator
        std::uniform_int_distribution<> distr(1, 5); // define the range
        double mileage = distr(eng)/10;
	
	if(time > 25 && time < 250)
	{
		double third = time/3;
	        std::random_device rd; // obtain a random number from hardware
        	std::mt19937 eng(rd()); // seed the generator
        	std::uniform_int_distribution<> distr(1, third); // define the range
		mileage += distr(eng);
	}
	return mileage * time;	

        //credit for code that generates random number: https://stackoverflow.com/questions/7560114/random-number-c-in-some-range 

}

string Skateboard::toString()
{
	return "-> Skateboard\n" + Vehicle::toString();
}
