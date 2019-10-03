#ifndef DRIVINGSIMULATOR_TRAIN_H
#define DRIVINGSIMULATOR_TRAIN_H

#include "PoweredVehicle.h"

class Train : public PoweredVehicle {

private:
    int towWeight;

public:

    explicit Train(string brand, string model, string fuelType, int towWeight);
    virtual ~Train();
    int gettowWeight();
    void settowWeight(int towWeight);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif
