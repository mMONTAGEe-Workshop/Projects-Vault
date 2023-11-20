#include <iostream>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include <thread>

using namespace std;
// Decoder Function
void readLog() {
    ifstream file("log.txt");

    if (file.is_open()) {
        int storedFalseVar, storedTrueVar;

        file >> storedFalseVar >> storedTrueVar;

        cout << "Stored Values:" << endl;
        cout << "{" << endl;
        cout << "True ASCII - " << storedTrueVar << endl;
        cout << "False ASCII - " << storedFalseVar << endl;
        cout << "}" << endl;

        file.close();
    } else {
        cerr << "Porblems with opening log.txt" << endl;
    }
}

int main() {
    bool keepRunning = true;
    while(keepRunning) {
        char true_var;
        int false_var = (rand() % 50 - 5);
        int x = 0;
        char authority;

        cout << "Please input secret letter to authorize or type '*' to quit: ";
        // 'd' for code or 'e' for decode   [d stands for davit and e stands for enrike as assigned]
        cin >> authority;

        if (authority == '*') {
            keepRunning = false;
            break;  // Exit the loop
        }


        if (authority != 'd' && authority != 'e') {
            cout << "You are Unauthorised" << endl;
        } else {
            cout << "Welcome!" << endl;
            cout << "{============[]============}" << endl;
        }


        switch (authority) {
            // Coder and file creator/logger. davit's part
            case 'd': {
                cout << " " << endl;
                cout << "Enter Character = ";
                cin >> true_var;
                x = true_var;

                ofstream log("log.txt");
                log << false_var << endl;
                log << x << endl;
                log.close();

                cout << "ASCII Value is = " << false_var << endl;
                cout << " " <<endl;
                cout << "Exiting in 5 seconds..." << endl;
                this_thread::sleep_for(chrono::seconds(5)); // Creating a Delay before program collapses to give time to see the results
                keepRunning = false;
                break;
            }

            case 'e':
                // Call of Decoder Function, Enrike's part
                readLog();
                cout << "{============[]============}" << endl;
                cout << " " <<endl;
                cout << "Exiting in 10 seconds..." << endl; // Creating a Delay before program collapses to give time to see the results
                this_thread::sleep_for(chrono::seconds(10));
                keepRunning = false;
                break;

        }
    }
}