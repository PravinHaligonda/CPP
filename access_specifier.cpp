#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        string brand;
        string model;
        int year;

    public:
        Car(string x, string y, int z);

        void print();

        //Getter methods
        string getBrand();
        string getModel();
        int getYear();

        // Setter Method
        void setBrand(string x);
        void setModel(string y);
        void setYear(int z);

};

Car::Car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}

void Car::print() {
    cout << "==========================" << endl;
    cout << "|      Car Details       |" << endl;
    cout << "==========================" << endl;
    cout << "     Brand:  " << brand << endl;
    cout << "     Model:  " << model << endl;
    cout << "     Year:   " << year << endl;
    cout << "==========================" << endl << endl;

}

// Getter and Setter //
// access and modify //
// private member variables //

// Getter Methods
string Car::getBrand() {
    return brand;
}

string Car::getModel() {
    return model;
}

int Car::getYear() {
    return year;
}

//Setter Methods
void Car::setBrand(string x) {
    brand = x;
}

void Car::setModel(string y) {
    model = y;
}

void Car::setYear(int z) {
    year = z;
}

int main() {

    Car carObj1("Ford", "Mustang", 2013);
    carObj1.print();

    Car carObj2("BMW", "M5", 2020);
    carObj2.print();

    carObj1.setBrand("Chevrolet");
    carObj1.setModel("Camaro");
    carObj1.setYear(2021);
    carObj1.print();

    return 0;

}