#include <iostream>
#include <cmath>  

using namespace std;

int main() {
	cout<<"Name:NANJALA BARBRA"<<endl;
	cout<<"Registration number:EB3/61588/22"<<endl;
	const double PI = 3.142;
    float radius, volume;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    volume = (4.0 / 3.0) * pow(radius, 3); // Using predefined function pow()

    cout << "The volume of the sphere is: " << volume << endl;
    return 0;
}
