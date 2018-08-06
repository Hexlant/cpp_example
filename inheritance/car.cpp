//
// Created by chainus on 2018. 8. 6..
//

#include "iostream"
#include "car.h"

void Car::setWheels(int _wheels) {
    this->wheels = _wheels;
}
int Car::getWheels(void) {
    return this->wheels;
}

void Car::setPrice(int _price) {
    this->price = _price;
}

int Car::getPrice(void) {
    return this->price;
}

int main() {
    Car myCar;
    myCar.setWheels(4);
    myCar.setPrice(10000);

    std::cout << "wheel = " << myCar.getWheels() << ", price = " << myCar.getPrice() << std::endl;

    return 0;
}