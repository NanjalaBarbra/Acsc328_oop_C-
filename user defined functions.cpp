#include <iostream>
#include <cmath>  

using namespace std;
	
	const float PI = 3.142;
	void volume( r);
	void volume(r){
		float volume;
		volume= (4.0 / 3.0) * r * r*PI;
		cout<<"The volume = "<<volume;
	}
	int main(int argc, char** argv)
	{
			cout<<"Name:NANJALA BARBRA"<<endl;
	   	   	cout<<"Registration number:EB3/61588/22"<<endl;
		float r;
	
		cout<<"Enter the radius:\n";
		cin>>r;
		
		volume(r,PI)
		
		return 0;
	}