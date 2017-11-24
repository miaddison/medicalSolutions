#ifndef Patient_H
#define Patient_H
#include "MyForm.h"
#include <string>


//using namespace std;
using namespace patientInput;

class Patient

{

private:

	std::string firstName, lastName, addressStreet, addressCity, addressState, addressZip, phone,
		birthdate, height, weight, temp, bp, painLevel, safeHome, allergies, medications, reasonVisit;
	
public:
	Patient();
	Patient(std::string fname, std::string lname, std::string astreet, std::string acity, std::string astate, std::string azip, std::string ph,
		std::string bdate, std::string ht, std::string wt, std::string tp, std::string bP, std::string plevel, std::string shome,
		std::string allergy, std::string meds, std::string rvisit);
	// set methods
	// column on
	void setFirstName(std::string fname);
	void setLastName(std::string lname);
	void setAddressStreet(std::string astreet);
	void setAddressCity(std::string acity);
	void setAddressState(std::string astate);
	void setAddressZip(std::string azip);
	void setPhoneNumber(std::string ph);
	// column two
	void setBirthdate(std::string bdate); 
	void setHeight(std::string ht);
	void setWeight(std::string  wt);
	void setTemp(std::string tp);
	void setBP(std::string bP);
	void setPainLevel(std::string plevel);
	void setSafeHome(std::string shome);
	// column three
	void setAllergies(std::string allergy);
	void setMedications(std::string meds);
	void setReasonVisit(std::string rvisit);

	// Get Methods
	// column one
	std::string getFirstName();
	std::string getLastName();
	std::string getAddressStreet();
	std::string getAddressCity();
	std::string getAddressState();
	std::string getAddressZip();
	std::string getPhone();
	// column two
	std::string getBirthDate();
	std::string getHeight();
	std::string getWeight();
	std::string getTemp();
	std::string getBP();
	std::string getPainLevel();
	std::string getSafeHome();
	// column three
	std::string getAllergies();
	std::string getMedications();
	std::string getReasonVisit();
	
	

	



	void printPatient();

};



#endif