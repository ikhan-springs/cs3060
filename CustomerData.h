#include "PersonData.h"

//CustomerData class holds unique int for each customer and if customer wants to be on mailing list
//This class is a subclass of PersonData
class CustomerData : public PersonData {
	private:
		int customerNumber;
		bool mailingList;
	public:
		int getCustomerNumber() const 
			{ return customerNumber; };
		bool getMailingList() const 
			{ return mailingList; };
		void setCustomerNumber(int);
		void setMailingList(bool);
};
