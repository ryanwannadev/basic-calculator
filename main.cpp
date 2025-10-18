
#include <iostream>
using namespace std;
int main() {
	string mode;
	double a;
	double b;
	cout<<"What operation would you like to do" <<endl;
	cout<<"(mult,add,sub div)";
	cin>>mode;
	if(mode !=  "mult" && mode != "add" && mode != "sub" && mode != "div") {
		cout<<"Invalid operation.Please select one of the listed options" <<endl;
		return 0;
	}
	if (mode=="mult") {
		cout<<"\n--Multiplication--\n" <<endl;
		cout<< endl;
		cout<<"select a" <<endl;
		cin>>a;
		cout<<"select b" <<endl;
		cin>>b;
		auto answer=a*b;
		cout<<endl;
		cout << "The answer is: " << answer << endl;
		return 0;
	}
	else if (mode=="add") {

		cout<<"\n--Addition--\n" <<endl;
		cout<< endl;
		cout<<"select a" <<endl;
		cin>>a;
		cout<<"select b" <<endl;
		cin>>b;
		double answer=a+b;
		cout << "The answer is: " << answer << endl;
		return 0
	}
	else if (mode=="sub") {
		cout<<"\n--Subtraction--\n" <<endl;
		cout<< endl;
		cout<<"select a" <<endl;
		cin>>a;
		cout<<"select b" <<endl;
		cin>>b;
		double answer=a-b;
		cout << "The answer is: " << answer << endl;
		return 0;
	}
	else if (mode=="div"){
	    cout<<"\n--Division--\n" <<endl;
		cout<< endl;
		cout<<"select a" <<endl;
		cin>>a;
		cout<<"select b" <<endl;
		cin>>b;
		double answer=a/b;
		cout << "The answer is: " << answer << endl;
		return 0;
	}
	
}
