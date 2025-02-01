#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Room structure to store information about each room
struct Room {
    int roomNumber;
    bool isBooked;
    string guestName;
};

// Hotel class to manage rooms and operations
class Hotel {
private:
    vector<Room> rooms;
    int totalRooms;

public:
    // Constructor to initialize the hotel with a given number of rooms
    Hotel(int n) {
        totalRooms = n;
        for (int i = 1; i <= n; ++i) {
            Room room;
            room.roomNumber = i;
            room.isBooked = false;
            rooms.push_back(room);
        }
    }

    // Method to check room availability
    void checkAvailability() {
        cout << "Available Rooms:\n";
        bool foundAvailableRoom = false;
        for (const auto &room : rooms) {
            if (!room.isBooked) {
                cout << "Room Number: " << room.roomNumber << endl;
                foundAvailableRoom = true;
            }
        }

        if (!foundAvailableRoom) {
            cout << "No available rooms at the moment.\n";
        }
    }

    // Method to book a room
    void bookRoom() {
        int roomNum;
        cout << "Enter Room Number to Book: ";
        cin >> roomNum;

        if (roomNum < 1 || roomNum > totalRooms) {
            cout << "Invalid room number.\n";
            return;
        }

        if (rooms[roomNum - 1].isBooked) {
            cout << "Sorry, this room is already booked.\n";
        } else {
            string guest;
            cout << "Enter guest name: ";
            cin.ignore();  // Clear the input buffer
            getline(cin, guest);

            rooms[roomNum - 1].isBooked = true;
            rooms[roomNum - 1].guestName = guest;
            cout << "Room " << roomNum << " has been booked for " << guest << ".\n";
        }
    }

    // Method to view booked rooms
    void viewBookedRooms() {
        cout << "Booked Rooms:\n";
        bool foundBookedRoom = false;
        for (const auto &room : rooms) {
            if (room.isBooked) {
                cout << "Room Number: " << room.roomNumber << ", Guest: " << room.guestName << endl;
                foundBookedRoom = true;
            }
        }

        if (!foundBookedRoom) {
            cout << "No rooms are currently booked.\n";
        }
    }
};

int main() {
    int numRooms;
    cout << "Enter total number of rooms in the hotel: ";
    cin >> numRooms;

    Hotel hotel(numRooms);  // Create hotel with specified number of rooms

    int choice;
    do {
        cout << "\nHotel Management System\n";
        cout << "1. Check Room Availability\n";
        cout << "2. Book Room\n";
        cout << "3. View Booked Rooms\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hotel.checkAvailability();
                break;
            case 2:
                hotel.bookRoom();
                break;
            case 3:
                hotel.viewBookedRooms();
                break;
            case 4:
                cout << "Exiting the system.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
