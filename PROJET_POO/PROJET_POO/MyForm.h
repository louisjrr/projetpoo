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
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
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
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem3;
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->articleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->commandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ajouterToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(415, 359);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(199, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(311, 331);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(311, 373);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(150, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->PasswordChar = '*';
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(254, 334);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Utilisateur";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(236, 376);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Mot de passe";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(387, 363);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"IP";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(457, 521);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 46);
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
				this->articleToolStripMenuItem,
					this->toolStripMenuItem1, this->clientToolStripMenuItem, this->commandeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(165, 806);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// articleToolStripMenuItem
			// 
			this->articleToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ajouterToolStripMenuItem2,
					this->modifierToolStripMenuItem2, this->supprimerToolStripMenuItem2
			});
			this->articleToolStripMenuItem->Name = L"articleToolStripMenuItem";
			this->articleToolStripMenuItem->Size = System::Drawing::Size(94, 24);
			this->articleToolStripMenuItem->Text = L"Article";
			this->articleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::articleToolStripMenuItem_Click);
			// 
			// ajouterToolStripMenuItem2
			// 
			this->ajouterToolStripMenuItem2->Name = L"ajouterToolStripMenuItem2";
			this->ajouterToolStripMenuItem2->Size = System::Drawing::Size(161, 26);
			this->ajouterToolStripMenuItem2->Text = L"Ajouter";
			this->ajouterToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::ajouterToolStripMenuItem2_Click);
			// 
			// modifierToolStripMenuItem2
			// 
			this->modifierToolStripMenuItem2->Name = L"modifierToolStripMenuItem2";
			this->modifierToolStripMenuItem2->Size = System::Drawing::Size(161, 26);
			this->modifierToolStripMenuItem2->Text = L"Modifier";
			this->modifierToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::modifierToolStripMenuItem2_Click);
			// 
			// supprimerToolStripMenuItem2
			// 
			this->supprimerToolStripMenuItem2->Name = L"supprimerToolStripMenuItem2";
			this->supprimerToolStripMenuItem2->Size = System::Drawing::Size(161, 26);
			this->supprimerToolStripMenuItem2->Text = L"Supprimer";
			this->supprimerToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::supprimerToolStripMenuItem2_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ajouterToolStripMenuItem,
					this->modifierToolStripMenuItem, this->supprimerToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(94, 24);
			this->toolStripMenuItem1->Text = L"Personnel";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// ajouterToolStripMenuItem
			// 
			this->ajouterToolStripMenuItem->Name = L"ajouterToolStripMenuItem";
			this->ajouterToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ajouterToolStripMenuItem->Text = L"Ajouter";
			this->ajouterToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ajouterToolStripMenuItem_Click);
			// 
			// modifierToolStripMenuItem
			// 
			this->modifierToolStripMenuItem->Name = L"modifierToolStripMenuItem";
			this->modifierToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->modifierToolStripMenuItem->Text = L"Modifier";
			this->modifierToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::modifierToolStripMenuItem_Click);
			// 
			// supprimerToolStripMenuItem
			// 
			this->supprimerToolStripMenuItem->Name = L"supprimerToolStripMenuItem";
			this->supprimerToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->supprimerToolStripMenuItem->Text = L"Supprimer";
			this->supprimerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::supprimerToolStripMenuItem_Click);
			// 
			// clientToolStripMenuItem
			// 
			this->clientToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ajouterToolStripMenuItem1,
					this->modifierToolStripMenuItem1, this->supprimerToolStripMenuItem1
			});
			this->clientToolStripMenuItem->Name = L"clientToolStripMenuItem";
			this->clientToolStripMenuItem->Size = System::Drawing::Size(94, 24);
			this->clientToolStripMenuItem->Text = L"Client";
			this->clientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clientToolStripMenuItem_Click);
			// 
			// ajouterToolStripMenuItem1
			// 
			this->ajouterToolStripMenuItem1->Name = L"ajouterToolStripMenuItem1";
			this->ajouterToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->ajouterToolStripMenuItem1->Text = L"Ajouter";
			this->ajouterToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ajouterToolStripMenuItem1_Click);
			// 
			// modifierToolStripMenuItem1
			// 
			this->modifierToolStripMenuItem1->Name = L"modifierToolStripMenuItem1";
			this->modifierToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->modifierToolStripMenuItem1->Text = L"Modifier";
			this->modifierToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::modifierToolStripMenuItem1_Click);
			// 
			// supprimerToolStripMenuItem1
			// 
			this->supprimerToolStripMenuItem1->Name = L"supprimerToolStripMenuItem1";
			this->supprimerToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->supprimerToolStripMenuItem1->Text = L"Supprimer";
			this->supprimerToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::supprimerToolStripMenuItem1_Click);
			// 
			// commandeToolStripMenuItem
			// 
			this->commandeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ajouterToolStripMenuItem3,
					this->modifierToolStripMenuItem3, this->supprimerToolStripMenuItem3
			});
			this->commandeToolStripMenuItem->Name = L"commandeToolStripMenuItem";
			this->commandeToolStripMenuItem->Size = System::Drawing::Size(94, 24);
			this->commandeToolStripMenuItem->Text = L"Commande";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(628, 434);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(445, 261);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// ajouterToolStripMenuItem3
			// 
			this->ajouterToolStripMenuItem3->Name = L"ajouterToolStripMenuItem3";
			this->ajouterToolStripMenuItem3->Size = System::Drawing::Size(180, 22);
			this->ajouterToolStripMenuItem3->Text = L"Ajouter";
			// 
			// modifierToolStripMenuItem3
			// 
			this->modifierToolStripMenuItem3->Name = L"modifierToolStripMenuItem3";
			this->modifierToolStripMenuItem3->Size = System::Drawing::Size(180, 22);
			this->modifierToolStripMenuItem3->Text = L"Modifier";
			// 
			// supprimerToolStripMenuItem3
			// 
			this->supprimerToolStripMenuItem3->Name = L"supprimerToolStripMenuItem3";
			this->supprimerToolStripMenuItem3->Size = System::Drawing::Size(180, 22);
			this->supprimerToolStripMenuItem3->Text = L"Supprimer";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1237, 806);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"b";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
		conn1.getUtilisateur(textBox2->Text);
		conn1.getMDP(textBox3->Text);

		conn1.connect();

		this->textBox1->Hide();
		this->textBox2->Hide();
		this->textBox3->Hide();
		this->label1->Hide();
		this->label2->Hide();
		this->label3->Hide();
		this->button1->Hide();
		this->pictureBox1->Hide();

		this->menuStrip1->Show();
		MessageBox::Show("Connexion réussi");
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}


private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void articleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void clientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ajouterToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void modifierToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void supprimerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ajouterToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void modifierToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void supprimerToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ajouterToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void modifierToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void supprimerToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
