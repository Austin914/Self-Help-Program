/*//Self-Help program
 Contributors: Ainsley, Kimber, Johnathon,
 //*/


#include <iostream>
#include <string>

using namespace std;
int main() {
    int snt = 0;
    string name = "";
    string age = "";
    string mail = "";
    string pNum = "";
    string address = "";
    
    
    while(snt == 0)
    { //Get the basic information from the user
        
        cout << "What's your name? (First Last)";
        cin.ignore(100, ' ');
        cin >> name;
        cout << "How old are you? ";
        cin >> age;
        cout << "What's your email? ";
        cin >> mail;
        cout << "What is your phone number? ";
        cin.ignore(100, ' ');
        cin >> pNum;
        cout << "What is your address? (Street, City, Zipcode) ";
        cin.ignore(100, ' ');
        cin >> address;

        cout << "Enter a 0 to continue or another number to stop: ";
        cin >> snt;
    }
    return 0;
}
