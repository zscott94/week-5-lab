#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

int main() {

    int y, z;

    cout << "Please enter two integers for 2 triangle side lengths: " << "\n";
    cin >> y >> z;
    auto result = sqrt(pow (y, 2)+ pow(z, 2));
    cout << "\n The hypotenuse length is: " << (result);
    ofstream myfile;
    myfile.open ("week-5-lab-result.txt");
    myfile << "Your triangle has 3 sides that are: " << y << "cm, " << z << "cm and " << result << "cm" "\n";
    myfile.close();

    return 0;

}