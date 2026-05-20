#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Passenger
{
public:
    string name;
    int trainNumber;
    int seats;
    float charges;
};

class Train
{
public:
    int trainNo;
    string trainName;
    string destination;
    float price;
    string time;
    int availableSeats;

    Train(int no, string tName, string dest, float p, string t, int seats)
    {
        trainNo = no;
        trainName = tName;
        destination = dest;
        price = p;
        time = t;
        availableSeats = seats;
    }
};

class TrainReservationSystem
{
private:
    vector<Train> trains;

public:
    TrainReservationSystem()
    {
        trains.push_back(Train(1001, "Red Lines Express", "Boston to Manhattan", 5000, "9 AM", 50));
        trains.push_back(Train(1002, "Red Lines Express", "Manhattan to Boston", 5000, "12 PM", 45));
        trains.push_back(Train(1003, "LA City Express", "Boston to L.A", 4500, "8 AM", 40));
        trains.push_back(Train(1004, "LA City Express", "L.A to Boston", 4500, "11 AM", 35));
        trains.push_back(Train(1005, "Iron City Express", "Boston to Chicago", 4000, "7 AM", 30));
        trains.push_back(Train(1006, "Iron City Express", "Chicago to Boston", 4000, "9:30 AM", 25));
        trains.push_back(Train(1007, "Keystone Express", "Boston to Washington", 3500, "1 PM", 20));
        trains.push_back(Train(1008, "Keystone Express", "Washington to Boston", 3500, "4 PM", 18));
        trains.push_back(Train(1009, "Meteor Express", "Boston to Miami", 6000, "3:35 PM", 15));
        trains.push_back(Train(1010, "Meteor Express", "Miami to Boston", 6000, "4:15 PM", 10));
    }

    void login()
    {
        string username, password;

        cout << "\n========== LOGIN ==========\n";

        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        if (username == "user" && password == "pass")
        {
            cout << "\nLogin Successful!\n";
        }
        else
        {
            cout << "\nInvalid Username or Password!\n";
            exit(0);
        }
    }

    void viewTrains()
    {
        cout << "\n====================================================================================================\n";

        cout << left
             << setw(10) << "TrainNo"
             << setw(25) << "Train Name"
             << setw(30) << "Destination"
             << setw(12) << "Charges"
             << setw(12) << "Seats"
             << "Time\n";

        cout << "====================================================================================================\n";

        for (int i = 0; i < trains.size(); i++)
        {
            cout << left
                 << setw(10) << trains[i].trainNo
                 << setw(25) << trains[i].trainName
                 << setw(30) << trains[i].destination
                 << setw(12) << trains[i].price
                 << setw(12) << trains[i].availableSeats
                 << trains[i].time << endl;
        }
    }

    void reserveTicket()
    {
        Passenger p;

        cin.ignore();

        cout << "\nEnter Passenger Name: ";
        getline(cin, p.name);

        cout << "Enter Number of Seats: ";
        cin >> p.seats;

        viewTrains();

        cout << "\nEnter Train Number: ";
        cin >> p.trainNumber;

        bool found = false;

        for (int i = 0; i < trains.size(); i++)
        {
            if (trains[i].trainNo == p.trainNumber)
            {
                found = true;

                if (p.seats > trains[i].availableSeats)
                {
                    cout << "\nSeats Not Available!\n";
                    return;
                }

                trains[i].availableSeats -= p.seats;

                p.charges = trains[i].price * p.seats;

                printTicket(p, trains[i]);

                saveReservation(p);

                break;
            }
        }

        if (!found)
        {
            cout << "\nInvalid Train Number!\n";
        }
    }

    void printTicket(Passenger p, Train t)
    {
        cout << "\n================ TICKET ================\n";

        cout << "Passenger Name : " << p.name << endl;
        cout << "Train Number   : " << t.trainNo << endl;
        cout << "Train Name     : " << t.trainName << endl;
        cout << "Destination    : " << t.destination << endl;
        cout << "Departure Time : " << t.time << endl;
        cout << "Seats Booked   : " << p.seats << endl;
        cout << "Total Charges  : Rs." << p.charges << endl;

        cout << "========================================\n";
    }

    void saveReservation(Passenger p)
    {
        ofstream file("reservations.txt", ios::app);

        if (!file)
        {
            cout << "\nError Opening File!\n";
            return;
        }

        file << p.name << "\t"
             << p.trainNumber << "\t"
             << p.seats << "\t"
             << p.charges << endl;

        file.close();

        cout << "\nReservation Saved Successfully!\n";
    }

    void cancelReservation()
    {
        int trainNo;

        cout << "\nEnter Train Number to Cancel Reservation: ";
        cin >> trainNo;

        cout << "\nReservation Cancelled Successfully!\n";
    }

    void searchTrain()
    {
        int trainNo;

        cout << "\nEnter Train Number to Search: ";
        cin >> trainNo;

        bool found = false;

        for (int i = 0; i < trains.size(); i++)
        {
            if (trains[i].trainNo == trainNo)
            {
                found = true;

                cout << "\nTrain Found!\n";

                cout << "Train Name     : " << trains[i].trainName << endl;
                cout << "Destination    : " << trains[i].destination << endl;
                cout << "Charges        : Rs." << trains[i].price << endl;
                cout << "AvailableSeats : " << trains[i].availableSeats << endl;
                cout << "Departure Time : " << trains[i].time << endl;

                break;
            }
        }

        if (!found)
        {
            cout << "\nTrain Not Found!\n";
        }
    }

    void totalTrains()
    {
        cout << "\nTotal Number of Trains Available: " << trains.size() << endl;
    }

    void menu()
    {
        int choice;

        do
        {
            cout << "\n================ TRAIN RESERVATION SYSTEM ================\n";

            cout << "1. Reserve Ticket\n";
            cout << "2. View Available Trains\n";
            cout << "3. Cancel Reservation\n";
            cout << "4. Search Train\n";
            cout << "5. Total Trains\n";
            cout << "6. Exit\n";

            cout << "\nEnter Your Choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                reserveTicket();
                break;

            case 2:
                viewTrains();
                break;

            case 3:
                cancelReservation();
                break;

            case 4:
                searchTrain();
                break;

            case 5:
                totalTrains();
                break;

            case 6:
                cout << "\nThank You for Using the System!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
            }

        } while (choice != 6);
    }
};

int main()
{
    TrainReservationSystem reservationSystem;

    reservationSystem.login();

    reservationSystem.menu();

    return 0;
}
