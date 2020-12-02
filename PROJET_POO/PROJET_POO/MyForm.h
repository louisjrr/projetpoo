#pragma once
#include "CL_CAD.h"
#include "CLclient.h"
#include "CLpersonnel.h"

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












































































	private: System::Windows::Forms::Panel^ EcranIdle;





















	private: System::Windows::Forms::Panel^ EcranAjoutClient;
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
	private: System::Windows::Forms::Panel^ EcranModifierClient;
	private: System::Windows::Forms::Button^ ButtonModifierClient;
	private: System::Windows::Forms::Label^ LabelAnModifierClient;





	private: System::Windows::Forms::Label^ LabelMoisModifierClient;

	private: System::Windows::Forms::Label^ LabelJourModifierClient;

	private: System::Windows::Forms::TextBox^ TextBoxAnNaissModifierClient;

	private: System::Windows::Forms::TextBox^ TextBoxMoisNaissModifierClient;

	private: System::Windows::Forms::Label^ LabelNaissModifierClient;



	private: System::Windows::Forms::Label^ LabelPrenomModifierClient;

	private: System::Windows::Forms::Label^ LabelNomModifierClient;
	private: System::Windows::Forms::TextBox^ TextBoxPrenomModifierClient;






	private: System::Windows::Forms::TextBox^ TextBoxNomModifierClient;
	private: System::Windows::Forms::TextBox^ TextBoxJourNaissModifierClient;





	private: System::Windows::Forms::Panel^ EcranVide;
	private: System::Windows::Forms::Panel^ EcranAfficherClient;
	private: System::Windows::Forms::DataGridView^ DataGridAfficherClient;
	private: System::Windows::Forms::TextBox^ TextBoxPrenomAfficherClient;
	private: System::Windows::Forms::TextBox^ TextBoxNomAfficherClient;
	private: System::Windows::Forms::Label^ LabelPrenomAfficherClient;
	private: System::Windows::Forms::Label^ LabelNomAfficherClient;
	private: System::Windows::Forms::DataGridView^ DataGridModifierClient;
	private: System::Windows::Forms::Button^ buttonRechercherClient;
private: System::Windows::Forms::Panel^ EcranSupprimerClient;
private: System::Windows::Forms::Button^ ButtonSupprimerSupprimerClient;
private: System::Windows::Forms::TextBox^ TextBoxSupprimerSupprimerClient;
private: System::Windows::Forms::Label^ LabelSupprimerSupprimerClient;
private: System::Windows::Forms::DataGridView^ DataGridSupprimerClient;



private: System::Windows::Forms::Button^ ButtonChercherSupprimerClient;
private: System::Windows::Forms::Label^ LabelPrenomSupprimerClient;




private: System::Windows::Forms::Label^ LabelNomSupprimerClient;
private: System::Windows::Forms::TextBox^ TextBoxPrenomSupprimerClient;




private: System::Windows::Forms::TextBox^ TextBoxNomSupprimerClient;
private: System::Windows::Forms::Panel^ EcranAjoutPersonnel;
private: System::Windows::Forms::Button^ buttonAjoutPersonnel;
private: System::Windows::Forms::TextBox^ textBoxSuperieur;
private: System::Windows::Forms::Label^ labelSuperieur;
private: System::Windows::Forms::Label^ labelCpPersonnel;
private: System::Windows::Forms::Label^ labelVillePersonnel;
private: System::Windows::Forms::Label^ labelAdressePersonnel;
private: System::Windows::Forms::Label^ labelAnneePersonnel;
private: System::Windows::Forms::Label^ labelMoisPersonnel;
private: System::Windows::Forms::Label^ labelJourPersonnel;
private: System::Windows::Forms::TextBox^ textBoxAnnePersonnel;
private: System::Windows::Forms::TextBox^ textBoxMoisPersonnel;
private: System::Windows::Forms::Label^ labelAdresseGenPersonnel;
private: System::Windows::Forms::Label^ labelHireDate;
private: System::Windows::Forms::Label^ labelPrenomPersonnel;
private: System::Windows::Forms::Label^ labelNomPerosonnel;
private: System::Windows::Forms::TextBox^ textBoxPrenomPersonnel;
private: System::Windows::Forms::TextBox^ textBoxNomPersonnel;
private: System::Windows::Forms::TextBox^ textBoxJourPersonnel;
private: System::Windows::Forms::TextBox^ textBoxCpPersonnel;
private: System::Windows::Forms::TextBox^ textBoxAdressePersonnel;
private: System::Windows::Forms::TextBox^ textBoxVillePersonnel;
private: System::Windows::Forms::MenuStrip^ MenuOnglet;
private: System::Windows::Forms::ToolStripMenuItem^ OngletArticle;
private: System::Windows::Forms::ToolStripMenuItem^ OngletAjoutArticle;
private: System::Windows::Forms::ToolStripMenuItem^ OngletModifierArticle;
private: System::Windows::Forms::ToolStripMenuItem^ OngletSupprimerArticle;
private: System::Windows::Forms::ToolStripMenuItem^ OngletAfficherArticle;
private: System::Windows::Forms::ToolStripMenuItem^ OngletPersonnel;
private: System::Windows::Forms::ToolStripMenuItem^ OngletAjoutPersonnel;
private: System::Windows::Forms::ToolStripMenuItem^ OngletModifierPersonnel;
private: System::Windows::Forms::ToolStripMenuItem^ OngletSupprimerPersonnel;
private: System::Windows::Forms::ToolStripMenuItem^ OngletAfficherPersonnel;
private: System::Windows::Forms::ToolStripMenuItem^ OngletClient;
private: System::Windows::Forms::ToolStripMenuItem^ OngletAjoutClient;
private: System::Windows::Forms::ToolStripMenuItem^ OngletModifierClient;
private: System::Windows::Forms::ToolStripMenuItem^ OngletSupprimerClient;
private: System::Windows::Forms::ToolStripMenuItem^ OngletAfficherClient;
private: System::Windows::Forms::ToolStripMenuItem^ OngletCommande;
private: System::Windows::Forms::ToolStripMenuItem^ OngletAjoutCommande;
private: System::Windows::Forms::ToolStripMenuItem^ OngletModifierCommande;
private: System::Windows::Forms::ToolStripMenuItem^ OngletSupprimerCommande;
private: System::Windows::Forms::ToolStripMenuItem^ OngletAfficherCommande;





























































































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
			this->EcranSupprimerClient = (gcnew System::Windows::Forms::Panel());
			this->ButtonSupprimerSupprimerClient = (gcnew System::Windows::Forms::Button());
			this->TextBoxSupprimerSupprimerClient = (gcnew System::Windows::Forms::TextBox());
			this->LabelSupprimerSupprimerClient = (gcnew System::Windows::Forms::Label());
			this->DataGridSupprimerClient = (gcnew System::Windows::Forms::DataGridView());
			this->ButtonChercherSupprimerClient = (gcnew System::Windows::Forms::Button());
			this->LabelPrenomSupprimerClient = (gcnew System::Windows::Forms::Label());
			this->LabelNomSupprimerClient = (gcnew System::Windows::Forms::Label());
			this->TextBoxPrenomSupprimerClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxNomSupprimerClient = (gcnew System::Windows::Forms::TextBox());
			this->EcranModifierClient = (gcnew System::Windows::Forms::Panel());
			this->DataGridModifierClient = (gcnew System::Windows::Forms::DataGridView());
			this->ButtonModifierClient = (gcnew System::Windows::Forms::Button());
			this->LabelAnModifierClient = (gcnew System::Windows::Forms::Label());
			this->LabelMoisModifierClient = (gcnew System::Windows::Forms::Label());
			this->LabelJourModifierClient = (gcnew System::Windows::Forms::Label());
			this->TextBoxAnNaissModifierClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxMoisNaissModifierClient = (gcnew System::Windows::Forms::TextBox());
			this->LabelNaissModifierClient = (gcnew System::Windows::Forms::Label());
			this->LabelPrenomModifierClient = (gcnew System::Windows::Forms::Label());
			this->LabelNomModifierClient = (gcnew System::Windows::Forms::Label());
			this->TextBoxPrenomModifierClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxNomModifierClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxJourNaissModifierClient = (gcnew System::Windows::Forms::TextBox());
			this->BottomToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->TopToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->RightToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->LeftToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->ContentPanel = (gcnew System::Windows::Forms::ToolStripContentPanel());
			this->EcranIdle = (gcnew System::Windows::Forms::Panel());
			this->EcranVide = (gcnew System::Windows::Forms::Panel());
			this->EcranAjoutClient = (gcnew System::Windows::Forms::Panel());
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
			this->EcranAfficherClient = (gcnew System::Windows::Forms::Panel());
			this->DataGridAfficherClient = (gcnew System::Windows::Forms::DataGridView());
			this->TextBoxPrenomAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxNomAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->LabelPrenomAfficherClient = (gcnew System::Windows::Forms::Label());
			this->LabelNomAfficherClient = (gcnew System::Windows::Forms::Label());
			this->buttonRechercherClient = (gcnew System::Windows::Forms::Button());
			this->EcranAjoutPersonnel = (gcnew System::Windows::Forms::Panel());
			this->buttonAjoutPersonnel = (gcnew System::Windows::Forms::Button());
			this->textBoxSuperieur = (gcnew System::Windows::Forms::TextBox());
			this->labelSuperieur = (gcnew System::Windows::Forms::Label());
			this->labelCpPersonnel = (gcnew System::Windows::Forms::Label());
			this->labelVillePersonnel = (gcnew System::Windows::Forms::Label());
			this->labelAdressePersonnel = (gcnew System::Windows::Forms::Label());
			this->labelAnneePersonnel = (gcnew System::Windows::Forms::Label());
			this->labelMoisPersonnel = (gcnew System::Windows::Forms::Label());
			this->labelJourPersonnel = (gcnew System::Windows::Forms::Label());
			this->textBoxAnnePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMoisPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->labelAdresseGenPersonnel = (gcnew System::Windows::Forms::Label());
			this->labelHireDate = (gcnew System::Windows::Forms::Label());
			this->labelPrenomPersonnel = (gcnew System::Windows::Forms::Label());
			this->labelNomPerosonnel = (gcnew System::Windows::Forms::Label());
			this->textBoxPrenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->textBoxJourPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCpPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdressePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->textBoxVillePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->MenuOnglet = (gcnew System::Windows::Forms::MenuStrip());
			this->OngletArticle = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletAjoutArticle = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletModifierArticle = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletSupprimerArticle = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletAfficherArticle = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletPersonnel = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletAjoutPersonnel = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletModifierPersonnel = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletSupprimerPersonnel = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletAfficherPersonnel = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletClient = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletAjoutClient = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletModifierClient = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletSupprimerClient = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletAfficherClient = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletCommande = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletAjoutCommande = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletModifierCommande = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletSupprimerCommande = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletAfficherCommande = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->EcranConnexion->SuspendLayout();
			this->EcranSupprimerClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridSupprimerClient))->BeginInit();
			this->EcranModifierClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridModifierClient))->BeginInit();
			this->EcranIdle->SuspendLayout();
			this->EcranAjoutClient->SuspendLayout();
			this->EcranAfficherClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridAfficherClient))->BeginInit();
			this->EcranAjoutPersonnel->SuspendLayout();
			this->MenuOnglet->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) {
				L"192.168.1.72", L"192.168.227.138",
					L"192.168.37.131"
			});
			this->textBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox1->Location = System::Drawing::Point(375, 227);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(375, 281);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(264, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"user";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(375, 331);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(264, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"User@viacesi27";
			// 
			// LabelUserConnexion
			// 
			this->LabelUserConnexion->AutoSize = true;
			this->LabelUserConnexion->Location = System::Drawing::Point(266, 284);
			this->LabelUserConnexion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelUserConnexion->Name = L"LabelUserConnexion";
			this->LabelUserConnexion->Size = System::Drawing::Size(71, 17);
			this->LabelUserConnexion->TabIndex = 6;
			this->LabelUserConnexion->Text = L"Utilisateur";
			// 
			// LabelMdpConnexion
			// 
			this->LabelMdpConnexion->AutoSize = true;
			this->LabelMdpConnexion->Location = System::Drawing::Point(254, 332);
			this->LabelMdpConnexion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelMdpConnexion->Name = L"LabelMdpConnexion";
			this->LabelMdpConnexion->Size = System::Drawing::Size(93, 17);
			this->LabelMdpConnexion->TabIndex = 7;
			this->LabelMdpConnexion->Text = L"Mot de passe";
			// 
			// LabelIpConnexion
			// 
			this->LabelIpConnexion->AutoSize = true;
			this->LabelIpConnexion->Location = System::Drawing::Point(304, 227);
			this->LabelIpConnexion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelIpConnexion->Name = L"LabelIpConnexion";
			this->LabelIpConnexion->Size = System::Drawing::Size(20, 17);
			this->LabelIpConnexion->TabIndex = 1;
			this->LabelIpConnexion->Text = L"IP";
			// 
			// ButtonConnexion
			// 
			this->ButtonConnexion->Location = System::Drawing::Point(457, 409);
			this->ButtonConnexion->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->ButtonConnexion->Name = L"ButtonConnexion";
			this->ButtonConnexion->Size = System::Drawing::Size(149, 57);
			this->ButtonConnexion->TabIndex = 2;
			this->ButtonConnexion->Text = L"connexion";
			this->ButtonConnexion->UseVisualStyleBackColor = true;
			this->ButtonConnexion->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(721, 319);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(624, 401);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// EcranConnexion
			// 
			this->EcranConnexion->AutoSize = true;
			this->EcranConnexion->Controls->Add(this->textBox1);
			this->EcranConnexion->Controls->Add(this->textBox3);
			this->EcranConnexion->Controls->Add(this->textBox2);
			this->EcranConnexion->Controls->Add(this->LabelIpConnexion);
			this->EcranConnexion->Controls->Add(this->LabelUserConnexion);
			this->EcranConnexion->Controls->Add(this->LabelMdpConnexion);
			this->EcranConnexion->Controls->Add(this->ButtonConnexion);
			this->EcranConnexion->Controls->Add(this->pictureBox1);
			this->EcranConnexion->Location = System::Drawing::Point(-4, 0);
			this->EcranConnexion->Margin = System::Windows::Forms::Padding(4);
			this->EcranConnexion->Name = L"EcranConnexion";
			this->EcranConnexion->Size = System::Drawing::Size(1351, 738);
			this->EcranConnexion->TabIndex = 18;
			// 
			// EcranSupprimerClient
			// 
			this->EcranSupprimerClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranSupprimerClient->AutoSize = true;
			this->EcranSupprimerClient->Controls->Add(this->ButtonSupprimerSupprimerClient);
			this->EcranSupprimerClient->Controls->Add(this->TextBoxSupprimerSupprimerClient);
			this->EcranSupprimerClient->Controls->Add(this->LabelSupprimerSupprimerClient);
			this->EcranSupprimerClient->Controls->Add(this->DataGridSupprimerClient);
			this->EcranSupprimerClient->Controls->Add(this->ButtonChercherSupprimerClient);
			this->EcranSupprimerClient->Controls->Add(this->LabelPrenomSupprimerClient);
			this->EcranSupprimerClient->Controls->Add(this->LabelNomSupprimerClient);
			this->EcranSupprimerClient->Controls->Add(this->TextBoxPrenomSupprimerClient);
			this->EcranSupprimerClient->Controls->Add(this->TextBoxNomSupprimerClient);
			this->EcranSupprimerClient->Location = System::Drawing::Point(0, 27);
			this->EcranSupprimerClient->Name = L"EcranSupprimerClient";
			this->EcranSupprimerClient->Size = System::Drawing::Size(1000, 600);
			this->EcranSupprimerClient->TabIndex = 35;
			// 
			// ButtonSupprimerSupprimerClient
			// 
			this->ButtonSupprimerSupprimerClient->Location = System::Drawing::Point(522, 459);
			this->ButtonSupprimerSupprimerClient->Name = L"ButtonSupprimerSupprimerClient";
			this->ButtonSupprimerSupprimerClient->Size = System::Drawing::Size(117, 41);
			this->ButtonSupprimerSupprimerClient->TabIndex = 35;
			this->ButtonSupprimerSupprimerClient->Text = L"Supprimer le client";
			this->ButtonSupprimerSupprimerClient->UseVisualStyleBackColor = true;
			this->ButtonSupprimerSupprimerClient->Click += gcnew System::EventHandler(this, &MyForm::ClickSupprimerSupprimerClient);
			// 
			// TextBoxSupprimerSupprimerClient
			// 
			this->TextBoxSupprimerSupprimerClient->Location = System::Drawing::Point(529, 420);
			this->TextBoxSupprimerSupprimerClient->Name = L"TextBoxSupprimerSupprimerClient";
			this->TextBoxSupprimerSupprimerClient->Size = System::Drawing::Size(100, 22);
			this->TextBoxSupprimerSupprimerClient->TabIndex = 34;
			// 
			// LabelSupprimerSupprimerClient
			// 
			this->LabelSupprimerSupprimerClient->AutoSize = true;
			this->LabelSupprimerSupprimerClient->Location = System::Drawing::Point(521, 404);
			this->LabelSupprimerSupprimerClient->Name = L"LabelSupprimerSupprimerClient";
			this->LabelSupprimerSupprimerClient->Size = System::Drawing::Size(157, 17);
			this->LabelSupprimerSupprimerClient->TabIndex = 33;
			this->LabelSupprimerSupprimerClient->Text = L"ID du client à supprimer";
			// 
			// DataGridSupprimerClient
			// 
			this->DataGridSupprimerClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridSupprimerClient->Location = System::Drawing::Point(340, 46);
			this->DataGridSupprimerClient->Name = L"DataGridSupprimerClient";
			this->DataGridSupprimerClient->RowHeadersWidth = 51;
			this->DataGridSupprimerClient->Size = System::Drawing::Size(621, 293);
			this->DataGridSupprimerClient->TabIndex = 32;
			// 
			// ButtonChercherSupprimerClient
			// 
			this->ButtonChercherSupprimerClient->Location = System::Drawing::Point(120, 127);
			this->ButtonChercherSupprimerClient->Name = L"ButtonChercherSupprimerClient";
			this->ButtonChercherSupprimerClient->Size = System::Drawing::Size(169, 23);
			this->ButtonChercherSupprimerClient->TabIndex = 31;
			this->ButtonChercherSupprimerClient->Text = L"Chercher le client à supprimer";
			this->ButtonChercherSupprimerClient->UseVisualStyleBackColor = true;
			this->ButtonChercherSupprimerClient->Click += gcnew System::EventHandler(this, &MyForm::ClickChercherSupprimerClient);
			// 
			// LabelPrenomSupprimerClient
			// 
			this->LabelPrenomSupprimerClient->AutoSize = true;
			this->LabelPrenomSupprimerClient->Location = System::Drawing::Point(81, 93);
			this->LabelPrenomSupprimerClient->Name = L"LabelPrenomSupprimerClient";
			this->LabelPrenomSupprimerClient->Size = System::Drawing::Size(57, 17);
			this->LabelPrenomSupprimerClient->TabIndex = 19;
			this->LabelPrenomSupprimerClient->Text = L"Prénom";
			// 
			// LabelNomSupprimerClient
			// 
			this->LabelNomSupprimerClient->AutoSize = true;
			this->LabelNomSupprimerClient->Location = System::Drawing::Point(95, 63);
			this->LabelNomSupprimerClient->Name = L"LabelNomSupprimerClient";
			this->LabelNomSupprimerClient->Size = System::Drawing::Size(37, 17);
			this->LabelNomSupprimerClient->TabIndex = 18;
			this->LabelNomSupprimerClient->Text = L"Nom";
			// 
			// TextBoxPrenomSupprimerClient
			// 
			this->TextBoxPrenomSupprimerClient->Location = System::Drawing::Point(130, 86);
			this->TextBoxPrenomSupprimerClient->Name = L"TextBoxPrenomSupprimerClient";
			this->TextBoxPrenomSupprimerClient->Size = System::Drawing::Size(150, 22);
			this->TextBoxPrenomSupprimerClient->TabIndex = 10;
			// 
			// TextBoxNomSupprimerClient
			// 
			this->TextBoxNomSupprimerClient->Location = System::Drawing::Point(130, 60);
			this->TextBoxNomSupprimerClient->Name = L"TextBoxNomSupprimerClient";
			this->TextBoxNomSupprimerClient->Size = System::Drawing::Size(150, 22);
			this->TextBoxNomSupprimerClient->TabIndex = 9;
			// 
			// EcranModifierClient
			// 
			this->EcranModifierClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranModifierClient->AutoSize = true;
			this->EcranModifierClient->Controls->Add(this->DataGridModifierClient);
			this->EcranModifierClient->Controls->Add(this->ButtonModifierClient);
			this->EcranModifierClient->Controls->Add(this->LabelAnModifierClient);
			this->EcranModifierClient->Controls->Add(this->LabelMoisModifierClient);
			this->EcranModifierClient->Controls->Add(this->LabelJourModifierClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxAnNaissModifierClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxMoisNaissModifierClient);
			this->EcranModifierClient->Controls->Add(this->LabelNaissModifierClient);
			this->EcranModifierClient->Controls->Add(this->LabelPrenomModifierClient);
			this->EcranModifierClient->Controls->Add(this->LabelNomModifierClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxPrenomModifierClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxNomModifierClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxJourNaissModifierClient);
			this->EcranModifierClient->Location = System::Drawing::Point(0, 33);
			this->EcranModifierClient->Margin = System::Windows::Forms::Padding(4);
			this->EcranModifierClient->Name = L"EcranModifierClient";
			this->EcranModifierClient->Size = System::Drawing::Size(1333, 738);
			this->EcranModifierClient->TabIndex = 34;
			// 
			// DataGridModifierClient
			// 
			this->DataGridModifierClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridModifierClient->Location = System::Drawing::Point(453, 57);
			this->DataGridModifierClient->Margin = System::Windows::Forms::Padding(4);
			this->DataGridModifierClient->Name = L"DataGridModifierClient";
			this->DataGridModifierClient->RowHeadersWidth = 51;
			this->DataGridModifierClient->Size = System::Drawing::Size(828, 361);
			this->DataGridModifierClient->TabIndex = 32;
			// 
			// ButtonModifierClient
			// 
			this->ButtonModifierClient->Location = System::Drawing::Point(176, 231);
			this->ButtonModifierClient->Margin = System::Windows::Forms::Padding(4);
			this->ButtonModifierClient->Name = L"ButtonModifierClient";
			this->ButtonModifierClient->Size = System::Drawing::Size(225, 28);
			this->ButtonModifierClient->TabIndex = 31;
			this->ButtonModifierClient->Text = L"Chercher le client à modifier";
			this->ButtonModifierClient->UseVisualStyleBackColor = true;
			this->ButtonModifierClient->Click += gcnew System::EventHandler(this, &MyForm::ClickChercherModifierClient);
			// 
			// LabelAnModifierClient
			// 
			this->LabelAnModifierClient->AutoSize = true;
			this->LabelAnModifierClient->Location = System::Drawing::Point(289, 162);
			this->LabelAnModifierClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelAnModifierClient->Name = L"LabelAnModifierClient";
			this->LabelAnModifierClient->Size = System::Drawing::Size(49, 17);
			this->LabelAnModifierClient->TabIndex = 27;
			this->LabelAnModifierClient->Text = L"Année";
			// 
			// LabelMoisModifierClient
			// 
			this->LabelMoisModifierClient->AutoSize = true;
			this->LabelMoisModifierClient->Location = System::Drawing::Point(237, 162);
			this->LabelMoisModifierClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelMoisModifierClient->Name = L"LabelMoisModifierClient";
			this->LabelMoisModifierClient->Size = System::Drawing::Size(37, 17);
			this->LabelMoisModifierClient->TabIndex = 26;
			this->LabelMoisModifierClient->Text = L"Mois";
			// 
			// LabelJourModifierClient
			// 
			this->LabelJourModifierClient->AutoSize = true;
			this->LabelJourModifierClient->Location = System::Drawing::Point(185, 162);
			this->LabelJourModifierClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelJourModifierClient->Name = L"LabelJourModifierClient";
			this->LabelJourModifierClient->Size = System::Drawing::Size(36, 17);
			this->LabelJourModifierClient->TabIndex = 25;
			this->LabelJourModifierClient->Text = L"Jour";
			// 
			// TextBoxAnNaissModifierClient
			// 
			this->TextBoxAnNaissModifierClient->Location = System::Drawing::Point(293, 186);
			this->TextBoxAnNaissModifierClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxAnNaissModifierClient->Name = L"TextBoxAnNaissModifierClient";
			this->TextBoxAnNaissModifierClient->Size = System::Drawing::Size(68, 22);
			this->TextBoxAnNaissModifierClient->TabIndex = 24;
			// 
			// TextBoxMoisNaissModifierClient
			// 
			this->TextBoxMoisNaissModifierClient->Location = System::Drawing::Point(241, 186);
			this->TextBoxMoisNaissModifierClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxMoisNaissModifierClient->Name = L"TextBoxMoisNaissModifierClient";
			this->TextBoxMoisNaissModifierClient->Size = System::Drawing::Size(43, 22);
			this->TextBoxMoisNaissModifierClient->TabIndex = 23;
			// 
			// LabelNaissModifierClient
			// 
			this->LabelNaissModifierClient->AutoSize = true;
			this->LabelNaissModifierClient->Location = System::Drawing::Point(49, 190);
			this->LabelNaissModifierClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelNaissModifierClient->Name = L"LabelNaissModifierClient";
			this->LabelNaissModifierClient->Size = System::Drawing::Size(126, 17);
			this->LabelNaissModifierClient->TabIndex = 20;
			this->LabelNaissModifierClient->Text = L"Date de naissance";
			// 
			// LabelPrenomModifierClient
			// 
			this->LabelPrenomModifierClient->AutoSize = true;
			this->LabelPrenomModifierClient->Location = System::Drawing::Point(124, 114);
			this->LabelPrenomModifierClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelPrenomModifierClient->Name = L"LabelPrenomModifierClient";
			this->LabelPrenomModifierClient->Size = System::Drawing::Size(57, 17);
			this->LabelPrenomModifierClient->TabIndex = 19;
			this->LabelPrenomModifierClient->Text = L"Prénom";
			// 
			// LabelNomModifierClient
			// 
			this->LabelNomModifierClient->AutoSize = true;
			this->LabelNomModifierClient->Location = System::Drawing::Point(143, 78);
			this->LabelNomModifierClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelNomModifierClient->Name = L"LabelNomModifierClient";
			this->LabelNomModifierClient->Size = System::Drawing::Size(37, 17);
			this->LabelNomModifierClient->TabIndex = 18;
			this->LabelNomModifierClient->Text = L"Nom";
			// 
			// TextBoxPrenomModifierClient
			// 
			this->TextBoxPrenomModifierClient->Location = System::Drawing::Point(189, 106);
			this->TextBoxPrenomModifierClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxPrenomModifierClient->Name = L"TextBoxPrenomModifierClient";
			this->TextBoxPrenomModifierClient->Size = System::Drawing::Size(199, 22);
			this->TextBoxPrenomModifierClient->TabIndex = 10;
			// 
			// TextBoxNomModifierClient
			// 
			this->TextBoxNomModifierClient->Location = System::Drawing::Point(189, 74);
			this->TextBoxNomModifierClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxNomModifierClient->Name = L"TextBoxNomModifierClient";
			this->TextBoxNomModifierClient->Size = System::Drawing::Size(199, 22);
			this->TextBoxNomModifierClient->TabIndex = 9;
			// 
			// TextBoxJourNaissModifierClient
			// 
			this->TextBoxJourNaissModifierClient->Location = System::Drawing::Point(189, 186);
			this->TextBoxJourNaissModifierClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxJourNaissModifierClient->Name = L"TextBoxJourNaissModifierClient";
			this->TextBoxJourNaissModifierClient->Size = System::Drawing::Size(43, 22);
			this->TextBoxJourNaissModifierClient->TabIndex = 11;
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
			// EcranIdle
			// 
			this->EcranIdle->AutoSize = true;
			this->EcranIdle->Controls->Add(this->EcranVide);
			this->EcranIdle->Controls->Add(this->MenuOnglet);
			this->EcranIdle->Controls->Add(this->EcranAjoutClient);
			this->EcranIdle->Controls->Add(this->EcranModifierClient);
			this->EcranIdle->Controls->Add(this->EcranAfficherClient);
			this->EcranIdle->Controls->Add(this->EcranSupprimerClient);
			this->EcranIdle->Controls->Add(this->EcranAjoutPersonnel);
			this->EcranIdle->Location = System::Drawing::Point(0, 0);
			this->EcranIdle->Margin = System::Windows::Forms::Padding(4);
			this->EcranIdle->Name = L"EcranIdle";
			this->EcranIdle->Size = System::Drawing::Size(1368, 1108);
			this->EcranIdle->TabIndex = 24;
			// 
			// EcranVide
			// 
			this->EcranVide->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranVide->AutoSize = true;
			this->EcranVide->Location = System::Drawing::Point(0, 33);
			this->EcranVide->Margin = System::Windows::Forms::Padding(4);
			this->EcranVide->Name = L"EcranVide";
			this->EcranVide->Size = System::Drawing::Size(1333, 1108);
			this->EcranVide->TabIndex = 35;
			// 
			// EcranAjoutClient
			// 
			this->EcranAjoutClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranAjoutClient->AutoSize = true;
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
			this->EcranAjoutClient->Location = System::Drawing::Point(0, 33);
			this->EcranAjoutClient->Margin = System::Windows::Forms::Padding(4);
			this->EcranAjoutClient->Name = L"EcranAjoutClient";
			this->EcranAjoutClient->Size = System::Drawing::Size(1333, 738);
			this->EcranAjoutClient->TabIndex = 26;
			// 
			// ButtonAjoutClient
			// 
			this->ButtonAjoutClient->Location = System::Drawing::Point(369, 368);
			this->ButtonAjoutClient->Margin = System::Windows::Forms::Padding(4);
			this->ButtonAjoutClient->Name = L"ButtonAjoutClient";
			this->ButtonAjoutClient->Size = System::Drawing::Size(157, 28);
			this->ButtonAjoutClient->TabIndex = 31;
			this->ButtonAjoutClient->Text = L"Ajouter le client";
			this->ButtonAjoutClient->UseVisualStyleBackColor = true;
			this->ButtonAjoutClient->Click += gcnew System::EventHandler(this, &MyForm::ButtonAjoutClient_Click);
			// 
			// LabelCpClient
			// 
			this->LabelCpClient->AutoSize = true;
			this->LabelCpClient->Location = System::Drawing::Point(828, 260);
			this->LabelCpClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelCpClient->Name = L"LabelCpClient";
			this->LabelCpClient->Size = System::Drawing::Size(26, 17);
			this->LabelCpClient->TabIndex = 30;
			this->LabelCpClient->Text = L"CP";
			// 
			// LabelVilleClient
			// 
			this->LabelVilleClient->AutoSize = true;
			this->LabelVilleClient->Location = System::Drawing::Point(660, 260);
			this->LabelVilleClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelVilleClient->Name = L"LabelVilleClient";
			this->LabelVilleClient->Size = System::Drawing::Size(34, 17);
			this->LabelVilleClient->TabIndex = 29;
			this->LabelVilleClient->Text = L"Ville";
			// 
			// LabelAdrClient
			// 
			this->LabelAdrClient->AutoSize = true;
			this->LabelAdrClient->Location = System::Drawing::Point(417, 260);
			this->LabelAdrClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelAdrClient->Name = L"LabelAdrClient";
			this->LabelAdrClient->Size = System::Drawing::Size(60, 17);
			this->LabelAdrClient->TabIndex = 28;
			this->LabelAdrClient->Text = L"Adresse";
			// 
			// LabelAnNaissClient
			// 
			this->LabelAnNaissClient->AutoSize = true;
			this->LabelAnNaissClient->Location = System::Drawing::Point(427, 185);
			this->LabelAnNaissClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelAnNaissClient->Name = L"LabelAnNaissClient";
			this->LabelAnNaissClient->Size = System::Drawing::Size(49, 17);
			this->LabelAnNaissClient->TabIndex = 27;
			this->LabelAnNaissClient->Text = L"Année";
			// 
			// LabelMoisNaissClient
			// 
			this->LabelMoisNaissClient->AutoSize = true;
			this->LabelMoisNaissClient->Location = System::Drawing::Point(375, 185);
			this->LabelMoisNaissClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelMoisNaissClient->Name = L"LabelMoisNaissClient";
			this->LabelMoisNaissClient->Size = System::Drawing::Size(37, 17);
			this->LabelMoisNaissClient->TabIndex = 26;
			this->LabelMoisNaissClient->Text = L"Mois";
			// 
			// LabelJourNaissClient
			// 
			this->LabelJourNaissClient->AutoSize = true;
			this->LabelJourNaissClient->Location = System::Drawing::Point(323, 185);
			this->LabelJourNaissClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelJourNaissClient->Name = L"LabelJourNaissClient";
			this->LabelJourNaissClient->Size = System::Drawing::Size(36, 17);
			this->LabelJourNaissClient->TabIndex = 25;
			this->LabelJourNaissClient->Text = L"Jour";
			// 
			// TextBoxAnNaissClient
			// 
			this->TextBoxAnNaissClient->Location = System::Drawing::Point(431, 208);
			this->TextBoxAnNaissClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxAnNaissClient->Name = L"TextBoxAnNaissClient";
			this->TextBoxAnNaissClient->Size = System::Drawing::Size(68, 22);
			this->TextBoxAnNaissClient->TabIndex = 24;
			// 
			// TextBoxMoisNaissClient
			// 
			this->TextBoxMoisNaissClient->Location = System::Drawing::Point(379, 208);
			this->TextBoxMoisNaissClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxMoisNaissClient->Name = L"TextBoxMoisNaissClient";
			this->TextBoxMoisNaissClient->Size = System::Drawing::Size(43, 22);
			this->TextBoxMoisNaissClient->TabIndex = 23;
			// 
			// LabelAdrFactClient
			// 
			this->LabelAdrFactClient->AutoSize = true;
			this->LabelAdrFactClient->Location = System::Drawing::Point(168, 318);
			this->LabelAdrFactClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelAdrFactClient->Name = L"LabelAdrFactClient";
			this->LabelAdrFactClient->Size = System::Drawing::Size(151, 17);
			this->LabelAdrFactClient->TabIndex = 22;
			this->LabelAdrFactClient->Text = L"Adresse de facturation";
			// 
			// LabelAdrLivClient
			// 
			this->LabelAdrLivClient->AutoSize = true;
			this->LabelAdrLivClient->Location = System::Drawing::Point(184, 286);
			this->LabelAdrLivClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelAdrLivClient->Name = L"LabelAdrLivClient";
			this->LabelAdrLivClient->Size = System::Drawing::Size(136, 17);
			this->LabelAdrLivClient->TabIndex = 21;
			this->LabelAdrLivClient->Text = L"Adresse de livraison";
			// 
			// LabelNaissClient
			// 
			this->LabelNaissClient->AutoSize = true;
			this->LabelNaissClient->Location = System::Drawing::Point(187, 212);
			this->LabelNaissClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelNaissClient->Name = L"LabelNaissClient";
			this->LabelNaissClient->Size = System::Drawing::Size(126, 17);
			this->LabelNaissClient->TabIndex = 20;
			this->LabelNaissClient->Text = L"Date de naissance";
			// 
			// LabelPrenomClient
			// 
			this->LabelPrenomClient->AutoSize = true;
			this->LabelPrenomClient->Location = System::Drawing::Point(261, 137);
			this->LabelPrenomClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelPrenomClient->Name = L"LabelPrenomClient";
			this->LabelPrenomClient->Size = System::Drawing::Size(57, 17);
			this->LabelPrenomClient->TabIndex = 19;
			this->LabelPrenomClient->Text = L"Prénom";
			// 
			// LabelNomClient
			// 
			this->LabelNomClient->AutoSize = true;
			this->LabelNomClient->Location = System::Drawing::Point(280, 100);
			this->LabelNomClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelNomClient->Name = L"LabelNomClient";
			this->LabelNomClient->Size = System::Drawing::Size(37, 17);
			this->LabelNomClient->TabIndex = 18;
			this->LabelNomClient->Text = L"Nom";
			// 
			// TextBoxAdrAdrFactClient
			// 
			this->TextBoxAdrAdrFactClient->Location = System::Drawing::Point(327, 314);
			this->TextBoxAdrAdrFactClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxAdrAdrFactClient->Name = L"TextBoxAdrAdrFactClient";
			this->TextBoxAdrAdrFactClient->Size = System::Drawing::Size(248, 22);
			this->TextBoxAdrAdrFactClient->TabIndex = 15;
			// 
			// TextBoxVilleAdrFactClient
			// 
			this->TextBoxVilleAdrFactClient->Location = System::Drawing::Point(584, 314);
			this->TextBoxVilleAdrFactClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxVilleAdrFactClient->Name = L"TextBoxVilleAdrFactClient";
			this->TextBoxVilleAdrFactClient->Size = System::Drawing::Size(199, 22);
			this->TextBoxVilleAdrFactClient->TabIndex = 16;
			// 
			// TextBoxCpAdrFactClient
			// 
			this->TextBoxCpAdrFactClient->Location = System::Drawing::Point(792, 314);
			this->TextBoxCpAdrFactClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxCpAdrFactClient->Name = L"TextBoxCpAdrFactClient";
			this->TextBoxCpAdrFactClient->Size = System::Drawing::Size(92, 22);
			this->TextBoxCpAdrFactClient->TabIndex = 17;
			// 
			// TextBoxPrenomClient
			// 
			this->TextBoxPrenomClient->Location = System::Drawing::Point(327, 128);
			this->TextBoxPrenomClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxPrenomClient->Name = L"TextBoxPrenomClient";
			this->TextBoxPrenomClient->Size = System::Drawing::Size(199, 22);
			this->TextBoxPrenomClient->TabIndex = 10;
			// 
			// TextBoxNomClient
			// 
			this->TextBoxNomClient->Location = System::Drawing::Point(327, 96);
			this->TextBoxNomClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxNomClient->Name = L"TextBoxNomClient";
			this->TextBoxNomClient->Size = System::Drawing::Size(199, 22);
			this->TextBoxNomClient->TabIndex = 9;
			// 
			// TexBoxJourNaissClient
			// 
			this->TexBoxJourNaissClient->Location = System::Drawing::Point(327, 208);
			this->TexBoxJourNaissClient->Margin = System::Windows::Forms::Padding(4);
			this->TexBoxJourNaissClient->Name = L"TexBoxJourNaissClient";
			this->TexBoxJourNaissClient->Size = System::Drawing::Size(43, 22);
			this->TexBoxJourNaissClient->TabIndex = 11;
			// 
			// TextBoxCpAdrLivClient
			// 
			this->TextBoxCpAdrLivClient->Location = System::Drawing::Point(792, 282);
			this->TextBoxCpAdrLivClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxCpAdrLivClient->Name = L"TextBoxCpAdrLivClient";
			this->TextBoxCpAdrLivClient->Size = System::Drawing::Size(92, 22);
			this->TextBoxCpAdrLivClient->TabIndex = 14;
			// 
			// TextBoxAdrAdrLivClient
			// 
			this->TextBoxAdrAdrLivClient->Location = System::Drawing::Point(327, 282);
			this->TextBoxAdrAdrLivClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxAdrAdrLivClient->Name = L"TextBoxAdrAdrLivClient";
			this->TextBoxAdrAdrLivClient->Size = System::Drawing::Size(248, 22);
			this->TextBoxAdrAdrLivClient->TabIndex = 12;
			// 
			// TextBoxVilleAdrLivClient
			// 
			this->TextBoxVilleAdrLivClient->Location = System::Drawing::Point(584, 282);
			this->TextBoxVilleAdrLivClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxVilleAdrLivClient->Name = L"TextBoxVilleAdrLivClient";
			this->TextBoxVilleAdrLivClient->Size = System::Drawing::Size(199, 22);
			this->TextBoxVilleAdrLivClient->TabIndex = 13;
			// 
			// EcranAfficherClient
			// 
			this->EcranAfficherClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranAfficherClient->AutoSize = true;
			this->EcranAfficherClient->Controls->Add(this->DataGridAfficherClient);
			this->EcranAfficherClient->Controls->Add(this->TextBoxPrenomAfficherClient);
			this->EcranAfficherClient->Controls->Add(this->TextBoxNomAfficherClient);
			this->EcranAfficherClient->Controls->Add(this->LabelPrenomAfficherClient);
			this->EcranAfficherClient->Controls->Add(this->LabelNomAfficherClient);
			this->EcranAfficherClient->Controls->Add(this->buttonRechercherClient);
			this->EcranAfficherClient->Location = System::Drawing::Point(8, 41);
			this->EcranAfficherClient->Margin = System::Windows::Forms::Padding(4);
			this->EcranAfficherClient->Name = L"EcranAfficherClient";
			this->EcranAfficherClient->Size = System::Drawing::Size(1333, 738);
			this->EcranAfficherClient->TabIndex = 36;
			// 
			// DataGridAfficherClient
			// 
			this->DataGridAfficherClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridAfficherClient->Location = System::Drawing::Point(469, 89);
			this->DataGridAfficherClient->Margin = System::Windows::Forms::Padding(4);
			this->DataGridAfficherClient->Name = L"DataGridAfficherClient";
			this->DataGridAfficherClient->RowHeadersWidth = 51;
			this->DataGridAfficherClient->Size = System::Drawing::Size(667, 374);
			this->DataGridAfficherClient->TabIndex = 4;
			// 
			// TextBoxPrenomAfficherClient
			// 
			this->TextBoxPrenomAfficherClient->Location = System::Drawing::Point(168, 124);
			this->TextBoxPrenomAfficherClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxPrenomAfficherClient->Name = L"TextBoxPrenomAfficherClient";
			this->TextBoxPrenomAfficherClient->Size = System::Drawing::Size(132, 22);
			this->TextBoxPrenomAfficherClient->TabIndex = 3;
			// 
			// TextBoxNomAfficherClient
			// 
			this->TextBoxNomAfficherClient->Location = System::Drawing::Point(168, 85);
			this->TextBoxNomAfficherClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxNomAfficherClient->Name = L"TextBoxNomAfficherClient";
			this->TextBoxNomAfficherClient->Size = System::Drawing::Size(132, 22);
			this->TextBoxNomAfficherClient->TabIndex = 2;
			// 
			// LabelPrenomAfficherClient
			// 
			this->LabelPrenomAfficherClient->AutoSize = true;
			this->LabelPrenomAfficherClient->Location = System::Drawing::Point(107, 128);
			this->LabelPrenomAfficherClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelPrenomAfficherClient->Name = L"LabelPrenomAfficherClient";
			this->LabelPrenomAfficherClient->Size = System::Drawing::Size(57, 17);
			this->LabelPrenomAfficherClient->TabIndex = 1;
			this->LabelPrenomAfficherClient->Text = L"Prénom";
			// 
			// LabelNomAfficherClient
			// 
			this->LabelNomAfficherClient->AutoSize = true;
			this->LabelNomAfficherClient->Location = System::Drawing::Point(107, 89);
			this->LabelNomAfficherClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelNomAfficherClient->Name = L"LabelNomAfficherClient";
			this->LabelNomAfficherClient->Size = System::Drawing::Size(37, 17);
			this->LabelNomAfficherClient->TabIndex = 0;
			this->LabelNomAfficherClient->Text = L"Nom";
			// 
			// buttonRechercherClient
			// 
			this->buttonRechercherClient->Location = System::Drawing::Point(172, 188);
			this->buttonRechercherClient->Margin = System::Windows::Forms::Padding(4);
			this->buttonRechercherClient->Name = L"buttonRechercherClient";
			this->buttonRechercherClient->Size = System::Drawing::Size(127, 47);
			this->buttonRechercherClient->TabIndex = 26;
			this->buttonRechercherClient->Text = L"Rechercher";
			this->buttonRechercherClient->UseVisualStyleBackColor = true;
			this->buttonRechercherClient->Click += gcnew System::EventHandler(this, &MyForm::buttonRechercherClient_Click);
			// 
			// EcranAjoutPersonnel
			// 
			this->EcranAjoutPersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranAjoutPersonnel->AutoSize = true;
			this->EcranAjoutPersonnel->Controls->Add(this->buttonAjoutPersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxSuperieur);
			this->EcranAjoutPersonnel->Controls->Add(this->labelSuperieur);
			this->EcranAjoutPersonnel->Controls->Add(this->labelCpPersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->labelVillePersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->labelAdressePersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->labelAnneePersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->labelMoisPersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->labelJourPersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxAnnePersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxMoisPersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->labelAdresseGenPersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->labelHireDate);
			this->EcranAjoutPersonnel->Controls->Add(this->labelPrenomPersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->labelNomPerosonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxPrenomPersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxNomPersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxJourPersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxCpPersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxAdressePersonnel);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxVillePersonnel);
			this->EcranAjoutPersonnel->Location = System::Drawing::Point(0, 231);
			this->EcranAjoutPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->EcranAjoutPersonnel->Name = L"EcranAjoutPersonnel";
			this->EcranAjoutPersonnel->Size = System::Drawing::Size(1333, 738);
			this->EcranAjoutPersonnel->TabIndex = 37;
			// 
			// buttonAjoutPersonnel
			// 
			this->buttonAjoutPersonnel->Location = System::Drawing::Point(382, 392);
			this->buttonAjoutPersonnel->Name = L"buttonAjoutPersonnel";
			this->buttonAjoutPersonnel->Size = System::Drawing::Size(150, 23);
			this->buttonAjoutPersonnel->TabIndex = 32;
			this->buttonAjoutPersonnel->Text = L" Ajouter le personnel";
			this->buttonAjoutPersonnel->UseVisualStyleBackColor = true;
			// 
			// textBoxSuperieur
			// 
			this->textBoxSuperieur->Location = System::Drawing::Point(326, 163);
			this->textBoxSuperieur->Name = L"textBoxSuperieur";
			this->textBoxSuperieur->Size = System::Drawing::Size(201, 22);
			this->textBoxSuperieur->TabIndex = 31;
			// 
			// labelSuperieur
			// 
			this->labelSuperieur->AutoSize = true;
			this->labelSuperieur->Location = System::Drawing::Point(250, 168);
			this->labelSuperieur->Name = L"labelSuperieur";
			this->labelSuperieur->Size = System::Drawing::Size(70, 17);
			this->labelSuperieur->TabIndex = 28;
			this->labelSuperieur->Text = L"Superieur";
			// 
			// labelCpPersonnel
			// 
			this->labelCpPersonnel->AutoSize = true;
			this->labelCpPersonnel->Location = System::Drawing::Point(808, 270);
			this->labelCpPersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCpPersonnel->Name = L"labelCpPersonnel";
			this->labelCpPersonnel->Size = System::Drawing::Size(26, 17);
			this->labelCpPersonnel->TabIndex = 30;
			this->labelCpPersonnel->Text = L"CP";
			// 
			// labelVillePersonnel
			// 
			this->labelVillePersonnel->AutoSize = true;
			this->labelVillePersonnel->Location = System::Drawing::Point(631, 270);
			this->labelVillePersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelVillePersonnel->Name = L"labelVillePersonnel";
			this->labelVillePersonnel->Size = System::Drawing::Size(34, 17);
			this->labelVillePersonnel->TabIndex = 29;
			this->labelVillePersonnel->Text = L"Ville";
			// 
			// labelAdressePersonnel
			// 
			this->labelAdressePersonnel->AutoSize = true;
			this->labelAdressePersonnel->Location = System::Drawing::Point(379, 270);
			this->labelAdressePersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAdressePersonnel->Name = L"labelAdressePersonnel";
			this->labelAdressePersonnel->Size = System::Drawing::Size(60, 17);
			this->labelAdressePersonnel->TabIndex = 28;
			this->labelAdressePersonnel->Text = L"Adresse";
			// 
			// labelAnneePersonnel
			// 
			this->labelAnneePersonnel->AutoSize = true;
			this->labelAnneePersonnel->Location = System::Drawing::Point(440, 199);
			this->labelAnneePersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAnneePersonnel->Name = L"labelAnneePersonnel";
			this->labelAnneePersonnel->Size = System::Drawing::Size(49, 17);
			this->labelAnneePersonnel->TabIndex = 27;
			this->labelAnneePersonnel->Text = L"Année";
			// 
			// labelMoisPersonnel
			// 
			this->labelMoisPersonnel->AutoSize = true;
			this->labelMoisPersonnel->Location = System::Drawing::Point(384, 199);
			this->labelMoisPersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelMoisPersonnel->Name = L"labelMoisPersonnel";
			this->labelMoisPersonnel->Size = System::Drawing::Size(37, 17);
			this->labelMoisPersonnel->TabIndex = 26;
			this->labelMoisPersonnel->Text = L"Mois";
			// 
			// labelJourPersonnel
			// 
			this->labelJourPersonnel->AutoSize = true;
			this->labelJourPersonnel->Location = System::Drawing::Point(334, 198);
			this->labelJourPersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelJourPersonnel->Name = L"labelJourPersonnel";
			this->labelJourPersonnel->Size = System::Drawing::Size(36, 17);
			this->labelJourPersonnel->TabIndex = 25;
			this->labelJourPersonnel->Text = L"Jour";
			// 
			// textBoxAnnePersonnel
			// 
			this->textBoxAnnePersonnel->Location = System::Drawing::Point(431, 220);
			this->textBoxAnnePersonnel->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAnnePersonnel->Name = L"textBoxAnnePersonnel";
			this->textBoxAnnePersonnel->Size = System::Drawing::Size(68, 22);
			this->textBoxAnnePersonnel->TabIndex = 24;
			// 
			// textBoxMoisPersonnel
			// 
			this->textBoxMoisPersonnel->Location = System::Drawing::Point(378, 220);
			this->textBoxMoisPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->textBoxMoisPersonnel->Name = L"textBoxMoisPersonnel";
			this->textBoxMoisPersonnel->Size = System::Drawing::Size(43, 22);
			this->textBoxMoisPersonnel->TabIndex = 23;
			// 
			// labelAdresseGenPersonnel
			// 
			this->labelAdresseGenPersonnel->AutoSize = true;
			this->labelAdresseGenPersonnel->Location = System::Drawing::Point(184, 286);
			this->labelAdresseGenPersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAdresseGenPersonnel->Name = L"labelAdresseGenPersonnel";
			this->labelAdresseGenPersonnel->Size = System::Drawing::Size(64, 17);
			this->labelAdresseGenPersonnel->TabIndex = 21;
			this->labelAdresseGenPersonnel->Text = L"Adresse ";
			// 
			// labelHireDate
			// 
			this->labelHireDate->AutoSize = true;
			this->labelHireDate->Location = System::Drawing::Point(198, 222);
			this->labelHireDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelHireDate->Name = L"labelHireDate";
			this->labelHireDate->Size = System::Drawing::Size(119, 17);
			this->labelHireDate->TabIndex = 20;
			this->labelHireDate->Text = L"Date d\'embauche";
			// 
			// labelPrenomPersonnel
			// 
			this->labelPrenomPersonnel->AutoSize = true;
			this->labelPrenomPersonnel->Location = System::Drawing::Point(262, 125);
			this->labelPrenomPersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPrenomPersonnel->Name = L"labelPrenomPersonnel";
			this->labelPrenomPersonnel->Size = System::Drawing::Size(57, 17);
			this->labelPrenomPersonnel->TabIndex = 19;
			this->labelPrenomPersonnel->Text = L"Prénom";
			// 
			// labelNomPerosonnel
			// 
			this->labelNomPerosonnel->AutoSize = true;
			this->labelNomPerosonnel->Location = System::Drawing::Point(275, 78);
			this->labelNomPerosonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelNomPerosonnel->Name = L"labelNomPerosonnel";
			this->labelNomPerosonnel->Size = System::Drawing::Size(37, 17);
			this->labelNomPerosonnel->TabIndex = 18;
			this->labelNomPerosonnel->Text = L"Nom";
			// 
			// textBoxPrenomPersonnel
			// 
			this->textBoxPrenomPersonnel->Location = System::Drawing::Point(327, 120);
			this->textBoxPrenomPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrenomPersonnel->Name = L"textBoxPrenomPersonnel";
			this->textBoxPrenomPersonnel->Size = System::Drawing::Size(199, 22);
			this->textBoxPrenomPersonnel->TabIndex = 10;
			// 
			// textBoxNomPersonnel
			// 
			this->textBoxNomPersonnel->Location = System::Drawing::Point(327, 75);
			this->textBoxNomPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNomPersonnel->Name = L"textBoxNomPersonnel";
			this->textBoxNomPersonnel->Size = System::Drawing::Size(199, 22);
			this->textBoxNomPersonnel->TabIndex = 9;
			// 
			// textBoxJourPersonnel
			// 
			this->textBoxJourPersonnel->Location = System::Drawing::Point(327, 220);
			this->textBoxJourPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->textBoxJourPersonnel->Name = L"textBoxJourPersonnel";
			this->textBoxJourPersonnel->Size = System::Drawing::Size(43, 22);
			this->textBoxJourPersonnel->TabIndex = 11;
			// 
			// textBoxCpPersonnel
			// 
			this->textBoxCpPersonnel->Location = System::Drawing::Point(776, 293);
			this->textBoxCpPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCpPersonnel->Name = L"textBoxCpPersonnel";
			this->textBoxCpPersonnel->Size = System::Drawing::Size(92, 22);
			this->textBoxCpPersonnel->TabIndex = 14;
			// 
			// textBoxAdressePersonnel
			// 
			this->textBoxAdressePersonnel->Location = System::Drawing::Point(283, 293);
			this->textBoxAdressePersonnel->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdressePersonnel->Name = L"textBoxAdressePersonnel";
			this->textBoxAdressePersonnel->Size = System::Drawing::Size(248, 22);
			this->textBoxAdressePersonnel->TabIndex = 12;
			// 
			// textBoxVillePersonnel
			// 
			this->textBoxVillePersonnel->Location = System::Drawing::Point(552, 293);
			this->textBoxVillePersonnel->Margin = System::Windows::Forms::Padding(4);
			this->textBoxVillePersonnel->Name = L"textBoxVillePersonnel";
			this->textBoxVillePersonnel->Size = System::Drawing::Size(199, 22);
			this->textBoxVillePersonnel->TabIndex = 13;
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
			this->MenuOnglet->Location = System::Drawing::Point(0, 0);
			this->MenuOnglet->Name = L"MenuOnglet";
			this->MenuOnglet->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->MenuOnglet->Size = System::Drawing::Size(588, 38);
			this->MenuOnglet->TabIndex = 38;
			this->MenuOnglet->Text = L"menuStrip1";
			// 
			// OngletArticle
			// 
			this->OngletArticle->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->OngletAjoutArticle,
					this->OngletModifierArticle, this->OngletSupprimerArticle, this->OngletAfficherArticle
			});
			this->OngletArticle->Name = L"OngletArticle";
			this->OngletArticle->Size = System::Drawing::Size(66, 34);
			this->OngletArticle->Text = L"Article";
			// 
			// OngletAjoutArticle
			// 
			this->OngletAjoutArticle->Name = L"OngletAjoutArticle";
			this->OngletAjoutArticle->Size = System::Drawing::Size(161, 26);
			this->OngletAjoutArticle->Text = L"Ajouter";
			// 
			// OngletModifierArticle
			// 
			this->OngletModifierArticle->Name = L"OngletModifierArticle";
			this->OngletModifierArticle->Size = System::Drawing::Size(161, 26);
			this->OngletModifierArticle->Text = L"Modifier";
			// 
			// OngletSupprimerArticle
			// 
			this->OngletSupprimerArticle->Name = L"OngletSupprimerArticle";
			this->OngletSupprimerArticle->Size = System::Drawing::Size(161, 26);
			this->OngletSupprimerArticle->Text = L"Supprimer";
			// 
			// OngletAfficherArticle
			// 
			this->OngletAfficherArticle->Name = L"OngletAfficherArticle";
			this->OngletAfficherArticle->Size = System::Drawing::Size(161, 26);
			this->OngletAfficherArticle->Text = L"Afficher";
			// 
			// OngletPersonnel
			// 
			this->OngletPersonnel->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->OngletAjoutPersonnel,
					this->OngletModifierPersonnel, this->OngletSupprimerPersonnel, this->OngletAfficherPersonnel
			});
			this->OngletPersonnel->Name = L"OngletPersonnel";
			this->OngletPersonnel->Size = System::Drawing::Size(86, 34);
			this->OngletPersonnel->Text = L"Personnel";
			// 
			// OngletAjoutPersonnel
			// 
			this->OngletAjoutPersonnel->Name = L"OngletAjoutPersonnel";
			this->OngletAjoutPersonnel->Size = System::Drawing::Size(161, 26);
			this->OngletAjoutPersonnel->Text = L"Ajouter";
			// 
			// OngletModifierPersonnel
			// 
			this->OngletModifierPersonnel->Name = L"OngletModifierPersonnel";
			this->OngletModifierPersonnel->Size = System::Drawing::Size(161, 26);
			this->OngletModifierPersonnel->Text = L"Modifier";
			// 
			// OngletSupprimerPersonnel
			// 
			this->OngletSupprimerPersonnel->Name = L"OngletSupprimerPersonnel";
			this->OngletSupprimerPersonnel->Size = System::Drawing::Size(161, 26);
			this->OngletSupprimerPersonnel->Text = L"Supprimer";
			// 
			// OngletAfficherPersonnel
			// 
			this->OngletAfficherPersonnel->Name = L"OngletAfficherPersonnel";
			this->OngletAfficherPersonnel->Size = System::Drawing::Size(161, 26);
			this->OngletAfficherPersonnel->Text = L"Afficher";
			// 
			// OngletClient
			// 
			this->OngletClient->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->OngletAjoutClient,
					this->OngletModifierClient, this->OngletSupprimerClient, this->OngletAfficherClient
			});
			this->OngletClient->Name = L"OngletClient";
			this->OngletClient->Size = System::Drawing::Size(61, 34);
			this->OngletClient->Text = L"Client";
			// 
			// OngletAjoutClient
			// 
			this->OngletAjoutClient->Name = L"OngletAjoutClient";
			this->OngletAjoutClient->Size = System::Drawing::Size(161, 26);
			this->OngletAjoutClient->Text = L"Ajouter";
			// 
			// OngletModifierClient
			// 
			this->OngletModifierClient->Name = L"OngletModifierClient";
			this->OngletModifierClient->Size = System::Drawing::Size(161, 26);
			this->OngletModifierClient->Text = L"Modifier";
			// 
			// OngletSupprimerClient
			// 
			this->OngletSupprimerClient->Name = L"OngletSupprimerClient";
			this->OngletSupprimerClient->Size = System::Drawing::Size(161, 26);
			this->OngletSupprimerClient->Text = L"Supprimer";
			// 
			// OngletAfficherClient
			// 
			this->OngletAfficherClient->Name = L"OngletAfficherClient";
			this->OngletAfficherClient->Size = System::Drawing::Size(161, 26);
			this->OngletAfficherClient->Text = L"Afficher";
			// 
			// OngletCommande
			// 
			this->OngletCommande->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->OngletAjoutCommande,
					this->OngletModifierCommande, this->OngletSupprimerCommande, this->OngletAfficherCommande
			});
			this->OngletCommande->Name = L"OngletCommande";
			this->OngletCommande->Size = System::Drawing::Size(100, 34);
			this->OngletCommande->Text = L"Commande";
			// 
			// OngletAjoutCommande
			// 
			this->OngletAjoutCommande->Name = L"OngletAjoutCommande";
			this->OngletAjoutCommande->Size = System::Drawing::Size(161, 26);
			this->OngletAjoutCommande->Text = L"Ajouter";
			// 
			// OngletModifierCommande
			// 
			this->OngletModifierCommande->Name = L"OngletModifierCommande";
			this->OngletModifierCommande->Size = System::Drawing::Size(161, 26);
			this->OngletModifierCommande->Text = L"Modifier";
			// 
			// OngletSupprimerCommande
			// 
			this->OngletSupprimerCommande->Name = L"OngletSupprimerCommande";
			this->OngletSupprimerCommande->Size = System::Drawing::Size(161, 26);
			this->OngletSupprimerCommande->Text = L"Supprimer";
			// 
			// OngletAfficherCommande
			// 
			this->OngletAfficherCommande->Name = L"OngletAfficherCommande";
			this->OngletAfficherCommande->Size = System::Drawing::Size(161, 26);
			this->OngletAfficherCommande->Text = L"Afficher";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1312, 690);
			this->Controls->Add(this->EcranConnexion);
			this->Controls->Add(this->EcranIdle);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"Gestionnaire BDD";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->EcranConnexion->ResumeLayout(false);
			this->EcranConnexion->PerformLayout();
			this->EcranSupprimerClient->ResumeLayout(false);
			this->EcranSupprimerClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridSupprimerClient))->EndInit();
			this->EcranModifierClient->ResumeLayout(false);
			this->EcranModifierClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridModifierClient))->EndInit();
			this->EcranIdle->ResumeLayout(false);
			this->EcranIdle->PerformLayout();
			this->EcranAjoutClient->ResumeLayout(false);
			this->EcranAjoutClient->PerformLayout();
			this->EcranAfficherClient->ResumeLayout(false);
			this->EcranAfficherClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridAfficherClient))->EndInit();
			this->EcranAjoutPersonnel->ResumeLayout(false);
			this->EcranAjoutPersonnel->PerformLayout();
			this->MenuOnglet->ResumeLayout(false);
			this->MenuOnglet->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/// variables venant des classes 
		CL_CAD connexion;
		CLclient client1;
		CLpersonnel personnel1;
		/// 

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		connexion.setIP(textBox1->Text);
		connexion.setUtilisateur(textBox2->Text);
		connexion.setMDP(textBox3->Text);


		try {
			connexion.connect(textBox1->Text, textBox2->Text, textBox3->Text);
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Connexion échouée >:(");
		}

		if (connexion.testConnect() == true) {

			this->EcranIdle->BringToFront();
			MessageBox::Show("Connexion réussi");
			connexion.disconnect();
		}

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ButtonAjoutClient_Click(System::Object^ sender, System::EventArgs^ e) {

		client1.creer(TextBoxNomClient->Text, TextBoxPrenomClient->Text, TextBoxAnNaissClient->Text + "-" + TextBoxMoisNaissClient->Text + "-" + TexBoxJourNaissClient->Text, TextBoxAdrAdrLivClient->Text, TextBoxVilleAdrLivClient->Text, TextBoxCpAdrLivClient->Text, TextBoxAdrAdrFactClient->Text, TextBoxVilleAdrFactClient->Text, TextBoxCpAdrFactClient->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Client ajouté !");
	}
	private: System::Void ClickOngletAjoutClient(System::Object^ sender, System::EventArgs^ e) {
		this->EcranAjoutClient->BringToFront();
	}

	private: System::Void ClickOngletModifierClient(System::Object^ sender, System::EventArgs^ e) {
		this->EcranModifierClient->BringToFront();
	}
	private: System::Void ClickOngletAfficherClient(System::Object^ sender, System::EventArgs^ e) {
		this->EcranAfficherClient->BringToFront();
		DataGridAfficherClient->DataSource = client1.afficher( "", "", textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void ClickChercherModifierClient(System::Object^ sender, System::EventArgs^ e) {

		DataGridModifierClient->DataSource = client1.modifier(TextBoxNomModifierClient->Text, TextBoxPrenomModifierClient->Text, TextBoxAnNaissModifierClient->Text + "-" + TextBoxMoisNaissModifierClient->Text + "-" + TextBoxJourNaissModifierClient->Text, textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void buttonRechercherClient_Click(System::Object^ sender, System::EventArgs^ e) {
		DataGridAfficherClient->DataSource = client1.afficher(TextBoxNomAfficherClient->Text, TextBoxPrenomAfficherClient->Text, textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void ClickSupprimerSupprimerClient(System::Object^ sender, System::EventArgs^ e) {
		client1.supprimer(TextBoxSupprimerSupprimerClient->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Client supprimé !");
	}
	private: System::Void ClickOngletSupprimerClient(System::Object^ sender, System::EventArgs^ e) {
		this->EcranSupprimerClient->BringToFront();
	}
	private: System::Void ClickChercherSupprimerClient(System::Object^ sender, System::EventArgs^ e) {
		DataGridSupprimerClient->DataSource = client1.recherchSupprimer(TextBoxNomSupprimerClient->Text, TextBoxPrenomSupprimerClient->Text, textBox1->Text, textBox2->Text, textBox3->Text);
	}
    private: System::Void OngletAjoutPersonnel_Click_1(System::Object^ sender, System::EventArgs^ e) {
	    this->EcranAjoutPersonnel->BringToFront();
    }

	private: System::Void buttonAjoutPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		personnel1.creer(textBoxNomPersonnel->Text, textBoxPrenomPersonnel->Text, textBoxSuperieur->Text, textBoxAnnePersonnel->Text + "-" + textBoxMoisPersonnel->Text + "-" + textBoxJourPersonnel->Text, textBoxAdressePersonnel->Text, textBoxVillePersonnel->Text, textBoxCpPersonnel->Text, textBox1->Text, textBox2->Text, textBox3->Text);
	}


};
}
