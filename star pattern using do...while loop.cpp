#include <iostream>
using namespace std;

int main() {
		cout<<"Name:NANJALA BARBRA"<<endl;
	   	cout<<"Registration Number:EB3/61588/22"<<endl;
    int i = 4; // Starting number of stars

    do {
        int j = 1;
        do {
            cout << "* ";
            j++;
        } while (j <= i); 

        cout << endl;
        i--; 
    } while (i >= 1); 

    return 0;
}
