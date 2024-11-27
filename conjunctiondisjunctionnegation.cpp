#include <iostream>

using namespace std;

// Function to print truth table for conjunction (AND)
void printConjunctionTruthTable() {
    cout << "\nTruth Table for Conjunction (AND):\n";
    cout << " A | B | A AND B\n";
    cout << "---|---|--------\n";
    cout << " 0 | 0 |   " << (0 && 0) << endl;
    cout << " 0 | 1 |   " << (0 && 1) << endl;
    cout << " 1 | 0 |   " << (1 && 0) << endl;
    cout << " 1 | 1 |   " << (1 && 1) << endl;
}

// Function to print truth table for disjunction (OR)
void printDisjunctionTruthTable() {
    cout << "\nTruth Table for Disjunction (OR):\n";
    cout << " A | B | A OR B\n";
    cout << "---|---|-------\n";
    cout << " 0 | 0 |   " << (0 || 0) << endl;
    cout << " 0 | 1 |   " << (0 || 1) << endl;
    cout << " 1 | 0 |   " << (1 || 0) << endl;
    cout << " 1 | 1 |   " << (1 || 1) << endl;
}

// Function to print truth table for negation (NOT)
void printNegationTruthTable() {
    cout << "\nTruth Table for Negation (NOT):\n";
    cout << " A | NOT A\n";
    cout << "---|------\n";
    cout << " 0 |   " << (!0) << endl;
    cout << " 1 |   " << (!1) << endl;
}

int main() {
    int choice;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Print truth table for Conjunction (AND)" << endl;
        cout << "2. Print truth table for Disjunction (OR)" << endl;
        cout << "3. Print truth table for Negation (NOT)" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                printConjunctionTruthTable();
                break;

            case 2:
                printDisjunctionTruthTable();
                break;

            case 3:
                printNegationTruthTable();
                break;

            case 4:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
