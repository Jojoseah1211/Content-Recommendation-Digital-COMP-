#include <iostream>
using namespace std;

int genreChoice = 0;

int main(){

    cout << "========================================" << endl;
    cout << "         CONTENT RECOMMENDATION     " << endl;
    cout << "========================================" << endl;

    // Step 1: Input & Validate Preferred Content Category
    while (true) {
        cout << "\nWhat kind of TikTok video do you want to watch?" << endl;
        cout << "1. Comedy" << endl;
        cout << "2. Tech" << endl;
        cout << "3. Food Recipes" << endl;
        cout << "4. Dance & Trends" << endl;
        cout << "Enter your choice (1-4): ";

        if (cin >> categoryChoice && categoryChoice >= 1 && categoryChoice <= 4) {
            break; // Valid input
        }

        cout << ">> Invalid input! Please enter a number between 1 and 4." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Step 2: Input & Validate Preferred Duration
    while (true) {
        cout << "\nChoose preferred video duration:" << endl;
        cout << "1. Short (Under 30 seconds)" << endl;
        cout << "2. Long (60 seconds or more)" << endl;
        cout << "Enter your choice (1-2): ";

        if (cin >> durationChoice && (durationChoice == 1 || durationChoice == 2)) {
            break; // Valid input
        }
        cout << ">> Invalid input! Please enter 1 or 2." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    return 0;
}