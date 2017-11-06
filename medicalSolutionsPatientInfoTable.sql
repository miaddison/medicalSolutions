CREATE TABLE [dbo].[patientInfo]
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
)

GO

CREATE SEQUENCE seq_id
MINVALUE 1000
START WITH 1
INCREMENT BY 1
CACHE 10;