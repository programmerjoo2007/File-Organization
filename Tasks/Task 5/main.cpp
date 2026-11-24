#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    ofstream outFile("students.txt", ios::app);
    char input = 'y';

    while (input == 'y' || input == 'Y') 
    {
        char name[20];
        int id;
        float grade;
        char delim = '$';

        cout << "Enter Student Name : ";
        cin.getline(name, 20);

        cout << "Enter Student ID : ";
        cin >> id;

        cout << "Enter Student grade : ";
        cin >> grade;

        outFile << name << ", " << id << ", " << grade << " " << delim << endl;

        cout << "Do you want to add more Students ? (y for Yes | n for No) : ";
        cin >> input;
        cin.ignore();
    }

    outFile.close();
    return 0;
}