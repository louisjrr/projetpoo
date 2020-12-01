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
	private: System::Windows::Forms::Label^ LabelUserConnexion;
	private: System::Windows::Forms::Label^ LabelMdpConnexion;


	private: System::Windows::Forms::Label^ LabelIpConnexion;

	private: System::Windows::Forms::Button^ ButtonConnexion;















	private: System::Windows::Forms::PictureBox^ pictureBox1;





















	private: System::Windows::Forms::Panel^ EcranConnexion;











































private: System::Windows::Forms::ToolStripPanel^ BottomToolStripPanel;
private: System::Windows::Forms::ToolStripPanel^ TopToolStripPanel;
private: System::Windows::Forms::ToolStripPanel^ RightToolStripPanel;
private: System::Windows::Forms::ToolStripPanel^ LeftToolStripPanel;
private: System::Windows::Forms::ToolStripContentPanel^ ContentPanel;
private: System::Windows::Forms::Panel^ EcranAjoutClient;
private: System::Windows::Forms::MenuStrip^ MenuOnglet;
private: System::Windows::Forms::ToolStripMenuItem^ OngletArticle;
private: System::Windows::Forms::ToolStripMenuItem^ OngletAjoutArticle;
private: System::Windows::Forms::ToolStripMenuItem^ OngletModifierArticle;
private: System::Windows::Forms::ToolStripMenuItem^ OngletSupprimerArticel;



private: System::Windows::Forms::ToolStripMenuItem^ OngletPersonnel;
private: System::Windows::Forms::ToolStripMenuItem^ OngletAjoutPersonnel;
private: System::Windows::Forms::ToolStripMenuItem^ OngletModifierPersonnel;
private: System::Windows::Forms::ToolStripMenuItem^ OngletSupprimerPersonnel;



private: System::Windows::Forms::ToolStripMenuItem^ OngletClient;
private: System::Windows::Forms::ToolStripMenuItem^ OngletAjoutClient;
private: System::Windows::Forms::ToolStripMenuItem^ OngletModifierClient;
private: System::Windows::Forms::ToolStripMenuItem^ OngletSupprimerClient;



private: System::Windows::Forms::ToolStripMenuItem^ OngletCommande;
private: System::Windows::Forms::ToolStripMenuItem^ OngletAjoutCommande;
private: System::Windows::Forms::ToolStripMenuItem^ OngletModifierCommande;
private: System::Windows::Forms::ToolStripMenuItem^ OngletSupprimerCommande;



private: System::Windows::Forms::Button^ ButtonAjoutClient;
private: System::Windows::Forms::Label^ LabelCpClient;
private: System::Windows::Forms::Label^ LabelVilleClient;
private: System::Windows::Forms::Label^ LabelAdrClient;
private: System::Windows::Forms::Label^ LabelAnNaissClient;
private: System::Windows::Forms::Label^ LabelMoisNaissClient;
private: System::Windows::Forms::Label^ LabelJourNaissClient;
private: System::Windows::Forms::TextBox^ TextBoxAnNaissClient;
private: System::Windows::Forms::TextBox^ TextBoxMoisNaissClient;
private: System::Windows::Forms::Label^ LabelAdrFactClient;
private: System::Windows::Forms::Label^ LabelAdrLivClient;
private: System::Windows::Forms::Label^ LabelNaissClient;
private: System::Windows::Forms::Label^ LabelPrenomClient;
private: System::Windows::Forms::Label^ LabelNomClient;
private: System::Windows::Forms::TextBox^ TextBoxAdrAdrFactClient;
private: System::Windows::Forms::TextBox^ TextBoxVilleAdrFactClient;
private: System::Windows::Forms::TextBox^ TextBoxCpAdrFactClient;
private: System::Windows::Forms::TextBox^ TextBoxPrenomClient;
private: System::Windows::Forms::TextBox^ TextBoxNomClient;
private: System::Windows::Forms::TextBox^ TexBoxJourNaissClient;
private: System::Windows::Forms::TextBox^ TextBoxCpAdrLivClient;
private: System::Windows::Forms::TextBox^ TextBoxAdrAdrLivClient;
private: System::Windows::Forms::TextBox^ TextBoxVilleAdrLivClient;
private: System::Windows::Forms::Panel^ EcranIdle;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem8;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem9;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem10;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem11;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem12;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem13;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem14;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem15;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem16;

























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
			this->LabelUserConnexion = (gcnew System::Windows::Forms::Label());
			this->LabelMdpConnexion = (gcnew System::Windows::Forms::Label());
			this->LabelIpConnexion = (gcnew System::Windows::Forms::Label());
			this->ButtonConnexion = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->EcranConnexion = (gcnew System::Windows::Forms::Panel());
			this->BottomToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->TopToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->RightToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->LeftToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->ContentPanel = (gcnew System::Windows::Forms::ToolStripContentPanel());
			this->EcranAjoutClient = (gcnew System::Windows::Forms::Panel());
			this->MenuOnglet = (gcnew System::Windows::Forms::MenuStrip());
			this->OngletArticle = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletAjoutArticle = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletModifierArticle = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletSupprimerArticel = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletPersonnel = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletAjoutPersonnel = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletModifierPersonnel = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletSupprimerPersonnel = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletClient = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletAjoutClient = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletModifierClient = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletSupprimerClient = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletCommande = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletAjoutCommande = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletModifierCommande = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletSupprimerCommande = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ButtonAjoutClient = (gcnew System::Windows::Forms::Button());
			this->LabelCpClient = (gcnew System::Windows::Forms::Label());
			this->LabelVilleClient = (gcnew System::Windows::Forms::Label());
			this->LabelAdrClient = (gcnew System::Windows::Forms::Label());
			this->LabelAnNaissClient = (gcnew System::Windows::Forms::Label());
			this->LabelMoisNaissClient = (gcnew System::Windows::Forms::Label());
			this->LabelJourNaissClient = (gcnew System::Windows::Forms::Label());
			this->TextBoxAnNaissClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxMoisNaissClient = (gcnew System::Windows::Forms::TextBox());
			this->LabelAdrFactClient = (gcnew System::Windows::Forms::Label());
			this->LabelAdrLivClient = (gcnew System::Windows::Forms::Label());
			this->LabelNaissClient = (gcnew System::Windows::Forms::Label());
			this->LabelPrenomClient = (gcnew System::Windows::Forms::Label());
			this->LabelNomClient = (gcnew System::Windows::Forms::Label());
			this->TextBoxAdrAdrFactClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxVilleAdrFactClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxCpAdrFactClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxPrenomClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxNomClient = (gcnew System::Windows::Forms::TextBox());
			this->TexBoxJourNaissClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxCpAdrLivClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxAdrAdrLivClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxVilleAdrLivClient = (gcnew System::Windows::Forms::TextBox());
			this->EcranIdle = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->EcranConnexion->SuspendLayout();
			this->EcranAjoutClient->SuspendLayout();
			this->MenuOnglet->SuspendLayout();
			this->EcranIdle->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(287, 229);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(287, 273);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(287, 314);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(150, 20);
			this->textBox3->TabIndex = 5;
			// 
			// LabelUserConnexion
			// 
			this->LabelUserConnexion->AutoSize = true;
			this->LabelUserConnexion->Location = System::Drawing::Point(230, 276);
			this->LabelUserConnexion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelUserConnexion->Name = L"LabelUserConnexion";
			this->LabelUserConnexion->Size = System::Drawing::Size(53, 13);
			this->LabelUserConnexion->TabIndex = 6;
			this->LabelUserConnexion->Text = L"Utilisateur";
			// 
			// LabelMdpConnexion
			// 
			this->LabelMdpConnexion->AutoSize = true;
			this->LabelMdpConnexion->Location = System::Drawing::Point(212, 317);
			this->LabelMdpConnexion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelMdpConnexion->Name = L"LabelMdpConnexion";
			this->LabelMdpConnexion->Size = System::Drawing::Size(71, 13);
			this->LabelMdpConnexion->TabIndex = 7;
			this->LabelMdpConnexion->Text = L"Mot de passe";
			// 
			// LabelIpConnexion
			// 
			this->LabelIpConnexion->AutoSize = true;
			this->LabelIpConnexion->Location = System::Drawing::Point(266, 232);
			this->LabelIpConnexion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelIpConnexion->Name = L"LabelIpConnexion";
			this->LabelIpConnexion->Size = System::Drawing::Size(17, 13);
			this->LabelIpConnexion->TabIndex = 1;
			this->LabelIpConnexion->Text = L"IP";
			this->LabelIpConnexion->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// ButtonConnexion
			// 
			this->ButtonConnexion->Location = System::Drawing::Point(313, 356);
			this->ButtonConnexion->Margin = System::Windows::Forms::Padding(2);
			this->ButtonConnexion->Name = L"ButtonConnexion";
			this->ButtonConnexion->Size = System::Drawing::Size(84, 37);
			this->ButtonConnexion->TabIndex = 2;
			this->ButtonConnexion->Text = L"connexion";
			this->ButtonConnexion->UseVisualStyleBackColor = true;
			this->ButtonConnexion->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(460, 258);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(441, 265);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// EcranConnexion
			// 
			this->EcranConnexion->AutoSize = true;
			this->EcranConnexion->Controls->Add(this->textBox1);
			this->EcranConnexion->Controls->Add(this->LabelIpConnexion);
			this->EcranConnexion->Controls->Add(this->LabelUserConnexion);
			this->EcranConnexion->Controls->Add(this->LabelMdpConnexion);
			this->EcranConnexion->Controls->Add(this->textBox3);
			this->EcranConnexion->Controls->Add(this->textBox2);
			this->EcranConnexion->Controls->Add(this->ButtonConnexion);
			this->EcranConnexion->Controls->Add(this->pictureBox1);
			this->EcranConnexion->Location = System::Drawing::Point(-3, 0);
			this->EcranConnexion->Name = L"EcranConnexion";
			this->EcranConnexion->Size = System::Drawing::Size(934, 659);
			this->EcranConnexion->TabIndex = 18;
			// 
			// BottomToolStripPanel
			// 
			this->BottomToolStripPanel->Location = System::Drawing::Point(0, 0);
			this->BottomToolStripPanel->Name = L"BottomToolStripPanel";
			this->BottomToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
			this->BottomToolStripPanel->RowMargin = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->BottomToolStripPanel->Size = System::Drawing::Size(0, 0);
			// 
			// TopToolStripPanel
			// 
			this->TopToolStripPanel->Location = System::Drawing::Point(0, 0);
			this->TopToolStripPanel->Name = L"TopToolStripPanel";
			this->TopToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
			this->TopToolStripPanel->RowMargin = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->TopToolStripPanel->Size = System::Drawing::Size(0, 0);
			// 
			// RightToolStripPanel
			// 
			this->RightToolStripPanel->Location = System::Drawing::Point(0, 0);
			this->RightToolStripPanel->Name = L"RightToolStripPanel";
			this->RightToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
			this->RightToolStripPanel->RowMargin = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->RightToolStripPanel->Size = System::Drawing::Size(0, 0);
			// 
			// LeftToolStripPanel
			// 
			this->LeftToolStripPanel->Location = System::Drawing::Point(0, 0);
			this->LeftToolStripPanel->Name = L"LeftToolStripPanel";
			this->LeftToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
			this->LeftToolStripPanel->RowMargin = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->LeftToolStripPanel->Size = System::Drawing::Size(0, 0);
			// 
			// ContentPanel
			// 
			this->ContentPanel->Size = System::Drawing::Size(125, 150);
			// 
			// EcranAjoutClient
			// 
			this->EcranAjoutClient->AutoSize = true;
			this->EcranAjoutClient->Controls->Add(this->MenuOnglet);
			this->EcranAjoutClient->Controls->Add(this->ButtonAjoutClient);
			this->EcranAjoutClient->Controls->Add(this->LabelCpClient);
			this->EcranAjoutClient->Controls->Add(this->LabelVilleClient);
			this->EcranAjoutClient->Controls->Add(this->LabelAdrClient);
			this->EcranAjoutClient->Controls->Add(this->LabelAnNaissClient);
			this->EcranAjoutClient->Controls->Add(this->LabelMoisNaissClient);
			this->EcranAjoutClient->Controls->Add(this->LabelJourNaissClient);
			this->EcranAjoutClient->Controls->Add(this->TextBoxAnNaissClient);
			this->EcranAjoutClient->Controls->Add(this->TextBoxMoisNaissClient);
			this->EcranAjoutClient->Controls->Add(this->LabelAdrFactClient);
			this->EcranAjoutClient->Controls->Add(this->LabelAdrLivClient);
			this->EcranAjoutClient->Controls->Add(this->LabelNaissClient);
			this->EcranAjoutClient->Controls->Add(this->LabelPrenomClient);
			this->EcranAjoutClient->Controls->Add(this->LabelNomClient);
			this->EcranAjoutClient->Controls->Add(this->TextBoxAdrAdrFactClient);
			this->EcranAjoutClient->Controls->Add(this->TextBoxVilleAdrFactClient);
			this->EcranAjoutClient->Controls->Add(this->TextBoxCpAdrFactClient);
			this->EcranAjoutClient->Controls->Add(this->TextBoxPrenomClient);
			this->EcranAjoutClient->Controls->Add(this->TextBoxNomClient);
			this->EcranAjoutClient->Controls->Add(this->TexBoxJourNaissClient);
			this->EcranAjoutClient->Controls->Add(this->TextBoxCpAdrLivClient);
			this->EcranAjoutClient->Controls->Add(this->TextBoxAdrAdrLivClient);
			this->EcranAjoutClient->Controls->Add(this->TextBoxVilleAdrLivClient);
			this->EcranAjoutClient->Location = System::Drawing::Point(-3, 0);
			this->EcranAjoutClient->Name = L"EcranAjoutClient";
			this->EcranAjoutClient->Size = System::Drawing::Size(934, 656);
			this->EcranAjoutClient->TabIndex = 21;
			// 
			// MenuOnglet
			// 
			this->MenuOnglet->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->MenuOnglet->Dock = System::Windows::Forms::DockStyle::None;
			this->MenuOnglet->ImageScalingSize = System::Drawing::Size(20, 20);
			this->MenuOnglet->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->OngletArticle, this->OngletPersonnel,
					this->OngletClient, this->OngletCommande
			});
			this->MenuOnglet->Location = System::Drawing::Point(3, 0);
			this->MenuOnglet->Name = L"MenuOnglet";
			this->MenuOnglet->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->MenuOnglet->Size = System::Drawing::Size(262, 24);
			this->MenuOnglet->TabIndex = 32;
			this->MenuOnglet->Text = L"menuStrip1";
			// 
			// OngletArticle
			// 
			this->OngletArticle->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->OngletAjoutArticle,
					this->OngletModifierArticle, this->OngletSupprimerArticel
			});
			this->OngletArticle->Name = L"OngletArticle";
			this->OngletArticle->Size = System::Drawing::Size(53, 20);
			this->OngletArticle->Text = L"Article";
			// 
			// OngletAjoutArticle
			// 
			this->OngletAjoutArticle->Name = L"OngletAjoutArticle";
			this->OngletAjoutArticle->Size = System::Drawing::Size(180, 22);
			this->OngletAjoutArticle->Text = L"Ajouter";
			// 
			// OngletModifierArticle
			// 
			this->OngletModifierArticle->Name = L"OngletModifierArticle";
			this->OngletModifierArticle->Size = System::Drawing::Size(180, 22);
			this->OngletModifierArticle->Text = L"Modifier";
			// 
			// OngletSupprimerArticel
			// 
			this->OngletSupprimerArticel->Name = L"OngletSupprimerArticel";
			this->OngletSupprimerArticel->Size = System::Drawing::Size(180, 22);
			this->OngletSupprimerArticel->Text = L"Supprimer";
			// 
			// OngletPersonnel
			// 
			this->OngletPersonnel->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->OngletAjoutPersonnel,
					this->OngletModifierPersonnel, this->OngletSupprimerPersonnel
			});
			this->OngletPersonnel->Name = L"OngletPersonnel";
			this->OngletPersonnel->Size = System::Drawing::Size(71, 20);
			this->OngletPersonnel->Text = L"Personnel";
			// 
			// OngletAjoutPersonnel
			// 
			this->OngletAjoutPersonnel->Name = L"OngletAjoutPersonnel";
			this->OngletAjoutPersonnel->Size = System::Drawing::Size(180, 22);
			this->OngletAjoutPersonnel->Text = L"Ajouter";
			// 
			// OngletModifierPersonnel
			// 
			this->OngletModifierPersonnel->Name = L"OngletModifierPersonnel";
			this->OngletModifierPersonnel->Size = System::Drawing::Size(180, 22);
			this->OngletModifierPersonnel->Text = L"Modifier";
			// 
			// OngletSupprimerPersonnel
			// 
			this->OngletSupprimerPersonnel->Name = L"OngletSupprimerPersonnel";
			this->OngletSupprimerPersonnel->Size = System::Drawing::Size(180, 22);
			this->OngletSupprimerPersonnel->Text = L"Supprimer";
			// 
			// OngletClient
			// 
			this->OngletClient->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->OngletAjoutClient,
					this->OngletModifierClient, this->OngletSupprimerClient
			});
			this->OngletClient->Name = L"OngletClient";
			this->OngletClient->Size = System::Drawing::Size(50, 20);
			this->OngletClient->Text = L"Client";
			// 
			// OngletAjoutClient
			// 
			this->OngletAjoutClient->Name = L"OngletAjoutClient";
			this->OngletAjoutClient->Size = System::Drawing::Size(180, 22);
			this->OngletAjoutClient->Text = L"Ajouter";
			// 
			// OngletModifierClient
			// 
			this->OngletModifierClient->Name = L"OngletModifierClient";
			this->OngletModifierClient->Size = System::Drawing::Size(180, 22);
			this->OngletModifierClient->Text = L"Modifier";
			// 
			// OngletSupprimerClient
			// 
			this->OngletSupprimerClient->Name = L"OngletSupprimerClient";
			this->OngletSupprimerClient->Size = System::Drawing::Size(180, 22);
			this->OngletSupprimerClient->Text = L"Supprimer";
			// 
			// OngletCommande
			// 
			this->OngletCommande->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->OngletAjoutCommande,
					this->OngletModifierCommande, this->OngletSupprimerCommande
			});
			this->OngletCommande->Name = L"OngletCommande";
			this->OngletCommande->Size = System::Drawing::Size(82, 20);
			this->OngletCommande->Text = L"Commande";
			// 
			// OngletAjoutCommande
			// 
			this->OngletAjoutCommande->Name = L"OngletAjoutCommande";
			this->OngletAjoutCommande->Size = System::Drawing::Size(180, 22);
			this->OngletAjoutCommande->Text = L"Ajouter";
			// 
			// OngletModifierCommande
			// 
			this->OngletModifierCommande->Name = L"OngletModifierCommande";
			this->OngletModifierCommande->Size = System::Drawing::Size(180, 22);
			this->OngletModifierCommande->Text = L"Modifier";
			// 
			// OngletSupprimerCommande
			// 
			this->OngletSupprimerCommande->Name = L"OngletSupprimerCommande";
			this->OngletSupprimerCommande->Size = System::Drawing::Size(180, 22);
			this->OngletSupprimerCommande->Text = L"Supprimer";
			// 
			// ButtonAjoutClient
			// 
			this->ButtonAjoutClient->Location = System::Drawing::Point(277, 299);
			this->ButtonAjoutClient->Name = L"ButtonAjoutClient";
			this->ButtonAjoutClient->Size = System::Drawing::Size(118, 23);
			this->ButtonAjoutClient->TabIndex = 31;
			this->ButtonAjoutClient->Text = L"Ajouter le client";
			this->ButtonAjoutClient->UseVisualStyleBackColor = true;
			// 
			// LabelCpClient
			// 
			this->LabelCpClient->AutoSize = true;
			this->LabelCpClient->Location = System::Drawing::Point(621, 211);
			this->LabelCpClient->Name = L"LabelCpClient";
			this->LabelCpClient->Size = System::Drawing::Size(21, 13);
			this->LabelCpClient->TabIndex = 30;
			this->LabelCpClient->Text = L"CP";
			// 
			// LabelVilleClient
			// 
			this->LabelVilleClient->AutoSize = true;
			this->LabelVilleClient->Location = System::Drawing::Point(495, 211);
			this->LabelVilleClient->Name = L"LabelVilleClient";
			this->LabelVilleClient->Size = System::Drawing::Size(26, 13);
			this->LabelVilleClient->TabIndex = 29;
			this->LabelVilleClient->Text = L"Ville";
			// 
			// LabelAdrClient
			// 
			this->LabelAdrClient->AutoSize = true;
			this->LabelAdrClient->Location = System::Drawing::Point(313, 211);
			this->LabelAdrClient->Name = L"LabelAdrClient";
			this->LabelAdrClient->Size = System::Drawing::Size(45, 13);
			this->LabelAdrClient->TabIndex = 28;
			this->LabelAdrClient->Text = L"Adresse";
			// 
			// LabelAnNaissClient
			// 
			this->LabelAnNaissClient->AutoSize = true;
			this->LabelAnNaissClient->Location = System::Drawing::Point(320, 150);
			this->LabelAnNaissClient->Name = L"LabelAnNaissClient";
			this->LabelAnNaissClient->Size = System::Drawing::Size(38, 13);
			this->LabelAnNaissClient->TabIndex = 27;
			this->LabelAnNaissClient->Text = L"Année";
			// 
			// LabelMoisNaissClient
			// 
			this->LabelMoisNaissClient->AutoSize = true;
			this->LabelMoisNaissClient->Location = System::Drawing::Point(281, 150);
			this->LabelMoisNaissClient->Name = L"LabelMoisNaissClient";
			this->LabelMoisNaissClient->Size = System::Drawing::Size(29, 13);
			this->LabelMoisNaissClient->TabIndex = 26;
			this->LabelMoisNaissClient->Text = L"Mois";
			// 
			// LabelJourNaissClient
			// 
			this->LabelJourNaissClient->AutoSize = true;
			this->LabelJourNaissClient->Location = System::Drawing::Point(242, 150);
			this->LabelJourNaissClient->Name = L"LabelJourNaissClient";
			this->LabelJourNaissClient->Size = System::Drawing::Size(27, 13);
			this->LabelJourNaissClient->TabIndex = 25;
			this->LabelJourNaissClient->Text = L"Jour";
			// 
			// TextBoxAnNaissClient
			// 
			this->TextBoxAnNaissClient->Location = System::Drawing::Point(323, 169);
			this->TextBoxAnNaissClient->Name = L"TextBoxAnNaissClient";
			this->TextBoxAnNaissClient->Size = System::Drawing::Size(52, 20);
			this->TextBoxAnNaissClient->TabIndex = 24;
			// 
			// TextBoxMoisNaissClient
			// 
			this->TextBoxMoisNaissClient->Location = System::Drawing::Point(284, 169);
			this->TextBoxMoisNaissClient->Name = L"TextBoxMoisNaissClient";
			this->TextBoxMoisNaissClient->Size = System::Drawing::Size(33, 20);
			this->TextBoxMoisNaissClient->TabIndex = 23;
			// 
			// LabelAdrFactClient
			// 
			this->LabelAdrFactClient->AutoSize = true;
			this->LabelAdrFactClient->Location = System::Drawing::Point(126, 258);
			this->LabelAdrFactClient->Name = L"LabelAdrFactClient";
			this->LabelAdrFactClient->Size = System::Drawing::Size(113, 13);
			this->LabelAdrFactClient->TabIndex = 22;
			this->LabelAdrFactClient->Text = L"Adresse de facturation";
			// 
			// LabelAdrLivClient
			// 
			this->LabelAdrLivClient->AutoSize = true;
			this->LabelAdrLivClient->Location = System::Drawing::Point(138, 232);
			this->LabelAdrLivClient->Name = L"LabelAdrLivClient";
			this->LabelAdrLivClient->Size = System::Drawing::Size(101, 13);
			this->LabelAdrLivClient->TabIndex = 21;
			this->LabelAdrLivClient->Text = L"Adresse de livraison";
			// 
			// LabelNaissClient
			// 
			this->LabelNaissClient->AutoSize = true;
			this->LabelNaissClient->Location = System::Drawing::Point(140, 172);
			this->LabelNaissClient->Name = L"LabelNaissClient";
			this->LabelNaissClient->Size = System::Drawing::Size(96, 13);
			this->LabelNaissClient->TabIndex = 20;
			this->LabelNaissClient->Text = L"Date de naissance";
			// 
			// LabelPrenomClient
			// 
			this->LabelPrenomClient->AutoSize = true;
			this->LabelPrenomClient->Location = System::Drawing::Point(196, 111);
			this->LabelPrenomClient->Name = L"LabelPrenomClient";
			this->LabelPrenomClient->Size = System::Drawing::Size(43, 13);
			this->LabelPrenomClient->TabIndex = 19;
			this->LabelPrenomClient->Text = L"Prénom";
			// 
			// LabelNomClient
			// 
			this->LabelNomClient->AutoSize = true;
			this->LabelNomClient->Location = System::Drawing::Point(210, 81);
			this->LabelNomClient->Name = L"LabelNomClient";
			this->LabelNomClient->Size = System::Drawing::Size(29, 13);
			this->LabelNomClient->TabIndex = 18;
			this->LabelNomClient->Text = L"Nom";
			// 
			// TextBoxAdrAdrFactClient
			// 
			this->TextBoxAdrAdrFactClient->Location = System::Drawing::Point(245, 255);
			this->TextBoxAdrAdrFactClient->Name = L"TextBoxAdrAdrFactClient";
			this->TextBoxAdrAdrFactClient->Size = System::Drawing::Size(187, 20);
			this->TextBoxAdrAdrFactClient->TabIndex = 15;
			// 
			// TextBoxVilleAdrFactClient
			// 
			this->TextBoxVilleAdrFactClient->Location = System::Drawing::Point(438, 255);
			this->TextBoxVilleAdrFactClient->Name = L"TextBoxVilleAdrFactClient";
			this->TextBoxVilleAdrFactClient->Size = System::Drawing::Size(150, 20);
			this->TextBoxVilleAdrFactClient->TabIndex = 16;
			// 
			// TextBoxCpAdrFactClient
			// 
			this->TextBoxCpAdrFactClient->Location = System::Drawing::Point(594, 255);
			this->TextBoxCpAdrFactClient->Name = L"TextBoxCpAdrFactClient";
			this->TextBoxCpAdrFactClient->Size = System::Drawing::Size(70, 20);
			this->TextBoxCpAdrFactClient->TabIndex = 17;
			// 
			// TextBoxPrenomClient
			// 
			this->TextBoxPrenomClient->Location = System::Drawing::Point(245, 104);
			this->TextBoxPrenomClient->Name = L"TextBoxPrenomClient";
			this->TextBoxPrenomClient->Size = System::Drawing::Size(150, 20);
			this->TextBoxPrenomClient->TabIndex = 10;
			// 
			// TextBoxNomClient
			// 
			this->TextBoxNomClient->Location = System::Drawing::Point(245, 78);
			this->TextBoxNomClient->Name = L"TextBoxNomClient";
			this->TextBoxNomClient->Size = System::Drawing::Size(150, 20);
			this->TextBoxNomClient->TabIndex = 9;
			// 
			// TexBoxJourNaissClient
			// 
			this->TexBoxJourNaissClient->Location = System::Drawing::Point(245, 169);
			this->TexBoxJourNaissClient->Name = L"TexBoxJourNaissClient";
			this->TexBoxJourNaissClient->Size = System::Drawing::Size(33, 20);
			this->TexBoxJourNaissClient->TabIndex = 11;
			// 
			// TextBoxCpAdrLivClient
			// 
			this->TextBoxCpAdrLivClient->Location = System::Drawing::Point(594, 229);
			this->TextBoxCpAdrLivClient->Name = L"TextBoxCpAdrLivClient";
			this->TextBoxCpAdrLivClient->Size = System::Drawing::Size(70, 20);
			this->TextBoxCpAdrLivClient->TabIndex = 14;
			// 
			// TextBoxAdrAdrLivClient
			// 
			this->TextBoxAdrAdrLivClient->Location = System::Drawing::Point(245, 229);
			this->TextBoxAdrAdrLivClient->Name = L"TextBoxAdrAdrLivClient";
			this->TextBoxAdrAdrLivClient->Size = System::Drawing::Size(187, 20);
			this->TextBoxAdrAdrLivClient->TabIndex = 12;
			// 
			// TextBoxVilleAdrLivClient
			// 
			this->TextBoxVilleAdrLivClient->Location = System::Drawing::Point(438, 229);
			this->TextBoxVilleAdrLivClient->Name = L"TextBoxVilleAdrLivClient";
			this->TextBoxVilleAdrLivClient->Size = System::Drawing::Size(150, 20);
			this->TextBoxVilleAdrLivClient->TabIndex = 13;
			// 
			// EcranIdle
			// 
			this->EcranIdle->AutoSize = true;
			this->EcranIdle->Controls->Add(this->menuStrip1);
			this->EcranIdle->Location = System::Drawing::Point(-3, 0);
			this->EcranIdle->Name = L"EcranIdle";
			this->EcranIdle->Size = System::Drawing::Size(934, 662);
			this->EcranIdle->TabIndex = 23;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem5, this->toolStripMenuItem9, this->toolStripMenuItem13
			});
			this->menuStrip1->Location = System::Drawing::Point(3, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(262, 24);
			this->menuStrip1->TabIndex = 33;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(53, 20);
			this->toolStripMenuItem1->Text = L"Article";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(129, 22);
			this->toolStripMenuItem2->Text = L"Ajouter";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(129, 22);
			this->toolStripMenuItem3->Text = L"Modifier";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(129, 22);
			this->toolStripMenuItem4->Text = L"Supprimer";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem6,
					this->toolStripMenuItem7, this->toolStripMenuItem8
			});
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(71, 20);
			this->toolStripMenuItem5->Text = L"Personnel";
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(129, 22);
			this->toolStripMenuItem6->Text = L"Ajouter";
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(129, 22);
			this->toolStripMenuItem7->Text = L"Modifier";
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(129, 22);
			this->toolStripMenuItem8->Text = L"Supprimer";
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem10,
					this->toolStripMenuItem11, this->toolStripMenuItem12
			});
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(50, 20);
			this->toolStripMenuItem9->Text = L"Client";
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(129, 22);
			this->toolStripMenuItem10->Text = L"Ajouter";
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(129, 22);
			this->toolStripMenuItem11->Text = L"Modifier";
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(129, 22);
			this->toolStripMenuItem12->Text = L"Supprimer";
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem14,
					this->toolStripMenuItem15, this->toolStripMenuItem16
			});
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(82, 20);
			this->toolStripMenuItem13->Text = L"Commande";
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(129, 22);
			this->toolStripMenuItem14->Text = L"Ajouter";
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(129, 22);
			this->toolStripMenuItem15->Text = L"Modifier";
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(129, 22);
			this->toolStripMenuItem16->Text = L"Supprimer";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(928, 655);
			this->Controls->Add(this->EcranConnexion);
			this->Controls->Add(this->EcranAjoutClient);
			this->Controls->Add(this->EcranIdle);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Gestionnaire BDD";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->EcranConnexion->ResumeLayout(false);
			this->EcranConnexion->PerformLayout();
			this->EcranAjoutClient->ResumeLayout(false);
			this->EcranAjoutClient->PerformLayout();
			this->MenuOnglet->ResumeLayout(false);
			this->MenuOnglet->PerformLayout();
			this->EcranIdle->ResumeLayout(false);
			this->EcranIdle->PerformLayout();
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
		conn1.getUtilisateur(textBox2->Text);
		conn1.getMDP(textBox3->Text);

		conn1.connect();

		this->EcranConnexion->Hide();

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
/// CLIENT AJOUTER
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
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
