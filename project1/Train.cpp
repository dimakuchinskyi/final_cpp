#include "Train.h"
using namespace std;

namespace TransportNamespace {

    Train::Train(const string& id, int capacity)
        : Transport(id, capacity) {
    }

    void Train::displayInfo() const {
        cout << "Train ID: " << id << ", Capacity: " << capacity << endl;
    }

}
