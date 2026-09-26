#include <iostream>
using namespace std;

int categoryChoice = 0;
int durationChoice = 0 ;
int actionChoice = 0;

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

        cout << "\n-------------------------------------------------------------" << endl;
        cout << "                CONTENT RECOMMEND FOR YOU" << endl;
        cout << "-------------------------------------------------------------" << endl;

        // Step 3: Recommendation Logic using switch & if/else
        switch (categoryChoice) {
        case 1: // Comedy
            if (durationChoice == 1) {
                cout << "Title:   'When Your WiFi Stops Working During a Game'" << endl;
                cout << "Creator: @daily_laughs" << endl;
                cout << "Length:  20s" << endl;
            }
            else {
                cout << "Title:   'Types of Students Before an Exam'" << endl;
                cout << "Creator: @campus_comedy" << endl;
                cout << "Length:  75s" << endl;
            }
            break;

        case 2: // Tech
            if (durationChoice == 1) {
                cout << "Title:   '3 VS Code Shortcuts You Should Know'" << endl;
                cout << "Creator: @code_tips" << endl;
                cout << "Length:  25s" << endl;
            }
            else {
                cout << "Title:   'How Does the TikTok Algorithm Work?'" << endl;
                cout << "Creator: @tech_explained" << endl;
                cout << "Length:  90s" << endl;
            }
            break;

        case 3: // Food
            if (durationChoice == 1) {
                cout << "Title:   'Easy 5-Minute Garlic Noodles'" << endl;
                cout << "Creator: @easy_eats" << endl;
                cout << "Length:  25s" << endl;
            }
            else {
                cout << "Title:   'How to Make Homemade Ramen from Scratch'" << endl;
                cout << "Creator: @home_cooking" << endl;
                cout << "Length:  120s" << endl;
            }
            break;

        case 4: // Dance
            if (durationChoice == 1) {
                cout << "Title:   'Learn This Viral Dance in 20 Seconds'" << endl;
                cout << "Creator: @dance_daily" << endl;
                cout << "Length:  20s" << endl;
            }
            else {
                cout << "Title:   'Full Beginner Hip-Hop Dance Tutorial'" << endl;
                cout << "Creator: @dance_studio" << endl;
                cout << "Length:  60s" << endl;
            }
            break;
        }
        
        // Step 4: Simulate TikTok User Interaction
        if (categoryChoice >= 1 && categoryChoice <= 4) {
            while(true){
                cout << "-------------------------------------------------------------" << endl;
                cout << "Action: (1) Like Video  |  (2) Not Interested  |  (3) Share" << endl;
                cout << "Select action (1-3): ";
                if (cin >> actionChoice && (actionChoice >= 1 && actionChoice <= 3)) {
                    if (actionChoice == 1) {
                        cout << "Liked! TikTok will recommend more content like this to you." << endl;
                        break;
                    }
                    else if (actionChoice == 2) {
                        cout << "We will no longer recommend similar content to you in the future." << endl;
                        break;
                    }
                    else if (actionChoice == 3) {
                        cout << "Link copied. You can now share it with others." << endl;
                        break;
                    }
                }
                cout << "Invalid input! Please enter a number between 1 and 3." << endl << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }  
        }

    return 0;
}