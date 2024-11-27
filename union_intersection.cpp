
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;


void displaySet(const set<int>& s) {
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}


void unionSet(const set<int>& set1, const set<int>& set2) {
    set<int> result;
    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(result, result.begin()));
    cout << "Union of sets: ";
    displaySet(result);
}


void intersectionSet(const set<int>& set1, const set<int>& set2) {
    set<int> result;
    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(result, result.begin()));
    cout << "Intersection of sets: ";
    displaySet(result);
}


void differenceSet(const set<int>& set1, const set<int>& set2) {
    set<int> result;
    set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(result, result.begin()));
    cout << "Difference of sets: ";
    displaySet(result);
}

int main() {
    set<int> set1, set2;
    int choice, element, n1, n2;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Enter elements of Set 1" << endl;
        cout << "2. Enter elements of Set 2" << endl;
        cout << "3. Union of Set 1 and Set 2" << endl;
        cout << "4. Intersection of Set 1 and Set 2" << endl;
        cout << "5. Difference of Set 1 and Set 2 (Set1 - Set2)" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                set1.clear();
                cout << "Enter number of elements in Set 1: ";
                cin >> n1;
                cout << "Enter elements of Set 1: ";
                for (int i = 0; i < n1; i++) {
                    cin >> element;
                    set1.insert(element);
                }
                break;

            case 2:
                set2.clear();
                cout << "Enter number of elements in Set 2: ";
                cin >> n2;
                cout << "Enter elements of Set 2: ";
                for (int i = 0; i < n2; i++) {
                    cin >> element;
                    set2.insert(element);
                }
                break;

            case 3:
                unionSet(set1, set2);
                break;

            case 4:
                intersectionSet(set1, set2);
                break;

            case 5:
                differenceSet(set1, set2);
                break;

            case 6:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}
