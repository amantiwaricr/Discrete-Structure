#include <iostream>
using namespace std;

int euclideanGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int extendedEuclidean(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int gcd = extendedEuclidean(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;
}

int main() {
    int choice;

    do {

        cout << "\n--- Menu ---" << endl;
        cout << "1. Euclidean Algorithm (GCD)" << endl;
        cout << "2. Extended Euclidean Algorithm" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int a, b;
                cout << "Enter two integers: ";
                cin >> a >> b;

                int gcd = euclideanGCD(a, b);
                cout << "The GCD of " << a << " and " << b << " is " << gcd << endl;
                break;
            }

            case 2: {
                int a, b, x, y;
                cout << "Enter two integers: ";
                cin >> a >> b;

                int gcd = extendedEuclidean(a, b, x, y);
                cout << "The GCD of " << a << " and " << b << " is " << gcd << endl;
                cout << "The coefficients x and y such that " << a << "*x + " << b << "*y = " << gcd << " are:" << endl;
                cout << "x = " << x << ", y = " << y << endl;
                break;
            }

            case 3:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}

