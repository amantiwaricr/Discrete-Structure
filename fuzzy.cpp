#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

void createFuzzySet(double fuzzySet[], int& size) 
{
    cout << "Enter the size of the fuzzy set: ";
    cin >> size;

    cout << "Enter elements of the fuzzy set: ";
    for (int i = 0; i < size; ++i) 
    {
        cin >> fuzzySet[i];
    }
}


void fuzzyUnion(const double set1[], const double set2[], int size1, int size2) 
{
    int maxSize = (size1 > size2) ? size1 : size2;
    double result[MAX_SIZE];

    cout << "Fuzzy Union: ";
    for (int i = 0; i < maxSize; ++i) 
    {
        result[i] = (i < size1 && i < size2) ? max(set1[i], set2[i]) : (i < size1 ? set1[i] : set2[i]);
        cout << result[i] << " ";
    }
    cout << endl;
}


void fuzzyIntersection(const double set1[], const double set2[], int size1, int size2) 
{
    int maxSize = (size1 > size2) ? size1 : size2;
    double result[MAX_SIZE];

    cout << "Fuzzy Intersection: ";
    for (int i = 0; i < maxSize; ++i)
     {
        result[i] = (i < size1 && i < size2) ? min(set1[i], set2[i]) : 0;
        cout << result[i] << " ";
    }
    cout << endl;
}


void fuzzyComplement(const double set[], int size) 
{
    double result[MAX_SIZE];

    cout << "Fuzzy Complement: ";
    for (int i = 0; i < size; ++i)
     {
        result[i] = 1 - set[i];
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() 
{
    double set1[MAX_SIZE], set2[MAX_SIZE];
    int size1 = 0, size2 = 0;
    char choice;

    do 
    {
        cout << "\nMenu:\n";
        cout << "1. Create Fuzzy Sets\n";
        cout << "2. Fuzzy Union\n";
        cout << "3. Fuzzy Intersection\n";
        cout << "4. Fuzzy Complement\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
         {
            case '1':
                std::cout << "Enter elements for set 1:\n";
                createFuzzySet(set1, size1);
                std::cout << "Enter elements for set 2:\n";
                createFuzzySet(set2, size2);
                std::cout << "Fuzzy sets created successfully!\n";
                break;
            case '2':
                if (size1 == 0 || size2 == 0) 
                {
                    std::cout << "Please create fuzzy sets first!\n";
                } 
                else 
                {
                    fuzzyUnion(set1, set2, size1, size2);
                }
                break;
            case '3':
                if (size1 == 0 || size2 == 0)
                {
                    std::cout << "Please create fuzzy sets first!\n";
                }
                 else 
                {
                    fuzzyIntersection(set1, set2, size1, size2);
                }
                break;
            case '4':
                if (size1 == 0)
                 {
                    std::cout << "Please create fuzzy set first!\n";
                 }
                 else 
                {
                    fuzzyComplement(set1, size1);
                }
                break;
            case '5':
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice! Please choose again.\n";
        }
    } while (choice != '5');

    return 0;
}
