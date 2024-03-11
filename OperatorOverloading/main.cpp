#include <iostream>
#include <string>
using namespace std;

class Overcoat {
private:
    string type;
    double price;

public:
    Overcoat(string t, double p) : type(t), price(p) {}

    bool operator==(const Overcoat& other) const {
        return type == other.type;
    }

    Overcoat& operator=(const Overcoat& other) {
        if (this != &other) {
            type = other.type;
            price = other.price;
        }
        return *this;
    }

    bool operator>(const Overcoat& other) const {
        return price > other.price;
    }
};

class Flat {
private:
    double area;
    double price;

public:
    Flat(double a, double p) : area(a), price(p) {}

    bool operator==(const Flat& other) const {
        return area == other.area;
    }

    Flat& operator=(const Flat& other) {
        if (this != &other) {
            area = other.area;
            price = other.price;
        }
        return *this;
    }

    bool operator>(const Flat& other) const {
        return price > other.price;
    }
};

int main() {
    Overcoat coat1("Winter", 150.0);
    Overcoat coat2("Winter", 120.0);

    if (coat1 == coat2) {
        cout << "The coats are of the same type." << endl;
    }

    coat1 = coat2;

    if (coat1 > coat2) {
        cout << "Coat 1 is more expensive than Coat 2." << endl;
    }

    Flat flat1(80.0, 200000.0);
    Flat flat2(80.0, 180000.0);

    if (flat1 == flat2) {
        cout << "The flats have the same area." << endl;
    }

    if (flat1 > flat2) {
        cout << "Flat 1 is more expensive than Flat 2." << endl;
    }

    return 0;
}