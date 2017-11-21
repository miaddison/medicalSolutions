#ifndef Patient_H
#define Patient_H

#include <string>

using namespace std;

class Patient
{
private:
	string name, dateOfBirth, address, phoneNumber, currentMedications, height, weight, reasonForVisit, allergies;
	int currentPainLevel;
	bool safeInHome;
public:
	Patient();
	Patient(string, string, string, string, string, string, string, string, string, int, bool);
	void setName(string n);
	void setDateOfBirth(string d);
	void setAddress(string a);
	void setPhoneNumber(string p);
	void setCurrentMedications(string c);
	void setHeight(string h);
	void setWeight(string w);
	void setReasonForVisit(string r);
	void setAllergies(string a);
	void setCurrentPainLevel(int c);
	void setSafeInHome(bool s);

	string getName();
	string getDateOfBirth();
	string getAddress();
	string getPhoneNumber();
	string getCurrentMedications();
	string getHeight();
	string getWeight();
	string getReasonForVisit();
	string getAllergies();
	int getCurrentPainLevel();
	bool getSafeInHome();

	void printPatient(Patient);
};

#endif
