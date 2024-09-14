#include <iostream>
#include <string>

using namespace std;

class User {
	//this is for user information
private:
	string name;
	int age;
	string email;

public:
	//constructor
	User(string fName, int fAge, string fEmail) {
		name = fName;
		 age = fAge  ;
		email = fEmail  ;
	}

	//Lets display to screen of user informations
	void displayInfo() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "e-Mail: " << email << endl;
		
	}
	// that's for about updating user informations

	void updatingInfo(string fName, int fAge, string fEmail) {
		name = fName;
		age = fAge;
		email = fEmail;
	}

};


int main() {

	User user1("Ahmet", 21, "ahmet21@gmail.com");

	//display on the screen
	cout << "USER INFO : \n" << endl;
	user1.displayInfo();

	// let's uptdate that
	user1.updatingInfo("ALP", 22, "alp22@gmail.com");

	// display update info
	cout <<"\nDisplay updated info \n" << endl;
	user1.displayInfo();

}