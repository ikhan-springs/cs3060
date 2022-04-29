#include <string>

using namespace std;

//PersonData class holds name, address, and phone of one person
class PersonData {
	private:
		string lastName;
		string firstName;
		string address;
		string city;
		string state;
		string zip;
		string phone;
	public:
		string getLastName() const
			{ return lastName; };
		string getFirstName() const 
			{ return firstName; };
		string getAddress() const 
			{ return address; };
		string getCity() const 
			{ return city; };
		string getState() const 
			{ return state; };
		string getZip() const 
			{ return zip; };
		string getPhone() const 
			{ return phone; };
		void setLastName(string);
		void setFirstName(string);
		void setAddress(string);
		void setCity(string);
		void setState(string);
		void setZip(string);
		void setPhone(string);
};
