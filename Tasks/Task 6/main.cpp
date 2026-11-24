#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    ofstream fileout("grades.txt");
    int grade;

    cout << "Enter five integer grades : ";
    for (int i = 0; i < 5; i++) 
    {
        cin >> grade;
        fileout << grade << endl;
    }
    fileout.close();

    ifstream filein("grades.txt");
    cout << "\nGrades in file : " << endl;
    while (filein >> grade) 
    {
        cout << grade << endl;
    }
    filein.close();

    int deleteGrade;
    cout << "\nEnter a grade to delete : ";
    cin >> deleteGrade;

    ifstream readFile("grades.txt");
    ofstream tempFile("temp.txt");

    while (readFile >> grade) 
    {
        if (grade != deleteGrade) 
        {
            tempFile << grade << endl;
        }
    }

    readFile.close();
    tempFile.close();
    
    if (remove("grades.txt") == 0 && rename("temp.txt", "grades.txt") == 0) 
    {
        cout << "Grade deleted and file updated successfully." << endl;
    } 
    else 
    {
        cout << "Error updating the file." << endl;
    }
    return 0;
}