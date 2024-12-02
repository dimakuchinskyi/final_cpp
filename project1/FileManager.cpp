#include "FileManager.h"
#include <fstream>
#include <iostream>
#include <stdexcept>
using namespace std;
namespace FileManagerNamespace {
    void FileManager::saveData(const string& filename, const vector<TicketNamespace::Ticket>& tickets) {
        ofstream file(filename);
        if (!file.is_open()) {
            throw runtime_error("Error: Could not open file for writing.");
        }
        for (const auto& ticket : tickets) {
        }

        file.close();
    }

    void FileManager::loadData(const string& filename, vector<TicketNamespace::Ticket>& tickets) {
        ifstream file(filename);
        if (!file.is_open()) {
            throw runtime_error("Error: Could not open file for reading.");
        }
        string line;
        while (getline(file, line)) {
        }
        file.close();
    }

}
