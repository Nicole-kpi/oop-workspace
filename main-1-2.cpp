#include "ParkingLot.h"
#include "Car.h"
#include <iostream>

int main() {
    ParkingLot lot(3); 
    
    
    lot.parkVehicle(new Car(1));
    lot.parkVehicle(new Car(2));
    lot.parkVehicle(new Car(3));
    lot.parkVehicle(new Car(4));  
    
   
    lot.unparkVehicle(2);
    lot.unparkVehicle(5);  
    
    return 0;
}