#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "Patient.h"


Patient::Patient() {
	name = "";
	dateOfBirth = "";
	address = "";
	phoneNumber = "";
	currentMedications = "";
	height = "";
	weight = "";
	reasonForVisit = "";
	allergies = "";
	currentPainLevel = 0;
	safeInHome = true;
}

Patient::Patient(string n, string db, string add, string ph, string m, string h, string w, string r, string al, int p, bool s) {
	name = n;
	dateOfBirth = db;
	address = add;
	phoneNumber = ph;
	currentMedications = m;
	height = h + "ft";
	weight = w + "lbs";
	reasonForVisit = r;
	allergies = al;
	currentPainLevel = p;
	safeInHome = s;
}


void Patient::setName(string n) { name = n; }
void Patient::setDateOfBirth(string d) { dateOfBirth = d; }
void Patient::setAddress(string a) { address = a; }
void Patient::setPhoneNumber(string p) { phoneNumber = p; }
void Patient::setCurrentMedications(string c) { currentMedications = c; }
void Patient::setWeight(string w) { weight = w + "lbs"; }
void Patient::setReasonForVisit(string r) { reasonForVisit = r; }
void Patient::setAllergies(string a) { allergies = a; }
void Patient::setCurrentPainLevel(int c) { currentPainLevel = c; }
void Patient::setSafeInHome(bool s) { safeInHome = s; }

string Patient::getName() { return name; }
string Patient::getDateOfBirth() { return dateOfBirth; }
string Patient::getAddress() { return address; }
string Patient::getPhoneNumber() { return phoneNumber; }
string Patient::getCurrentMedications() { return currentMedications; }
string Patient::getHeight() { return height; }
string Patient::getWeight() { return weight; }
string Patient::getReasonForVisit() { return reasonForVisit; }
string Patient::getAllergies() { return allergies; }
int Patient::getCurrentPainLevel() { return currentPainLevel; }
bool Patient::getSafeInHome() { return safeInHome; }

void Patient::printPatient(Patient p) {
	std::ofstream patientsFile;
	patientsFile.open("Patients.txt", std::ofstream::out | std::ofstream::app);

	patientsFile << left << setw(20) << p.getName();
	patientsFile << left << setw(20) << p.getDateOfBirth();
	patientsFile << left << setw(40) << p.getAddress();
	patientsFile << left << setw(20) << p.getPhoneNumber();
	patientsFile << left << setw(30) << p.getCurrentMedications();
	patientsFile << left << setw(8) << p.getHeight();
	patientsFile << left << setw(10) << p.getWeight();
	patientsFile << left << setw(30) << p.getReasonForVisit();
	patientsFile << left << setw(20) << p.getAllergies();
	patientsFile << left << setw(5) << p.getCurrentPainLevel();
	if (p.getSafeInHome() == 1) {
		patientsFile << left << setw(3) << "Yes";
	}
	else {
		patientsFile << left << setw(3) << "No";
	}
	patientsFile << endl;

	patientsFile.close();
}