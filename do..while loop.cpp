#include <iostream>
using namespace std;

int main() {
	cout<<"Name:NANJALA BARBRA"<<endl;
	cout<<"Registration Number:EB3/61588/22"<<endl;
    int i = 0, rows = 4, cols = 4;

    do {
        int j = 0, num = 3;
        do {
            cout << num << " ";
            num += 3;
            j++;
        } while (j < cols);
        cout << endl;
        i++;
    } while (i < rows);

    return 0;
}
