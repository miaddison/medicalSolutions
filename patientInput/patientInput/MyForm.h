#pragma once

namespace patientInput {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelFirstName;
	private: System::Windows::Forms::Label^  labelLastName;
	private: System::Windows::Forms::Label^  labelBirthdate;
	protected:

	protected:


	private: System::Windows::Forms::Label^  labelAdressStreet;
	private: System::Windows::Forms::Label^  labelAddressCity;
	private: System::Windows::Forms::Label^  labelAddressState;
	private: System::Windows::Forms::Label^  labelAddressZip;
	private: System::Windows::Forms::Label^  labelPhone;
	private: System::Windows::Forms::Label^  labelMedications;






	private: System::Windows::Forms::Label^  labelHeight;
	private: System::Windows::Forms::Label^  labelWeight;
	private: System::Windows::Forms::Label^  labelReasonVisit;



	private: System::Windows::Forms::Label^  labelAllergies;

	private: System::Windows::Forms::Label^  labelPainLevel;

	private: System::Windows::Forms::Label^  labelBP;

	private: System::Windows::Forms::Label^  labelTemp;
	private: System::Windows::Forms::Label^  labelPatientInformation;


	private: System::Windows::Forms::TextBox^  textBoxFirstName;
	private: System::Windows::Forms::TextBox^  textBoxLastName;
	private: System::Windows::Forms::TextBox^  textBoxAddressStreet;
	private: System::Windows::Forms::TextBox^  textBoxAddressCity;
	private: System::Windows::Forms::TextBox^  textBoxAddressState;
	private: System::Windows::Forms::TextBox^  textBoxAddressZip;
	private: System::Windows::Forms::TextBox^  textBoxPhone;
	private: System::Windows::Forms::TextBox^  textBoxBirthdate;
	private: System::Windows::Forms::Label^  labelSafeHome;









	private: System::Windows::Forms::TextBox^  textBoxWeight;

	private: System::Windows::Forms::TextBox^  textBoxHeight;
	private: System::Windows::Forms::TextBox^  textBoxTemp;
	private: System::Windows::Forms::TextBox^  textBoxPainLevel;



	private: System::Windows::Forms::TextBox^  textBoxBP;
	private: System::Windows::Forms::TextBox^  textBoxSafeHome;
	private: System::Windows::Forms::TextBox^  textBoxAllergies;
	private: System::Windows::Forms::TextBox^  textBoxMedications;
	private: System::Windows::Forms::TextBox^  textBoxReasonVisit;





	private: System::Windows::Forms::Button^  btnSubmit;

	private: System::Windows::Forms::Button^  btnReset;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->labelBirthdate = (gcnew System::Windows::Forms::Label());
			this->labelAdressStreet = (gcnew System::Windows::Forms::Label());
			this->labelAddressCity = (gcnew System::Windows::Forms::Label());
			this->labelAddressState = (gcnew System::Windows::Forms::Label());
			this->labelAddressZip = (gcnew System::Windows::Forms::Label());
			this->labelPhone = (gcnew System::Windows::Forms::Label());
			this->labelMedications = (gcnew System::Windows::Forms::Label());
			this->labelHeight = (gcnew System::Windows::Forms::Label());
			this->labelWeight = (gcnew System::Windows::Forms::Label());
			this->labelReasonVisit = (gcnew System::Windows::Forms::Label());
			this->labelAllergies = (gcnew System::Windows::Forms::Label());
			this->labelPainLevel = (gcnew System::Windows::Forms::Label());
			this->labelBP = (gcnew System::Windows::Forms::Label());
			this->labelTemp = (gcnew System::Windows::Forms::Label());
			this->labelPatientInformation = (gcnew System::Windows::Forms::Label());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAddressStreet = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAddressCity = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAddressState = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAddressZip = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPhone = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBirthdate = (gcnew System::Windows::Forms::TextBox());
			this->labelSafeHome = (gcnew System::Windows::Forms::Label());
			this->textBoxWeight = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHeight = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTemp = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPainLevel = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBP = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSafeHome = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAllergies = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMedications = (gcnew System::Windows::Forms::TextBox());
			this->textBoxReasonVisit = (gcnew System::Windows::Forms::TextBox());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelFirstName->Location = System::Drawing::Point(11, 110);
			this->labelFirstName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(90, 20);
			this->labelFirstName->TabIndex = 0;
			this->labelFirstName->Text = L"First Name:";
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLastName->Location = System::Drawing::Point(11, 149);
			this->labelLastName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(90, 20);
			this->labelLastName->TabIndex = 1;
			this->labelLastName->Text = L"Last Name:";
			// 
			// labelBirthdate
			// 
			this->labelBirthdate->AutoSize = true;
			this->labelBirthdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBirthdate->Location = System::Drawing::Point(330, 110);
			this->labelBirthdate->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelBirthdate->Name = L"labelBirthdate";
			this->labelBirthdate->Size = System::Drawing::Size(78, 20);
			this->labelBirthdate->TabIndex = 2;
			this->labelBirthdate->Text = L"Birthdate:";
			// 
			// labelAdressStreet
			// 
			this->labelAdressStreet->AutoSize = true;
			this->labelAdressStreet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAdressStreet->Location = System::Drawing::Point(11, 190);
			this->labelAdressStreet->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAdressStreet->Name = L"labelAdressStreet";
			this->labelAdressStreet->Size = System::Drawing::Size(72, 20);
			this->labelAdressStreet->TabIndex = 3;
			this->labelAdressStreet->Text = L"Address:";
			// 
			// labelAddressCity
			// 
			this->labelAddressCity->AutoSize = true;
			this->labelAddressCity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAddressCity->Location = System::Drawing::Point(11, 233);
			this->labelAddressCity->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAddressCity->Name = L"labelAddressCity";
			this->labelAddressCity->Size = System::Drawing::Size(39, 20);
			this->labelAddressCity->TabIndex = 4;
			this->labelAddressCity->Text = L"City:";
			// 
			// labelAddressState
			// 
			this->labelAddressState->AutoSize = true;
			this->labelAddressState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAddressState->Location = System::Drawing::Point(11, 273);
			this->labelAddressState->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAddressState->Name = L"labelAddressState";
			this->labelAddressState->Size = System::Drawing::Size(52, 20);
			this->labelAddressState->TabIndex = 5;
			this->labelAddressState->Text = L"State:";
			// 
			// labelAddressZip
			// 
			this->labelAddressZip->AutoSize = true;
			this->labelAddressZip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAddressZip->Location = System::Drawing::Point(11, 316);
			this->labelAddressZip->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAddressZip->Name = L"labelAddressZip";
			this->labelAddressZip->Size = System::Drawing::Size(35, 20);
			this->labelAddressZip->TabIndex = 6;
			this->labelAddressZip->Text = L"Zip:";
			// 
			// labelPhone
			// 
			this->labelPhone->AutoSize = true;
			this->labelPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPhone->Location = System::Drawing::Point(11, 358);
			this->labelPhone->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPhone->Name = L"labelPhone";
			this->labelPhone->Size = System::Drawing::Size(59, 20);
			this->labelPhone->TabIndex = 7;
			this->labelPhone->Text = L"Phone:";
			// 
			// labelMedications
			// 
			this->labelMedications->AutoSize = true;
			this->labelMedications->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMedications->Location = System::Drawing::Point(672, 213);
			this->labelMedications->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMedications->Name = L"labelMedications";
			this->labelMedications->Size = System::Drawing::Size(155, 20);
			this->labelMedications->TabIndex = 8;
			this->labelMedications->Text = L"Current Medications:";
			// 
			// labelHeight
			// 
			this->labelHeight->AutoSize = true;
			this->labelHeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelHeight->Location = System::Drawing::Point(330, 149);
			this->labelHeight->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelHeight->Name = L"labelHeight";
			this->labelHeight->Size = System::Drawing::Size(60, 20);
			this->labelHeight->TabIndex = 9;
			this->labelHeight->Text = L"Height:";
			// 
			// labelWeight
			// 
			this->labelWeight->AutoSize = true;
			this->labelWeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWeight->Location = System::Drawing::Point(330, 190);
			this->labelWeight->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelWeight->Name = L"labelWeight";
			this->labelWeight->Size = System::Drawing::Size(63, 20);
			this->labelWeight->TabIndex = 10;
			this->labelWeight->Text = L"Weight:";
			// 
			// labelReasonVisit
			// 
			this->labelReasonVisit->AutoSize = true;
			this->labelReasonVisit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelReasonVisit->Location = System::Drawing::Point(672, 309);
			this->labelReasonVisit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelReasonVisit->Name = L"labelReasonVisit";
			this->labelReasonVisit->Size = System::Drawing::Size(126, 20);
			this->labelReasonVisit->TabIndex = 11;
			this->labelReasonVisit->Text = L"Reason for Visit:";
			// 
			// labelAllergies
			// 
			this->labelAllergies->AutoSize = true;
			this->labelAllergies->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAllergies->Location = System::Drawing::Point(672, 110);
			this->labelAllergies->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAllergies->Name = L"labelAllergies";
			this->labelAllergies->Size = System::Drawing::Size(73, 20);
			this->labelAllergies->TabIndex = 12;
			this->labelAllergies->Text = L"Allergies:";
			// 
			// labelPainLevel
			// 
			this->labelPainLevel->AutoSize = true;
			this->labelPainLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPainLevel->Location = System::Drawing::Point(330, 316);
			this->labelPainLevel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPainLevel->Name = L"labelPainLevel";
			this->labelPainLevel->Size = System::Drawing::Size(85, 20);
			this->labelPainLevel->TabIndex = 13;
			this->labelPainLevel->Text = L"Pain Level:";
			// 
			// labelBP
			// 
			this->labelBP->AutoSize = true;
			this->labelBP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBP->Location = System::Drawing::Point(330, 273);
			this->labelBP->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelBP->Name = L"labelBP";
			this->labelBP->Size = System::Drawing::Size(121, 20);
			this->labelBP->TabIndex = 14;
			this->labelBP->Text = L"Blood Pressure:";
			// 
			// labelTemp
			// 
			this->labelTemp->AutoSize = true;
			this->labelTemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTemp->Location = System::Drawing::Point(330, 233);
			this->labelTemp->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelTemp->Name = L"labelTemp";
			this->labelTemp->Size = System::Drawing::Size(104, 20);
			this->labelTemp->TabIndex = 15;
			this->labelTemp->Text = L"Temperature:";
			// 
			// labelPatientInformation
			// 
			this->labelPatientInformation->AutoSize = true;
			this->labelPatientInformation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPatientInformation->Location = System::Drawing::Point(365, 24);
			this->labelPatientInformation->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPatientInformation->Name = L"labelPatientInformation";
			this->labelPatientInformation->Size = System::Drawing::Size(273, 35);
			this->labelPatientInformation->TabIndex = 16;
			this->labelPatientInformation->Text = L"Patient Information";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxFirstName->Location = System::Drawing::Point(116, 110);
			this->textBoxFirstName->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(150, 26);
			this->textBoxFirstName->TabIndex = 0;
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxLastName->Location = System::Drawing::Point(116, 149);
			this->textBoxLastName->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(150, 26);
			this->textBoxLastName->TabIndex = 1;
			// 
			// textBoxAddressStreet
			// 
			this->textBoxAddressStreet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxAddressStreet->Location = System::Drawing::Point(116, 190);
			this->textBoxAddressStreet->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxAddressStreet->Name = L"textBoxAddressStreet";
			this->textBoxAddressStreet->Size = System::Drawing::Size(150, 26);
			this->textBoxAddressStreet->TabIndex = 2;
			// 
			// textBoxAddressCity
			// 
			this->textBoxAddressCity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAddressCity->Location = System::Drawing::Point(116, 233);
			this->textBoxAddressCity->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxAddressCity->Name = L"textBoxAddressCity";
			this->textBoxAddressCity->Size = System::Drawing::Size(150, 26);
			this->textBoxAddressCity->TabIndex = 3;
			// 
			// textBoxAddressState
			// 
			this->textBoxAddressState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxAddressState->Location = System::Drawing::Point(116, 273);
			this->textBoxAddressState->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxAddressState->Name = L"textBoxAddressState";
			this->textBoxAddressState->Size = System::Drawing::Size(150, 26);
			this->textBoxAddressState->TabIndex = 4;
			// 
			// textBoxAddressZip
			// 
			this->textBoxAddressZip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAddressZip->Location = System::Drawing::Point(116, 316);
			this->textBoxAddressZip->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxAddressZip->Name = L"textBoxAddressZip";
			this->textBoxAddressZip->Size = System::Drawing::Size(150, 26);
			this->textBoxAddressZip->TabIndex = 5;
			// 
			// textBoxPhone
			// 
			this->textBoxPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPhone->Location = System::Drawing::Point(116, 358);
			this->textBoxPhone->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxPhone->Name = L"textBoxPhone";
			this->textBoxPhone->Size = System::Drawing::Size(150, 26);
			this->textBoxPhone->TabIndex = 6;
			// 
			// textBoxBirthdate
			// 
			this->textBoxBirthdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxBirthdate->Location = System::Drawing::Point(479, 110);
			this->textBoxBirthdate->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxBirthdate->Name = L"textBoxBirthdate";
			this->textBoxBirthdate->Size = System::Drawing::Size(150, 26);
			this->textBoxBirthdate->TabIndex = 7;
			// 
			// labelSafeHome
			// 
			this->labelSafeHome->AutoSize = true;
			this->labelSafeHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSafeHome->Location = System::Drawing::Point(330, 361);
			this->labelSafeHome->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSafeHome->Name = L"labelSafeHome";
			this->labelSafeHome->Size = System::Drawing::Size(110, 20);
			this->labelSafeHome->TabIndex = 25;
			this->labelSafeHome->Text = L"Safe in Home:";
			// 
			// textBoxWeight
			// 
			this->textBoxWeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxWeight->Location = System::Drawing::Point(479, 190);
			this->textBoxWeight->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxWeight->Name = L"textBoxWeight";
			this->textBoxWeight->Size = System::Drawing::Size(150, 26);
			this->textBoxWeight->TabIndex = 9;
			// 
			// textBoxHeight
			// 
			this->textBoxHeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxHeight->Location = System::Drawing::Point(479, 149);
			this->textBoxHeight->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxHeight->Name = L"textBoxHeight";
			this->textBoxHeight->Size = System::Drawing::Size(150, 26);
			this->textBoxHeight->TabIndex = 8;
			// 
			// textBoxTemp
			// 
			this->textBoxTemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTemp->Location = System::Drawing::Point(479, 233);
			this->textBoxTemp->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxTemp->Name = L"textBoxTemp";
			this->textBoxTemp->Size = System::Drawing::Size(150, 26);
			this->textBoxTemp->TabIndex = 10;
			// 
			// textBoxPainLevel
			// 
			this->textBoxPainLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPainLevel->Location = System::Drawing::Point(479, 316);
			this->textBoxPainLevel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxPainLevel->Name = L"textBoxPainLevel";
			this->textBoxPainLevel->Size = System::Drawing::Size(150, 26);
			this->textBoxPainLevel->TabIndex = 12;
			// 
			// textBoxBP
			// 
			this->textBoxBP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxBP->Location = System::Drawing::Point(479, 273);
			this->textBoxBP->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxBP->Name = L"textBoxBP";
			this->textBoxBP->Size = System::Drawing::Size(150, 26);
			this->textBoxBP->TabIndex = 11;
			// 
			// textBoxSafeHome
			// 
			this->textBoxSafeHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxSafeHome->Location = System::Drawing::Point(479, 358);
			this->textBoxSafeHome->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxSafeHome->Name = L"textBoxSafeHome";
			this->textBoxSafeHome->Size = System::Drawing::Size(150, 26);
			this->textBoxSafeHome->TabIndex = 13;
			// 
			// textBoxAllergies
			// 
			this->textBoxAllergies->Location = System::Drawing::Point(694, 133);
			this->textBoxAllergies->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxAllergies->Multiline = true;
			this->textBoxAllergies->Name = L"textBoxAllergies";
			this->textBoxAllergies->Size = System::Drawing::Size(229, 72);
			this->textBoxAllergies->TabIndex = 14;
			this->textBoxAllergies->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox15_TextChanged);
			// 
			// textBoxMedications
			// 
			this->textBoxMedications->Location = System::Drawing::Point(694, 233);
			this->textBoxMedications->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxMedications->Multiline = true;
			this->textBoxMedications->Name = L"textBoxMedications";
			this->textBoxMedications->Size = System::Drawing::Size(229, 72);
			this->textBoxMedications->TabIndex = 15;
			// 
			// textBoxReasonVisit
			// 
			this->textBoxReasonVisit->Location = System::Drawing::Point(694, 332);
			this->textBoxReasonVisit->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBoxReasonVisit->Multiline = true;
			this->textBoxReasonVisit->Name = L"textBoxReasonVisit";
			this->textBoxReasonVisit->Size = System::Drawing::Size(229, 72);
			this->textBoxReasonVisit->TabIndex = 16;
			// 
			// btnSubmit
			// 
			this->btnSubmit->Location = System::Drawing::Point(350, 463);
			this->btnSubmit->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(94, 53);
			this->btnSubmit->TabIndex = 17;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = true;
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(479, 463);
			this->btnReset->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(94, 53);
			this->btnReset->TabIndex = 18;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(988, 450);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->textBoxReasonVisit);
			this->Controls->Add(this->textBoxMedications);
			this->Controls->Add(this->textBoxAllergies);
			this->Controls->Add(this->textBoxSafeHome);
			this->Controls->Add(this->textBoxBP);
			this->Controls->Add(this->textBoxPainLevel);
			this->Controls->Add(this->textBoxTemp);
			this->Controls->Add(this->textBoxHeight);
			this->Controls->Add(this->textBoxWeight);
			this->Controls->Add(this->labelSafeHome);
			this->Controls->Add(this->textBoxBirthdate);
			this->Controls->Add(this->textBoxPhone);
			this->Controls->Add(this->textBoxAddressZip);
			this->Controls->Add(this->textBoxAddressState);
			this->Controls->Add(this->textBoxAddressCity);
			this->Controls->Add(this->textBoxAddressStreet);
			this->Controls->Add(this->textBoxLastName);
			this->Controls->Add(this->textBoxFirstName);
			this->Controls->Add(this->labelPatientInformation);
			this->Controls->Add(this->labelTemp);
			this->Controls->Add(this->labelBP);
			this->Controls->Add(this->labelPainLevel);
			this->Controls->Add(this->labelAllergies);
			this->Controls->Add(this->labelReasonVisit);
			this->Controls->Add(this->labelWeight);
			this->Controls->Add(this->labelHeight);
			this->Controls->Add(this->labelMedications);
			this->Controls->Add(this->labelPhone);
			this->Controls->Add(this->labelAddressZip);
			this->Controls->Add(this->labelAddressState);
			this->Controls->Add(this->labelAddressCity);
			this->Controls->Add(this->labelAdressStreet);
			this->Controls->Add(this->labelBirthdate);
			this->Controls->Add(this->labelLastName);
			this->Controls->Add(this->labelFirstName);
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"MyForm";
			this->Text = L"Patient Information";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
