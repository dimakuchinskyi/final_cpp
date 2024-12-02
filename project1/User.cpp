#include "User.h"
#include "Transport.h"
#include <iostream>
using namespace std;
namespace UserNamespace {
    User::User(const string& username) : username(username) {}
    void User::bookTicket(TransportNamespace::Transport& transport, int numSeats) {
        transport.bookSeats(numSeats);
        for (int i = 0; i < numSeats; ++i) {
            tickets.emplace_back(transport.getID(), transport.getBookedSeats() - numSeats + i + 1);
        }
    }
    void User::showTickets() const {
        cout << "Tickets for user " << username << ":" << endl;
        for (const auto& ticket : tickets) {
            cout << "Transport ID: " << ticket.getTransportID()
                << ", Seat Number: " << ticket.getSeatNumber() << endl;
        }
    }
}
