#ifndef DRIVINGSIMULATOR_TRAIN_H
#define DRIVINGSIMULATOR_TRAIN_H

#include "PoweredVehicle.h"

class Train : public PoweredVehicle {

private:
    int towWeight;
    string cargotype;

public:

    explicit Train(string brand, string model, string fuelType, int towWeight, string cargotype);
    virtual ~Train();
    string getcargoType();
    int gettowWeight();
    void setcargoType(string cargotype);
    void settowWeight(int towWeight);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif
