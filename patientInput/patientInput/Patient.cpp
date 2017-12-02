#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "Patient.h"
#include "MyForm.h"

using namespace std;
using namespace patientInput;




Patient::Patient() {
	// column one
	firstName = "";
	lastName = "";
	addressStreet = "";
	addressCity = "";
	addressState = "";
	addressZip = "";
	phone = "";
	// column two
	birthdate = "";
	height = "";
	weight = "";
	temp = "";
	bp = "";
	painLevel = "";
	safeHome = "";
	// column three
	allergies = "";
	medications = "";
	reasonVisit = "";
}



Patient::Patient(std::string fname, std::string lname, std::string astreet, std::string acity, std::string astate, std::string azip, std::string ph,
	std::string bdate, std::string ht, std::string wt, std::string tp, std::string bP, std::string plevel, std::string shome,
	std::string allergy, std::string meds, std::string rvisit){
	// column one
	firstName = fname;
	lastName = lname;
	addressStreet = astreet;
	addressCity = acity;
	addressState = astate;
	addressZip = azip;
	phone = ph;
	// column two
	birthdate = bdate;
	height = ht;
	weight = wt;
	temp = tp; 
	bp = bP;
	painLevel = plevel;
	safeHome = shome;
	// column three
	allergies = allergy;
	medications = meds;
	reasonVisit = rvisit;
}

// Set methods
// column one
void Patient::setFirstName(std::string fname) { firstName = fname; }
void Patient::setLastName(std::string lname) { lastName = lname; }
void Patient::setAddressStreet(std::string astreet) { addressStreet = astreet; }
void Patient::setAddressCity(std::string acity) { addressCity = acity; }
void Patient::setAddressState(std::string astate) { addressState = astate; }
void Patient::setAddressZip(std::string azip) { addressZip = azip; }
void Patient::setPhoneNumber(std::string ph) { phone = ph; }
// column two
void Patient::setBirthdate(std::string bdate) { birthdate = bdate; }
void Patient::setHeight(std::string ht) { height = ht; }
void Patient::setWeight(std::string wt) { weight = wt; }
void Patient::setTemp(std::string tp) { temp = tp; }
void Patient::setBP(std::string bP) { bp = bP; }
void Patient::setPainLevel(std::string plevel) { painLevel = plevel; }
void Patient::setSafeHome(std::string shome) { safeHome = shome; }
// column three
void Patient::setAllergies(std::string allergy) { allergies = allergy; }
void Patient::setMedications(std::string meds) { medications = meds; }
void Patient::setReasonVisit(std::string rvisit) { reasonVisit = rvisit; }

// Get methods
// columnone
std::string Patient::getFirstName() { return firstName; }
std::string Patient::getLastName() { return lastName; }
std::string Patient::getAddressStreet() { return addressStreet; }
std::string Patient::getAddressCity() { return addressCity; }
std::string Patient::getAddressState() { return addressState; }
std::string Patient::getAddressZip() { return addressZip; }
std::string Patient::getPhone() { return phone; }
// column two
std::string Patient::getBirthDate() { return birthdate; }
std::string Patient::getHeight() { return height; }
std::string Patient::getWeight() { return weight; }
std::string Patient::getTemp() { return temp; }
std::string Patient::getBP() { return bp; }
std::string Patient::getPainLevel() { return painLevel; }
std::string Patient::getSafeHome() { return safeHome; }
// column three
std::string Patient::getAllergies() { return allergies; }
std::string Patient::getMedications() { return medications; }
std::string Patient::getReasonVisit() { return reasonVisit; }

bool Patient::fileExists(const std::string& filename)
{
	struct stat buf;
	if (stat(filename.c_str(), &buf) != -1)
	{
		return true;
	}
	return false;
}

void Patient::printHeaders() {

	std::ofstream patientsFile;

	patientsFile.open("Patients.txt", std::ios::out);
	// Column one
	patientsFile << left << setw(25) << "First Name";
	patientsFile << left << setw(25) << "Last Name";
	patientsFile << left << setw(25) << "Address";
	patientsFile << left << setw(25) << "City";
	patientsFile << left << setw(25) << "State";
	patientsFile << left << setw(25) << "Zip Code";
	patientsFile << left << setw(20) << "Phone Number";
	// Column two
	patientsFile << left << setw(20) << "Birthdate";
	patientsFile << left << setw(10) << "Height";
	patientsFile << left << setw(10) << "Weight";
	patientsFile << left << setw(15) << "Temperature";
	patientsFile << left << setw(20) << "Blood Pressure";
	patientsFile << left << setw(15) << "Pain Level";
	patientsFile << left << setw(50) << "Safe In Home?";
	// Column three
	patientsFile << left << setw(50) << "Allergies";
	patientsFile << left << setw(50) << "Medications";
	patientsFile << left << setw(50) << "Reason for Visit";

	patientsFile << endl;

	patientsFile.close();
}

void Patient::printPatient() {

	std::string file = "patientsFile";

	if (fileExists(file) != true) {
		printHeaders();
	}

		std::ofstream patientsFile;

		patientsFile.open("Patients.txt", std::ios::out | std::ios::app);
		// Column one
		patientsFile << left << setw(25) << getFirstName() << left << setw(25) << getLastName()
		<< left << setw(25) << getAddressStreet();
		patientsFile << left << setw(25) << getAddressCity();
		patientsFile << left << setw(25) << getAddressState();
		patientsFile << left << setw(25) << getAddressZip();
		patientsFile << left << setw(15) << getPhone();
		patientsFile << left << setw(20) << getBirthDate();
		patientsFile << left << setw(8) << getHeight();
		patientsFile << left << setw(8) << getWeight();
		patientsFile << left << setw(8) << getTemp();
		patientsFile << left << setw(10) << getBP();
		patientsFile << left << setw(5) << getPainLevel();
		patientsFile << left << setw(100) << getSafeHome();
		patientsFile << left << setw(100) << getAllergies();
		patientsFile << left << setw(100) << getMedications();
		patientsFile << left << setw(100) << getReasonVisit();

		patientsFile << endl;

		patientsFile.close();

		cout << "patient info entered." << endl;

}

