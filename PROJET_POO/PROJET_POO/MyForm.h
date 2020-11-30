#pragma once
#include "CL_CAD.h"
#include "CLobjet.h"

namespace PROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ articleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ commandeToolStripMenuItem;
















	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->articleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->commandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(708, 775);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(143, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(648, 775);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"IP";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(910, 769);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 32);
			this->button1->TabIndex = 2;
			this->button1->Text = L"connexion";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::Left;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem1,
					this->clientToolStripMenuItem, this->articleToolStripMenuItem, this->commandeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(106, 658);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ajouterToolStripMenuItem,
					this->modifierToolStripMenuItem, this->supprimerToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(93, 24);
			this->toolStripMenuItem1->Text = L"Personnel";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// clientToolStripMenuItem
			// 
			this->clientToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ajouterToolStripMenuItem1,
					this->modifierToolStripMenuItem1, this->supprimerToolStripMenuItem1
			});
			this->clientToolStripMenuItem->Name = L"clientToolStripMenuItem";
			this->clientToolStripMenuItem->Size = System::Drawing::Size(93, 24);
			this->clientToolStripMenuItem->Text = L"Client";
			// 
			// articleToolStripMenuItem
			// 
			this->articleToolStripMenuItem->Name = L"articleToolStripMenuItem";
			this->articleToolStripMenuItem->Size = System::Drawing::Size(93, 24);
			this->articleToolStripMenuItem->Text = L"Article";
			// 
			// commandeToolStripMenuItem
			// 
			this->commandeToolStripMenuItem->Name = L"commandeToolStripMenuItem";
			this->commandeToolStripMenuItem->Size = System::Drawing::Size(93, 24);
			this->commandeToolStripMenuItem->Text = L"Commande";
			// 
			// ajouterToolStripMenuItem
			// 
			this->ajouterToolStripMenuItem->Name = L"ajouterToolStripMenuItem";
			this->ajouterToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ajouterToolStripMenuItem->Text = L"Ajouter";
			// 
			// modifierToolStripMenuItem
			// 
			this->modifierToolStripMenuItem->Name = L"modifierToolStripMenuItem";
			this->modifierToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->modifierToolStripMenuItem->Text = L"Modifier";
			// 
			// supprimerToolStripMenuItem
			// 
			this->supprimerToolStripMenuItem->Name = L"supprimerToolStripMenuItem";
			this->supprimerToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->supprimerToolStripMenuItem->Text = L"Supprimer";
			// 
			// ajouterToolStripMenuItem1
			// 
			this->ajouterToolStripMenuItem1->Name = L"ajouterToolStripMenuItem1";
			this->ajouterToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->ajouterToolStripMenuItem1->Text = L"Ajouter";
			// 
			// modifierToolStripMenuItem1
			// 
			this->modifierToolStripMenuItem1->Name = L"modifierToolStripMenuItem1";
			this->modifierToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->modifierToolStripMenuItem1->Text = L"Modifier";
			// 
			// supprimerToolStripMenuItem1
			// 
			this->supprimerToolStripMenuItem1->Name = L"supprimerToolStripMenuItem1";
			this->supprimerToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->supprimerToolStripMenuItem1->Text = L"Supprimer";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(848, 658);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	/// variables venant des classes 
	CL_CAD conn1;

	/// 
	

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		conn1.getIP(textBox1->Text);
		MessageBox::Show(textBox1->Text);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}


private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
