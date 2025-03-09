#include <iostream>
using namespace std;

// Function to calculate the volume of a sphere
double calculateVolume(double radius) {
    const double PI = 3.142; // Defining Pi
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

int main() {
	cout<<"Name:NANJALA BARBRA"<<endl;
	cout<<"Registration Number:EB3/61588/22"<<endl;
    double radius;
    
    // Getting user input
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Calling the function and storing the returned value
    double volume = calculateVolume(radius);

    // Displaying the result
    cout << "The volume of the sphere is: " << volume << endl;
    
    return 0;
}
