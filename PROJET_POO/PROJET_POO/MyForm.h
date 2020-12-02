#pragma once
#include "CL_CAD.h"
#include "CLclient.h"

namespace PROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description r�sum�e de MyForm
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
		/// Nettoyage des ressources utilis�es.
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
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Panel^ EcranVide;
private: System::Windows::Forms::Panel^ EcranAfficherClient;
private: System::Windows::Forms::DataGridView^ DataGridAfficherClient;
private: System::Windows::Forms::TextBox^ TextBoxPrenomAfficherClient;
private: System::Windows::Forms::TextBox^ TextBoxNomAfficherClient;
private: System::Windows::Forms::Label^ LabelPrenomAfficherClient;
private: System::Windows::Forms::Label^ LabelNomAfficherClient;
private: System::Windows::Forms::Button^ buttonRechercherClient;
private: System::Windows::Forms::BindingSource^ bindingSource1;
private: System::ComponentModel::IContainer^ components;
private: System::Windows::Forms::DataGridView^ DataGridModifierClient;

















































	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
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
			this->EcranIdle = (gcnew System::Windows::Forms::Panel());
			this->EcranVide = (gcnew System::Windows::Forms::Panel());
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
			this->EcranModifierClient = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->EcranAfficherClient = (gcnew System::Windows::Forms::Panel());
			this->LabelNomAfficherClient = (gcnew System::Windows::Forms::Label());
			this->LabelPrenomAfficherClient = (gcnew System::Windows::Forms::Label());
			this->TextBoxNomAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxPrenomAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->DataGridAfficherClient = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->EcranConnexion->SuspendLayout();
			this->EcranIdle->SuspendLayout();
			this->MenuOnglet->SuspendLayout();
			this->EcranAjoutClient->SuspendLayout();
			this->EcranModifierClient->SuspendLayout();
			this->EcranAfficherClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridAfficherClient))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
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
			this->textBox1->Location = System::Drawing::Point(287, 229);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(199, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(287, 273);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(199, 22);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(287, 314);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(199, 22);
			this->textBox3->TabIndex = 5;
			// 
			// LabelUserConnexion
			// 
			this->LabelUserConnexion->AutoSize = true;
			this->LabelUserConnexion->Location = System::Drawing::Point(307, 340);
			this->LabelUserConnexion->Name = L"LabelUserConnexion";
			this->LabelUserConnexion->Size = System::Drawing::Size(71, 17);
			this->LabelUserConnexion->TabIndex = 6;
			this->LabelUserConnexion->Text = L"Utilisateur";
			// 
			// LabelMdpConnexion
			// 
			this->LabelMdpConnexion->AutoSize = true;
			this->LabelMdpConnexion->Location = System::Drawing::Point(283, 390);
			this->LabelMdpConnexion->Name = L"LabelMdpConnexion";
			this->LabelMdpConnexion->Size = System::Drawing::Size(93, 17);
			this->LabelMdpConnexion->TabIndex = 7;
			this->LabelMdpConnexion->Text = L"Mot de passe";
			// 
			// LabelIpConnexion
			// 
			this->LabelIpConnexion->AutoSize = true;
			this->LabelIpConnexion->Location = System::Drawing::Point(355, 286);
			this->LabelIpConnexion->Name = L"LabelIpConnexion";
			this->LabelIpConnexion->Size = System::Drawing::Size(20, 17);
			this->LabelIpConnexion->TabIndex = 1;
			this->LabelIpConnexion->Text = L"IP";
			// 
			// ButtonConnexion
			// 
			this->ButtonConnexion->Location = System::Drawing::Point(313, 356);
			this->ButtonConnexion->Margin = System::Windows::Forms::Padding(2);
			this->ButtonConnexion->Name = L"ButtonConnexion";
			this->ButtonConnexion->Size = System::Drawing::Size(112, 46);
			this->ButtonConnexion->TabIndex = 2;
			this->ButtonConnexion->Text = L"connexion";
			this->ButtonConnexion->UseVisualStyleBackColor = true;
			this->ButtonConnexion->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(613, 318);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(588, 326);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// EcranConnexion
			// 
			this->EcranConnexion->AutoSize = true;
			this->EcranConnexion->Controls->Add(this->EcranAfficherClient);
			this->EcranConnexion->Controls->Add(this->textBox1);
			this->EcranConnexion->Controls->Add(this->LabelIpConnexion);
			this->EcranConnexion->Controls->Add(this->LabelUserConnexion);
			this->EcranConnexion->Controls->Add(this->LabelMdpConnexion);
			this->EcranConnexion->Controls->Add(this->textBox3);
			this->EcranConnexion->Controls->Add(this->textBox2);
			this->EcranConnexion->Controls->Add(this->ButtonConnexion);
			this->EcranConnexion->Controls->Add(this->pictureBox1);
			this->EcranConnexion->Location = System::Drawing::Point(-4, 0);
			this->EcranConnexion->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->EcranConnexion->Name = L"EcranConnexion";
			this->EcranConnexion->Size = System::Drawing::Size(1333, 738);
			this->EcranConnexion->TabIndex = 18;
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
			this->EcranModifierClient->Location = System::Drawing::Point(0, 27);
			this->EcranModifierClient->Name = L"EcranModifierClient";
			this->EcranModifierClient->Size = System::Drawing::Size(989, 535);
			this->EcranModifierClient->TabIndex = 34;
			// 
			// DataGridModifierClient
			// 
			this->DataGridModifierClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridModifierClient->Location = System::Drawing::Point(384, 78);
			this->DataGridModifierClient->Name = L"DataGridModifierClient";
			this->DataGridModifierClient->Size = System::Drawing::Size(577, 261);
			this->DataGridModifierClient->TabIndex = 32;
			// 
			// ButtonModifierClient
			// 
			this->ButtonModifierClient->Location = System::Drawing::Point(161, 239);
			this->ButtonModifierClient->Name = L"ButtonModifierClient";
			this->ButtonModifierClient->Size = System::Drawing::Size(169, 23);
			this->ButtonModifierClient->TabIndex = 31;
			this->ButtonModifierClient->Text = L"Chercher le client à modifier";
			this->ButtonModifierClient->UseVisualStyleBackColor = true;
			this->ButtonModifierClient->Click += gcnew System::EventHandler(this, &MyForm::ClickChercherModifierClient);
			// 
			// LabelAnModifierClient
			// 
			this->LabelAnModifierClient->AutoSize = true;
			this->LabelAnModifierClient->Location = System::Drawing::Point(246, 150);
			this->LabelAnModifierClient->Name = L"LabelAnModifierClient";
			this->LabelAnModifierClient->Size = System::Drawing::Size(38, 13);
			this->LabelAnModifierClient->TabIndex = 27;
			this->LabelAnModifierClient->Text = L"Année";
			// 
			// LabelMoisModifierClient
			// 
			this->LabelMoisModifierClient->AutoSize = true;
			this->LabelMoisModifierClient->Location = System::Drawing::Point(207, 150);
			this->LabelMoisModifierClient->Name = L"LabelMoisModifierClient";
			this->LabelMoisModifierClient->Size = System::Drawing::Size(29, 13);
			this->LabelMoisModifierClient->TabIndex = 26;
			this->LabelMoisModifierClient->Text = L"Mois";
			// 
			// LabelJourModifierClient
			// 
			this->LabelJourModifierClient->AutoSize = true;
			this->LabelJourModifierClient->Location = System::Drawing::Point(168, 150);
			this->LabelJourModifierClient->Name = L"LabelJourModifierClient";
			this->LabelJourModifierClient->Size = System::Drawing::Size(27, 13);
			this->LabelJourModifierClient->TabIndex = 25;
			this->LabelJourModifierClient->Text = L"Jour";
			// 
			// TextBoxAnNaissModifierClient
			// 
			this->TextBoxAnNaissModifierClient->Location = System::Drawing::Point(249, 169);
			this->TextBoxAnNaissModifierClient->Name = L"TextBoxAnNaissModifierClient";
			this->TextBoxAnNaissModifierClient->Size = System::Drawing::Size(52, 20);
			this->TextBoxAnNaissModifierClient->TabIndex = 24;
			// 
			// TextBoxMoisNaissModifierClient
			// 
			this->TextBoxMoisNaissModifierClient->Location = System::Drawing::Point(210, 169);
			this->TextBoxMoisNaissModifierClient->Name = L"TextBoxMoisNaissModifierClient";
			this->TextBoxMoisNaissModifierClient->Size = System::Drawing::Size(33, 20);
			this->TextBoxMoisNaissModifierClient->TabIndex = 23;
			// 
			// LabelNaissModifierClient
			// 
			this->LabelNaissModifierClient->AutoSize = true;
			this->LabelNaissModifierClient->Location = System::Drawing::Point(66, 172);
			this->LabelNaissModifierClient->Name = L"LabelNaissModifierClient";
			this->LabelNaissModifierClient->Size = System::Drawing::Size(96, 13);
			this->LabelNaissModifierClient->TabIndex = 20;
			this->LabelNaissModifierClient->Text = L"Date de naissance";
			// 
			// LabelPrenomModifierClient
			// 
			this->LabelPrenomModifierClient->AutoSize = true;
			this->LabelPrenomModifierClient->Location = System::Drawing::Point(122, 111);
			this->LabelPrenomModifierClient->Name = L"LabelPrenomModifierClient";
			this->LabelPrenomModifierClient->Size = System::Drawing::Size(43, 13);
			this->LabelPrenomModifierClient->TabIndex = 19;
			this->LabelPrenomModifierClient->Text = L"Prénom";
			// 
			// LabelNomModifierClient
			// 
			this->LabelNomModifierClient->AutoSize = true;
			this->LabelNomModifierClient->Location = System::Drawing::Point(136, 81);
			this->LabelNomModifierClient->Name = L"LabelNomModifierClient";
			this->LabelNomModifierClient->Size = System::Drawing::Size(29, 13);
			this->LabelNomModifierClient->TabIndex = 18;
			this->LabelNomModifierClient->Text = L"Nom";
			// 
			// TextBoxPrenomModifierClient
			// 
			this->TextBoxPrenomModifierClient->Location = System::Drawing::Point(171, 104);
			this->TextBoxPrenomModifierClient->Name = L"TextBoxPrenomModifierClient";
			this->TextBoxPrenomModifierClient->Size = System::Drawing::Size(150, 20);
			this->TextBoxPrenomModifierClient->TabIndex = 10;
			// 
			// TextBoxNomModifierClient
			// 
			this->TextBoxNomModifierClient->Location = System::Drawing::Point(171, 78);
			this->TextBoxNomModifierClient->Name = L"TextBoxNomModifierClient";
			this->TextBoxNomModifierClient->Size = System::Drawing::Size(150, 20);
			this->TextBoxNomModifierClient->TabIndex = 9;
			// 
			// TextBoxJourNaissModifierClient
			// 
			this->TextBoxJourNaissModifierClient->Location = System::Drawing::Point(171, 169);
			this->TextBoxJourNaissModifierClient->Name = L"TextBoxJourNaissModifierClient";
			this->TextBoxJourNaissModifierClient->Size = System::Drawing::Size(33, 20);
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
			this->EcranIdle->Location = System::Drawing::Point(0, 0);
			this->EcranIdle->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->EcranIdle->Name = L"EcranIdle";
			this->EcranIdle->Size = System::Drawing::Size(1333, 738);
			this->EcranIdle->TabIndex = 24;
			// 
			// EcranVide
			// 
			this->EcranVide->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranVide->AutoSize = true;
			this->EcranVide->Location = System::Drawing::Point(0, 33);
			this->EcranVide->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->EcranVide->Name = L"EcranVide";
			this->EcranVide->Size = System::Drawing::Size(1333, 738);
			this->EcranVide->TabIndex = 35;
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
			this->MenuOnglet->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->MenuOnglet->Size = System::Drawing::Size(382, 24);
			this->MenuOnglet->TabIndex = 33;
			this->MenuOnglet->Text = L"menuStrip1";
			// 
			// OngletArticle
			// 
			this->OngletArticle->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->OngletAjoutArticle,
					this->OngletModifierArticle, this->OngletSupprimerArticle, this->OngletAfficherArticle
			});
			this->OngletArticle->Name = L"OngletArticle";
			this->OngletArticle->Size = System::Drawing::Size(66, 24);
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
			this->OngletPersonnel->Size = System::Drawing::Size(86, 24);
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
			this->OngletClient->Size = System::Drawing::Size(61, 24);
			this->OngletClient->Text = L"Client";
			// 
			// OngletAjoutClient
			// 
			this->OngletAjoutClient->Name = L"OngletAjoutClient";
			this->OngletAjoutClient->Size = System::Drawing::Size(161, 26);
			this->OngletAjoutClient->Text = L"Ajouter";
			this->OngletAjoutClient->Click += gcnew System::EventHandler(this, &MyForm::ClickOngletAjoutClient);
			// 
			// OngletModifierClient
			// 
			this->OngletModifierClient->Name = L"OngletModifierClient";
			this->OngletModifierClient->Size = System::Drawing::Size(161, 26);
			this->OngletModifierClient->Text = L"Modifier";
			this->OngletModifierClient->Click += gcnew System::EventHandler(this, &MyForm::ClickOngletModifierClient);
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
			this->OngletAfficherClient->Size = System::Drawing::Size(180, 22);
			this->OngletAfficherClient->Text = L"Afficher";
			this->OngletAfficherClient->Click += gcnew System::EventHandler(this, &MyForm::ClickOngletAfficherClient);
			// 
			// OngletCommande
			// 
			this->OngletCommande->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->OngletAjoutCommande,
					this->OngletModifierCommande, this->OngletSupprimerCommande, this->OngletAfficherCommande
			});
			this->OngletCommande->Name = L"OngletCommande";
			this->OngletCommande->Size = System::Drawing::Size(100, 24);
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
			this->EcranAjoutClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->EcranAjoutClient->Name = L"EcranAjoutClient";
			this->EcranAjoutClient->Size = System::Drawing::Size(1319, 658);
			this->EcranAjoutClient->TabIndex = 26;
			// 
			// ButtonAjoutClient
			// 
			this->ButtonAjoutClient->Location = System::Drawing::Point(369, 368);
			this->ButtonAjoutClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->LabelAnNaissClient->Text = L"Ann�e";
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
			this->TextBoxAnNaissClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TextBoxAnNaissClient->Name = L"TextBoxAnNaissClient";
			this->TextBoxAnNaissClient->Size = System::Drawing::Size(68, 22);
			this->TextBoxAnNaissClient->TabIndex = 24;
			// 
			// TextBoxMoisNaissClient
			// 
			this->TextBoxMoisNaissClient->Location = System::Drawing::Point(379, 208);
			this->TextBoxMoisNaissClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->LabelPrenomClient->Text = L"Pr�nom";
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
			this->TextBoxAdrAdrFactClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TextBoxAdrAdrFactClient->Name = L"TextBoxAdrAdrFactClient";
			this->TextBoxAdrAdrFactClient->Size = System::Drawing::Size(248, 22);
			this->TextBoxAdrAdrFactClient->TabIndex = 15;
			// 
			// TextBoxVilleAdrFactClient
			// 
			this->TextBoxVilleAdrFactClient->Location = System::Drawing::Point(584, 314);
			this->TextBoxVilleAdrFactClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TextBoxVilleAdrFactClient->Name = L"TextBoxVilleAdrFactClient";
			this->TextBoxVilleAdrFactClient->Size = System::Drawing::Size(199, 22);
			this->TextBoxVilleAdrFactClient->TabIndex = 16;
			// 
			// TextBoxCpAdrFactClient
			// 
			this->TextBoxCpAdrFactClient->Location = System::Drawing::Point(792, 314);
			this->TextBoxCpAdrFactClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TextBoxCpAdrFactClient->Name = L"TextBoxCpAdrFactClient";
			this->TextBoxCpAdrFactClient->Size = System::Drawing::Size(92, 22);
			this->TextBoxCpAdrFactClient->TabIndex = 17;
			// 
			// TextBoxPrenomClient
			// 
			this->TextBoxPrenomClient->Location = System::Drawing::Point(327, 128);
			this->TextBoxPrenomClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TextBoxPrenomClient->Name = L"TextBoxPrenomClient";
			this->TextBoxPrenomClient->Size = System::Drawing::Size(199, 22);
			this->TextBoxPrenomClient->TabIndex = 10;
			// 
			// TextBoxNomClient
			// 
			this->TextBoxNomClient->Location = System::Drawing::Point(327, 96);
			this->TextBoxNomClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TextBoxNomClient->Name = L"TextBoxNomClient";
			this->TextBoxNomClient->Size = System::Drawing::Size(199, 22);
			this->TextBoxNomClient->TabIndex = 9;
			// 
			// TexBoxJourNaissClient
			// 
			this->TexBoxJourNaissClient->Location = System::Drawing::Point(327, 208);
			this->TexBoxJourNaissClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TexBoxJourNaissClient->Name = L"TexBoxJourNaissClient";
			this->TexBoxJourNaissClient->Size = System::Drawing::Size(43, 22);
			this->TexBoxJourNaissClient->TabIndex = 11;
			// 
			// TextBoxCpAdrLivClient
			// 
			this->TextBoxCpAdrLivClient->Location = System::Drawing::Point(792, 282);
			this->TextBoxCpAdrLivClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TextBoxCpAdrLivClient->Name = L"TextBoxCpAdrLivClient";
			this->TextBoxCpAdrLivClient->Size = System::Drawing::Size(92, 22);
			this->TextBoxCpAdrLivClient->TabIndex = 14;
			// 
			// TextBoxAdrAdrLivClient
			// 
			this->TextBoxAdrAdrLivClient->Location = System::Drawing::Point(327, 282);
			this->TextBoxAdrAdrLivClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TextBoxAdrAdrLivClient->Name = L"TextBoxAdrAdrLivClient";
			this->TextBoxAdrAdrLivClient->Size = System::Drawing::Size(248, 22);
			this->TextBoxAdrAdrLivClient->TabIndex = 12;
			// 
			// TextBoxVilleAdrLivClient
			// 
			this->TextBoxVilleAdrLivClient->Location = System::Drawing::Point(584, 282);
			this->TextBoxVilleAdrLivClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TextBoxVilleAdrLivClient->Name = L"TextBoxVilleAdrLivClient";
			this->TextBoxVilleAdrLivClient->Size = System::Drawing::Size(199, 22);
			this->TextBoxVilleAdrLivClient->TabIndex = 13;
			// 
			// EcranModifierClient
			// 
			this->EcranModifierClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranModifierClient->AutoSize = true;
			this->EcranModifierClient->Controls->Add(this->button1);
			this->EcranModifierClient->Controls->Add(this->label1);
			this->EcranModifierClient->Controls->Add(this->label2);
			this->EcranModifierClient->Controls->Add(this->label3);
			this->EcranModifierClient->Controls->Add(this->label4);
			this->EcranModifierClient->Controls->Add(this->label5);
			this->EcranModifierClient->Controls->Add(this->label6);
			this->EcranModifierClient->Controls->Add(this->textBox4);
			this->EcranModifierClient->Controls->Add(this->textBox5);
			this->EcranModifierClient->Controls->Add(this->label7);
			this->EcranModifierClient->Controls->Add(this->label8);
			this->EcranModifierClient->Controls->Add(this->label9);
			this->EcranModifierClient->Controls->Add(this->label10);
			this->EcranModifierClient->Controls->Add(this->label11);
			this->EcranModifierClient->Controls->Add(this->textBox6);
			this->EcranModifierClient->Controls->Add(this->textBox7);
			this->EcranModifierClient->Controls->Add(this->textBox8);
			this->EcranModifierClient->Controls->Add(this->textBox9);
			this->EcranModifierClient->Controls->Add(this->textBox10);
			this->EcranModifierClient->Controls->Add(this->textBox11);
			this->EcranModifierClient->Controls->Add(this->textBox12);
			this->EcranModifierClient->Controls->Add(this->textBox13);
			this->EcranModifierClient->Controls->Add(this->textBox14);
			this->EcranModifierClient->Location = System::Drawing::Point(0, 27);
			this->EcranModifierClient->Name = L"EcranModifierClient";
			this->EcranModifierClient->Size = System::Drawing::Size(989, 535);
			this->EcranModifierClient->TabIndex = 34;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(277, 299);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 23);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Modifier le client";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(621, 211);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 30;
			this->label1->Text = L"CP";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(495, 211);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Ville";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(313, 211);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Adresse";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(320, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Ann�e";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(281, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Mois";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(242, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 13);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Jour";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(323, 169);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(52, 20);
			this->textBox4->TabIndex = 24;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(284, 169);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(33, 20);
			this->textBox5->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(126, 258);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Adresse de facturation";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(138, 232);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(101, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Adresse de livraison";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(140, 172);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Date de naissance";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(196, 111);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Pr�nom";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(210, 81);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(29, 13);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Nom";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(245, 255);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(187, 20);
			this->textBox6->TabIndex = 15;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(438, 255);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(150, 20);
			this->textBox7->TabIndex = 16;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(594, 255);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(70, 20);
			this->textBox8->TabIndex = 17;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(245, 104);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(150, 20);
			this->textBox9->TabIndex = 10;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(245, 78);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(150, 20);
			this->textBox10->TabIndex = 9;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(245, 169);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(33, 20);
			this->textBox11->TabIndex = 11;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(594, 229);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(70, 20);
			this->textBox12->TabIndex = 14;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(245, 229);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(187, 20);
			this->textBox13->TabIndex = 12;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(438, 229);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(150, 20);
			this->textBox14->TabIndex = 13;
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
			this->EcranAfficherClient->Controls->Add(this->buttonRechercherClient);
			this->EcranAfficherClient->Controls->Add(this->LabelNomAfficherClient);
			this->EcranAfficherClient->Location = System::Drawing::Point(8, 41);
			this->EcranAfficherClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->EcranAfficherClient->Name = L"EcranAfficherClient";
			this->EcranAfficherClient->Size = System::Drawing::Size(1319, 658);
			this->EcranAfficherClient->TabIndex = 36;
			// 
			// LabelNomAfficherClient
			// 
			this->LabelNomAfficherClient->AutoSize = true;
			this->LabelNomAfficherClient->Location = System::Drawing::Point(80, 72);
			this->LabelNomAfficherClient->Name = L"LabelNomAfficherClient";
			this->LabelNomAfficherClient->Size = System::Drawing::Size(29, 13);
			this->LabelNomAfficherClient->TabIndex = 0;
			this->LabelNomAfficherClient->Text = L"Nom";
			// 
			// LabelPrenomAfficherClient
			// 
			this->LabelPrenomAfficherClient->AutoSize = true;
			this->LabelPrenomAfficherClient->Location = System::Drawing::Point(80, 104);
			this->LabelPrenomAfficherClient->Name = L"LabelPrenomAfficherClient";
			this->LabelPrenomAfficherClient->Size = System::Drawing::Size(43, 13);
			this->LabelPrenomAfficherClient->TabIndex = 1;
			this->LabelPrenomAfficherClient->Text = L"Pr�nom";
			// 
			// TextBoxNomAfficherClient
			// 
			this->TextBoxNomAfficherClient->Location = System::Drawing::Point(126, 69);
			this->TextBoxNomAfficherClient->Name = L"TextBoxNomAfficherClient";
			this->TextBoxNomAfficherClient->Size = System::Drawing::Size(100, 20);
			this->TextBoxNomAfficherClient->TabIndex = 2;
			// 
			// TextBoxPrenomAfficherClient
			// 
			this->TextBoxPrenomAfficherClient->Location = System::Drawing::Point(126, 101);
			this->TextBoxPrenomAfficherClient->Name = L"TextBoxPrenomAfficherClient";
			this->TextBoxPrenomAfficherClient->Size = System::Drawing::Size(100, 20);
			this->TextBoxPrenomAfficherClient->TabIndex = 3;
			// 
			// DataGridAfficherClient
			// 
			this->DataGridAfficherClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridAfficherClient->Location = System::Drawing::Point(352, 72);
			this->DataGridAfficherClient->Name = L"DataGridAfficherClient";
			this->DataGridAfficherClient->Size = System::Drawing::Size(500, 304);
			this->DataGridAfficherClient->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1312, 690);
			this->Controls->Add(this->EcranConnexion);
			this->Controls->Add(this->EcranIdle);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"Gestionnaire BDD";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->EcranConnexion->ResumeLayout(false);
			this->EcranConnexion->PerformLayout();
			this->EcranIdle->ResumeLayout(false);
			this->EcranIdle->PerformLayout();
			this->MenuOnglet->ResumeLayout(false);
			this->MenuOnglet->PerformLayout();
			this->EcranAjoutClient->ResumeLayout(false);
			this->EcranAjoutClient->PerformLayout();
			this->EcranModifierClient->ResumeLayout(false);
			this->EcranModifierClient->PerformLayout();
			this->EcranAfficherClient->ResumeLayout(false);
			this->EcranAfficherClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridAfficherClient))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	/// variables venant des classes 
	CL_CAD connexion;
	CLclient client1;
	/// 
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		connexion.setIP(textBox1->Text);
		connexion.setUtilisateur(textBox2->Text);
		connexion.setMDP(textBox3->Text);
		

		try {
			connexion.connect(textBox1->Text, textBox2->Text, textBox3->Text);
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Connexion �chou�e >:(");
		}

		if (connexion.testConnect() == true) {

			this->EcranIdle->BringToFront();
			MessageBox::Show("Connexion r�ussi");
			connexion.disconnect();
		}

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ButtonAjoutClient_Click(System::Object^ sender, System::EventArgs^ e) {

		client1.creer(TextBoxNomClient->Text, TextBoxPrenomClient->Text, TextBoxAnNaissClient->Text + "-" + TextBoxMoisNaissClient->Text + "-" + TexBoxJourNaissClient->Text, TextBoxAdrAdrLivClient->Text, TextBoxAdrAdrLivClient->Text,TextBoxCpAdrLivClient->Text, TextBoxAdrAdrFactClient->Text, TextBoxAdrAdrFactClient->Text, TextBoxCpAdrFactClient->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Client ajout� !");
}
	private: System::Void ClickOngletAjoutClient(System::Object^ sender, System::EventArgs^ e) {
		this->EcranAjoutClient->BringToFront();
	}

	private: System::Void ClickOngletModifierClient(System::Object^ sender, System::EventArgs^ e) {
		this->EcranModifierClient->BringToFront();
	}
	private: System::Void ClickOngletAfficherClient(System::Object^ sender, System::EventArgs^ e) {
		this->EcranAfficherClient->BringToFront();
	}
};
}
