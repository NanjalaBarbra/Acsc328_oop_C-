#include <iostream>
using namespace std;

int main() {
	cout<<"Name:NANJALA BARBRA"<<endl;
	cout<<"Registration Number:EB3/61588/22"<<endl;
    int i = 0, rows = 4, cols = 4;
    while (i < 4) {
        int j = 0, num = 3;
        while (j < 4) {
            cout << num << " ";
            num += 3;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
