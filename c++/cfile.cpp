#include<iostream>
#include<fstream>
using namespace std;

int main (){

	ofstream o("vommal.txt",ios::app);
	o <<"gommal vokka tevadeya sunni"<<endl ;
	o<<"vunn suthel enn sunni "<<endl;
	o<<"nai thevadeya"<<endl;
	o.close();

     return 0 ;


}
