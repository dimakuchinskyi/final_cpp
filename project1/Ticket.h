#ifndef TICKET_H
#define TICKET_H
#include <string>
using namespace std;

namespace TicketNamespace {
    class Ticket {
    public:
        Ticket() = default;
        Ticket(const string& transportID, int seatNumber);

        string getTransportID() const;
        int getSeatNumber() const;

    private:
        string transportID;
        int seatNumber = 0;
    };
}
#endif
