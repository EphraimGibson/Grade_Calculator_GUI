#pragma once
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	/// 

		
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonOpen;
	private:System::String^ fileName = "";
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AboutToolStripMenuItem;

	private: System::Windows::Forms::Button^ buttonSaveAs;

	private: System::Windows::Forms::Button^ buttonSave;

	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonClose;
	private: System::Windows::Forms::Button^ buttonCopy;
	private: System::Windows::Forms::Button^ buttonCopySelected;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxExam;




	private: System::Windows::Forms::TextBox^ textBoxHW;

	private: System::Windows::Forms::Button^ buttonGenerate;


	private: System::Windows::Forms::Label^ labelName;

	private: System::Windows::Forms::Label^ labelHW;

	private: System::Windows::Forms::Label^ labelExam;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::RadioButton^ radioButtonAverage;
	private: System::Windows::Forms::RadioButton^ radioButtonMedian;


	private: System::Windows::Forms::Button^ buttonInput;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::RichTextBox^ richTextBoxInfo;



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
			this->buttonOpen = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonSaveAs = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->buttonCopy = (gcnew System::Windows::Forms::Button());
			this->buttonCopySelected = (gcnew System::Windows::Forms::Button());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxExam = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHW = (gcnew System::Windows::Forms::TextBox());
			this->buttonGenerate = (gcnew System::Windows::Forms::Button());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelHW = (gcnew System::Windows::Forms::Label());
			this->labelExam = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->radioButtonAverage = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMedian = (gcnew System::Windows::Forms::RadioButton());
			this->buttonInput = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->richTextBoxInfo = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonOpen
			// 
			this->buttonOpen->Location = System::Drawing::Point(619, 27);
			this->buttonOpen->Name = L"buttonOpen";
			this->buttonOpen->Size = System::Drawing::Size(100, 30);
			this->buttonOpen->TabIndex = 0;
			this->buttonOpen->Text = L"Open";
			this->buttonOpen->UseVisualStyleBackColor = true;
			this->buttonOpen->Click += gcnew System::EventHandler(this, &Form1::buttonOpen_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 27);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(600, 300);
			this->textBox1->TabIndex = 1;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"txt files (*.txt) | *.txt";
			this->openFileDialog1->RestoreDirectory = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->AboutToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(729, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// AboutToolStripMenuItem
			// 
			this->AboutToolStripMenuItem->Name = L"AboutToolStripMenuItem";
			this->AboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->AboutToolStripMenuItem->Text = L"About";
			this->AboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::AboutToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::helpToolStripMenuItem_Click);
			// 
			// buttonSaveAs
			// 
			this->buttonSaveAs->Location = System::Drawing::Point(619, 120);
			this->buttonSaveAs->Name = L"buttonSaveAs";
			this->buttonSaveAs->Size = System::Drawing::Size(100, 30);
			this->buttonSaveAs->TabIndex = 3;
			this->buttonSaveAs->Text = L"Save as";
			this->buttonSaveAs->UseVisualStyleBackColor = true;
			this->buttonSaveAs->Click += gcnew System::EventHandler(this, &Form1::buttonSaveAs_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(619, 75);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(100, 30);
			this->buttonSave->TabIndex = 4;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &Form1::buttonSave_Click);
			// 
			// buttonClose
			// 
			this->buttonClose->Location = System::Drawing::Point(619, 297);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(100, 30);
			this->buttonClose->TabIndex = 5;
			this->buttonClose->Text = L"Close";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &Form1::buttonClose_Click);
			// 
			// buttonCopy
			// 
			this->buttonCopy->Location = System::Drawing::Point(15, 333);
			this->buttonCopy->Name = L"buttonCopy";
			this->buttonCopy->Size = System::Drawing::Size(100, 30);
			this->buttonCopy->TabIndex = 7;
			this->buttonCopy->Text = L"Copy All";
			this->buttonCopy->UseVisualStyleBackColor = true;
			this->buttonCopy->Click += gcnew System::EventHandler(this, &Form1::buttonCopy_Click);
			// 
			// buttonCopySelected
			// 
			this->buttonCopySelected->Location = System::Drawing::Point(121, 333);
			this->buttonCopySelected->Name = L"buttonCopySelected";
			this->buttonCopySelected->Size = System::Drawing::Size(100, 30);
			this->buttonCopySelected->TabIndex = 8;
			this->buttonCopySelected->Text = L"Copy Selected";
			this->buttonCopySelected->UseVisualStyleBackColor = true;
			this->buttonCopySelected->Click += gcnew System::EventHandler(this, &Form1::buttonCopySelected_Click);
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxName->Location = System::Drawing::Point(12, 695);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(172, 21);
			this->textBoxName->TabIndex = 9;
			// 
			// textBoxExam
			// 
			this->textBoxExam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxExam->Location = System::Drawing::Point(455, 695);
			this->textBoxExam->Name = L"textBoxExam";
			this->textBoxExam->Size = System::Drawing::Size(68, 21);
			this->textBoxExam->TabIndex = 10;
			// 
			// textBoxHW
			// 
			this->textBoxHW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxHW->Location = System::Drawing::Point(207, 695);
			this->textBoxHW->Name = L"textBoxHW";
			this->textBoxHW->Size = System::Drawing::Size(230, 21);
			this->textBoxHW->TabIndex = 11;
			// 
			// buttonGenerate
			// 
			this->buttonGenerate->Location = System::Drawing::Point(619, 392);
			this->buttonGenerate->Name = L"buttonGenerate";
			this->buttonGenerate->Size = System::Drawing::Size(100, 30);
			this->buttonGenerate->TabIndex = 12;
			this->buttonGenerate->Text = L"Generate";
			this->buttonGenerate->UseVisualStyleBackColor = true;
			this->buttonGenerate->Click += gcnew System::EventHandler(this, &Form1::buttonGenerate_Click);
			// 
			// labelName
			// 
			this->labelName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelName->Location = System::Drawing::Point(12, 669);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(172, 23);
			this->labelName->TabIndex = 14;
			this->labelName->Text = L"Full Name";
			this->labelName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelHW
			// 
			this->labelHW->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelHW->Location = System::Drawing::Point(204, 674);
			this->labelHW->Name = L"labelHW";
			this->labelHW->Size = System::Drawing::Size(233, 23);
			this->labelHW->TabIndex = 15;
			this->labelHW->Text = L"Homeworks (Use space to separate scores)";
			// 
			// labelExam
			// 
			this->labelExam->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelExam->Location = System::Drawing::Point(452, 674);
			this->labelExam->Name = L"labelExam";
			this->labelExam->Size = System::Drawing::Size(82, 23);
			this->labelExam->TabIndex = 16;
			this->labelExam->Text = L"Exams Score";
			this->labelExam->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(619, 366);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(100, 20);
			this->numericUpDown1->TabIndex = 17;
			// 
			// radioButtonAverage
			// 
			this->radioButtonAverage->AutoSize = true;
			this->radioButtonAverage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonAverage->Location = System::Drawing::Point(619, 626);
			this->radioButtonAverage->Name = L"radioButtonAverage";
			this->radioButtonAverage->Size = System::Drawing::Size(76, 19);
			this->radioButtonAverage->TabIndex = 18;
			this->radioButtonAverage->TabStop = true;
			this->radioButtonAverage->Text = L"Average";
			this->radioButtonAverage->UseVisualStyleBackColor = true;
			this->radioButtonAverage->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonAverage_CheckedChanged);
			// 
			// radioButtonMedian
			// 
			this->radioButtonMedian->AutoSize = true;
			this->radioButtonMedian->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonMedian->Location = System::Drawing::Point(619, 649);
			this->radioButtonMedian->Name = L"radioButtonMedian";
			this->radioButtonMedian->Size = System::Drawing::Size(73, 19);
			this->radioButtonMedian->TabIndex = 19;
			this->radioButtonMedian->TabStop = true;
			this->radioButtonMedian->Text = L"Median";
			this->radioButtonMedian->UseVisualStyleBackColor = true;
			// 
			// buttonInput
			// 
			this->buttonInput->Location = System::Drawing::Point(531, 686);
			this->buttonInput->Name = L"buttonInput";
			this->buttonInput->Size = System::Drawing::Size(81, 30);
			this->buttonInput->TabIndex = 20;
			this->buttonInput->Text = L"Input";
			this->buttonInput->UseVisualStyleBackColor = true;
			this->buttonInput->Click += gcnew System::EventHandler(this, &Form1::buttonInput_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(512, 333);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(100, 30);
			this->buttonClear->TabIndex = 21;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &Form1::buttonClear_Click);
			// 
			// richTextBoxInfo
			// 
			this->richTextBoxInfo->AutoWordSelection = true;
			this->richTextBoxInfo->BackColor = System::Drawing::SystemColors::Window;
			this->richTextBoxInfo->Location = System::Drawing::Point(12, 366);
			this->richTextBoxInfo->Name = L"richTextBoxInfo";
			this->richTextBoxInfo->ReadOnly = true;
			this->richTextBoxInfo->Size = System::Drawing::Size(600, 300);
			this->richTextBoxInfo->TabIndex = 22;
			this->richTextBoxInfo->Text = L"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(729, 725);
			this->Controls->Add(this->richTextBoxInfo);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonInput);
			this->Controls->Add(this->radioButtonMedian);
			this->Controls->Add(this->radioButtonAverage);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->labelExam);
			this->Controls->Add(this->labelHW);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->buttonGenerate);
			this->Controls->Add(this->textBoxHW);
			this->Controls->Add(this->textBoxExam);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->buttonCopySelected);
			this->Controls->Add(this->buttonCopy);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->buttonSaveAs);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonOpen);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Grade Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonOpen_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->InitialDirectory = "..\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt";
		openFileDialog1->FileName = "";

		if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			fileName = openFileDialog1->FileName;
			this->Text = System::IO::Path::GetFileName(fileName);

			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(fileName);

			textBox1->Text = sr->ReadToEnd();
			sr->Close();
		}
	}

private: System::Void buttonSaveAs_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->InitialDirectory = "..\\";
		saveFileDialog1->Filter = "txt files (*.txt)|*.txt";
		String^ s = textBox1->Text;
		saveFileDialog1->FileName = "";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			auto sw = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);

			sw->Write(s);
			sw->Close();

			fileName = saveFileDialog1->FileName;
			this->Text = System::IO::Path::GetFileName(fileName);
		}
		else MessageBox::Show("Error saving to file", "Error", MessageBoxButtons::OK);

	}

private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ s = textBox1->Text;

	if (fileName != "") 
	{
		auto sw = gcnew System::IO::StreamWriter(fileName);

		sw->Write(s);
		sw->Close();

		MessageBox::Show("File saved!", "Success", MessageBoxButtons::OK) ;
	}

	else
		buttonSaveAs_Click(sender, e);
}
private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	buttonOpen_Click(sender, e);
}

private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	buttonSave_Click(sender, e);
}

private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	buttonSaveAs_Click(sender, e);
}

private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void AboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ aboutText =
		"About this App\n\n" +
		"Grade Calculator Version: 1.0\n\n" +
		"This is a simple grade management application designed to help teachers and students manage homework and exam scores.\n\n" +
		"Features include:\n" +
		"- Input student grades and generate random student data\n" +
		"- Calculate average or median of grades\n" +
		"- Save, open, and clear student data\n" +
		"- Copy displayed grades for further use\n\n" +
		"Developed by [Ephraim Gibson].\n" +
		"© 2024 All rights reserved.";

	MessageBox::Show(aboutText, "Program Description", MessageBoxButtons::OK);
}

ref class Person{
	String^ Fullname;
	List<double>^ HW = gcnew List<double>();
	double Exam;
	double Grade = 0.0;
	
public:
	Person() :Person("", nullptr, 0) {}

	Person(String^ Fullname, List<double>^ HW, double Exam): Fullname(Fullname), HW(HW), Exam(Exam){}

	String^ getFullname() { return Fullname;  }
	List<double>^ getHW() { return HW; }
	double getExam() { return Exam; }
	double getGrade() { return Grade; }

	void calcAverage() {
		
		double Average = 0.0;

		if (HW->Count > 0) {

			double sum = 0.0;

			for each (double Homework in HW)
				sum += Homework;

			Average = sum / HW->Count;
		}
		Grade = 0.4 * Average + 0.6 * Exam;
	}

	void calcMedian(){

		double median = 0.0;

		if (HW->Count > 0) {
			HW->Sort();
			int mid = HW->Count / 2;

			if (HW->Count % 2 == 0)
				median = (HW[mid] + HW[mid - 1]) / 2;
			
			else median = HW[mid];
		}

		Grade = 0.4 * median + 0.6 * Exam;
	}
};

List<Person^>^ Persons = gcnew List<Person^>();

void UpdateLabel() {
	richTextBoxInfo->Text = "";

	if (radioButtonAverage->Checked){
		for each (Person ^ p in Persons) {

			p->calcAverage();

			richTextBoxInfo->Text += p->getFullname() + "    ";

			for each (double h in p->getHW()) {
				richTextBoxInfo->Text += h.ToString() + "  ";
			}

			richTextBoxInfo->Text += "\t" + p->getExam().ToString() + "\t";

			richTextBoxInfo->Text += "Grade:" + p->getGrade().ToString("F2") + "\n";
		}
	}
	else if (radioButtonMedian->Checked) {

		for each (Person ^ p in Persons) {

			p->calcMedian();

			richTextBoxInfo->Text += p->getFullname() + "    ";

			for each (double h in p->getHW()) {
				richTextBoxInfo->Text += h.ToString() + "  ";
			}

			richTextBoxInfo->Text += "\t" + p->getExam().ToString() + "\t";

			richTextBoxInfo->Text += "Grade:" + p->getGrade().ToString("F2") + "\n";
		}
	}
	

}
private: System::Void buttonInput_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ NameText;
	String^ HWText;
	String^ ExamText;



	if (textBoxName->Text != "" && textBoxHW->Text != "" && textBoxExam->Text != "") {
		 NameText = textBoxName->Text;
		 HWText = textBoxHW->Text;
		 ExamText = textBoxExam->Text;

		 List<double>^ Homework = gcnew List<double>();
		 double Exam;
		 bool isValid = true;

		 array<String^>^ HW = HWText->Split(' '); // split the homework string into an array with space delimiter

		 for each (String ^ hw in HW) {				//loops through the array and fills a list with valid doubles
			 try {
				 if (hw != "") { //doesnt include empty string
					 double value = Double::Parse(hw);
					 Homework->Add(value);
				 }
				 
			 }
			 catch(FormatException^ e){
				 MessageBox::Show("Invalid Score for Homework", "Invalid Input", MessageBoxButtons::OK);
				 isValid = false;
				 break;
			 }
		 }
		
		 try {
			 Exam = Double::Parse(ExamText);
		 }
		 catch (FormatException^ e) {
			 MessageBox::Show("Invalid Exam Score", "Invalid Input", MessageBoxButtons::OK);
			 isValid = false;
		 }

		 if (isValid) {
			 Person^ person = gcnew Person(NameText, Homework, Exam);
			 Persons->Add(person);

			 UpdateLabel();

			 textBoxName->Text = "";
			 textBoxHW->Text = "";
			 textBoxExam->Text = "";

		}
	}
	else MessageBox::Show("Input Field Empty", "Error", MessageBoxButtons::OK);

}
private: System::Void radioButtonAverage_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdateLabel();

}

private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	radioButtonAverage->Checked = true;
}

private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
	Persons->Clear();
	richTextBoxInfo->Text = "";
}
	   
private: System::Void buttonGenerate_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = static_cast<int>(numericUpDown1->Value);
	Random^ rand = gcnew Random();


	if (n < 1) {
		MessageBox::Show("select number of students to generate", "Zero selection", MessageBoxButtons::OK);
	}

	else
		Persons->Clear();
	for (int i = 1; i <= n; i++) {

		String^ fullName;
		double Exam;
		List<double>^ HW = gcnew List<double>();

		fullName = "Name" + i + "  " + "Surname" + i;
		Exam = rand->Next(1, 100);

		for (int j = 0; j < 9; j++) {
			double h = rand->Next(1, 100);

			HW->Add(h);
		}

		Person^ person = gcnew Person(fullName, HW, Exam);
		Persons->Add(person);
	}
	UpdateLabel();
}
private: System::Void buttonCopy_Click(System::Object^ sender, System::EventArgs^ e) {

	if (richTextBoxInfo->Text == "") {
		MessageBox::Show("Nothing to Copy", "Empty field", MessageBoxButtons::OK);
	}
	
	StringReader^ reader = gcnew StringReader(richTextBoxInfo->Text); //read information from input textbox
	String^ line;

	while ((line = reader->ReadLine()) != nullptr) {				//read each line until the line in null
		textBox1->Text += Environment::NewLine + line;
	}

	
}
private: System::Void buttonCopySelected_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Selected = richTextBoxInfo->SelectedText; 

	StringReader^ reader = gcnew StringReader(Selected); // reads onyl selected text
	String^ line;

	while ((line = reader->ReadLine()) != nullptr){
		textBox1->Text += Environment::NewLine + line;
	}


}
	private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ helpText =
			"Help Manual for the Program\n\n" +
			"This program allows you to manage student grades and perform basic file operations.\n\n" +
			"File Operations:\n" +
			"- Open: Select a text file to view its content.\n" +
			"- Save: Save changes to the current file.\n" +
			"- Save As: Save the content as a new file.\n" +
			"- Exit: Close the program.\n\n" +
			"Grade Operations:\n" +
			"- Input Grades:\n" +
			"  - Enter the student's name in the 'Name' field.\n" +
			"  - Enter homework scores (separated by spaces) in the 'Homework' field.\n" +
			"  - Enter the exam score in the 'Exam' field.\n" +
			"  - Click 'Input' to add the student to the list.\n\n" +
			"- Generate Random Students:\n" +
			"  - Select the number of students to generate using the numeric input field.\n" +
			"  - Click the 'Generate' button to create random student data.\n\n" +
			"- Clear List: Click 'Clear' to remove all students and reset the display.\n\n" +
			"Grade Calculation:\n" +
			"- Average: Calculate the average of homework scores combined with the exam score.\n" +
			"- Median: Calculate the median of homework scores combined with the exam score.\n\n" +
			"Copying Text:\n" +
			"- Copy All: Click 'Copy' to copy all displayed information.\n" +
			"- Copy Selected: Select part of the text and click 'Copy Selected' to copy only the selected portion.\n\n" +
			"Help: Click the 'Help' menu to view this manual.";

		MessageBox::Show(helpText, "Help", MessageBoxButtons::OK);

	}


};
}
