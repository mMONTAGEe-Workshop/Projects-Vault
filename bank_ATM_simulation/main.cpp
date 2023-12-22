#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;


int withStatement (int WD, const int Array[]);
string encryptDecrypt(string toEncrypt);
void welcomeMessage(string name);
void choosewithdrawAmount();
void messageApproved();
void messageRejected();
void printRecipe (string ATMID, string ATMNAME, int transactID, string cardNumber, string name, string expirationDate, int withdrawalAmount, bool approval);
void printTransFile (string ATMID, string ATMNAME, int transactID, string cardNumber, string name, string expirationDate, ofstream& transactFile, int cardID, const int pincode);

int main(int argc, const char * argv[]) {
    // Simulated Credit Card
    string name = "Nikol Pashinyan";
    int cardID = rand() % 100 + 10;
    string cardNumber = "1654";
    string expirationDate = "12/12/2025";
    int balance = 2756896;
    const int pinValue = 1985;

    //ATM
    string ATMID = "5375";
    string ATMNAME = "AliyevBank-J6";
    int transactID = rand() % 10000 + 100;

    // Code Base
    const int wdArray[] = {1000000, 1500000, 2000000, 2500000, 3000000, 3500000};
    int pincode;
    int withdrawalAmount;
    int chosenWD;
    bool approved;

    // relative time to ATM
    time_t curr_time;
    curr_time = time(NULL);
    char *tm = ctime(&curr_time);

    // =================================================================================================================

    //  Welcome message, user asked to input PIN.
    welcomeMessage(name);

    // Pincode checkpoint, will ask user for pin code until input pincode will match constant pincode on simulated credit card
    do {

        cout << " > ";
        cin >> pincode;

        if(pincode != pinValue){
            cerr<<"Unable Verify Pin Code, Please Try Again"<<endl;
        }

    } while(pincode != pinValue);

    this_thread::sleep_for(chrono::seconds(1));


    cout<<" "<<endl;
    cout<< setw(20) <<"<=====[WITHDRAW]=====>"<<endl;
    cout<<" "<<endl;

    // Withdrawal Procedure, User chooses amount, ATM checks pin, ATM stores chosen withdrawal amount
    choosewithdrawAmount();

    // Choice checkpoint, will ask user to choose again if user inputs number number less than 1 or higher than 6 (which shouldnt happen with real ATMs with buttons)
    do {

        cout << " > ";
        cin >> chosenWD;

        if(chosenWD < 1 || chosenWD > 6){
            cerr<<"Invalid Input, Please try again"<<endl;
        }

    } while(chosenWD < 1 || chosenWD > 6);
    withdrawalAmount = withStatement(chosenWD, wdArray);

    // Creating Transact information file
    // adding final components to transaction information file
    ofstream transactFile("transactinfo.txt");
    printTransFile(ATMID,ATMNAME,transactID,cardNumber,name,expirationDate,transactFile,cardID,pinValue);
    transactFile.close();

    // Withdrawal check, if it doesnt exceed the balance one have
    if (withdrawalAmount <= balance) {
        this_thread::sleep_for(chrono::seconds(1));
        messageApproved();
        approved = true;
    } else {
        messageRejected();
        approved = false;
    }

    // printing final recepient
    this_thread::sleep_for(chrono::seconds(2));
    cout<<" "<<endl;
    cout<< setw(20) << "<=====[RECEPIENT]=====>"<<endl;
    cout<<" "<<endl;

    printRecipe(ATMID,ATMNAME,transactID,cardNumber,name,expirationDate,withdrawalAmount,approved);

    return 0;
}

void welcomeMessage(string name){
    cout << "Welcome!" << " " << name << endl;
    cout << "Please wait while we process your request." << endl;
    this_thread::sleep_for(chrono::seconds(4));
    cout<< " " << endl;
    cout<< "PLEASE ENTER YOUR PIN" << endl;
    cout<< "PRESS ENTER TO CONTINUE" << endl;
}
void choosewithdrawAmount(){
    cout << "PLEASE CHOOSE WITHDRAWAL AMOUNT" << endl;
    cout<<" "<<endl;
    cout << setw(20) << "1. 1,000,000 $" << endl;
    cout << setw(20) << "2. 1,500,000 $" << endl;
    cout << setw(20) << "3. 2,000,000 $" << endl;
    cout << setw(20) << "4. 2,500,000 $" << endl;
    cout << setw(20) << "5. 3,000,000 $" << endl;
    cout << setw(20) << "6. 3,500,000 $" << endl;
}
void messageApproved(){
    cout<< "YOUR TRANSACTION IS APPROVED" << endl;
    cout<< "DISPENSING YOUR CASH NOW" << endl;
    cout<< " " << endl;
    cout<< "THANK YOU FOR BANKING WITH US!" << endl;
}
void messageRejected(){
    cerr<< "YOUR TRANSACTION IS DECLINED" << endl;
    cout<< " " << endl;
    cout<< "THANK YOU FOR BANKING WITH US!" << endl;
}
int withStatement (int WD, const int Array[]){
    int withdrawalAmount = 0;
    if( WD == 1){
        withdrawalAmount = Array[0];
    } else if (WD == 2){
        withdrawalAmount = Array[1];
    } else if (WD == 3){
        withdrawalAmount = Array[2];
    } else if (WD == 4){
        withdrawalAmount = Array[3];
    } else if (WD == 5){
        withdrawalAmount = Array[4];
    } else if (WD == 6){
        withdrawalAmount = Array[5];
    }

    return withdrawalAmount;
}
void printRecipe (string ATMID, string ATMNAME, int transactID, string cardNumber, string name, string expirationDate, int withdrawalAmount, bool approval){
    time_t curr_time;
    curr_time = time(NULL);
    char *tm = ctime(&curr_time);

    string encryptedName = encryptDecrypt(name);
    string decryptedName = encryptDecrypt(encryptedName);

    cout<<"Current Time: "<< tm <<endl;
    cout<<"ATM ID: "<< ATMID <<endl;
    cout<<" "<<endl;
    cout<<"ATM NAME: "<< ATMNAME <<endl;
    cout<<" "<<endl;
    cout<<"User Name: "<< decryptedName <<endl;
    cout<<" "<<endl;
    cout<<"Card Number: "<< cardNumber <<endl;
    cout<<" "<<endl;
    cout<<"Expiration Date: "<< expirationDate <<endl;
    cout<<" "<<endl;
    cout<<"Transaction ID: "<<transactID<<endl;
    cout<<" "<<endl;
    cout<<"Withdrawal Amount: "<< withdrawalAmount <<endl;
    cout<<" "<<endl;
    cout<<"Transaction Status: "<< approval << " " << "1 Approved | 0 Rejected" <<endl;

}
void printTransFile (string ATMID, string ATMNAME, int transactID, string cardNumber, string name, string expirationDate, ofstream& transactFile, int cardID, const int pincode){
    time_t curr_time;
    curr_time = time(NULL);
    char *tm = ctime(&curr_time);

    string encryptedName = encryptDecrypt(name);

    transactFile << "Time: " << tm << "\n";
    transactFile << "Name: " << encryptedName << "\n";
    transactFile << "Card ID: " << cardID << "\n";
    transactFile << "Card Number: " << cardNumber << "\n";
    transactFile << "Card Pin Code: " << pincode << "\n";
    transactFile << "Expiration Date: " << expirationDate << "\n";

    transactFile << "ATM ID: " << ATMID << "\n";
    transactFile << "ATM NAME: " << ATMNAME << "\n";
    transactFile << "TRANSACTION ID: " << transactID << "\n";
}

string encryptDecrypt(string toEncrypt){
    char key = 'K';
    string output = toEncrypt;

    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key;

    return output;
}