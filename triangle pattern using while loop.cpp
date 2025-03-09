#include <iostream>
using namespace std;

int main() {
	   	cout<<"Name:NANJALA BARBRA"<<endl;
	   	cout<<"Registration Number:EB3/61588/22"<<endl;
    int i = 1, n = 4; // Number of rows

    while (i <= n) {
        int j = 1, num = i * 3; // Multiples of 3
        while (j <= i) {
            cout << num << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
