#include "Ticket.h"
using namespace std;

namespace TicketNamespace {

    Ticket::Ticket(const string& transportID, int seatNumber)
        : transportID(transportID), seatNumber(seatNumber) {
    }

    string Ticket::getTransportID() const {
        return transportID;
    }

    int Ticket::getSeatNumber() const {
        return seatNumber;
    }

}
