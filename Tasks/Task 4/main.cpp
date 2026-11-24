#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    int n;
    cout << "How many persons : ";
    cin >> n;

    ofstream fileout("persons.txt");
    for (int i = 0; i < n; i++) 
    {
        string name;
        int age;
        cout << "Enter name and age : ";
        cin >> name >> age;
        fileout << name << " " << age << endl;
    }
    fileout.close();

    vector <Person> persons;
    ifstream filein("persons.txt");
    Person p;
    while (filein >> p.name >> p.age) 
    {
        persons.push_back(p);
    }
    filein.close();

    Person youngest = persons[0];
    Person oldest = persons[0];

    for (int i = 1; i < persons.size(); i++) 
    {
        if (persons[i].age < youngest.age) 
        {
            youngest = persons[i];
        }
        if (persons[i].age > oldest.age) 
        {
            oldest = persons[i];
        }
    }

    ofstream resFile("results.txt");
    resFile << "Youngest : " << youngest.name << endl;
    resFile << "Oldest : " << oldest.name << endl;
    resFile.close();

    return 0;
}