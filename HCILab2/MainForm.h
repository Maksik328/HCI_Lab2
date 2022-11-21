#include "Variant.h"
#include "MyForm.h"
#include "MyForm1.h"
#pragma once


namespace HCILab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ messageToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ checkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ popupToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ someItemsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip3;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip4;
	private: System::Windows::Forms::ToolStripMenuItem^ messageToolStripMenuItem1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->messageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->checkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->popupToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->someItemsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip3 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip4 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->messageToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(856, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->messageToolStripMenuItem,
					this->checkToolStripMenuItem, this->exitToolStripMenuItem, this->popupToolStripMenuItem, this->someItemsToolStripMenuItem, this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// messageToolStripMenuItem
			// 
			this->messageToolStripMenuItem->Name = L"messageToolStripMenuItem";
			this->messageToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::M));
			this->messageToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->messageToolStripMenuItem->Text = L"Message";
			this->messageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::messageToolStripMenuItem_Click);
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->AutoToolTip = true;
			this->checkToolStripMenuItem->CheckOnClick = true;
			this->checkToolStripMenuItem->Name = L"checkToolStripMenuItem";
			this->checkToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->checkToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->checkToolStripMenuItem->Text = L"Check";
			this->checkToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::checkToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
			// 
			// popupToolStripMenuItem
			// 
			this->popupToolStripMenuItem->Name = L"popupToolStripMenuItem";
			this->popupToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::C));
			this->popupToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->popupToolStripMenuItem->Text = L"Popup";
			this->popupToolStripMenuItem->Visible = false;
			this->popupToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::popupToolStripMenuItem_Click);
			// 
			// someItemsToolStripMenuItem
			// 
			this->someItemsToolStripMenuItem->Checked = true;
			this->someItemsToolStripMenuItem->CheckOnClick = true;
			this->someItemsToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->someItemsToolStripMenuItem->Name = L"someItemsToolStripMenuItem";
			this->someItemsToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::A));
			this->someItemsToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->someItemsToolStripMenuItem->Text = L"SomeItems";
			this->someItemsToolStripMenuItem->Visible = false;
			this->someItemsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::someItemsToolStripMenuItem_Click);
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->newToolStripMenuItem->Text = L"New ";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::openToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::closeToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::aboutToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip3
			// 
			this->contextMenuStrip3->Name = L"contextMenuStrip3";
			this->contextMenuStrip3->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip4
			// 
			this->contextMenuStrip4->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->messageToolStripMenuItem1 });
			this->contextMenuStrip4->Name = L"contextMenuStrip4";
			this->contextMenuStrip4->Size = System::Drawing::Size(121, 26);
			// 
			// messageToolStripMenuItem1
			// 
			this->messageToolStripMenuItem1->Name = L"messageToolStripMenuItem1";
			this->messageToolStripMenuItem1->Size = System::Drawing::Size(120, 22);
			this->messageToolStripMenuItem1->Text = L"Message";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 67);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(56, 40);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(856, 396);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void messageToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HCILab2::MyForm popup;
		popup.ShowDialog();
	}
	private: System::Void checkToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		;

		if (this->checkToolStripMenuItem->Checked == false)
		{
			messageToolStripMenuItem->Enabled = true;
		}
		else if (checkToolStripMenuItem->Checked == true)
		{
			messageToolStripMenuItem->Enabled = false;
		}
	}
	private: System::Void popupToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HCILab2::Variant popup;
		if (this->someItemsToolStripMenuItem->Checked == true) {
			popup.label2->Text = "5";
		}
		else if (this->checkToolStripMenuItem->Checked == false) {
			popup.label2->Text = "3";
		}
		else if (this->checkToolStripMenuItem->Checked == true) {
			popup.label2->Text = "2";
		}
		popup.ShowDialog();
	}
	private: System::Void someItemsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->someItemsToolStripMenuItem->Checked == true)
		{
			messageToolStripMenuItem->Visible = false;
			openToolStripMenuItem->Visible = true;
			newToolStripMenuItem->Visible = true;
			closeToolStripMenuItem->Visible = true;
		}
		else if (this->someItemsToolStripMenuItem->Checked == false)
		{
			messageToolStripMenuItem->Visible = true;
			openToolStripMenuItem->Visible = false;
			newToolStripMenuItem->Visible = false;
			closeToolStripMenuItem->Visible = false;
		}
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HCILab2::MyForm1 popup;
		popup.ShowDialog();
	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		HCILab2::MyForm1 popup;
		popup.ShowDialog();
	}
};
}
