#ifndef DRIVINGSIMULATOR_TRAIN_H
#define DRIVINGSIMULATOR_TRAIN_H

#include "PoweredVehicle.h"

class Train : public PoweredVehicle {

private:
    int towWeight;
    string location;

public:

    explicit Train(string brand, string model, string fuelType, int towWeight, string loc);
    virtual ~Train();
    string getLocation();
    int gettowWeight();
    void setLocation(string loc);
    void settowWeight(int weight);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif
