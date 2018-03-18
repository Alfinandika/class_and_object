#include <iostream>
using namespace std;

class student{				// Deklarasi Class abstrak bernama student
	private: 				// Enkapsulasi 'private' berarti hanya boleh diakses di dalam class itu sendiri dan turunannya 
		string sId;			//Deklarasi property
		string name;		//Deklarasi property
		string gender;		//Deklarasi property
	public:					// Enkapsulasi 'public' berarti boleh diakses di luar class itu sendiri 
		student();			//Deklasari method abstrak
		void printOut();	//Deklasari method abstrak
};

student::student(){			//mengimplementasikan method abstrak dengan nama student di class student
	sId = "12345";			//memberi value pada property di class student dengan teknik setter
	name = "AA";			//memberi value pada property di class student dengan teknik setter
	gender = "L";			//memberi value pada property di class student dengan teknik setter
}

void student::printOut(){					//mengimplementasikan method abstrak dengan nama printOut di class student
	cout<<"Welcome .."<<name <<endl;		//mengambil data dengan teknik getter
	cout<<"Your Student id is "<< sId<<endl;//mengambil data dengan teknik getter

}

int main(){
	student stdn; 	 // pendeklarasian Object stdn dengan menginstance class student
	stdn.printOut(); //memanggil method printOut yang ada pada class student melalui object stdn
	return 0;
}