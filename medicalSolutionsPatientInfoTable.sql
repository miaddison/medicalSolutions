USE medicalSolutions;

CREATE TABLE patientInfo
(
	[patient_id] INT NOT NULL PRIMARY KEY, 
    [patient_fname] VARCHAR(50) NOT NULL,
	[patient_lname] VARCHAR(50) NOT NULL, 
    [patient_birth_date] DATE NOT NULL, 
    [patient_address_street] VARCHAR(50) NOT NULL, 
    [patient_address_city] VARCHAR(50) NOT NULL, 
    [patient_address_state] VARCHAR(2) NOT NULL, 
    [patient_address_zip] NUMERIC(5) NOT NULL, 
    [patient_phone] NUMERIC(10) NULL, 
    [patient_medications] VARCHAR(MAX) NULL, 
    [patient_height] NUMERIC(5, 2) NOT NULL, 
    [patient_weight] NUMERIC(4, 1) NOT NULL, 
    [patient_complaint] VARCHAR(MAX) NOT NULL,
	[patient_allergies] VARCHAR(MAX) NULL,
	[patient_pain] NUMERIC(2) NULL,
	[patient_safe] VARCHAR(MAX) NULL
)

INSERT INTO patientInfo (patient_id,patient_fname,patient_lname,patient_birth_date,patient_address_street, 
	patient_address_city,patient_address_state,patient_address_zip,patient_phone,patient_medications,
	patient_height,patient_weight,patient_complaint,patient_allergies,patient_pain,patient_safe)
VALUES (1000,'Brady','Chiles','1994-12-03','2500 Grand Ave','Des Moines','IA',54321,5159973957,'None',75.0,180,
	'Migraine','Sulfa',5,'Yes');