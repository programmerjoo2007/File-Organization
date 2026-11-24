#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

    string a, b, c;
    ifstream filein("fruit.txt");
    filein >> a >> b >> c;
    cout << a << "\n" << b << "\n" << c << endl;
    filein.close();

    ofstream fileout("fruit.txt", ios::app);
    fileout << "\nFresh Fruits";
    fileout.close();
    return 0;
}