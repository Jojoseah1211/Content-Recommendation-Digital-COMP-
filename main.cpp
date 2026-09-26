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
    return 0;
}