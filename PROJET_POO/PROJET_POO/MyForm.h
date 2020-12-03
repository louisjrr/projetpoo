#pragma once
#include "CL_CAD.h"
#include "CLclient.h"
#include "CLpersonnel.h"
#include "CLarticle.h"

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


















	private: System::Windows::Forms::Label^ LabelPrenomModifierClient;

	private: System::Windows::Forms::Label^ LabelNomModifierClient;
	private: System::Windows::Forms::TextBox^ TextBoxPrenomModifierClient;






	private: System::Windows::Forms::TextBox^ TextBoxNomModifierClient;






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
private: System::Windows::Forms::Button^ buttonAjoutPersonnel1;
private: System::Windows::Forms::TextBox^ textBoxSuperieur1;
private: System::Windows::Forms::Label^ labelSuperieur1;
private: System::Windows::Forms::Label^ labelCpPersonnel1;
private: System::Windows::Forms::Label^ labelVillePersonnel1;
private: System::Windows::Forms::Label^ labelAdressePersonnel1;
private: System::Windows::Forms::Label^ labelAnneePersonnel1;
private: System::Windows::Forms::Label^ labelMoisPersonnel1;
private: System::Windows::Forms::Label^ labelJourPersonnel1;
private: System::Windows::Forms::TextBox^ textBoxAnnePersonnel1;
private: System::Windows::Forms::TextBox^ textBoxMoisPersonnel1;
private: System::Windows::Forms::Label^ labelAdresseGenPersonnel1;
private: System::Windows::Forms::Label^ labelHireDate1;
private: System::Windows::Forms::Label^ labelPrenomPersonnel1;
private: System::Windows::Forms::Label^ labelNomPerosonnel1;
private: System::Windows::Forms::TextBox^ textBoxPrenomPersonnel1;
private: System::Windows::Forms::TextBox^ textBoxNomPersonnel1;
private: System::Windows::Forms::TextBox^ textBoxJourPersonnel1;
private: System::Windows::Forms::TextBox^ textBoxCpPersonnel1;
private: System::Windows::Forms::TextBox^ textBoxAdressePersonnel1;
private: System::Windows::Forms::TextBox^ textBoxVillePersonnel1;





















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





///*
private: System::Windows::Forms::TextBox^ textBoxAdressePersonnel;
private: System::Windows::Forms::TextBox^ textBoxVillePersonnel;
private: System::Windows::Forms::Label^ labelSuperieur;
private: System::Windows::Forms::TextBox^ textBoxSuperieur;
private: System::Windows::Forms::Button^ buttonAjoutPersonnel;
//*/
private: System::Windows::Forms::Label^ LabelModifAnModificationClient;
private: System::Windows::Forms::Label^ LabelModifMoisModifiacationClient;
private: System::Windows::Forms::Label^ LabelModifJourModificationClient;
private: System::Windows::Forms::TextBox^ TextBoxModifAnModificationClient;
private: System::Windows::Forms::TextBox^ TextBoxModifMoisModificationClient;
private: System::Windows::Forms::TextBox^ TextBoxModifJourModificationClient;
private: System::Windows::Forms::TextBox^ TextBoxModifPrenomModificationClient;
private: System::Windows::Forms::Label^ LabelModifPrenomModificationClient;
private: System::Windows::Forms::TextBox^ TextBoxModifNomModificationClient;
private: System::Windows::Forms::Label^ LabelModifNomModificationClient;
private: System::Windows::Forms::Button^ ButtonModifADRFacModificationClient;
private: System::Windows::Forms::Button^ ButtonModifADRLivModificationClient;
private: System::Windows::Forms::Button^ ButtonModifNaissModificationClient;
private: System::Windows::Forms::Button^ ButtonModifNomModificationClient;

private: System::Windows::Forms::TextBox^ TextBoxIDModificationClient;
private: System::Windows::Forms::Label^ LabelIDModificationClient;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Button^ ButtonAfficherModificationClient;
private: System::Windows::Forms::Panel^ EcranAfficherPersonnel;
private: System::Windows::Forms::DataGridView^ dataGridViewAfficherPersonnel;
private: System::Windows::Forms::Panel^ EcranAjoutArticle;
private: System::Windows::Forms::Button^ ButtonAjoutArticle;

private: System::Windows::Forms::TextBox^ textBoxPrenomAfficherPersonnel;
private: System::Windows::Forms::Label^ PrixHTC;

private: System::Windows::Forms::TextBox^ textBoxNomAfficherPersonnel;
private: System::Windows::Forms::Label^ LabelCategAjoutArticle;

private: System::Windows::Forms::Label^ labelPrenomAfficherPersonnel;
private: System::Windows::Forms::Label^ LabelNomAjoutArticle;
private: System::Windows::Forms::TextBox^ TextBoxStockAjoutArticle;

private: System::Windows::Forms::Label^ labelNomAfficherPersonnel;
private: System::Windows::Forms::Button^ buttonRechercherAfficherPersonnel;


private: System::Windows::Forms::TextBox^ TextBoxNomAjoutArticle;
private: System::Windows::Forms::TextBox^ TextBoxCategAjoutArticle;
private: System::Windows::Forms::TextBox^ TextBoxPrixAjoutArticle;
private: System::Windows::Forms::TextBox^ TextBoxSeuilAjoutArticle;



private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ TextBoxTVAAjoutArticle;
private: System::Windows::Forms::DataGridView^ DataGridArticleAjoutArticle;

private: System::Windows::Forms::Button^ ButtonAjoutCategAjoutClient;
private: System::Windows::Forms::TextBox^ TextBoxAjoutCategAjoutArticle;

































































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
			this->EcranAjoutArticle = (gcnew System::Windows::Forms::Panel());
			this->DataGridArticleAjoutArticle = (gcnew System::Windows::Forms::DataGridView());
			this->ButtonAjoutCategAjoutClient = (gcnew System::Windows::Forms::Button());
			this->TextBoxAjoutCategAjoutArticle = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TextBoxTVAAjoutArticle = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TextBoxPrixAjoutArticle = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxSeuilAjoutArticle = (gcnew System::Windows::Forms::TextBox());
			this->ButtonAjoutArticle = (gcnew System::Windows::Forms::Button());
			this->PrixHTC = (gcnew System::Windows::Forms::Label());
			this->LabelCategAjoutArticle = (gcnew System::Windows::Forms::Label());
			this->LabelNomAjoutArticle = (gcnew System::Windows::Forms::Label());
			this->TextBoxStockAjoutArticle = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxNomAjoutArticle = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxCategAjoutArticle = (gcnew System::Windows::Forms::TextBox());
			this->EcranModifierClient = (gcnew System::Windows::Forms::Panel());
			this->ButtonAfficherModificationClient = (gcnew System::Windows::Forms::Button());
			this->ButtonModifADRFacModificationClient = (gcnew System::Windows::Forms::Button());
			this->ButtonModifADRLivModificationClient = (gcnew System::Windows::Forms::Button());
			this->ButtonModifNaissModificationClient = (gcnew System::Windows::Forms::Button());
			this->ButtonModifNomModificationClient = (gcnew System::Windows::Forms::Button());
			this->TextBoxIDModificationClient = (gcnew System::Windows::Forms::TextBox());
			this->LabelIDModificationClient = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->LabelModifAnModificationClient = (gcnew System::Windows::Forms::Label());
			this->LabelModifMoisModifiacationClient = (gcnew System::Windows::Forms::Label());
			this->LabelModifJourModificationClient = (gcnew System::Windows::Forms::Label());
			this->TextBoxModifAnModificationClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxModifMoisModificationClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxModifJourModificationClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxModifPrenomModificationClient = (gcnew System::Windows::Forms::TextBox());
			this->LabelModifPrenomModificationClient = (gcnew System::Windows::Forms::Label());
			this->TextBoxModifNomModificationClient = (gcnew System::Windows::Forms::TextBox());
			this->LabelModifNomModificationClient = (gcnew System::Windows::Forms::Label());
			this->DataGridModifierClient = (gcnew System::Windows::Forms::DataGridView());
			this->ButtonModifierClient = (gcnew System::Windows::Forms::Button());
			this->LabelPrenomModifierClient = (gcnew System::Windows::Forms::Label());
			this->LabelNomModifierClient = (gcnew System::Windows::Forms::Label());
			this->TextBoxPrenomModifierClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxNomModifierClient = (gcnew System::Windows::Forms::TextBox());
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
			this->BottomToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->TopToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->RightToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->LeftToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->ContentPanel = (gcnew System::Windows::Forms::ToolStripContentPanel());
			this->EcranIdle = (gcnew System::Windows::Forms::Panel());
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
			this->EcranVide = (gcnew System::Windows::Forms::Panel());
			this->EcranAfficherClient = (gcnew System::Windows::Forms::Panel());
			this->DataGridAfficherClient = (gcnew System::Windows::Forms::DataGridView());
			this->TextBoxPrenomAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxNomAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->LabelPrenomAfficherClient = (gcnew System::Windows::Forms::Label());
			this->LabelNomAfficherClient = (gcnew System::Windows::Forms::Label());
			this->buttonRechercherClient = (gcnew System::Windows::Forms::Button());
			this->EcranAfficherPersonnel = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewAfficherPersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->textBoxPrenomAfficherPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomAfficherPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->labelPrenomAfficherPersonnel = (gcnew System::Windows::Forms::Label());
			this->labelNomAfficherPersonnel = (gcnew System::Windows::Forms::Label());
			this->buttonRechercherAfficherPersonnel = (gcnew System::Windows::Forms::Button());
			this->EcranAjoutPersonnel = (gcnew System::Windows::Forms::Panel());
			this->buttonAjoutPersonnel1 = (gcnew System::Windows::Forms::Button());
			this->textBoxSuperieur1 = (gcnew System::Windows::Forms::TextBox());
			this->labelSuperieur1 = (gcnew System::Windows::Forms::Label());
			this->labelCpPersonnel1 = (gcnew System::Windows::Forms::Label());
			this->labelVillePersonnel1 = (gcnew System::Windows::Forms::Label());
			this->labelAdressePersonnel1 = (gcnew System::Windows::Forms::Label());
			this->labelAnneePersonnel1 = (gcnew System::Windows::Forms::Label());
			this->labelMoisPersonnel1 = (gcnew System::Windows::Forms::Label());
			this->labelJourPersonnel1 = (gcnew System::Windows::Forms::Label());
			this->textBoxAnnePersonnel1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMoisPersonnel1 = (gcnew System::Windows::Forms::TextBox());
			this->labelAdresseGenPersonnel1 = (gcnew System::Windows::Forms::Label());
			this->labelHireDate1 = (gcnew System::Windows::Forms::Label());
			this->labelPrenomPersonnel1 = (gcnew System::Windows::Forms::Label());
			this->labelNomPerosonnel1 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrenomPersonnel1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomPersonnel1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxJourPersonnel1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCpPersonnel1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdressePersonnel1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxVillePersonnel1 = (gcnew System::Windows::Forms::TextBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->EcranConnexion->SuspendLayout();
			this->EcranAjoutArticle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridArticleAjoutArticle))->BeginInit();
			this->EcranModifierClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridModifierClient))->BeginInit();
			this->EcranSupprimerClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridSupprimerClient))->BeginInit();
			this->EcranIdle->SuspendLayout();
			this->MenuOnglet->SuspendLayout();
			this->EcranAfficherClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridAfficherClient))->BeginInit();
			this->EcranAfficherPersonnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAfficherPersonnel))->BeginInit();
			this->EcranAjoutPersonnel->SuspendLayout();
			this->EcranAjoutClient->SuspendLayout();
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
			this->textBox1->Location = System::Drawing::Point(375, 226);
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
			this->LabelUserConnexion->Location = System::Drawing::Point(296, 284);
			this->LabelUserConnexion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelUserConnexion->Name = L"LabelUserConnexion";
			this->LabelUserConnexion->Size = System::Drawing::Size(71, 17);
			this->LabelUserConnexion->TabIndex = 6;
			this->LabelUserConnexion->Text = L"Utilisateur";
			// 
			// LabelMdpConnexion
			// 
			this->LabelMdpConnexion->AutoSize = true;
			this->LabelMdpConnexion->Location = System::Drawing::Point(276, 335);
			this->LabelMdpConnexion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelMdpConnexion->Name = L"LabelMdpConnexion";
			this->LabelMdpConnexion->Size = System::Drawing::Size(93, 17);
			this->LabelMdpConnexion->TabIndex = 7;
			this->LabelMdpConnexion->Text = L"Mot de passe";
			// 
			// LabelIpConnexion
			// 
			this->LabelIpConnexion->AutoSize = true;
			this->LabelIpConnexion->Location = System::Drawing::Point(348, 229);
			this->LabelIpConnexion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelIpConnexion->Name = L"LabelIpConnexion";
			this->LabelIpConnexion->Size = System::Drawing::Size(20, 17);
			this->LabelIpConnexion->TabIndex = 1;
			this->LabelIpConnexion->Text = L"IP";
			// 
			// ButtonConnexion
			// 
			this->ButtonConnexion->Location = System::Drawing::Point(556, 539);
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
			this->EcranConnexion->Size = System::Drawing::Size(1355, 738);
			this->EcranConnexion->TabIndex = 18;
			// 
			// EcranAjoutArticle
			// 
			this->EcranAjoutArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranAjoutArticle->AutoSize = true;
			this->EcranAjoutArticle->Controls->Add(this->DataGridArticleAjoutArticle);
			this->EcranAjoutArticle->Controls->Add(this->ButtonAjoutCategAjoutClient);
			this->EcranAjoutArticle->Controls->Add(this->TextBoxAjoutCategAjoutArticle);
			this->EcranAjoutArticle->Controls->Add(this->label8);
			this->EcranAjoutArticle->Controls->Add(this->TextBoxTVAAjoutArticle);
			this->EcranAjoutArticle->Controls->Add(this->label7);
			this->EcranAjoutArticle->Controls->Add(this->label6);
			this->EcranAjoutArticle->Controls->Add(this->TextBoxPrixAjoutArticle);
			this->EcranAjoutArticle->Controls->Add(this->TextBoxSeuilAjoutArticle);
			this->EcranAjoutArticle->Controls->Add(this->ButtonAjoutArticle);
			this->EcranAjoutArticle->Controls->Add(this->PrixHTC);
			this->EcranAjoutArticle->Controls->Add(this->LabelCategAjoutArticle);
			this->EcranAjoutArticle->Controls->Add(this->LabelNomAjoutArticle);
			this->EcranAjoutArticle->Controls->Add(this->TextBoxStockAjoutArticle);
			this->EcranAjoutArticle->Controls->Add(this->TextBoxNomAjoutArticle);
			this->EcranAjoutArticle->Controls->Add(this->TextBoxCategAjoutArticle);
			this->EcranAjoutArticle->Location = System::Drawing::Point(0, 27);
			this->EcranAjoutArticle->Name = L"EcranAjoutArticle";
			this->EcranAjoutArticle->Size = System::Drawing::Size(1000, 600);
			this->EcranAjoutArticle->TabIndex = 37;
			// 
			// DataGridArticleAjoutArticle
			// 
			this->DataGridArticleAjoutArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridArticleAjoutArticle->Location = System::Drawing::Point(45, 187);
			this->DataGridArticleAjoutArticle->Name = L"DataGridArticleAjoutArticle";
			this->DataGridArticleAjoutArticle->Size = System::Drawing::Size(679, 197);
			this->DataGridArticleAjoutArticle->TabIndex = 40;
			// 
			// ButtonAjoutCategAjoutClient
			// 
			this->ButtonAjoutCategAjoutClient->Location = System::Drawing::Point(829, 465);
			this->ButtonAjoutCategAjoutClient->Name = L"ButtonAjoutCategAjoutClient";
			this->ButtonAjoutCategAjoutClient->Size = System::Drawing::Size(118, 23);
			this->ButtonAjoutCategAjoutClient->TabIndex = 39;
			this->ButtonAjoutCategAjoutClient->Text = L"Ajouter la catégorie";
			this->ButtonAjoutCategAjoutClient->UseVisualStyleBackColor = true;
			this->ButtonAjoutCategAjoutClient->Click += gcnew System::EventHandler(this, &MyForm::ClickAjoutCategAjoutArticle);
			// 
			// TextBoxAjoutCategAjoutArticle
			// 
			this->TextBoxAjoutCategAjoutArticle->Location = System::Drawing::Point(809, 435);
			this->TextBoxAjoutCategAjoutArticle->Name = L"TextBoxAjoutCategAjoutArticle";
			this->TextBoxAjoutCategAjoutArticle->Size = System::Drawing::Size(155, 20);
			this->TextBoxAjoutCategAjoutArticle->TabIndex = 38;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(611, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 13);
			this->label8->TabIndex = 37;
			this->label8->Text = L"TVA";
			// 
			// TextBoxTVAAjoutArticle
			// 
			this->TextBoxTVAAjoutArticle->Location = System::Drawing::Point(611, 101);
			this->TextBoxTVAAjoutArticle->Name = L"TextBoxTVAAjoutArticle";
			this->TextBoxTVAAjoutArticle->Size = System::Drawing::Size(50, 20);
			this->TextBoxTVAAjoutArticle->TabIndex = 36;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(555, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(30, 13);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Seuil";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(492, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Stock";
			// 
			// TextBoxPrixAjoutArticle
			// 
			this->TextBoxPrixAjoutArticle->Location = System::Drawing::Point(424, 101);
			this->TextBoxPrixAjoutArticle->Name = L"TextBoxPrixAjoutArticle";
			this->TextBoxPrixAjoutArticle->Size = System::Drawing::Size(53, 20);
			this->TextBoxPrixAjoutArticle->TabIndex = 33;
			// 
			// TextBoxSeuilAjoutArticle
			// 
			this->TextBoxSeuilAjoutArticle->Location = System::Drawing::Point(551, 101);
			this->TextBoxSeuilAjoutArticle->Name = L"TextBoxSeuilAjoutArticle";
			this->TextBoxSeuilAjoutArticle->Size = System::Drawing::Size(50, 20);
			this->TextBoxSeuilAjoutArticle->TabIndex = 32;
			// 
			// ButtonAjoutArticle
			// 
			this->ButtonAjoutArticle->Location = System::Drawing::Point(337, 150);
			this->ButtonAjoutArticle->Name = L"ButtonAjoutArticle";
			this->ButtonAjoutArticle->Size = System::Drawing::Size(118, 23);
			this->ButtonAjoutArticle->TabIndex = 31;
			this->ButtonAjoutArticle->Text = L"Ajouter l\'article";
			this->ButtonAjoutArticle->UseVisualStyleBackColor = true;
			// 
			// PrixHTC
			// 
			this->PrixHTC->AutoSize = true;
			this->PrixHTC->Location = System::Drawing::Point(426, 82);
			this->PrixHTC->Name = L"PrixHTC";
			this->PrixHTC->Size = System::Drawing::Size(39, 13);
			this->PrixHTC->TabIndex = 30;
			this->PrixHTC->Text = L"PrixHT";
			// 
			// LabelCategAjoutArticle
			// 
			this->LabelCategAjoutArticle->AutoSize = true;
			this->LabelCategAjoutArticle->Location = System::Drawing::Point(310, 82);
			this->LabelCategAjoutArticle->Name = L"LabelCategAjoutArticle";
			this->LabelCategAjoutArticle->Size = System::Drawing::Size(52, 13);
			this->LabelCategAjoutArticle->TabIndex = 29;
			this->LabelCategAjoutArticle->Text = L"Catégorie";
			// 
			// LabelNomAjoutArticle
			// 
			this->LabelNomAjoutArticle->AutoSize = true;
			this->LabelNomAjoutArticle->Location = System::Drawing::Point(160, 80);
			this->LabelNomAjoutArticle->Name = L"LabelNomAjoutArticle";
			this->LabelNomAjoutArticle->Size = System::Drawing::Size(63, 13);
			this->LabelNomAjoutArticle->TabIndex = 28;
			this->LabelNomAjoutArticle->Text = L"Désignation";
			// 
			// TextBoxStockAjoutArticle
			// 
			this->TextBoxStockAjoutArticle->Location = System::Drawing::Point(488, 101);
			this->TextBoxStockAjoutArticle->Name = L"TextBoxStockAjoutArticle";
			this->TextBoxStockAjoutArticle->Size = System::Drawing::Size(50, 20);
			this->TextBoxStockAjoutArticle->TabIndex = 14;
			// 
			// TextBoxNomAjoutArticle
			// 
			this->TextBoxNomAjoutArticle->Location = System::Drawing::Point(124, 101);
			this->TextBoxNomAjoutArticle->Name = L"TextBoxNomAjoutArticle";
			this->TextBoxNomAjoutArticle->Size = System::Drawing::Size(129, 20);
			this->TextBoxNomAjoutArticle->TabIndex = 12;
			// 
			// TextBoxCategAjoutArticle
			// 
			this->TextBoxCategAjoutArticle->Location = System::Drawing::Point(271, 101);
			this->TextBoxCategAjoutArticle->Name = L"TextBoxCategAjoutArticle";
			this->TextBoxCategAjoutArticle->Size = System::Drawing::Size(121, 20);
			this->TextBoxCategAjoutArticle->TabIndex = 13;
			// 
			// EcranModifierClient
			// 
			this->EcranModifierClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranModifierClient->AutoSize = true;
			this->EcranModifierClient->Controls->Add(this->ButtonAfficherModificationClient);
			this->EcranModifierClient->Controls->Add(this->ButtonModifADRFacModificationClient);
			this->EcranModifierClient->Controls->Add(this->ButtonModifADRLivModificationClient);
			this->EcranModifierClient->Controls->Add(this->ButtonModifNaissModificationClient);
			this->EcranModifierClient->Controls->Add(this->ButtonModifNomModificationClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxIDModificationClient);
			this->EcranModifierClient->Controls->Add(this->LabelIDModificationClient);
			this->EcranModifierClient->Controls->Add(this->label1);
			this->EcranModifierClient->Controls->Add(this->label2);
			this->EcranModifierClient->Controls->Add(this->label3);
			this->EcranModifierClient->Controls->Add(this->label4);
			this->EcranModifierClient->Controls->Add(this->label5);
			this->EcranModifierClient->Controls->Add(this->textBox5);
			this->EcranModifierClient->Controls->Add(this->textBox6);
			this->EcranModifierClient->Controls->Add(this->textBox7);
			this->EcranModifierClient->Controls->Add(this->textBox8);
			this->EcranModifierClient->Controls->Add(this->textBox9);
			this->EcranModifierClient->Controls->Add(this->textBox10);
			this->EcranModifierClient->Controls->Add(this->LabelModifAnModificationClient);
			this->EcranModifierClient->Controls->Add(this->LabelModifMoisModifiacationClient);
			this->EcranModifierClient->Controls->Add(this->LabelModifJourModificationClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxModifAnModificationClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxModifMoisModificationClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxModifJourModificationClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxModifPrenomModificationClient);
			this->EcranModifierClient->Controls->Add(this->LabelModifPrenomModificationClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxModifNomModificationClient);
			this->EcranModifierClient->Controls->Add(this->LabelModifNomModificationClient);
			this->EcranModifierClient->Controls->Add(this->DataGridModifierClient);
			this->EcranModifierClient->Controls->Add(this->ButtonModifierClient);
			this->EcranModifierClient->Controls->Add(this->LabelPrenomModifierClient);
			this->EcranModifierClient->Controls->Add(this->LabelNomModifierClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxPrenomModifierClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxNomModifierClient);
			this->EcranModifierClient->Location = System::Drawing::Point(0, 33);
			this->EcranModifierClient->Margin = System::Windows::Forms::Padding(4);
			this->EcranModifierClient->Name = L"EcranModifierClient";
			this->EcranModifierClient->Size = System::Drawing::Size(1333, 738);
			this->EcranModifierClient->TabIndex = 34;
			// 
			// ButtonAfficherModificationClient
			// 
			this->ButtonAfficherModificationClient->Location = System::Drawing::Point(169, 54);
			this->ButtonAfficherModificationClient->Margin = System::Windows::Forms::Padding(4);
			this->ButtonAfficherModificationClient->Name = L"ButtonAfficherModificationClient";
			this->ButtonAfficherModificationClient->Size = System::Drawing::Size(117, 28);
			this->ButtonAfficherModificationClient->TabIndex = 62;
			this->ButtonAfficherModificationClient->Text = L"Afficher tout";
			this->ButtonAfficherModificationClient->UseVisualStyleBackColor = true;
			this->ButtonAfficherModificationClient->Click += gcnew System::EventHandler(this, &MyForm::ClickAfficherModificationClient);
			// 
			// ButtonModifADRFacModificationClient
			// 
			this->ButtonModifADRFacModificationClient->Location = System::Drawing::Point(1088, 601);
			this->ButtonModifADRFacModificationClient->Margin = System::Windows::Forms::Padding(4);
			this->ButtonModifADRFacModificationClient->Name = L"ButtonModifADRFacModificationClient";
			this->ButtonModifADRFacModificationClient->Size = System::Drawing::Size(212, 28);
			this->ButtonModifADRFacModificationClient->TabIndex = 61;
			this->ButtonModifADRFacModificationClient->Text = L"Valide l\'adresse de fact";
			this->ButtonModifADRFacModificationClient->UseVisualStyleBackColor = true;
			// 
			// ButtonModifADRLivModificationClient
			// 
			this->ButtonModifADRLivModificationClient->Location = System::Drawing::Point(1088, 560);
			this->ButtonModifADRLivModificationClient->Margin = System::Windows::Forms::Padding(4);
			this->ButtonModifADRLivModificationClient->Name = L"ButtonModifADRLivModificationClient";
			this->ButtonModifADRLivModificationClient->Size = System::Drawing::Size(212, 28);
			this->ButtonModifADRLivModificationClient->TabIndex = 60;
			this->ButtonModifADRLivModificationClient->Text = L"Valider l\'adresse de livr";
			this->ButtonModifADRLivModificationClient->UseVisualStyleBackColor = true;
			// 
			// ButtonModifNaissModificationClient
			// 
			this->ButtonModifNaissModificationClient->Location = System::Drawing::Point(1088, 502);
			this->ButtonModifNaissModificationClient->Margin = System::Windows::Forms::Padding(4);
			this->ButtonModifNaissModificationClient->Name = L"ButtonModifNaissModificationClient";
			this->ButtonModifNaissModificationClient->Size = System::Drawing::Size(212, 28);
			this->ButtonModifNaissModificationClient->TabIndex = 59;
			this->ButtonModifNaissModificationClient->Text = L"Valider date de naissance";
			this->ButtonModifNaissModificationClient->UseVisualStyleBackColor = true;
			// 
			// ButtonModifNomModificationClient
			// 
			this->ButtonModifNomModificationClient->Location = System::Drawing::Point(1088, 465);
			this->ButtonModifNomModificationClient->Margin = System::Windows::Forms::Padding(4);
			this->ButtonModifNomModificationClient->Name = L"ButtonModifNomModificationClient";
			this->ButtonModifNomModificationClient->Size = System::Drawing::Size(212, 28);
			this->ButtonModifNomModificationClient->TabIndex = 58;
			this->ButtonModifNomModificationClient->Text = L"Valider nom et prénom";
			this->ButtonModifNomModificationClient->UseVisualStyleBackColor = true;
			this->ButtonModifNomModificationClient->Click += gcnew System::EventHandler(this, &MyForm::ClickModifNomModificationClient);
			// 
			// TextBoxIDModificationClient
			// 
			this->TextBoxIDModificationClient->Location = System::Drawing::Point(123, 560);
			this->TextBoxIDModificationClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxIDModificationClient->Name = L"TextBoxIDModificationClient";
			this->TextBoxIDModificationClient->Size = System::Drawing::Size(52, 22);
			this->TextBoxIDModificationClient->TabIndex = 56;
			// 
			// LabelIDModificationClient
			// 
			this->LabelIDModificationClient->AutoSize = true;
			this->LabelIDModificationClient->Location = System::Drawing::Point(61, 535);
			this->LabelIDModificationClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelIDModificationClient->Name = L"LabelIDModificationClient";
			this->LabelIDModificationClient->Size = System::Drawing::Size(195, 17);
			this->LabelIDModificationClient->TabIndex = 55;
			this->LabelIDModificationClient->Text = L"Entrez l\'ID du client à modifier";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(983, 546);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 17);
			this->label1->TabIndex = 54;
			this->label1->Text = L"CP";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(815, 546);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 17);
			this->label2->TabIndex = 53;
			this->label2->Text = L"Ville";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(572, 546);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 17);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Adresse";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(323, 604);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 17);
			this->label4->TabIndex = 51;
			this->label4->Text = L"Adresse de facturation";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(339, 572);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 17);
			this->label5->TabIndex = 50;
			this->label5->Text = L"Adresse de livraison";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(481, 601);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(248, 22);
			this->textBox5->TabIndex = 47;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(739, 601);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(199, 22);
			this->textBox6->TabIndex = 48;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(947, 601);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(92, 22);
			this->textBox7->TabIndex = 49;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(947, 569);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(92, 22);
			this->textBox8->TabIndex = 46;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(481, 569);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(248, 22);
			this->textBox9->TabIndex = 44;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(739, 569);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(199, 22);
			this->textBox10->TabIndex = 45;
			// 
			// LabelModifAnModificationClient
			// 
			this->LabelModifAnModificationClient->AutoSize = true;
			this->LabelModifAnModificationClient->Location = System::Drawing::Point(959, 482);
			this->LabelModifAnModificationClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelModifAnModificationClient->Name = L"LabelModifAnModificationClient";
			this->LabelModifAnModificationClient->Size = System::Drawing::Size(49, 17);
			this->LabelModifAnModificationClient->TabIndex = 42;
			this->LabelModifAnModificationClient->Text = L"Année";
			// 
			// LabelModifMoisModifiacationClient
			// 
			this->LabelModifMoisModifiacationClient->AutoSize = true;
			this->LabelModifMoisModifiacationClient->Location = System::Drawing::Point(897, 482);
			this->LabelModifMoisModifiacationClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelModifMoisModifiacationClient->Name = L"LabelModifMoisModifiacationClient";
			this->LabelModifMoisModifiacationClient->Size = System::Drawing::Size(37, 17);
			this->LabelModifMoisModifiacationClient->TabIndex = 41;
			this->LabelModifMoisModifiacationClient->Text = L"Mois";
			// 
			// LabelModifJourModificationClient
			// 
			this->LabelModifJourModificationClient->AutoSize = true;
			this->LabelModifJourModificationClient->Location = System::Drawing::Point(844, 482);
			this->LabelModifJourModificationClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelModifJourModificationClient->Name = L"LabelModifJourModificationClient";
			this->LabelModifJourModificationClient->Size = System::Drawing::Size(36, 17);
			this->LabelModifJourModificationClient->TabIndex = 40;
			this->LabelModifJourModificationClient->Text = L"Jour";
			// 
			// TextBoxModifAnModificationClient
			// 
			this->TextBoxModifAnModificationClient->Location = System::Drawing::Point(947, 502);
			this->TextBoxModifAnModificationClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxModifAnModificationClient->Name = L"TextBoxModifAnModificationClient";
			this->TextBoxModifAnModificationClient->Size = System::Drawing::Size(68, 22);
			this->TextBoxModifAnModificationClient->TabIndex = 39;
			// 
			// TextBoxModifMoisModificationClient
			// 
			this->TextBoxModifMoisModificationClient->Location = System::Drawing::Point(892, 502);
			this->TextBoxModifMoisModificationClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxModifMoisModificationClient->Name = L"TextBoxModifMoisModificationClient";
			this->TextBoxModifMoisModificationClient->Size = System::Drawing::Size(45, 22);
			this->TextBoxModifMoisModificationClient->TabIndex = 38;
			// 
			// TextBoxModifJourModificationClient
			// 
			this->TextBoxModifJourModificationClient->Location = System::Drawing::Point(840, 502);
			this->TextBoxModifJourModificationClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxModifJourModificationClient->Name = L"TextBoxModifJourModificationClient";
			this->TextBoxModifJourModificationClient->Size = System::Drawing::Size(43, 22);
			this->TextBoxModifJourModificationClient->TabIndex = 37;
			// 
			// TextBoxModifPrenomModificationClient
			// 
			this->TextBoxModifPrenomModificationClient->Location = System::Drawing::Point(655, 502);
			this->TextBoxModifPrenomModificationClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxModifPrenomModificationClient->Name = L"TextBoxModifPrenomModificationClient";
			this->TextBoxModifPrenomModificationClient->Size = System::Drawing::Size(132, 22);
			this->TextBoxModifPrenomModificationClient->TabIndex = 36;
			// 
			// LabelModifPrenomModificationClient
			// 
			this->LabelModifPrenomModificationClient->AutoSize = true;
			this->LabelModifPrenomModificationClient->Location = System::Drawing::Point(692, 482);
			this->LabelModifPrenomModificationClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelModifPrenomModificationClient->Name = L"LabelModifPrenomModificationClient";
			this->LabelModifPrenomModificationClient->Size = System::Drawing::Size(57, 17);
			this->LabelModifPrenomModificationClient->TabIndex = 35;
			this->LabelModifPrenomModificationClient->Text = L"Prenom";
			// 
			// TextBoxModifNomModificationClient
			// 
			this->TextBoxModifNomModificationClient->Location = System::Drawing::Point(501, 502);
			this->TextBoxModifNomModificationClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxModifNomModificationClient->Name = L"TextBoxModifNomModificationClient";
			this->TextBoxModifNomModificationClient->Size = System::Drawing::Size(132, 22);
			this->TextBoxModifNomModificationClient->TabIndex = 34;
			// 
			// LabelModifNomModificationClient
			// 
			this->LabelModifNomModificationClient->AutoSize = true;
			this->LabelModifNomModificationClient->Location = System::Drawing::Point(548, 482);
			this->LabelModifNomModificationClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelModifNomModificationClient->Name = L"LabelModifNomModificationClient";
			this->LabelModifNomModificationClient->Size = System::Drawing::Size(37, 17);
			this->LabelModifNomModificationClient->TabIndex = 33;
			this->LabelModifNomModificationClient->Text = L"Nom";
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
			this->ButtonModifierClient->Location = System::Drawing::Point(123, 310);
			this->ButtonModifierClient->Margin = System::Windows::Forms::Padding(4);
			this->ButtonModifierClient->Name = L"ButtonModifierClient";
			this->ButtonModifierClient->Size = System::Drawing::Size(225, 28);
			this->ButtonModifierClient->TabIndex = 31;
			this->ButtonModifierClient->Text = L"Rechercher un client";
			this->ButtonModifierClient->UseVisualStyleBackColor = true;
			this->ButtonModifierClient->Click += gcnew System::EventHandler(this, &MyForm::ClickChercherModifierClient);
			// 
			// LabelPrenomModifierClient
			// 
			this->LabelPrenomModifierClient->AutoSize = true;
			this->LabelPrenomModifierClient->Location = System::Drawing::Point(64, 267);
			this->LabelPrenomModifierClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelPrenomModifierClient->Name = L"LabelPrenomModifierClient";
			this->LabelPrenomModifierClient->Size = System::Drawing::Size(57, 17);
			this->LabelPrenomModifierClient->TabIndex = 19;
			this->LabelPrenomModifierClient->Text = L"Prénom";
			// 
			// LabelNomModifierClient
			// 
			this->LabelNomModifierClient->AutoSize = true;
			this->LabelNomModifierClient->Location = System::Drawing::Point(83, 230);
			this->LabelNomModifierClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelNomModifierClient->Name = L"LabelNomModifierClient";
			this->LabelNomModifierClient->Size = System::Drawing::Size(37, 17);
			this->LabelNomModifierClient->TabIndex = 18;
			this->LabelNomModifierClient->Text = L"Nom";
			// 
			// TextBoxPrenomModifierClient
			// 
			this->TextBoxPrenomModifierClient->Location = System::Drawing::Point(129, 258);
			this->TextBoxPrenomModifierClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxPrenomModifierClient->Name = L"TextBoxPrenomModifierClient";
			this->TextBoxPrenomModifierClient->Size = System::Drawing::Size(199, 22);
			this->TextBoxPrenomModifierClient->TabIndex = 10;
			// 
			// TextBoxNomModifierClient
			// 
			this->TextBoxNomModifierClient->Location = System::Drawing::Point(129, 226);
			this->TextBoxNomModifierClient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxNomModifierClient->Name = L"TextBoxNomModifierClient";
			this->TextBoxNomModifierClient->Size = System::Drawing::Size(199, 22);
			this->TextBoxNomModifierClient->TabIndex = 9;
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
			this->EcranSupprimerClient->Location = System::Drawing::Point(0, 33);
			this->EcranSupprimerClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EcranSupprimerClient->Name = L"EcranSupprimerClient";
			this->EcranSupprimerClient->Size = System::Drawing::Size(1333, 738);
			this->EcranSupprimerClient->TabIndex = 35;
			// 
			// ButtonSupprimerSupprimerClient
			// 
			this->ButtonSupprimerSupprimerClient->Location = System::Drawing::Point(523, 459);
			this->ButtonSupprimerSupprimerClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->TextBoxSupprimerSupprimerClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TextBoxSupprimerSupprimerClient->Name = L"TextBoxSupprimerSupprimerClient";
			this->TextBoxSupprimerSupprimerClient->Size = System::Drawing::Size(100, 22);
			this->TextBoxSupprimerSupprimerClient->TabIndex = 34;
			// 
			// LabelSupprimerSupprimerClient
			// 
			this->LabelSupprimerSupprimerClient->AutoSize = true;
			this->LabelSupprimerSupprimerClient->Location = System::Drawing::Point(501, 404);
			this->LabelSupprimerSupprimerClient->Name = L"LabelSupprimerSupprimerClient";
			this->LabelSupprimerSupprimerClient->Size = System::Drawing::Size(157, 17);
			this->LabelSupprimerSupprimerClient->TabIndex = 33;
			this->LabelSupprimerSupprimerClient->Text = L"ID du client à supprimer";
			// 
			// DataGridSupprimerClient
			// 
			this->DataGridSupprimerClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridSupprimerClient->Location = System::Drawing::Point(340, 46);
			this->DataGridSupprimerClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DataGridSupprimerClient->Name = L"DataGridSupprimerClient";
			this->DataGridSupprimerClient->RowHeadersWidth = 51;
			this->DataGridSupprimerClient->Size = System::Drawing::Size(621, 293);
			this->DataGridSupprimerClient->TabIndex = 32;
			// 
			// ButtonChercherSupprimerClient
			// 
			this->ButtonChercherSupprimerClient->Location = System::Drawing::Point(120, 127);
			this->ButtonChercherSupprimerClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->LabelPrenomSupprimerClient->Location = System::Drawing::Point(68, 90);
			this->LabelPrenomSupprimerClient->Name = L"LabelPrenomSupprimerClient";
			this->LabelPrenomSupprimerClient->Size = System::Drawing::Size(57, 17);
			this->LabelPrenomSupprimerClient->TabIndex = 19;
			this->LabelPrenomSupprimerClient->Text = L"Prénom";
			// 
			// LabelNomSupprimerClient
			// 
			this->LabelNomSupprimerClient->AutoSize = true;
			this->LabelNomSupprimerClient->Location = System::Drawing::Point(87, 64);
			this->LabelNomSupprimerClient->Name = L"LabelNomSupprimerClient";
			this->LabelNomSupprimerClient->Size = System::Drawing::Size(37, 17);
			this->LabelNomSupprimerClient->TabIndex = 18;
			this->LabelNomSupprimerClient->Text = L"Nom";
			// 
			// TextBoxPrenomSupprimerClient
			// 
			this->TextBoxPrenomSupprimerClient->Location = System::Drawing::Point(131, 86);
			this->TextBoxPrenomSupprimerClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TextBoxPrenomSupprimerClient->Name = L"TextBoxPrenomSupprimerClient";
			this->TextBoxPrenomSupprimerClient->Size = System::Drawing::Size(151, 22);
			this->TextBoxPrenomSupprimerClient->TabIndex = 10;
			// 
			// TextBoxNomSupprimerClient
			// 
			this->TextBoxNomSupprimerClient->Location = System::Drawing::Point(131, 60);
			this->TextBoxNomSupprimerClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TextBoxNomSupprimerClient->Name = L"TextBoxNomSupprimerClient";
			this->TextBoxNomSupprimerClient->Size = System::Drawing::Size(151, 22);
			this->TextBoxNomSupprimerClient->TabIndex = 9;
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
			this->EcranIdle->Controls->Add(this->EcranAfficherClient);
			this->EcranIdle->Controls->Add(this->EcranAfficherPersonnel);
			this->EcranIdle->Controls->Add(this->EcranAjoutPersonnel);
			this->EcranIdle->Controls->Add(this->EcranAjoutClient);
			this->EcranIdle->Controls->Add(this->EcranModifierClient);
			this->EcranIdle->Controls->Add(this->EcranSupprimerClient);
			this->EcranIdle->Controls->Add(this->EcranAjoutArticle);
			this->EcranIdle->Location = System::Drawing::Point(0, 0);
			this->EcranIdle->Margin = System::Windows::Forms::Padding(4);
			this->EcranIdle->Name = L"EcranIdle";
			this->EcranIdle->Size = System::Drawing::Size(1333, 1108);
			this->EcranIdle->TabIndex = 24;
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
			this->OngletArticle->Size = System::Drawing::Size(66, 34);
			this->OngletArticle->Text = L"Article";
			// 
			// OngletAjoutArticle
			// 
			this->OngletAjoutArticle->Name = L"OngletAjoutArticle";
			this->OngletAjoutArticle->Size = System::Drawing::Size(161, 26);
			this->OngletAjoutArticle->Text = L"Ajouter";
			this->OngletAjoutArticle->Click += gcnew System::EventHandler(this, &MyForm::ClickOngletAjoutArticle);
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
			this->OngletAjoutPersonnel->Size = System::Drawing::Size(129, 22);
			this->OngletAjoutPersonnel->Text = L"Ajouter";
			this->OngletAjoutPersonnel->Click += gcnew System::EventHandler(this, &MyForm::ClickOngletAjoutPersonnel);
			// 
			// OngletModifierPersonnel
			// 
			this->OngletModifierPersonnel->Name = L"OngletModifierPersonnel";
			this->OngletModifierPersonnel->Size = System::Drawing::Size(224, 26);
			this->OngletModifierPersonnel->Text = L"Modifier";
			// 
			// OngletSupprimerPersonnel
			// 
			this->OngletSupprimerPersonnel->Name = L"OngletSupprimerPersonnel";
			this->OngletSupprimerPersonnel->Size = System::Drawing::Size(224, 26);
			this->OngletSupprimerPersonnel->Text = L"Supprimer";
			// 
			// OngletAfficherPersonnel
			// 
			this->OngletAfficherPersonnel->Name = L"OngletAfficherPersonnel";
			this->OngletAfficherPersonnel->Size = System::Drawing::Size(224, 26);
			this->OngletAfficherPersonnel->Text = L"Afficher";
			this->OngletAfficherPersonnel->Click += gcnew System::EventHandler(this, &MyForm::OngletAfficherPersonnel_Click);
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
			this->OngletSupprimerClient->Click += gcnew System::EventHandler(this, &MyForm::ClickOngletSupprimerClient);
			// 
			// OngletAfficherClient
			// 
			this->OngletAfficherClient->Name = L"OngletAfficherClient";
			this->OngletAfficherClient->Size = System::Drawing::Size(161, 26);
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
			this->OngletCommande->Size = System::Drawing::Size(100, 34);
			this->OngletCommande->Text = L"Commande";
			// 
			// OngletAjoutCommande
			// 
			this->OngletAjoutCommande->Name = L"OngletAjoutCommande";
			this->OngletAjoutCommande->Size = System::Drawing::Size(224, 26);
			this->OngletAjoutCommande->Text = L"Ajouter";
			// 
			// OngletModifierCommande
			// 
			this->OngletModifierCommande->Name = L"OngletModifierCommande";
			this->OngletModifierCommande->Size = System::Drawing::Size(224, 26);
			this->OngletModifierCommande->Text = L"Modifier";
			// 
			// OngletSupprimerCommande
			// 
			this->OngletSupprimerCommande->Name = L"OngletSupprimerCommande";
			this->OngletSupprimerCommande->Size = System::Drawing::Size(224, 26);
			this->OngletSupprimerCommande->Text = L"Supprimer";
			// 
			// OngletAfficherCommande
			// 
			this->OngletAfficherCommande->Name = L"OngletAfficherCommande";
			this->OngletAfficherCommande->Size = System::Drawing::Size(224, 26);
			this->OngletAfficherCommande->Text = L"Afficher";
			// 
			// EcranVide
			// 
			this->EcranVide->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranVide->AutoSize = true;
			this->EcranVide->Location = System::Drawing::Point(0, 27);
			this->EcranVide->Name = L"EcranVide";
			this->EcranVide->Size = System::Drawing::Size(1000, 900);
			this->EcranVide->TabIndex = 35;
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
			this->EcranAfficherClient->Location = System::Drawing::Point(0, 33);
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
			// EcranAfficherPersonnel
			// 
			this->EcranAfficherPersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranAfficherPersonnel->AutoSize = true;
			this->EcranAfficherPersonnel->Controls->Add(this->dataGridViewAfficherPersonnel);
			this->EcranAfficherPersonnel->Controls->Add(this->textBoxPrenomAfficherPersonnel);
			this->EcranAfficherPersonnel->Controls->Add(this->textBoxNomAfficherPersonnel);
			this->EcranAfficherPersonnel->Controls->Add(this->labelPrenomAfficherPersonnel);
			this->EcranAfficherPersonnel->Controls->Add(this->labelNomAfficherPersonnel);
			this->EcranAfficherPersonnel->Controls->Add(this->buttonRechercherAfficherPersonnel);
			this->EcranAfficherPersonnel->Location = System::Drawing::Point(0, 231);
			this->EcranAfficherPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->EcranAfficherPersonnel->Name = L"EcranAfficherPersonnel";
			this->EcranAfficherPersonnel->Size = System::Drawing::Size(1333, 738);
			this->EcranAfficherPersonnel->TabIndex = 37;
			// 
			// dataGridViewAfficherPersonnel
			// 
			this->dataGridViewAfficherPersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewAfficherPersonnel->Location = System::Drawing::Point(469, 89);
			this->dataGridViewAfficherPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->dataGridViewAfficherPersonnel->Name = L"dataGridViewAfficherPersonnel";
			this->dataGridViewAfficherPersonnel->RowHeadersWidth = 51;
			this->dataGridViewAfficherPersonnel->Size = System::Drawing::Size(667, 374);
			this->dataGridViewAfficherPersonnel->TabIndex = 4;
			// 
			// textBoxPrenomAfficherPersonnel
			// 
			this->textBoxPrenomAfficherPersonnel->Location = System::Drawing::Point(168, 124);
			this->textBoxPrenomAfficherPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrenomAfficherPersonnel->Name = L"textBoxPrenomAfficherPersonnel";
			this->textBoxPrenomAfficherPersonnel->Size = System::Drawing::Size(132, 22);
			this->textBoxPrenomAfficherPersonnel->TabIndex = 3;
			// 
			// textBoxNomAfficherPersonnel
			// 
			this->textBoxNomAfficherPersonnel->Location = System::Drawing::Point(168, 85);
			this->textBoxNomAfficherPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNomAfficherPersonnel->Name = L"textBoxNomAfficherPersonnel";
			this->textBoxNomAfficherPersonnel->Size = System::Drawing::Size(132, 22);
			this->textBoxNomAfficherPersonnel->TabIndex = 2;
			// 
			// labelPrenomAfficherPersonnel
			// 
			this->labelPrenomAfficherPersonnel->AutoSize = true;
			this->labelPrenomAfficherPersonnel->Location = System::Drawing::Point(107, 128);
			this->labelPrenomAfficherPersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPrenomAfficherPersonnel->Name = L"labelPrenomAfficherPersonnel";
			this->labelPrenomAfficherPersonnel->Size = System::Drawing::Size(57, 17);
			this->labelPrenomAfficherPersonnel->TabIndex = 1;
			this->labelPrenomAfficherPersonnel->Text = L"Prénom";
			// 
			// labelNomAfficherPersonnel
			// 
			this->labelNomAfficherPersonnel->AutoSize = true;
			this->labelNomAfficherPersonnel->Location = System::Drawing::Point(107, 89);
			this->labelNomAfficherPersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelNomAfficherPersonnel->Name = L"labelNomAfficherPersonnel";
			this->labelNomAfficherPersonnel->Size = System::Drawing::Size(37, 17);
			this->labelNomAfficherPersonnel->TabIndex = 0;
			this->labelNomAfficherPersonnel->Text = L"Nom";
			// 
			// buttonRechercherAfficherPersonnel
			// 
			this->buttonRechercherAfficherPersonnel->Location = System::Drawing::Point(172, 188);
			this->buttonRechercherAfficherPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->buttonRechercherAfficherPersonnel->Name = L"buttonRechercherAfficherPersonnel";
			this->buttonRechercherAfficherPersonnel->Size = System::Drawing::Size(127, 47);
			this->buttonRechercherAfficherPersonnel->TabIndex = 26;
			this->buttonRechercherAfficherPersonnel->Text = L"Rechercher";
			this->buttonRechercherAfficherPersonnel->UseVisualStyleBackColor = true;
			this->buttonRechercherAfficherPersonnel->Click += gcnew System::EventHandler(this, &MyForm::buttonRechercherAfficherPersonnel_Click);
			// 
			// EcranAjoutPersonnel
			// 
			this->EcranAjoutPersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranAjoutPersonnel->AutoSize = true;
			this->EcranAjoutPersonnel->Controls->Add(this->buttonAjoutPersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxSuperieur1);
			this->EcranAjoutPersonnel->Controls->Add(this->labelSuperieur1);
			this->EcranAjoutPersonnel->Controls->Add(this->labelCpPersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->labelVillePersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->labelAdressePersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->labelAnneePersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->labelMoisPersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->labelJourPersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxAnnePersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxMoisPersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->labelAdresseGenPersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->labelHireDate1);
			this->EcranAjoutPersonnel->Controls->Add(this->labelPrenomPersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->labelNomPerosonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxPrenomPersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxNomPersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxJourPersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxCpPersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxAdressePersonnel1);
			this->EcranAjoutPersonnel->Controls->Add(this->textBoxVillePersonnel1);
			this->EcranAjoutPersonnel->Location = System::Drawing::Point(0, 33);
			this->EcranAjoutPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->EcranAjoutPersonnel->Name = L"EcranAjoutPersonnel";
			this->EcranAjoutPersonnel->Size = System::Drawing::Size(1333, 738);
			this->EcranAjoutPersonnel->TabIndex = 27;
			// 
			// buttonAjoutPersonnel1
			// 
			this->buttonAjoutPersonnel1->Location = System::Drawing::Point(349, 422);
			this->buttonAjoutPersonnel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonAjoutPersonnel1->Name = L"buttonAjoutPersonnel1";
			this->buttonAjoutPersonnel1->Size = System::Drawing::Size(149, 30);
			this->buttonAjoutPersonnel1->TabIndex = 32;
			this->buttonAjoutPersonnel1->Text = L" Ajouter le personnel";
			this->buttonAjoutPersonnel1->UseVisualStyleBackColor = true;
			this->buttonAjoutPersonnel1->Click += gcnew System::EventHandler(this, &MyForm::buttonAjoutPersonnel_Click);
			// 
			// textBoxSuperieur1
			// 
			this->textBoxSuperieur1->Location = System::Drawing::Point(295, 213);
			this->textBoxSuperieur1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSuperieur1->Name = L"textBoxSuperieur1";
			this->textBoxSuperieur1->Size = System::Drawing::Size(201, 22);
			this->textBoxSuperieur1->TabIndex = 31;
			// 
			// labelSuperieur1
			// 
			this->labelSuperieur1->AutoSize = true;
			this->labelSuperieur1->Location = System::Drawing::Point(200, 213);
			this->labelSuperieur1->Name = L"labelSuperieur1";
			this->labelSuperieur1->Size = System::Drawing::Size(70, 17);
			this->labelSuperieur1->TabIndex = 28;
			this->labelSuperieur1->Text = L"Superieur";
			// 
			// labelCpPersonnel1
			// 
			this->labelCpPersonnel1->AutoSize = true;
			this->labelCpPersonnel1->Location = System::Drawing::Point(815, 320);
			this->labelCpPersonnel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCpPersonnel1->Name = L"labelCpPersonnel1";
			this->labelCpPersonnel1->Size = System::Drawing::Size(26, 17);
			this->labelCpPersonnel1->TabIndex = 30;
			this->labelCpPersonnel1->Text = L"CP";
			// 
			// labelVillePersonnel1
			// 
			this->labelVillePersonnel1->AutoSize = true;
			this->labelVillePersonnel1->Location = System::Drawing::Point(643, 319);
			this->labelVillePersonnel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelVillePersonnel1->Name = L"labelVillePersonnel1";
			this->labelVillePersonnel1->Size = System::Drawing::Size(34, 17);
			this->labelVillePersonnel1->TabIndex = 29;
			this->labelVillePersonnel1->Text = L"Ville";
			// 
			// labelAdressePersonnel1
			// 
			this->labelAdressePersonnel1->AutoSize = true;
			this->labelAdressePersonnel1->Location = System::Drawing::Point(384, 318);
			this->labelAdressePersonnel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAdressePersonnel1->Name = L"labelAdressePersonnel1";
			this->labelAdressePersonnel1->Size = System::Drawing::Size(60, 17);
			this->labelAdressePersonnel1->TabIndex = 28;
			this->labelAdressePersonnel1->Text = L"Adresse";
			// 
			// labelAnneePersonnel1
			// 
			this->labelAnneePersonnel1->AutoSize = true;
			this->labelAnneePersonnel1->Location = System::Drawing::Point(441, 258);
			this->labelAnneePersonnel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAnneePersonnel1->Name = L"labelAnneePersonnel1";
			this->labelAnneePersonnel1->Size = System::Drawing::Size(49, 17);
			this->labelAnneePersonnel1->TabIndex = 27;
			this->labelAnneePersonnel1->Text = L"Année";
			// 
			// labelMoisPersonnel1
			// 
			this->labelMoisPersonnel1->AutoSize = true;
			this->labelMoisPersonnel1->Location = System::Drawing::Point(365, 258);
			this->labelMoisPersonnel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelMoisPersonnel1->Name = L"labelMoisPersonnel1";
			this->labelMoisPersonnel1->Size = System::Drawing::Size(37, 17);
			this->labelMoisPersonnel1->TabIndex = 26;
			this->labelMoisPersonnel1->Text = L"Mois";
			// 
			// labelJourPersonnel1
			// 
			this->labelJourPersonnel1->AutoSize = true;
			this->labelJourPersonnel1->Location = System::Drawing::Point(301, 258);
			this->labelJourPersonnel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelJourPersonnel1->Name = L"labelJourPersonnel1";
			this->labelJourPersonnel1->Size = System::Drawing::Size(36, 17);
			this->labelJourPersonnel1->TabIndex = 25;
			this->labelJourPersonnel1->Text = L"Jour";
			// 
			// textBoxAnnePersonnel1
			// 
			this->textBoxAnnePersonnel1->Location = System::Drawing::Point(431, 279);
			this->textBoxAnnePersonnel1->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAnnePersonnel1->Name = L"textBoxAnnePersonnel1";
			this->textBoxAnnePersonnel1->Size = System::Drawing::Size(68, 22);
			this->textBoxAnnePersonnel1->TabIndex = 24;
			// 
			// textBoxMoisPersonnel1
			// 
			this->textBoxMoisPersonnel1->Location = System::Drawing::Point(365, 279);
			this->textBoxMoisPersonnel1->Margin = System::Windows::Forms::Padding(4);
			this->textBoxMoisPersonnel1->Name = L"textBoxMoisPersonnel1";
			this->textBoxMoisPersonnel1->Size = System::Drawing::Size(43, 22);
			this->textBoxMoisPersonnel1->TabIndex = 23;
			// 
			// labelAdresseGenPersonnel1
			// 
			this->labelAdresseGenPersonnel1->AutoSize = true;
			this->labelAdresseGenPersonnel1->Location = System::Drawing::Point(205, 346);
			this->labelAdresseGenPersonnel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAdresseGenPersonnel1->Name = L"labelAdresseGenPersonnel1";
			this->labelAdresseGenPersonnel1->Size = System::Drawing::Size(64, 17);
			this->labelAdresseGenPersonnel1->TabIndex = 21;
			this->labelAdresseGenPersonnel1->Text = L"Adresse ";
			// 
			// labelHireDate1
			// 
			this->labelHireDate1->AutoSize = true;
			this->labelHireDate1->Location = System::Drawing::Point(151, 286);
			this->labelHireDate1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelHireDate1->Name = L"labelHireDate1";
			this->labelHireDate1->Size = System::Drawing::Size(119, 17);
			this->labelHireDate1->TabIndex = 20;
			this->labelHireDate1->Text = L"Date d\'embauche";
			// 
			// labelPrenomPersonnel1
			// 
			this->labelPrenomPersonnel1->AutoSize = true;
			this->labelPrenomPersonnel1->Location = System::Drawing::Point(213, 172);
			this->labelPrenomPersonnel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPrenomPersonnel1->Name = L"labelPrenomPersonnel1";
			this->labelPrenomPersonnel1->Size = System::Drawing::Size(57, 17);
			this->labelPrenomPersonnel1->TabIndex = 19;
			this->labelPrenomPersonnel1->Text = L"Prénom";
			// 
			// labelNomPerosonnel1
			// 
			this->labelNomPerosonnel1->AutoSize = true;
			this->labelNomPerosonnel1->Location = System::Drawing::Point(233, 128);
			this->labelNomPerosonnel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelNomPerosonnel1->Name = L"labelNomPerosonnel1";
			this->labelNomPerosonnel1->Size = System::Drawing::Size(37, 17);
			this->labelNomPerosonnel1->TabIndex = 18;
			this->labelNomPerosonnel1->Text = L"Nom";
			// 
			// textBoxPrenomPersonnel1
			// 
			this->textBoxPrenomPersonnel1->Location = System::Drawing::Point(295, 169);
			this->textBoxPrenomPersonnel1->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrenomPersonnel1->Name = L"textBoxPrenomPersonnel1";
			this->textBoxPrenomPersonnel1->Size = System::Drawing::Size(199, 22);
			this->textBoxPrenomPersonnel1->TabIndex = 10;
			// 
			// textBoxNomPersonnel1
			// 
			this->textBoxNomPersonnel1->Location = System::Drawing::Point(295, 126);
			this->textBoxNomPersonnel1->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNomPersonnel1->Name = L"textBoxNomPersonnel1";
			this->textBoxNomPersonnel1->Size = System::Drawing::Size(199, 22);
			this->textBoxNomPersonnel1->TabIndex = 9;
			// 
			// textBoxJourPersonnel1
			// 
			this->textBoxJourPersonnel1->Location = System::Drawing::Point(295, 279);
			this->textBoxJourPersonnel1->Margin = System::Windows::Forms::Padding(4);
			this->textBoxJourPersonnel1->Name = L"textBoxJourPersonnel1";
			this->textBoxJourPersonnel1->Size = System::Drawing::Size(43, 22);
			this->textBoxJourPersonnel1->TabIndex = 11;
			// 
			// textBoxCpPersonnel1
			// 
			this->textBoxCpPersonnel1->Location = System::Drawing::Point(788, 343);
			this->textBoxCpPersonnel1->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCpPersonnel1->Name = L"textBoxCpPersonnel1";
			this->textBoxCpPersonnel1->Size = System::Drawing::Size(92, 22);
			this->textBoxCpPersonnel1->TabIndex = 14;
			// 
			// textBoxAdressePersonnel1
			// 
			this->textBoxAdressePersonnel1->Location = System::Drawing::Point(295, 343);
			this->textBoxAdressePersonnel1->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdressePersonnel1->Name = L"textBoxAdressePersonnel1";
			this->textBoxAdressePersonnel1->Size = System::Drawing::Size(248, 22);
			this->textBoxAdressePersonnel1->TabIndex = 12;
			// 
			// textBoxVillePersonnel1
			// 
			this->textBoxVillePersonnel1->Location = System::Drawing::Point(565, 343);
			this->textBoxVillePersonnel1->Margin = System::Windows::Forms::Padding(4);
			this->textBoxVillePersonnel1->Name = L"textBoxVillePersonnel1";
			this->textBoxVillePersonnel1->Size = System::Drawing::Size(199, 22);
			this->textBoxVillePersonnel1->TabIndex = 13;
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
			this->EcranAjoutArticle->ResumeLayout(false);
			this->EcranAjoutArticle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridArticleAjoutArticle))->EndInit();
			this->EcranModifierClient->ResumeLayout(false);
			this->EcranModifierClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridModifierClient))->EndInit();
			this->EcranSupprimerClient->ResumeLayout(false);
			this->EcranSupprimerClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridSupprimerClient))->EndInit();
			this->EcranIdle->ResumeLayout(false);
			this->EcranIdle->PerformLayout();
			this->MenuOnglet->ResumeLayout(false);
			this->MenuOnglet->PerformLayout();
			this->EcranAfficherClient->ResumeLayout(false);
			this->EcranAfficherClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridAfficherClient))->EndInit();
			this->EcranAfficherPersonnel->ResumeLayout(false);
			this->EcranAfficherPersonnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAfficherPersonnel))->EndInit();
			this->EcranAjoutPersonnel->ResumeLayout(false);
			this->EcranAjoutPersonnel->PerformLayout();
			this->EcranAjoutClient->ResumeLayout(false);
			this->EcranAjoutClient->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/// variables venant des classes 
		CL_CAD connexion;
		CLclient client1;
		CLpersonnel personnel1;
		CLarticle article1;
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
		DataGridModifierClient->DataSource = client1.afficherModifier(textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void ClickOngletAfficherClient(System::Object^ sender, System::EventArgs^ e) {
		this->EcranAfficherClient->BringToFront();
		DataGridAfficherClient->DataSource = client1.afficher( "", "", textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void ClickChercherModifierClient(System::Object^ sender, System::EventArgs^ e) {

		DataGridModifierClient->DataSource = client1.recherchmodifier(TextBoxNomModifierClient->Text, TextBoxPrenomModifierClient->Text, textBox1->Text, textBox2->Text, textBox3->Text);
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

	private: System::Void buttonAjoutPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		personnel1.creer(textBoxNomPersonnel1->Text, textBoxPrenomPersonnel1->Text, textBoxSuperieur1->Text, textBoxAnnePersonnel1->Text + "-" + textBoxMoisPersonnel1->Text + "-" + textBoxJourPersonnel1->Text, textBoxAdressePersonnel1->Text, textBoxVillePersonnel1->Text, textBoxCpPersonnel1->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Personnel ajouté !");
	}

	private: System::Void ClickModifNomModificationClient(System::Object^ sender, System::EventArgs^ e) {
		client1.modifierNom(TextBoxIDModificationClient->Text, TextBoxModifNomModificationClient->Text, TextBoxModifPrenomModificationClient->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Nom et prénom du client modifié !");

		this->TextBoxIDModificationClient->Text = "";
		this->TextBoxModifNomModificationClient->Text = "";
		this->TextBoxModifPrenomModificationClient->Text = "";
	}
	private: System::Void ClickAfficherModificationClient(System::Object^ sender, System::EventArgs^ e) {
	DataGridModifierClient->DataSource = client1.afficherModifier(textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void ClickOngletAjoutPersonnel(System::Object^ sender, System::EventArgs^ e) {
		this->EcranAjoutPersonnel->BringToFront();
	}
	private: System::Void OngletAfficherPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->EcranAfficherPersonnel->BringToFront();
		dataGridViewAfficherPersonnel->DataSource = personnel1.afficher("", "", textBox1->Text, textBox2->Text, textBox3->Text);
	}
    private: System::Void buttonRechercherAfficherPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridViewAfficherPersonnel->DataSource = personnel1.afficher(textBoxNomAfficherPersonnel->Text, textBoxPrenomAfficherPersonnel->Text, textBox1->Text, textBox2->Text, textBox3->Text);
    }

	private: System::Void ClickOngletAjoutArticle(System::Object^ sender, System::EventArgs^ e) {
		this->EcranAjoutArticle->BringToFront();
	}
	private: System::Void ClickAjoutCategAjoutArticle(System::Object^ sender, System::EventArgs^ e) {
		article1.creerCateg(TextBoxAjoutCategAjoutArticle->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Catégorie ajoutée !");
	}
};
}
