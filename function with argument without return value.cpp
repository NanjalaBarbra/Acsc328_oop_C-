#include <iostream>
using namespace std;

// Function to calculate and display the volume (No return value)
void calculateVolume(double radius) {
    double volume = (4.0 / 3.0) * 3.14159 * radius * radius * radius;
    cout << "The volume of the sphere is: " << volume << endl;
}

int main() {
	cout<<"Name:NANJALA BARBRA"<<endl;
	cout<<"Registration Number:EB3/61588/22"<<endl;
    double radius;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Calling function with argument
    calculateVolume(radius);

    return 0;
}
