
#include <iostream>
#include <cmath>

using namespace std;

void findFloor(double number) {
    cout << "Floor value of " << number << " is " << floor(number) << endl;
}

void findCeiling(double number) {
    cout << "Ceiling value of " << number << " is " << ceil(number) << endl;
}

int main() {
    int choice;
    double num;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Find Floor value" << endl;
        cout << "2. Find Ceiling value" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1 || choice == 2) {
            cout << "Enter a number: ";
            cin >> num;

            switch (choice) {
                case 1:
                    findFloor(num);
                    break;
                case 2:
                    findCeiling(num);
                    break;
            }
        } else if (choice != 3) {
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 3);

    cout << "Exiting the program." << endl;

    return 0;
}
