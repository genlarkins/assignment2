#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {
	private:
		int numberOfEngines;
	public: 
		explicit Jet(string brand, string model, string fuelType, int numberOfEngines = 1);
    		virtual ~Jet();
    		int getnumEngines();
    		void setNumberOfEngines(int numEngines);
    		virtual double mileageEstimate(double time);
    		virtual string toString();


};

#endif
