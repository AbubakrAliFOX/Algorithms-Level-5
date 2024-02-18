#pragma once
#include <iostream>
#include <queue>
#include <string>
#include "clsDate.h"

using namespace std;

class clsQueueLine
{
private:
    string _queuePrfx;
    int _estTime;
    int _servedClients = 0;
    int _waitingClients = 0;
    int _totalTickets = 0;
    
    class Ticket
    {
    private:
        string _issueTime;
        int _ticketNumber;
        string _queuePrfx;
        int _waitingClients;
        int _serveTime;

    public:
        // static int _totalTickets;
        Ticket(string queuePrfx, int estTime, int waitingClients, int ticketNumber)
        {
            _issueTime = clsDate::GetSystemDateTimeString();
            _waitingClients = waitingClients;
            _serveTime = estTime * waitingClients;
            _queuePrfx = queuePrfx;
            _ticketNumber = ticketNumber + 1;
        }

        string fullNumber()
        {
            return _queuePrfx + to_string(_ticketNumber);
        }

        void Print()
        {
            cout << "\n\t\t\t  _______________________\n";
            cout << "\n\t\t\t\t    " << fullNumber();
            cout << "\n\n\t\t\t    " << _issueTime;
            cout << "\n\t\t\t    Wating Clients = " << _waitingClients;
            cout << "\n\t\t\t      Serve Time In";
            cout << "\n\t\t\t       " << _serveTime << " Minutes.";
            cout << "\n\t\t\t  _______________________\n";
        }
    };

public:
    queue<Ticket> Line;

    clsQueueLine(string queuePrfx, int estTime)
    {
        _queuePrfx = queuePrfx;
        _estTime = estTime;
    }


    void PrintTicketsLineLTR()
    {
        if (Line.empty())
        {
            cout << "\n\n\nNo Tickets! \n\n\n";
        }
        else
        {
            queue<Ticket> NewLine = Line;
            cout << "Tickets: ";
            while (!NewLine.empty())
            {
                cout << NewLine.front().fullNumber() << "--->";
                NewLine.pop();
            }
        }
    }

    void PrintInfo()
    {
        cout << "\n\t\t\t _________________________\n";
        cout << "\n\t\t\t\tQueue Info";
        cout << "\n\t\t\t _________________________\n";
        cout << "\n\t\t\t    Prefix   = " << _queuePrfx;
        cout << "\n\t\t\t    Total Tickets   = " << _totalTickets;
        cout << "\n\t\t\t    Served Clients  = " << _servedClients;
        cout << "\n\t\t\t    Wating Clients  = " << _waitingClients;
        ;
        cout << "\n\t\t\t _________________________\n";
        cout << "\n";
    }

    void PrintAllTickets()
    {
        cout << "\n\n\t\t\t       ---Tickets---";

        if (Line.empty())
            cout << "\n\n\t\t\t     ---No Tickets---\n";

        // we copy the queue in order not to lose the original
        queue<Ticket> TempQueueLine = Line;

        while (!TempQueueLine.empty())
        {
            TempQueueLine.front().Print();
            TempQueueLine.pop();
        }
    }

    void IssueTicket()
    {
        Ticket newTicket(_queuePrfx, _estTime, _waitingClients, _totalTickets);
        _waitingClients++;
        _totalTickets++;
        Line.push(newTicket);
    }

    void ServeNextClient () {
        Line.pop();
        _servedClients++;
        _waitingClients--;
    }
};
