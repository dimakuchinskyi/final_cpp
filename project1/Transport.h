#ifndef TRANSPORT_H
#define TRANSPORT_H
#include <string>
#include <iostream>
using namespace std;

namespace TransportNamespace {
    class Transport {
    public:
        Transport(const string& id, int capacity);
        virtual void displayInfo() const = 0;
        void bookSeats(int numSeats);
        void showAvailableSeats() const;
        string getID() const;
        int getBookedSeats() const;
    protected:
        string id;
        int capacity;
        int bookedSeats = 0;
    };
}
#endif

