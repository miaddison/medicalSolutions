// medicalSolutionsGeneralAsPossible.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

void printHeadings();

class Patient 
{
	private:
		string name, dateOfBirth, address, phoneNumber, currentMedications, height, weight, reasonForVisit, allergies;
		int currentPainLevel;
		bool safeInHome;
	public:
		Patient();
		Patient(string,string,string,string,string,string,string,string,string,int,bool);
		void setName(string n){name = n;}
		void setDateOfBirth(string d){dateOfBirth = d;}
		void setAddress(string a){address = a;}
		void setPhoneNumber(string p){phoneNumber = p;}
		void setCurrentMedications(string c){currentMedications = c;}
		void setHeight(string h){height = h + "ft";}
		void setWeight(string w){weight = w + "lbs";}
		void setReasonForVisit(string r){reasonForVisit = r;}
		void setAllergies(string a){allergies = a;}
		void setCurrentPainLevel(int c){currentPainLevel = c;}
		void setSafeInHome(bool s){safeInHome = s;}
		
		string getName(){return name;}
		string getDateOfBirth(){return dateOfBirth;}
		string getAddress(){return address;}
		string getPhoneNumber(){return phoneNumber;}
		string getCurrentMedications(){return currentMedications;}
		string getHeight(){return height;}
		string getWeight(){return weight;}
		string getReasonForVisit(){return reasonForVisit;}
		string getAllergies(){return allergies;}
		int getCurrentPainLevel(){return currentPainLevel;}
		bool getSafeInHome(){return safeInHome;}
		
		void printPatient(Patient);
};

Patient::Patient(){
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

Patient::Patient(string n, string db, string add, string ph, string m, string h, string w, string r, string al, int p, bool s){
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

void Patient::printPatient(Patient p){
	std::ofstream patientsFile;
	patientsFile.open ("Patients.txt", std::ofstream::out | std::ofstream::app );
	
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
	if(p.getSafeInHome() == 1){
		patientsFile << left << setw(3) << "Yes";
	}else{
		patientsFile << left << setw(3) << "No";
	}
	patientsFile << endl;
	
	patientsFile.close();
}


int main()
{
	
	printHeadings();
	
	Patient firstPatient("Brady Chiles", "12-03-1994", "2500 Grand AVE Des Moines, Iowa", "515-997-3957", "None", "6.3", "180", "Migraine", "Sulfa", 5, true);
	firstPatient.printPatient(firstPatient);
	
	Patient secondPatient("Brady Chiles", "12-03-1994", "2500 Grand AVE Des Moines, Iowa", "515-997-3957", "None", "6.3", "180", "Migraine", "Sulfa", 5, true);
	secondPatient.printPatient(secondPatient);
	
    return 0;
}

void printHeadings(){
	std::ofstream patientsFile;
	patientsFile.open ("Patients.txt");
	
	patientsFile << left << setw(20) << "Name";
	patientsFile << left << setw(20) << "Date of Birth";
	patientsFile << left << setw(40) << "Address";
	patientsFile << left << setw(20) << "Phone Number";
	patientsFile << left << setw(30) << "Current Medications";
	patientsFile << left << setw(8) << "Height";
	patientsFile << left << setw(10) << "Weight";
	patientsFile << left << setw(30) << "Reason for Visit";
	patientsFile << left << setw(20) << "Allergies";
	patientsFile << left << setw(5) << "Current Pain Level";
	
	patientsFile << endl;
	
	patientsFile.close();
}
