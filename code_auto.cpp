#include <iostream>
#include <string>

class Automobile { 

protected:
    std::string brand;
    int max_speed;
    
public:
    Automobile(const std::string& _brand, int _maxspeed): brand(_brand), max_speed(_maxspeed) {}

    void displayInfo() const {
        std::cout << "Brand: " << brand << "Max Sppeed: " << max_speed << "km/h";
    }
};


class Car: public Automobile {

private:
    int num_doors;

public:
    Car(const std::string& _brand, int _maxspeed, int _doors): Automobile(_brand, _maxspeed), num_doors(_doors) {}

    void displayCarInfo() const {
        displayInfo();
        std::cout << "Doors: " << num_doors << std::endl;
    }
};


int main() {
    Car thecar("TOyooyo", 180, 4);
    thecar.displayCarInfo();

    return 0;
}