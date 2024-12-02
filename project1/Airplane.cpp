#include "Airplane.h"
#include <iostream>
using namespace std;

namespace TransportNamespace {

    Airplane::Airplane(const string& id, int capacity)
        : Transport(id, capacity) {
    }

    void Airplane::displayInfo() const {
        cout << "Airplane ID: " << id << ", Capacity: " << capacity << endl;
    }

}
