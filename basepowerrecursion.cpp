#include <iostream>
using namespace std;


double power(double a, int n) {
    if (n == 0)
        return 1;
    else
        return a * power(a, n - 1);
}


int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}


bool searchElement(int list[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (list[i] == element)
            return true;
    }
    return false;
}

int main() {
    int choice;

    do {

        cout << "\n--- Menu ---" << endl;
        cout << "1. Compute a^n" << endl;
        cout << "2. Compute Factorial" << endl;
        cout << "3. Search an element from a list" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double a;
                int n;
                cout << "Enter the value of a: ";
                cin >> a;
                cout << "Enter the value of n: ";
                cin >> n;

                if (n < 0) {
                    cout << "n must be a non-negative integer!" << endl;
                } else {
                    double result = power(a, n);
                    cout << a << "^" << n << " = " << result << endl;
                }
                break;
            }

            case 2: {
                int num;
                cout << "Enter a number to find its factorial: ";
                cin >> num;

                if (num < 0) {
                    cout << "Factorial is not defined for negative numbers!" << endl;
                } else {
                    int fact = factorial(num);
                    cout << "Factorial of " << num << " is " << fact << endl;
                }
                break;
            }

            case 3: {
                int size, element;
                cout << "Enter the number of elements in the list: ";
                cin >> size;


                int list[size];

                cout << "Enter " << size << " elements of the list:\n";
                for (int i = 0; i < size; i++) {
                    cin >> list[i];
                }

                cout << "Enter the element to search: ";
                cin >> element;

                bool found = searchElement(list, size, element);
                if (found)
                    cout << "Element " << element << " is found in the list." << endl;
                else
                    cout << "Element " << element << " is not found in the list." << endl;
                break;
            }

            case 4:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
