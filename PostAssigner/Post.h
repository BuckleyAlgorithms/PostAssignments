#pragma once

#using<system.dll>

namespace PostAssigner {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Post
	/// </summary>
	public ref class Post : public System::Windows::Forms::Form
	{
	public:
		Post(void)
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
		~Post()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  errorAddPerson;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->errorAddPerson = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(228, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Post Assigner";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Post::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(57, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Post::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(211, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add Person";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Post::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(57, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Person";
			// 
			// errorAddPerson
			// 
			this->errorAddPerson->AutoSize = true;
			this->errorAddPerson->Location = System::Drawing::Point(408, 82);
			this->errorAddPerson->Name = L"errorAddPerson";
			this->errorAddPerson->Size = System::Drawing::Size(80, 13);
			this->errorAddPerson->TabIndex = 4;
			this->errorAddPerson->Text = L"errorAddPerson";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(370, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"label3";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(292, 77);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Remove Person";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Post::button2_Click);
			// 
			// Post
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 484);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->errorAddPerson);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Post";
			this->Text = L"Post";
			this->Load += gcnew System::EventHandler(this, &Post::Post_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
/*
A function to add an input user to the list of users
Will not add a user if they already are in the list
*/
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//Read in the user
	String ^ input_name = textBox1->Text;

	//Error check the input_name
	if (String::IsNullOrEmpty(input_name) || String::IsNullOrWhiteSpace(input_name)) {

	}
	bool char_not_valid_error = false;
	for (int i = 0; i < input_name->Length; i++) {
		if (!Char::IsLetter(input_name[i])) {
			if (input_name[i] != ' ') {
				char_not_valid_error = true;
			}
		}
	}
	if (char_not_valid_error == true) {

	}

	//Check if the input_name already exists in the list of users
	//Read in the file that contains the list of users
	ArrayList^ users = gcnew ArrayList;
	
	String^ usersList = "textfile.txt";
	try {
		StreamReader^ din = File::OpenText(usersList);
		String ^str;
		int count = 0;
		while ((str = din->ReadLine()) != nullptr) {
			count++;
			users->Add(str);
		}
		din->Close();
	}
	catch (Exception ^e) {
		if (dynamic_cast<FileNotFoundException^>(e)) {
			Console::WriteLine("file '{0}' not found", usersList);
		}
		else {
			Console::WriteLine("problem reading the file '{0}'", usersList);
		}
	}
	if (users->Contains(input_name)) {
		//User already exists
	}
	else {
		//Add the user
		StreamWriter^ sw = gcnew StreamWriter(usersList, true);
		sw->WriteLine(input_name);
		sw->Close();
	}
}
private: System::Void Post_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//Read in the user
	String ^ input_name = textBox1->Text;

	//Error check the input_name
	if (String::IsNullOrEmpty(input_name) || String::IsNullOrWhiteSpace(input_name)) {

	}
	bool char_not_valid_error = false;
	for (int i = 0; i < input_name->Length; i++) {
		if (!Char::IsLetter(input_name[i])) {
			if (input_name[i] != ' ') {
				char_not_valid_error = true;
			}
		}
	}
	if (char_not_valid_error == true) {

	}

	//Check if the input_name already exists in the list of users
	//Read in the file that contains the list of users
	ArrayList^ users = gcnew ArrayList;

	int count = 0;
	String^ usersList = "textfile.txt";
	try {
		StreamReader^ din = File::OpenText(usersList);
		String ^str;
		while ((str = din->ReadLine()) != nullptr) {
			count++;
			users->Add(str);
		}
		din->Close();
	}
	catch (Exception ^e) {
		if (dynamic_cast<FileNotFoundException^>(e)) {
			Console::WriteLine("file '{0}' not found", usersList);
		}
		else {
			Console::WriteLine("problem reading the file '{0}'", usersList);
		}
	}
	if (!users->Contains(input_name)) {
		//User does not exist
	}
	else {
		//Remove the user
		StreamWriter^ sw = gcnew StreamWriter(usersList);
		users->Remove(input_name);
		count--;
		for (int i = 0; i < count; i++) {
			sw->WriteLine(users[i]);
		}
		
		sw->Close();
	}
}
};
}
