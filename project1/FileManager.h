#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <string>
#include <vector>
#include "Ticket.h"
using namespace std;

namespace FileManagerNamespace {

    class FileManager {
    public:
        static void saveData(const string& filename, const vector<TicketNamespace::Ticket>& tickets);
        static void loadData(const string& filename, vector<TicketNamespace::Ticket>& tickets);
    };

}

#endif
