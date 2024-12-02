#include "Transport.h"
using namespace std;
namespace TransportNamespace {
    Transport::Transport(const string& id, int capacity)
        : id(id), capacity(capacity) {
    }
    void Transport::bookSeats(int numSeats) {
        if (bookedSeats + numSeats > capacity) {
            throw runtime_error("Not enough available seats.");
        }
        bookedSeats += numSeats;
    }
    void Transport::showAvailableSeats() const {
        cout << "Available seats in " << id << ": " << (capacity - bookedSeats) << endl;
    }
    string Transport::getID() const {
        return id;
    }
    int Transport::getBookedSeats() const {
        return bookedSeats;
    }

}
