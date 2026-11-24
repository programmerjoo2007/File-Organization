#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("student.txt");
    if (!file.is_open()) 
    {
        cout << "Could not open student.txt.\n";
    }

    string name;
    int id;
    double grade;
    cout << "Enter Your Name : ";
    getline(cin, name);
    cout << "Enter Your ID : ";
    cin >> id;
    cout << "Enter Your Grade : ";
    cin >> grade;

    file << "Full Name : " << name << "\n" << "ID : " << id << "\n" << "Grade : " << grade << "\n";

    file.close();
    return 0;
}