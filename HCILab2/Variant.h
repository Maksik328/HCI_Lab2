
#pragma once


namespace HCILab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Variant
	/// </summary>
	public ref class Variant : public System::Windows::Forms::Form
	{
	public:
		Variant(void)
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
		~Variant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Label^ label2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Pristina", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(72, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Number of elements";
			this->label1->Click += gcnew System::EventHandler(this, &Variant::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::HotPink;
			this->button1->Location = System::Drawing::Point(213, 188);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ok";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Variant::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Pristina", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(134, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"0";
			// 
			// Variant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Pink;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Variant";
			this->Text = L"Variant";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
	};
}
