#include <iostream>
using namespace std;

int main() {
		cout<<"Name:NANJALA BARBRA"<<endl;
	   	cout<<"Registration Number:EB3/61588/22"<<endl;
    int i = 4; // Starting with 4 stars

    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i--; // Decrease row count
    }

    return 0;
}
