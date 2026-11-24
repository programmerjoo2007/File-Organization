#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("welcome.txt");
    if (!file.is_open())
    {
        cout << "Error opening the file" << endl;
    }
    
    file << "Hello Everybody";
    file.seekp(11);
    file << "one ";
    file.close();

    return 0;
}