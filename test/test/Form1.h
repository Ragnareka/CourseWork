#pragma once

namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	
	protected: 
	private: System::Windows::Forms::Label^  ZagrBase;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog;
	private: System::Windows::Forms::Label^  UrDohod;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  levelOfRisk;
	private: System::Windows::Forms::Label^  diversif;
	private: System::Windows::Forms::Label^  Lickvid;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  btnOpen;
	private: System::Windows::Forms::Button^  OK;

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;
		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
		this->btnOpen = (gcnew System::Windows::Forms::Button());
		this->ZagrBase = (gcnew System::Windows::Forms::Label());
		this->UrDohod = (gcnew System::Windows::Forms::Label());
		this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
		this->levelOfRisk = (gcnew System::Windows::Forms::Label());
		this->diversif = (gcnew System::Windows::Forms::Label());
		this->Lickvid = (gcnew System::Windows::Forms::Label());
		this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->textBox2 = (gcnew System::Windows::Forms::TextBox());
		this->OK = (gcnew System::Windows::Forms::Button());
		this->SuspendLayout();
		// 
		// openFileDialog
		// 
		this->openFileDialog->DefaultExt = L"txt";
		this->openFileDialog->FileName = L"openFileDialog1";
		this->openFileDialog->Filter = L"��������� ����� (*.txt)|*.txt|��� ����� (*.*)|*.*";
		this->openFileDialog->Title = L"������� ����";
		// 
		// btnOpen
		// 
		this->btnOpen->Location = System::Drawing::Point(303, 323);
		this->btnOpen->Name = L"btnOpen";
		this->btnOpen->Size = System::Drawing::Size(117, 33);
		this->btnOpen->TabIndex = 0;
		this->btnOpen->Text = L"�������";
		this->btnOpen->UseVisualStyleBackColor = true;
		this->btnOpen->Click += gcnew System::EventHandler(this, &Form1::btnOpen_Click);
		// 
		// ZagrBase
		// 
		this->ZagrBase->AutoSize = true;
		this->ZagrBase->Location = System::Drawing::Point(53, 323);
		this->ZagrBase->Name = L"ZagrBase";
		this->ZagrBase->Size = System::Drawing::Size(184, 19);
		this->ZagrBase->TabIndex = 1;
		this->ZagrBase->Text = L"��������� ������ �� �����";
		// 
		// UrDohod
		// 
		this->UrDohod->AutoSize = true;
		this->UrDohod->Location = System::Drawing::Point(57, 32);
		this->UrDohod->Name = L"UrDohod";
		this->UrDohod->Size = System::Drawing::Size(140, 19);
		this->UrDohod->TabIndex = 2;
		this->UrDohod->Text = L"������� ����������";
		// 
		// comboBox1
		// 
		this->comboBox1->FormattingEnabled = true;
		this->comboBox1->Location = System::Drawing::Point(299, 32);
		this->comboBox1->Name = L"comboBox1";
		this->comboBox1->Size = System::Drawing::Size(121, 25);
		this->comboBox1->TabIndex = 3;
		// 
		// levelOfRisk
		// 
		this->levelOfRisk->AutoSize = true;
		this->levelOfRisk->Location = System::Drawing::Point(57, 101);
		this->levelOfRisk->Name = L"levelOfRisk";
		this->levelOfRisk->Size = System::Drawing::Size(195, 19);
		this->levelOfRisk->TabIndex = 4;
		this->levelOfRisk->Text = L"������� ����������� �����";
		// 
		// diversif
		// 
		this->diversif->AutoSize = true;
		this->diversif->Location = System::Drawing::Point(57, 165);
		this->diversif->Name = L"diversif";
		this->diversif->Size = System::Drawing::Size(136, 19);
		this->diversif->TabIndex = 5;
		this->diversif->Text = L"��������������";
		// 
		// Lickvid
		// 
		this->Lickvid->AutoSize = true;
		this->Lickvid->Location = System::Drawing::Point(57, 218);
		this->Lickvid->Name = L"Lickvid";
		this->Lickvid->Size = System::Drawing::Size(109, 19);
		this->Lickvid->TabIndex = 6;
		this->Lickvid->Text = L"�����������";
		// 
		// comboBox2
		// 
		this->comboBox2->FormattingEnabled = true;
		this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"������", L"��������������", L"��������", L"���������������"});
		this->comboBox2->Location = System::Drawing::Point(299, 98);
		this->comboBox2->Name = L"comboBox2";
		this->comboBox2->Size = System::Drawing::Size(121, 25);
		this->comboBox2->TabIndex = 7;
		this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
		// 
		// textBox1
		// 
		this->textBox1->Location = System::Drawing::Point(299, 165);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(121, 25);
		this->textBox1->TabIndex = 8;
		// 
		// textBox2
		// 
		this->textBox2->Location = System::Drawing::Point(299, 218);
		this->textBox2->Name = L"textBox2";
		this->textBox2->Size = System::Drawing::Size(121, 25);
		this->textBox2->TabIndex = 9;
		this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
		// 
		// OK
		// 
		this->OK->Location = System::Drawing::Point(106, 399);
		this->OK->Name = L"OK";
		this->OK->Size = System::Drawing::Size(314, 45);
		this->OK->TabIndex = 10;
		this->OK->Text = L"OK";
		this->OK->UseVisualStyleBackColor = true;
		// 
		// Form1
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(517, 480);
		this->Controls->Add(this->OK);
		this->Controls->Add(this->textBox2);
		this->Controls->Add(this->textBox1);
		this->Controls->Add(this->comboBox2);
		this->Controls->Add(this->Lickvid);
		this->Controls->Add(this->diversif);
		this->Controls->Add(this->levelOfRisk);
		this->Controls->Add(this->comboBox1);
		this->Controls->Add(this->UrDohod);
		this->Controls->Add(this->ZagrBase);
		this->Controls->Add(this->btnOpen);
		this->Name = L"Form1";
		this->Text = L"Form1";
		this->ResumeLayout(false);
		this->PerformLayout();

		}
#pragma endregion

		 double Risk;

private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 void  TForm1::FormCreate(TObject *Sender)
{
  comboBox2->Items->Add("������");
  comboBox2->Items->Add("��������������");
  comboBox2->Items->Add("��������");
   comboBox2->Items->Add("������������");
}
//---------------------------------------------------------------------------
void TForm1::�omboBox2Select(TObject *Sender)
{
  if (comboBox2->ItemIndex == 0) {
    ShowMessage(" 0.0209;");
  }
  if (comboBox2->ItemIndex == 1) {
    ShowMessage("0.0218");
  }
   if (comboBox2->ItemIndex == 2) {
    ShowMessage("0.0271");
   }
 if (comboBox2->ItemIndex == 3) {
    ShowMessage("0.0352");
   }
}

	

		 }
};
	private:		System::Void btnOpen_Click(System::Object^  sender, System::EventArgs^  e) {
				 // ������� ������ "�������" ������ �������� � �������� �������  ��������� � ������� 
			if ( this->openFileDialog->ShowDialog() ==
				System::Windows::Forms::DialogResult::OK){ }
			 wchar_t fileName[1024];
				 for (int i = 0; i < openFileDialog->FileName->Length; i++)
				 {fileName[i] = openFileDialog->FileName[i];}
				 fileName[openFileDialog->FileName->Length] = '\0';
				void makeStruct()
				 }
			 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
}

