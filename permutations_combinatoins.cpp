#include <iostream>
#include <string>
using namespace std;


int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}


int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}


int permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}


void generatePermutations(string str, int start, int end) {
    if (start == end) {
        cout << str << endl;
    } else {
        for (int i = start; i <= end; i++) {
            swap(str[start], str[i]);
            generatePermutations(str, start + 1, end);
            swap(str[start], str[i]);
        }
    }
}

int main() {
    int choice;

    do {

        cout << "\n--- Menu ---" << endl;
        cout << "1. Compute Combinations" << endl;
        cout << "2. Compute Permutations" << endl;
        cout << "3. Generate Permutation Patterns" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int n, r;
                cout << "Enter the value of n (total elements): ";
                cin >> n;
                cout << "Enter the value of r (selected elements): ";
                cin >> r;

                if (n >= r && n >= 0 && r >= 0) {
                    int result = combination(n, r);
                    cout << "Number of combinations (C(" << n << ", " << r << ")) = " << result << endl;
                } else {
                    cout << "Invalid input. n and r must be non-negative and n >= r." << endl;
                }
                break;
            }

            case 2: {
                int n, r;
                cout << "Enter the value of n (total elements): ";
                cin >> n;
                cout << "Enter the value of r (selected elements): ";
                cin >> r;

                if (n >= r && n >= 0 && r >= 0) {
                    int result = permutation(n, r);
                    cout << "Number of permutations (P(" << n << ", " << r << ")) = " << result << endl;
                } else {
                    cout << "Invalid input. n and r must be non-negative and n >= r." << endl;
                }
                break;
            }

            case 3: {
                string str;
                cout << "Enter a string to generate permutations: ";
                cin >> str;
                cout << "Permutations of the string are:\n";
                generatePermutations(str, 0, str.length() - 1);
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

