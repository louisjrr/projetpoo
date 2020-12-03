#pragma once
#include "CL_CAD.h"
#include "CLclient.h"
#include "CLpersonnel.h"
#include "CLarticle.h"
#include "CLcommande.h"

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
	private: System::Windows::Forms::ToolStripMenuItem^ OngletPasserCommande;

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
	private: System::Windows::Forms::TextBox^ TextBoxModifAdrADRFacClient;
	private: System::Windows::Forms::TextBox^ TextBoxModifVilleADRFacClient;
	private: System::Windows::Forms::TextBox^ TextBoxModifCpADRFacClient;




	private: System::Windows::Forms::TextBox^ TextBoxModifCpADRLivClient;

	private: System::Windows::Forms::TextBox^ TextBoxModifAdrADRLivClient;
	private: System::Windows::Forms::TextBox^ TextBoxModifVilleADRLivClient;


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
	private: System::Windows::Forms::DataGridView^ DataGridCategAjoutArticle;
	private: System::Windows::Forms::Panel^ EcranSuprimerArticle;
	private: System::Windows::Forms::Button^ ButtonIDSupprimerArticle;

	private: System::Windows::Forms::TextBox^ TextBoxIDSupprimerArticle;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ DataGridSupprimerArticle;

	private: System::Windows::Forms::Button^ ButtonRecherchSupprimerArticle;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ TextBoxRecherchSupprimerArticle;
	private: System::Windows::Forms::Panel^ EcranPasserCommande;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBoxPrenomPasserCommande;

	private: System::Windows::Forms::TextBox^ textBoxNomPasserCommande;
	private: System::Windows::Forms::Label^ labelPrenomPasserCommande;
	private: System::Windows::Forms::Label^ labelNomPasserCommande;
	private: System::Windows::Forms::Button^ buttonValiderPasserCommande;





	private: System::Windows::Forms::Panel^ EcranModifierArticle;
	private: System::Windows::Forms::Button^ ButtonAfficherModifierArticle;
	private: System::Windows::Forms::Button^ ButtonStockModifierArticle;


	private: System::Windows::Forms::Button^ ButtonPrixModifierArticle;

	private: System::Windows::Forms::Button^ ButtonNomModifierArticle;
	private: System::Windows::Forms::TextBox^ TextBoxIDModifierArticle;



	private: System::Windows::Forms::Label^ label13;











	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ TextBoxModifTVAModifierArticle;


	private: System::Windows::Forms::TextBox^ TextBoxModifPrixModifierArticle;

	private: System::Windows::Forms::TextBox^ TextBoxModifCategModifierArticle;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ TextBoxModifNomModifierArticle;

	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::DataGridView^ DataGridModifierArticle;

	private: System::Windows::Forms::Button^ ButtonRecherchModifierArticle;

	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ TextBoxRecherchModifierArticle;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ TextBoxModifSeuilModifierArticle;

	private: System::Windows::Forms::TextBox^ TextBoxModifStockModifierArticle;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ EcranAfficherArticle;
	private: System::Windows::Forms::DataGridView^ DataGridAfficherArticle;
	private: System::Windows::Forms::TextBox^ TextBoxNomAfficherArticle;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ ButtonRecherchAfficherArticle;
	private: System::Windows::Forms::Label^ labelDesignationPasserCommande;
	private: System::Windows::Forms::TextBox^ textBoxDesignationPasserCommande;
	private: System::Windows::Forms::TextBox^ textBoxQtePasserCommande;
	private: System::Windows::Forms::Label^ labelQtePasserCommande;
	private: System::Windows::Forms::TextBox^ textBoxMoisLivraisonPasserCommande;
	private: System::Windows::Forms::TextBox^ textBoxJourLivraisonPasserCommande;
	private: System::Windows::Forms::TextBox^ textBoxAnneLivraisonPasserCommande;
	private: System::Windows::Forms::Label^ labelAnneePasserCommande;

	private: System::Windows::Forms::Label^ labelMoisPasserCommande;

	private: System::Windows::Forms::Label^ labelJourPasserCommande;

	private: System::Windows::Forms::Label^ labelDateLivraisonPasserCommande;
	private: System::Windows::Forms::TextBox^ textBoxMoisDateSoldePasserCommande;

	private: System::Windows::Forms::TextBox^ textBoxMoisDatePaiementPasserCommande;

	private: System::Windows::Forms::TextBox^ textBoxMoisDateEmissionPasserCommande;
	private: System::Windows::Forms::TextBox^ textBoxJourDateSoldePasserCommande;


	private: System::Windows::Forms::TextBox^ textBoxJourDatePaiementPasserCommande;

	private: System::Windows::Forms::TextBox^ textBoxJourDateEmissionPasserCommande;
	private: System::Windows::Forms::TextBox^ textBoxAnneeDateSoldePasserCommande;


	private: System::Windows::Forms::TextBox^ textBoxAnneeDatePaiementPasserCommande;

	private: System::Windows::Forms::TextBox^ textBoxAnneDateEmissionPasserCommande;
	private: System::Windows::Forms::Label^ labelDateSoldePasserCommande;


	private: System::Windows::Forms::Label^ labelDatePaiementPasserCommande;

	private: System::Windows::Forms::Label^ labelDateEmissionPasserCommande;




































































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
			this->EcranPasserCommande = (gcnew System::Windows::Forms::Panel());
			this->labelDateSoldePasserCommande = (gcnew System::Windows::Forms::Label());
			this->labelDatePaiementPasserCommande = (gcnew System::Windows::Forms::Label());
			this->labelDateEmissionPasserCommande = (gcnew System::Windows::Forms::Label());
			this->textBoxAnneeDateSoldePasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAnneeDatePaiementPasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAnneDateEmissionPasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMoisDateSoldePasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMoisDatePaiementPasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMoisDateEmissionPasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxJourDateSoldePasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxJourDatePaiementPasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxJourDateEmissionPasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->labelAnneePasserCommande = (gcnew System::Windows::Forms::Label());
			this->labelMoisPasserCommande = (gcnew System::Windows::Forms::Label());
			this->labelJourPasserCommande = (gcnew System::Windows::Forms::Label());
			this->labelDateLivraisonPasserCommande = (gcnew System::Windows::Forms::Label());
			this->textBoxMoisLivraisonPasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxJourLivraisonPasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAnneLivraisonPasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->labelQtePasserCommande = (gcnew System::Windows::Forms::Label());
			this->textBoxQtePasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->labelDesignationPasserCommande = (gcnew System::Windows::Forms::Label());
			this->textBoxDesignationPasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBoxPrenomPasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomPasserCommande = (gcnew System::Windows::Forms::TextBox());
			this->labelPrenomPasserCommande = (gcnew System::Windows::Forms::Label());
			this->labelNomPasserCommande = (gcnew System::Windows::Forms::Label());
			this->buttonValiderPasserCommande = (gcnew System::Windows::Forms::Button());
			this->EcranAfficherArticle = (gcnew System::Windows::Forms::Panel());
			this->DataGridAfficherArticle = (gcnew System::Windows::Forms::DataGridView());
			this->TextBoxNomAfficherArticle = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->ButtonRecherchAfficherArticle = (gcnew System::Windows::Forms::Button());
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
			this->TextBoxModifAdrADRFacClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxModifVilleADRFacClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxModifCpADRFacClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxModifCpADRLivClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxModifAdrADRLivClient = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxModifVilleADRLivClient = (gcnew System::Windows::Forms::TextBox());
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
			this->EcranModifierArticle = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->TextBoxModifSeuilModifierArticle = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxModifStockModifierArticle = (gcnew System::Windows::Forms::TextBox());
			this->ButtonAfficherModifierArticle = (gcnew System::Windows::Forms::Button());
			this->ButtonStockModifierArticle = (gcnew System::Windows::Forms::Button());
			this->ButtonPrixModifierArticle = (gcnew System::Windows::Forms::Button());
			this->ButtonNomModifierArticle = (gcnew System::Windows::Forms::Button());
			this->TextBoxIDModifierArticle = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->TextBoxModifTVAModifierArticle = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxModifPrixModifierArticle = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxModifCategModifierArticle = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->TextBoxModifNomModifierArticle = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->DataGridModifierArticle = (gcnew System::Windows::Forms::DataGridView());
			this->ButtonRecherchModifierArticle = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->TextBoxRecherchModifierArticle = (gcnew System::Windows::Forms::TextBox());
			this->EcranAjoutArticle = (gcnew System::Windows::Forms::Panel());
			this->DataGridCategAjoutArticle = (gcnew System::Windows::Forms::DataGridView());
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
			this->EcranVide = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
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
			this->OngletPasserCommande = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletModifierCommande = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletSupprimerCommande = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OngletAfficherCommande = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->EcranSuprimerArticle = (gcnew System::Windows::Forms::Panel());
			this->ButtonIDSupprimerArticle = (gcnew System::Windows::Forms::Button());
			this->TextBoxIDSupprimerArticle = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->DataGridSupprimerArticle = (gcnew System::Windows::Forms::DataGridView());
			this->ButtonRecherchSupprimerArticle = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->TextBoxRecherchSupprimerArticle = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->EcranConnexion->SuspendLayout();
			this->EcranPasserCommande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->EcranAfficherArticle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridAfficherArticle))->BeginInit();
			this->EcranModifierClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridModifierClient))->BeginInit();
			this->EcranModifierArticle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridModifierArticle))->BeginInit();
			this->EcranAjoutArticle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridCategAjoutArticle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridArticleAjoutArticle))->BeginInit();
			this->EcranSupprimerClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridSupprimerClient))->BeginInit();
			this->EcranIdle->SuspendLayout();
			this->EcranVide->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->MenuOnglet->SuspendLayout();
			this->EcranAfficherClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridAfficherClient))->BeginInit();
			this->EcranAfficherPersonnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAfficherPersonnel))->BeginInit();
			this->EcranAjoutPersonnel->SuspendLayout();
			this->EcranAjoutClient->SuspendLayout();
			this->EcranSuprimerArticle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridSupprimerArticle))->BeginInit();
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
			this->textBox1->Location = System::Drawing::Point(281, 184);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(199, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(281, 228);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(199, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"user";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(281, 269);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(199, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"User@viacesi27";
			// 
			// LabelUserConnexion
			// 
			this->LabelUserConnexion->AutoSize = true;
			this->LabelUserConnexion->Location = System::Drawing::Point(222, 231);
			this->LabelUserConnexion->Name = L"LabelUserConnexion";
			this->LabelUserConnexion->Size = System::Drawing::Size(53, 13);
			this->LabelUserConnexion->TabIndex = 6;
			this->LabelUserConnexion->Text = L"Utilisateur";
			// 
			// LabelMdpConnexion
			// 
			this->LabelMdpConnexion->AutoSize = true;
			this->LabelMdpConnexion->Location = System::Drawing::Point(207, 272);
			this->LabelMdpConnexion->Name = L"LabelMdpConnexion";
			this->LabelMdpConnexion->Size = System::Drawing::Size(71, 13);
			this->LabelMdpConnexion->TabIndex = 7;
			this->LabelMdpConnexion->Text = L"Mot de passe";
			// 
			// LabelIpConnexion
			// 
			this->LabelIpConnexion->AutoSize = true;
			this->LabelIpConnexion->Location = System::Drawing::Point(261, 186);
			this->LabelIpConnexion->Name = L"LabelIpConnexion";
			this->LabelIpConnexion->Size = System::Drawing::Size(17, 13);
			this->LabelIpConnexion->TabIndex = 1;
			this->LabelIpConnexion->Text = L"IP";
			// 
			// ButtonConnexion
			// 
			this->ButtonConnexion->Location = System::Drawing::Point(417, 438);
			this->ButtonConnexion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->pictureBox1->Location = System::Drawing::Point(541, 259);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(468, 326);
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
			this->EcranConnexion->Location = System::Drawing::Point(0, 0);
			this->EcranConnexion->Name = L"EcranConnexion";
			this->EcranConnexion->Size = System::Drawing::Size(1013, 600);
			this->EcranConnexion->TabIndex = 18;
			// 
			// EcranPasserCommande
			// 
			this->EcranPasserCommande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranPasserCommande->AutoSize = true;
			this->EcranPasserCommande->Controls->Add(this->labelDateSoldePasserCommande);
			this->EcranPasserCommande->Controls->Add(this->labelDatePaiementPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->labelDateEmissionPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxAnneeDateSoldePasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxAnneeDatePaiementPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxAnneDateEmissionPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxMoisDateSoldePasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxMoisDatePaiementPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxMoisDateEmissionPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxJourDateSoldePasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxJourDatePaiementPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxJourDateEmissionPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->labelAnneePasserCommande);
			this->EcranPasserCommande->Controls->Add(this->labelMoisPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->labelJourPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->labelDateLivraisonPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxMoisLivraisonPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxJourLivraisonPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxAnneLivraisonPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->labelQtePasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxQtePasserCommande);
			this->EcranPasserCommande->Controls->Add(this->labelDesignationPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxDesignationPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->dataGridView1);
			this->EcranPasserCommande->Controls->Add(this->textBoxPrenomPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->textBoxNomPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->labelPrenomPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->labelNomPasserCommande);
			this->EcranPasserCommande->Controls->Add(this->buttonValiderPasserCommande);
			this->EcranPasserCommande->Location = System::Drawing::Point(0, 27);
			this->EcranPasserCommande->Name = L"EcranPasserCommande";
			this->EcranPasserCommande->Size = System::Drawing::Size(1000, 600);
			this->EcranPasserCommande->TabIndex = 39;
			// 
			// labelDateSoldePasserCommande
			// 
			this->labelDateSoldePasserCommande->AutoSize = true;
			this->labelDateSoldePasserCommande->Location = System::Drawing::Point(57, 281);
			this->labelDateSoldePasserCommande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDateSoldePasserCommande->Name = L"labelDateSoldePasserCommande";
			this->labelDateSoldePasserCommande->Size = System::Drawing::Size(60, 13);
			this->labelDateSoldePasserCommande->TabIndex = 49;
			this->labelDateSoldePasserCommande->Text = L"Date Solde";
			// 
			// labelDatePaiementPasserCommande
			// 
			this->labelDatePaiementPasserCommande->AutoSize = true;
			this->labelDatePaiementPasserCommande->Location = System::Drawing::Point(26, 249);
			this->labelDatePaiementPasserCommande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDatePaiementPasserCommande->Name = L"labelDatePaiementPasserCommande";
			this->labelDatePaiementPasserCommande->Size = System::Drawing::Size(91, 13);
			this->labelDatePaiementPasserCommande->TabIndex = 48;
			this->labelDatePaiementPasserCommande->Text = L"Date de paiement";
			// 
			// labelDateEmissionPasserCommande
			// 
			this->labelDateEmissionPasserCommande->AutoSize = true;
			this->labelDateEmissionPasserCommande->Location = System::Drawing::Point(34, 219);
			this->labelDateEmissionPasserCommande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDateEmissionPasserCommande->Name = L"labelDateEmissionPasserCommande";
			this->labelDateEmissionPasserCommande->Size = System::Drawing::Size(81, 13);
			this->labelDateEmissionPasserCommande->TabIndex = 47;
			this->labelDateEmissionPasserCommande->Text = L"Date d\'émission";
			// 
			// textBoxAnneeDateSoldePasserCommande
			// 
			this->textBoxAnneeDateSoldePasserCommande->Location = System::Drawing::Point(220, 279);
			this->textBoxAnneeDateSoldePasserCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxAnneeDateSoldePasserCommande->Name = L"textBoxAnneeDateSoldePasserCommande";
			this->textBoxAnneeDateSoldePasserCommande->Size = System::Drawing::Size(56, 20);
			this->textBoxAnneeDateSoldePasserCommande->TabIndex = 46;
			// 
			// textBoxAnneeDatePaiementPasserCommande
			// 
			this->textBoxAnneeDatePaiementPasserCommande->Location = System::Drawing::Point(220, 247);
			this->textBoxAnneeDatePaiementPasserCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxAnneeDatePaiementPasserCommande->Name = L"textBoxAnneeDatePaiementPasserCommande";
			this->textBoxAnneeDatePaiementPasserCommande->Size = System::Drawing::Size(56, 20);
			this->textBoxAnneeDatePaiementPasserCommande->TabIndex = 45;
			// 
			// textBoxAnneDateEmissionPasserCommande
			// 
			this->textBoxAnneDateEmissionPasserCommande->Location = System::Drawing::Point(220, 216);
			this->textBoxAnneDateEmissionPasserCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxAnneDateEmissionPasserCommande->Name = L"textBoxAnneDateEmissionPasserCommande";
			this->textBoxAnneDateEmissionPasserCommande->Size = System::Drawing::Size(56, 20);
			this->textBoxAnneDateEmissionPasserCommande->TabIndex = 44;
			// 
			// textBoxMoisDateSoldePasserCommande
			// 
			this->textBoxMoisDateSoldePasserCommande->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(12) {
				L"01",
					L"02", L"03", L"04", L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12"
			});
			this->textBoxMoisDateSoldePasserCommande->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBoxMoisDateSoldePasserCommande->Location = System::Drawing::Point(175, 279);
			this->textBoxMoisDateSoldePasserCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxMoisDateSoldePasserCommande->Name = L"textBoxMoisDateSoldePasserCommande";
			this->textBoxMoisDateSoldePasserCommande->Size = System::Drawing::Size(26, 20);
			this->textBoxMoisDateSoldePasserCommande->TabIndex = 43;
			// 
			// textBoxMoisDatePaiementPasserCommande
			// 
			this->textBoxMoisDatePaiementPasserCommande->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(12) {
				L"01",
					L"02", L"03", L"04", L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12"
			});
			this->textBoxMoisDatePaiementPasserCommande->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBoxMoisDatePaiementPasserCommande->Location = System::Drawing::Point(175, 247);
			this->textBoxMoisDatePaiementPasserCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxMoisDatePaiementPasserCommande->Name = L"textBoxMoisDatePaiementPasserCommande";
			this->textBoxMoisDatePaiementPasserCommande->Size = System::Drawing::Size(26, 20);
			this->textBoxMoisDatePaiementPasserCommande->TabIndex = 42;
			// 
			// textBoxMoisDateEmissionPasserCommande
			// 
			this->textBoxMoisDateEmissionPasserCommande->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(12) {
				L"01",
					L"02", L"03", L"04", L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12"
			});
			this->textBoxMoisDateEmissionPasserCommande->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBoxMoisDateEmissionPasserCommande->Location = System::Drawing::Point(175, 216);
			this->textBoxMoisDateEmissionPasserCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxMoisDateEmissionPasserCommande->Name = L"textBoxMoisDateEmissionPasserCommande";
			this->textBoxMoisDateEmissionPasserCommande->Size = System::Drawing::Size(26, 20);
			this->textBoxMoisDateEmissionPasserCommande->TabIndex = 41;
			// 
			// textBoxJourDateSoldePasserCommande
			// 
			this->textBoxJourDateSoldePasserCommande->Location = System::Drawing::Point(126, 279);
			this->textBoxJourDateSoldePasserCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxJourDateSoldePasserCommande->Name = L"textBoxJourDateSoldePasserCommande";
			this->textBoxJourDateSoldePasserCommande->Size = System::Drawing::Size(32, 20);
			this->textBoxJourDateSoldePasserCommande->TabIndex = 40;
			// 
			// textBoxJourDatePaiementPasserCommande
			// 
			this->textBoxJourDatePaiementPasserCommande->Location = System::Drawing::Point(126, 247);
			this->textBoxJourDatePaiementPasserCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxJourDatePaiementPasserCommande->Name = L"textBoxJourDatePaiementPasserCommande";
			this->textBoxJourDatePaiementPasserCommande->Size = System::Drawing::Size(32, 20);
			this->textBoxJourDatePaiementPasserCommande->TabIndex = 39;
			// 
			// textBoxJourDateEmissionPasserCommande
			// 
			this->textBoxJourDateEmissionPasserCommande->Location = System::Drawing::Point(126, 216);
			this->textBoxJourDateEmissionPasserCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxJourDateEmissionPasserCommande->Name = L"textBoxJourDateEmissionPasserCommande";
			this->textBoxJourDateEmissionPasserCommande->Size = System::Drawing::Size(32, 20);
			this->textBoxJourDateEmissionPasserCommande->TabIndex = 38;
			// 
			// labelAnneePasserCommande
			// 
			this->labelAnneePasserCommande->AutoSize = true;
			this->labelAnneePasserCommande->Location = System::Drawing::Point(222, 167);
			this->labelAnneePasserCommande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAnneePasserCommande->Name = L"labelAnneePasserCommande";
			this->labelAnneePasserCommande->Size = System::Drawing::Size(38, 13);
			this->labelAnneePasserCommande->TabIndex = 37;
			this->labelAnneePasserCommande->Text = L"Année";
			// 
			// labelMoisPasserCommande
			// 
			this->labelMoisPasserCommande->AutoSize = true;
			this->labelMoisPasserCommande->Location = System::Drawing::Point(172, 167);
			this->labelMoisPasserCommande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMoisPasserCommande->Name = L"labelMoisPasserCommande";
			this->labelMoisPasserCommande->Size = System::Drawing::Size(29, 13);
			this->labelMoisPasserCommande->TabIndex = 36;
			this->labelMoisPasserCommande->Text = L"Mois";
			// 
			// labelJourPasserCommande
			// 
			this->labelJourPasserCommande->AutoSize = true;
			this->labelJourPasserCommande->Location = System::Drawing::Point(128, 167);
			this->labelJourPasserCommande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelJourPasserCommande->Name = L"labelJourPasserCommande";
			this->labelJourPasserCommande->Size = System::Drawing::Size(27, 13);
			this->labelJourPasserCommande->TabIndex = 35;
			this->labelJourPasserCommande->Text = L"Jour";
			// 
			// labelDateLivraisonPasserCommande
			// 
			this->labelDateLivraisonPasserCommande->AutoSize = true;
			this->labelDateLivraisonPasserCommande->Location = System::Drawing::Point(32, 188);
			this->labelDateLivraisonPasserCommande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDateLivraisonPasserCommande->Name = L"labelDateLivraisonPasserCommande";
			this->labelDateLivraisonPasserCommande->Size = System::Drawing::Size(86, 13);
			this->labelDateLivraisonPasserCommande->TabIndex = 34;
			this->labelDateLivraisonPasserCommande->Text = L"Date de livraison";
			// 
			// textBoxMoisLivraisonPasserCommande
			// 
			this->textBoxMoisLivraisonPasserCommande->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(12) {
				L"01",
					L"02", L"03", L"04", L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12"
			});
			this->textBoxMoisLivraisonPasserCommande->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBoxMoisLivraisonPasserCommande->Location = System::Drawing::Point(175, 186);
			this->textBoxMoisLivraisonPasserCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxMoisLivraisonPasserCommande->Name = L"textBoxMoisLivraisonPasserCommande";
			this->textBoxMoisLivraisonPasserCommande->Size = System::Drawing::Size(26, 20);
			this->textBoxMoisLivraisonPasserCommande->TabIndex = 33;
			// 
			// textBoxJourLivraisonPasserCommande
			// 
			this->textBoxJourLivraisonPasserCommande->Location = System::Drawing::Point(126, 186);
			this->textBoxJourLivraisonPasserCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxJourLivraisonPasserCommande->Name = L"textBoxJourLivraisonPasserCommande";
			this->textBoxJourLivraisonPasserCommande->Size = System::Drawing::Size(32, 20);
			this->textBoxJourLivraisonPasserCommande->TabIndex = 32;
			// 
			// textBoxAnneLivraisonPasserCommande
			// 
			this->textBoxAnneLivraisonPasserCommande->Location = System::Drawing::Point(220, 186);
			this->textBoxAnneLivraisonPasserCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxAnneLivraisonPasserCommande->Name = L"textBoxAnneLivraisonPasserCommande";
			this->textBoxAnneLivraisonPasserCommande->Size = System::Drawing::Size(56, 20);
			this->textBoxAnneLivraisonPasserCommande->TabIndex = 31;
			// 
			// labelQtePasserCommande
			// 
			this->labelQtePasserCommande->AutoSize = true;
			this->labelQtePasserCommande->Location = System::Drawing::Point(230, 138);
			this->labelQtePasserCommande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelQtePasserCommande->Name = L"labelQtePasserCommande";
			this->labelQtePasserCommande->Size = System::Drawing::Size(47, 13);
			this->labelQtePasserCommande->TabIndex = 30;
			this->labelQtePasserCommande->Text = L"Quantité";
			// 
			// textBoxQtePasserCommande
			// 
			this->textBoxQtePasserCommande->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(100) {
				L"1", L"2", L"3",
					L"4", L"5", L"6", L"7", L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22",
					L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40",
					L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58",
					L"59", L"60", L"61", L"62", L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76",
					L"77", L"78", L"79", L"80", L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94",
					L"95", L"96", L"97", L"98", L"99", L"100"
			});
			this->textBoxQtePasserCommande->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBoxQtePasserCommande->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxQtePasserCommande->Location = System::Drawing::Point(290, 136);
			this->textBoxQtePasserCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxQtePasserCommande->Name = L"textBoxQtePasserCommande";
			this->textBoxQtePasserCommande->Size = System::Drawing::Size(35, 20);
			this->textBoxQtePasserCommande->TabIndex = 29;
			// 
			// labelDesignationPasserCommande
			// 
			this->labelDesignationPasserCommande->AutoSize = true;
			this->labelDesignationPasserCommande->Location = System::Drawing::Point(53, 136);
			this->labelDesignationPasserCommande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDesignationPasserCommande->Name = L"labelDesignationPasserCommande";
			this->labelDesignationPasserCommande->Size = System::Drawing::Size(63, 13);
			this->labelDesignationPasserCommande->TabIndex = 28;
			this->labelDesignationPasserCommande->Text = L"Designation";
			// 
			// textBoxDesignationPasserCommande
			// 
			this->textBoxDesignationPasserCommande->Location = System::Drawing::Point(126, 136);
			this->textBoxDesignationPasserCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxDesignationPasserCommande->Name = L"textBoxDesignationPasserCommande";
			this->textBoxDesignationPasserCommande->Size = System::Drawing::Size(100, 20);
			this->textBoxDesignationPasserCommande->TabIndex = 27;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(352, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(500, 304);
			this->dataGridView1->TabIndex = 4;
			// 
			// textBoxPrenomPasserCommande
			// 
			this->textBoxPrenomPasserCommande->Location = System::Drawing::Point(126, 101);
			this->textBoxPrenomPasserCommande->Name = L"textBoxPrenomPasserCommande";
			this->textBoxPrenomPasserCommande->Size = System::Drawing::Size(100, 20);
			this->textBoxPrenomPasserCommande->TabIndex = 3;
			// 
			// textBoxNomPasserCommande
			// 
			this->textBoxNomPasserCommande->Location = System::Drawing::Point(126, 69);
			this->textBoxNomPasserCommande->Name = L"textBoxNomPasserCommande";
			this->textBoxNomPasserCommande->Size = System::Drawing::Size(100, 20);
			this->textBoxNomPasserCommande->TabIndex = 2;
			// 
			// labelPrenomPasserCommande
			// 
			this->labelPrenomPasserCommande->AutoSize = true;
			this->labelPrenomPasserCommande->Location = System::Drawing::Point(73, 103);
			this->labelPrenomPasserCommande->Name = L"labelPrenomPasserCommande";
			this->labelPrenomPasserCommande->Size = System::Drawing::Size(43, 13);
			this->labelPrenomPasserCommande->TabIndex = 1;
			this->labelPrenomPasserCommande->Text = L"Prénom";
			// 
			// labelNomPasserCommande
			// 
			this->labelNomPasserCommande->AutoSize = true;
			this->labelNomPasserCommande->Location = System::Drawing::Point(80, 72);
			this->labelNomPasserCommande->Name = L"labelNomPasserCommande";
			this->labelNomPasserCommande->Size = System::Drawing::Size(29, 13);
			this->labelNomPasserCommande->TabIndex = 0;
			this->labelNomPasserCommande->Text = L"Nom";
			// 
			// buttonValiderPasserCommande
			// 
			this->buttonValiderPasserCommande->Location = System::Drawing::Point(140, 395);
			this->buttonValiderPasserCommande->Name = L"buttonValiderPasserCommande";
			this->buttonValiderPasserCommande->Size = System::Drawing::Size(95, 38);
			this->buttonValiderPasserCommande->TabIndex = 26;
			this->buttonValiderPasserCommande->Text = L"Valider la commande";
			this->buttonValiderPasserCommande->UseVisualStyleBackColor = true;
			this->buttonValiderPasserCommande->Click += gcnew System::EventHandler(this, &MyForm::buttonValiderPasserCommande_Click);
			// 
			// EcranAfficherArticle
			// 
			this->EcranAfficherArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranAfficherArticle->AutoSize = true;
			this->EcranAfficherArticle->Controls->Add(this->DataGridAfficherArticle);
			this->EcranAfficherArticle->Controls->Add(this->TextBoxNomAfficherArticle);
			this->EcranAfficherArticle->Controls->Add(this->label17);
			this->EcranAfficherArticle->Controls->Add(this->ButtonRecherchAfficherArticle);
			this->EcranAfficherArticle->Location = System::Drawing::Point(0, 27);
			this->EcranAfficherArticle->Name = L"EcranAfficherArticle";
			this->EcranAfficherArticle->Size = System::Drawing::Size(1000, 600);
			this->EcranAfficherArticle->TabIndex = 41;
			// 
			// DataGridAfficherArticle
			// 
			this->DataGridAfficherArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridAfficherArticle->Location = System::Drawing::Point(268, 46);
			this->DataGridAfficherArticle->Name = L"DataGridAfficherArticle";
			this->DataGridAfficherArticle->RowHeadersWidth = 51;
			this->DataGridAfficherArticle->Size = System::Drawing::Size(672, 398);
			this->DataGridAfficherArticle->TabIndex = 4;
			// 
			// TextBoxNomAfficherArticle
			// 
			this->TextBoxNomAfficherArticle->Location = System::Drawing::Point(93, 140);
			this->TextBoxNomAfficherArticle->Name = L"TextBoxNomAfficherArticle";
			this->TextBoxNomAfficherArticle->Size = System::Drawing::Size(100, 20);
			this->TextBoxNomAfficherArticle->TabIndex = 2;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(113, 117);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(63, 13);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Désignation";
			// 
			// ButtonRecherchAfficherArticle
			// 
			this->ButtonRecherchAfficherArticle->Location = System::Drawing::Point(96, 176);
			this->ButtonRecherchAfficherArticle->Name = L"ButtonRecherchAfficherArticle";
			this->ButtonRecherchAfficherArticle->Size = System::Drawing::Size(95, 38);
			this->ButtonRecherchAfficherArticle->TabIndex = 26;
			this->ButtonRecherchAfficherArticle->Text = L"Rechercher";
			this->ButtonRecherchAfficherArticle->UseVisualStyleBackColor = true;
			this->ButtonRecherchAfficherArticle->Click += gcnew System::EventHandler(this, &MyForm::ClickRecherchAfficherArticle);
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
			this->EcranModifierClient->Controls->Add(this->TextBoxModifAdrADRFacClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxModifVilleADRFacClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxModifCpADRFacClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxModifCpADRLivClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxModifAdrADRLivClient);
			this->EcranModifierClient->Controls->Add(this->TextBoxModifVilleADRLivClient);
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
			this->EcranModifierClient->Location = System::Drawing::Point(0, 27);
			this->EcranModifierClient->Name = L"EcranModifierClient";
			this->EcranModifierClient->Size = System::Drawing::Size(1000, 600);
			this->EcranModifierClient->TabIndex = 34;
			// 
			// ButtonAfficherModificationClient
			// 
			this->ButtonAfficherModificationClient->Location = System::Drawing::Point(127, 44);
			this->ButtonAfficherModificationClient->Name = L"ButtonAfficherModificationClient";
			this->ButtonAfficherModificationClient->Size = System::Drawing::Size(88, 23);
			this->ButtonAfficherModificationClient->TabIndex = 62;
			this->ButtonAfficherModificationClient->Text = L"Afficher tout";
			this->ButtonAfficherModificationClient->UseVisualStyleBackColor = true;
			this->ButtonAfficherModificationClient->Click += gcnew System::EventHandler(this, &MyForm::ClickAfficherModificationClient);
			// 
			// ButtonModifADRFacModificationClient
			// 
			this->ButtonModifADRFacModificationClient->Location = System::Drawing::Point(816, 488);
			this->ButtonModifADRFacModificationClient->Name = L"ButtonModifADRFacModificationClient";
			this->ButtonModifADRFacModificationClient->Size = System::Drawing::Size(159, 23);
			this->ButtonModifADRFacModificationClient->TabIndex = 61;
			this->ButtonModifADRFacModificationClient->Text = L"Valide l\'adresse de fact";
			this->ButtonModifADRFacModificationClient->UseVisualStyleBackColor = true;
			this->ButtonModifADRFacModificationClient->Click += gcnew System::EventHandler(this, &MyForm::ClickModifADRFacModifierClient);
			// 
			// ButtonModifADRLivModificationClient
			// 
			this->ButtonModifADRLivModificationClient->Location = System::Drawing::Point(816, 455);
			this->ButtonModifADRLivModificationClient->Name = L"ButtonModifADRLivModificationClient";
			this->ButtonModifADRLivModificationClient->Size = System::Drawing::Size(159, 23);
			this->ButtonModifADRLivModificationClient->TabIndex = 60;
			this->ButtonModifADRLivModificationClient->Text = L"Valider l\'adresse de livr";
			this->ButtonModifADRLivModificationClient->UseVisualStyleBackColor = true;
			this->ButtonModifADRLivModificationClient->Click += gcnew System::EventHandler(this, &MyForm::ClickModifADRLivModifierCLient);
			// 
			// ButtonModifNaissModificationClient
			// 
			this->ButtonModifNaissModificationClient->Location = System::Drawing::Point(816, 408);
			this->ButtonModifNaissModificationClient->Name = L"ButtonModifNaissModificationClient";
			this->ButtonModifNaissModificationClient->Size = System::Drawing::Size(159, 23);
			this->ButtonModifNaissModificationClient->TabIndex = 59;
			this->ButtonModifNaissModificationClient->Text = L"Valider date de naissance";
			this->ButtonModifNaissModificationClient->UseVisualStyleBackColor = true;
			this->ButtonModifNaissModificationClient->Click += gcnew System::EventHandler(this, &MyForm::ClickModifNaissModifierClient);
			// 
			// ButtonModifNomModificationClient
			// 
			this->ButtonModifNomModificationClient->Location = System::Drawing::Point(816, 378);
			this->ButtonModifNomModificationClient->Name = L"ButtonModifNomModificationClient";
			this->ButtonModifNomModificationClient->Size = System::Drawing::Size(159, 23);
			this->ButtonModifNomModificationClient->TabIndex = 58;
			this->ButtonModifNomModificationClient->Text = L"Valider nom et prénom";
			this->ButtonModifNomModificationClient->UseVisualStyleBackColor = true;
			this->ButtonModifNomModificationClient->Click += gcnew System::EventHandler(this, &MyForm::ClickModifNomModificationClient);
			// 
			// TextBoxIDModificationClient
			// 
			this->TextBoxIDModificationClient->Location = System::Drawing::Point(92, 455);
			this->TextBoxIDModificationClient->Name = L"TextBoxIDModificationClient";
			this->TextBoxIDModificationClient->Size = System::Drawing::Size(40, 20);
			this->TextBoxIDModificationClient->TabIndex = 56;
			// 
			// LabelIDModificationClient
			// 
			this->LabelIDModificationClient->AutoSize = true;
			this->LabelIDModificationClient->Location = System::Drawing::Point(46, 435);
			this->LabelIDModificationClient->Name = L"LabelIDModificationClient";
			this->LabelIDModificationClient->Size = System::Drawing::Size(146, 13);
			this->LabelIDModificationClient->TabIndex = 55;
			this->LabelIDModificationClient->Text = L"Entrez l\'ID du client à modifier";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(737, 444);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 54;
			this->label1->Text = L"CP";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(611, 444);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 53;
			this->label2->Text = L"Ville";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(429, 444);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Adresse";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(242, 491);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 13);
			this->label4->TabIndex = 51;
			this->label4->Text = L"Adresse de facturation";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(254, 465);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 13);
			this->label5->TabIndex = 50;
			this->label5->Text = L"Adresse de livraison";
			// 
			// TextBoxModifAdrADRFacClient
			// 
			this->TextBoxModifAdrADRFacClient->Location = System::Drawing::Point(361, 488);
			this->TextBoxModifAdrADRFacClient->Name = L"TextBoxModifAdrADRFacClient";
			this->TextBoxModifAdrADRFacClient->Size = System::Drawing::Size(187, 20);
			this->TextBoxModifAdrADRFacClient->TabIndex = 47;
			// 
			// TextBoxModifVilleADRFacClient
			// 
			this->TextBoxModifVilleADRFacClient->Location = System::Drawing::Point(554, 488);
			this->TextBoxModifVilleADRFacClient->Name = L"TextBoxModifVilleADRFacClient";
			this->TextBoxModifVilleADRFacClient->Size = System::Drawing::Size(150, 20);
			this->TextBoxModifVilleADRFacClient->TabIndex = 48;
			// 
			// TextBoxModifCpADRFacClient
			// 
			this->TextBoxModifCpADRFacClient->Location = System::Drawing::Point(710, 488);
			this->TextBoxModifCpADRFacClient->Name = L"TextBoxModifCpADRFacClient";
			this->TextBoxModifCpADRFacClient->Size = System::Drawing::Size(70, 20);
			this->TextBoxModifCpADRFacClient->TabIndex = 49;
			// 
			// TextBoxModifCpADRLivClient
			// 
			this->TextBoxModifCpADRLivClient->Location = System::Drawing::Point(710, 462);
			this->TextBoxModifCpADRLivClient->Name = L"TextBoxModifCpADRLivClient";
			this->TextBoxModifCpADRLivClient->Size = System::Drawing::Size(70, 20);
			this->TextBoxModifCpADRLivClient->TabIndex = 46;
			// 
			// TextBoxModifAdrADRLivClient
			// 
			this->TextBoxModifAdrADRLivClient->Location = System::Drawing::Point(361, 462);
			this->TextBoxModifAdrADRLivClient->Name = L"TextBoxModifAdrADRLivClient";
			this->TextBoxModifAdrADRLivClient->Size = System::Drawing::Size(187, 20);
			this->TextBoxModifAdrADRLivClient->TabIndex = 44;
			// 
			// TextBoxModifVilleADRLivClient
			// 
			this->TextBoxModifVilleADRLivClient->Location = System::Drawing::Point(554, 462);
			this->TextBoxModifVilleADRLivClient->Name = L"TextBoxModifVilleADRLivClient";
			this->TextBoxModifVilleADRLivClient->Size = System::Drawing::Size(150, 20);
			this->TextBoxModifVilleADRLivClient->TabIndex = 45;
			// 
			// LabelModifAnModificationClient
			// 
			this->LabelModifAnModificationClient->AutoSize = true;
			this->LabelModifAnModificationClient->Location = System::Drawing::Point(719, 392);
			this->LabelModifAnModificationClient->Name = L"LabelModifAnModificationClient";
			this->LabelModifAnModificationClient->Size = System::Drawing::Size(38, 13);
			this->LabelModifAnModificationClient->TabIndex = 42;
			this->LabelModifAnModificationClient->Text = L"Année";
			// 
			// LabelModifMoisModifiacationClient
			// 
			this->LabelModifMoisModifiacationClient->AutoSize = true;
			this->LabelModifMoisModifiacationClient->Location = System::Drawing::Point(673, 392);
			this->LabelModifMoisModifiacationClient->Name = L"LabelModifMoisModifiacationClient";
			this->LabelModifMoisModifiacationClient->Size = System::Drawing::Size(29, 13);
			this->LabelModifMoisModifiacationClient->TabIndex = 41;
			this->LabelModifMoisModifiacationClient->Text = L"Mois";
			// 
			// LabelModifJourModificationClient
			// 
			this->LabelModifJourModificationClient->AutoSize = true;
			this->LabelModifJourModificationClient->Location = System::Drawing::Point(633, 392);
			this->LabelModifJourModificationClient->Name = L"LabelModifJourModificationClient";
			this->LabelModifJourModificationClient->Size = System::Drawing::Size(27, 13);
			this->LabelModifJourModificationClient->TabIndex = 40;
			this->LabelModifJourModificationClient->Text = L"Jour";
			// 
			// TextBoxModifAnModificationClient
			// 
			this->TextBoxModifAnModificationClient->Location = System::Drawing::Point(710, 408);
			this->TextBoxModifAnModificationClient->Name = L"TextBoxModifAnModificationClient";
			this->TextBoxModifAnModificationClient->Size = System::Drawing::Size(52, 20);
			this->TextBoxModifAnModificationClient->TabIndex = 39;
			// 
			// TextBoxModifMoisModificationClient
			// 
			this->TextBoxModifMoisModificationClient->Location = System::Drawing::Point(669, 408);
			this->TextBoxModifMoisModificationClient->Name = L"TextBoxModifMoisModificationClient";
			this->TextBoxModifMoisModificationClient->Size = System::Drawing::Size(35, 20);
			this->TextBoxModifMoisModificationClient->TabIndex = 38;
			// 
			// TextBoxModifJourModificationClient
			// 
			this->TextBoxModifJourModificationClient->Location = System::Drawing::Point(630, 408);
			this->TextBoxModifJourModificationClient->Name = L"TextBoxModifJourModificationClient";
			this->TextBoxModifJourModificationClient->Size = System::Drawing::Size(33, 20);
			this->TextBoxModifJourModificationClient->TabIndex = 37;
			// 
			// TextBoxModifPrenomModificationClient
			// 
			this->TextBoxModifPrenomModificationClient->Location = System::Drawing::Point(491, 408);
			this->TextBoxModifPrenomModificationClient->Name = L"TextBoxModifPrenomModificationClient";
			this->TextBoxModifPrenomModificationClient->Size = System::Drawing::Size(100, 20);
			this->TextBoxModifPrenomModificationClient->TabIndex = 36;
			// 
			// LabelModifPrenomModificationClient
			// 
			this->LabelModifPrenomModificationClient->AutoSize = true;
			this->LabelModifPrenomModificationClient->Location = System::Drawing::Point(519, 392);
			this->LabelModifPrenomModificationClient->Name = L"LabelModifPrenomModificationClient";
			this->LabelModifPrenomModificationClient->Size = System::Drawing::Size(43, 13);
			this->LabelModifPrenomModificationClient->TabIndex = 35;
			this->LabelModifPrenomModificationClient->Text = L"Prenom";
			// 
			// TextBoxModifNomModificationClient
			// 
			this->TextBoxModifNomModificationClient->Location = System::Drawing::Point(376, 408);
			this->TextBoxModifNomModificationClient->Name = L"TextBoxModifNomModificationClient";
			this->TextBoxModifNomModificationClient->Size = System::Drawing::Size(100, 20);
			this->TextBoxModifNomModificationClient->TabIndex = 34;
			// 
			// LabelModifNomModificationClient
			// 
			this->LabelModifNomModificationClient->AutoSize = true;
			this->LabelModifNomModificationClient->Location = System::Drawing::Point(411, 392);
			this->LabelModifNomModificationClient->Name = L"LabelModifNomModificationClient";
			this->LabelModifNomModificationClient->Size = System::Drawing::Size(29, 13);
			this->LabelModifNomModificationClient->TabIndex = 33;
			this->LabelModifNomModificationClient->Text = L"Nom";
			// 
			// DataGridModifierClient
			// 
			this->DataGridModifierClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridModifierClient->Location = System::Drawing::Point(340, 46);
			this->DataGridModifierClient->Name = L"DataGridModifierClient";
			this->DataGridModifierClient->RowHeadersWidth = 51;
			this->DataGridModifierClient->Size = System::Drawing::Size(621, 293);
			this->DataGridModifierClient->TabIndex = 32;
			// 
			// ButtonModifierClient
			// 
			this->ButtonModifierClient->Location = System::Drawing::Point(92, 252);
			this->ButtonModifierClient->Name = L"ButtonModifierClient";
			this->ButtonModifierClient->Size = System::Drawing::Size(169, 23);
			this->ButtonModifierClient->TabIndex = 31;
			this->ButtonModifierClient->Text = L"Rechercher un client";
			this->ButtonModifierClient->UseVisualStyleBackColor = true;
			this->ButtonModifierClient->Click += gcnew System::EventHandler(this, &MyForm::ClickChercherModifierClient);
			// 
			// LabelPrenomModifierClient
			// 
			this->LabelPrenomModifierClient->AutoSize = true;
			this->LabelPrenomModifierClient->Location = System::Drawing::Point(48, 217);
			this->LabelPrenomModifierClient->Name = L"LabelPrenomModifierClient";
			this->LabelPrenomModifierClient->Size = System::Drawing::Size(43, 13);
			this->LabelPrenomModifierClient->TabIndex = 19;
			this->LabelPrenomModifierClient->Text = L"Prénom";
			// 
			// LabelNomModifierClient
			// 
			this->LabelNomModifierClient->AutoSize = true;
			this->LabelNomModifierClient->Location = System::Drawing::Point(62, 187);
			this->LabelNomModifierClient->Name = L"LabelNomModifierClient";
			this->LabelNomModifierClient->Size = System::Drawing::Size(29, 13);
			this->LabelNomModifierClient->TabIndex = 18;
			this->LabelNomModifierClient->Text = L"Nom";
			// 
			// TextBoxPrenomModifierClient
			// 
			this->TextBoxPrenomModifierClient->Location = System::Drawing::Point(97, 210);
			this->TextBoxPrenomModifierClient->Name = L"TextBoxPrenomModifierClient";
			this->TextBoxPrenomModifierClient->Size = System::Drawing::Size(150, 20);
			this->TextBoxPrenomModifierClient->TabIndex = 10;
			// 
			// TextBoxNomModifierClient
			// 
			this->TextBoxNomModifierClient->Location = System::Drawing::Point(97, 184);
			this->TextBoxNomModifierClient->Name = L"TextBoxNomModifierClient";
			this->TextBoxNomModifierClient->Size = System::Drawing::Size(150, 20);
			this->TextBoxNomModifierClient->TabIndex = 9;
			// 
			// EcranModifierArticle
			// 
			this->EcranModifierArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranModifierArticle->AutoSize = true;
			this->EcranModifierArticle->Controls->Add(this->label14);
			this->EcranModifierArticle->Controls->Add(this->label15);
			this->EcranModifierArticle->Controls->Add(this->TextBoxModifSeuilModifierArticle);
			this->EcranModifierArticle->Controls->Add(this->TextBoxModifStockModifierArticle);
			this->EcranModifierArticle->Controls->Add(this->ButtonAfficherModifierArticle);
			this->EcranModifierArticle->Controls->Add(this->ButtonStockModifierArticle);
			this->EcranModifierArticle->Controls->Add(this->ButtonPrixModifierArticle);
			this->EcranModifierArticle->Controls->Add(this->ButtonNomModifierArticle);
			this->EcranModifierArticle->Controls->Add(this->TextBoxIDModifierArticle);
			this->EcranModifierArticle->Controls->Add(this->label13);
			this->EcranModifierArticle->Controls->Add(this->label19);
			this->EcranModifierArticle->Controls->Add(this->label20);
			this->EcranModifierArticle->Controls->Add(this->TextBoxModifTVAModifierArticle);
			this->EcranModifierArticle->Controls->Add(this->TextBoxModifPrixModifierArticle);
			this->EcranModifierArticle->Controls->Add(this->TextBoxModifCategModifierArticle);
			this->EcranModifierArticle->Controls->Add(this->label22);
			this->EcranModifierArticle->Controls->Add(this->TextBoxModifNomModifierArticle);
			this->EcranModifierArticle->Controls->Add(this->label23);
			this->EcranModifierArticle->Controls->Add(this->DataGridModifierArticle);
			this->EcranModifierArticle->Controls->Add(this->ButtonRecherchModifierArticle);
			this->EcranModifierArticle->Controls->Add(this->label25);
			this->EcranModifierArticle->Controls->Add(this->TextBoxRecherchModifierArticle);
			this->EcranModifierArticle->Location = System::Drawing::Point(0, 27);
			this->EcranModifierArticle->Name = L"EcranModifierArticle";
			this->EcranModifierArticle->Size = System::Drawing::Size(1000, 600);
			this->EcranModifierArticle->TabIndex = 40;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(697, 480);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(30, 13);
			this->label14->TabIndex = 66;
			this->label14->Text = L"Seuil";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(645, 480);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(35, 13);
			this->label15->TabIndex = 65;
			this->label15->Text = L"Stock";
			// 
			// TextBoxModifSeuilModifierArticle
			// 
			this->TextBoxModifSeuilModifierArticle->Location = System::Drawing::Point(690, 497);
			this->TextBoxModifSeuilModifierArticle->Name = L"TextBoxModifSeuilModifierArticle";
			this->TextBoxModifSeuilModifierArticle->Size = System::Drawing::Size(42, 20);
			this->TextBoxModifSeuilModifierArticle->TabIndex = 64;
			// 
			// TextBoxModifStockModifierArticle
			// 
			this->TextBoxModifStockModifierArticle->Location = System::Drawing::Point(641, 497);
			this->TextBoxModifStockModifierArticle->Name = L"TextBoxModifStockModifierArticle";
			this->TextBoxModifStockModifierArticle->Size = System::Drawing::Size(43, 20);
			this->TextBoxModifStockModifierArticle->TabIndex = 63;
			// 
			// ButtonAfficherModifierArticle
			// 
			this->ButtonAfficherModifierArticle->Location = System::Drawing::Point(127, 44);
			this->ButtonAfficherModifierArticle->Name = L"ButtonAfficherModifierArticle";
			this->ButtonAfficherModifierArticle->Size = System::Drawing::Size(88, 23);
			this->ButtonAfficherModifierArticle->TabIndex = 62;
			this->ButtonAfficherModifierArticle->Text = L"Afficher tout";
			this->ButtonAfficherModifierArticle->UseVisualStyleBackColor = true;
			this->ButtonAfficherModifierArticle->Click += gcnew System::EventHandler(this, &MyForm::ClickAfficherModifierArticle);
			// 
			// ButtonStockModifierArticle
			// 
			this->ButtonStockModifierArticle->Location = System::Drawing::Point(763, 495);
			this->ButtonStockModifierArticle->Name = L"ButtonStockModifierArticle";
			this->ButtonStockModifierArticle->Size = System::Drawing::Size(187, 23);
			this->ButtonStockModifierArticle->TabIndex = 61;
			this->ButtonStockModifierArticle->Text = L"Valider stock et seuil";
			this->ButtonStockModifierArticle->UseVisualStyleBackColor = true;
			this->ButtonStockModifierArticle->Click += gcnew System::EventHandler(this, &MyForm::ClickModifStockModifierArticle);
			// 
			// ButtonPrixModifierArticle
			// 
			this->ButtonPrixModifierArticle->Location = System::Drawing::Point(763, 442);
			this->ButtonPrixModifierArticle->Name = L"ButtonPrixModifierArticle";
			this->ButtonPrixModifierArticle->Size = System::Drawing::Size(187, 23);
			this->ButtonPrixModifierArticle->TabIndex = 60;
			this->ButtonPrixModifierArticle->Text = L"Valider prixHT et TVA";
			this->ButtonPrixModifierArticle->UseVisualStyleBackColor = true;
			this->ButtonPrixModifierArticle->Click += gcnew System::EventHandler(this, &MyForm::ClickPrixModifierArticle);
			// 
			// ButtonNomModifierArticle
			// 
			this->ButtonNomModifierArticle->Location = System::Drawing::Point(763, 390);
			this->ButtonNomModifierArticle->Name = L"ButtonNomModifierArticle";
			this->ButtonNomModifierArticle->Size = System::Drawing::Size(187, 23);
			this->ButtonNomModifierArticle->TabIndex = 58;
			this->ButtonNomModifierArticle->Text = L"Valider désignation et catégorie";
			this->ButtonNomModifierArticle->UseVisualStyleBackColor = true;
			this->ButtonNomModifierArticle->Click += gcnew System::EventHandler(this, &MyForm::ClickNomModifierArticle);
			// 
			// TextBoxIDModifierArticle
			// 
			this->TextBoxIDModifierArticle->Location = System::Drawing::Point(419, 455);
			this->TextBoxIDModifierArticle->Name = L"TextBoxIDModifierArticle";
			this->TextBoxIDModifierArticle->Size = System::Drawing::Size(40, 20);
			this->TextBoxIDModifierArticle->TabIndex = 56;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(365, 435);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(153, 13);
			this->label13->TabIndex = 55;
			this->label13->Text = L"Entrez l\'ID de l\'article à modifier";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(699, 427);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(28, 13);
			this->label19->TabIndex = 42;
			this->label19->Text = L"TVA";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(647, 427);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(39, 13);
			this->label20->TabIndex = 41;
			this->label20->Text = L"PrixHT";
			// 
			// TextBoxModifTVAModifierArticle
			// 
			this->TextBoxModifTVAModifierArticle->Location = System::Drawing::Point(692, 444);
			this->TextBoxModifTVAModifierArticle->Name = L"TextBoxModifTVAModifierArticle";
			this->TextBoxModifTVAModifierArticle->Size = System::Drawing::Size(42, 20);
			this->TextBoxModifTVAModifierArticle->TabIndex = 38;
			// 
			// TextBoxModifPrixModifierArticle
			// 
			this->TextBoxModifPrixModifierArticle->Location = System::Drawing::Point(643, 444);
			this->TextBoxModifPrixModifierArticle->Name = L"TextBoxModifPrixModifierArticle";
			this->TextBoxModifPrixModifierArticle->Size = System::Drawing::Size(43, 20);
			this->TextBoxModifPrixModifierArticle->TabIndex = 37;
			// 
			// TextBoxModifCategModifierArticle
			// 
			this->TextBoxModifCategModifierArticle->Location = System::Drawing::Point(692, 392);
			this->TextBoxModifCategModifierArticle->Name = L"TextBoxModifCategModifierArticle";
			this->TextBoxModifCategModifierArticle->Size = System::Drawing::Size(38, 20);
			this->TextBoxModifCategModifierArticle->TabIndex = 36;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(687, 376);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(52, 13);
			this->label22->TabIndex = 35;
			this->label22->Text = L"Catégorie";
			// 
			// TextBoxModifNomModifierArticle
			// 
			this->TextBoxModifNomModifierArticle->Location = System::Drawing::Point(584, 391);
			this->TextBoxModifNomModifierArticle->Name = L"TextBoxModifNomModifierArticle";
			this->TextBoxModifNomModifierArticle->Size = System::Drawing::Size(100, 20);
			this->TextBoxModifNomModifierArticle->TabIndex = 34;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(602, 375);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(63, 13);
			this->label23->TabIndex = 33;
			this->label23->Text = L"Désignation";
			// 
			// DataGridModifierArticle
			// 
			this->DataGridModifierArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridModifierArticle->Location = System::Drawing::Point(340, 46);
			this->DataGridModifierArticle->Name = L"DataGridModifierArticle";
			this->DataGridModifierArticle->RowHeadersWidth = 51;
			this->DataGridModifierArticle->Size = System::Drawing::Size(621, 293);
			this->DataGridModifierArticle->TabIndex = 32;
			// 
			// ButtonRecherchModifierArticle
			// 
			this->ButtonRecherchModifierArticle->Location = System::Drawing::Point(93, 220);
			this->ButtonRecherchModifierArticle->Name = L"ButtonRecherchModifierArticle";
			this->ButtonRecherchModifierArticle->Size = System::Drawing::Size(169, 23);
			this->ButtonRecherchModifierArticle->TabIndex = 31;
			this->ButtonRecherchModifierArticle->Text = L"Rechercher un article";
			this->ButtonRecherchModifierArticle->UseVisualStyleBackColor = true;
			this->ButtonRecherchModifierArticle->Click += gcnew System::EventHandler(this, &MyForm::ClickRecherchModifierArticle);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(138, 168);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(63, 13);
			this->label25->TabIndex = 18;
			this->label25->Text = L"Désignation";
			// 
			// TextBoxRecherchModifierArticle
			// 
			this->TextBoxRecherchModifierArticle->Location = System::Drawing::Point(97, 184);
			this->TextBoxRecherchModifierArticle->Name = L"TextBoxRecherchModifierArticle";
			this->TextBoxRecherchModifierArticle->Size = System::Drawing::Size(150, 20);
			this->TextBoxRecherchModifierArticle->TabIndex = 9;
			// 
			// EcranAjoutArticle
			// 
			this->EcranAjoutArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranAjoutArticle->AutoSize = true;
			this->EcranAjoutArticle->Controls->Add(this->DataGridCategAjoutArticle);
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
			this->EcranAjoutArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->EcranAjoutArticle->Name = L"EcranAjoutArticle";
			this->EcranAjoutArticle->Size = System::Drawing::Size(1000, 600);
			this->EcranAjoutArticle->TabIndex = 37;
			// 
			// DataGridCategAjoutArticle
			// 
			this->DataGridCategAjoutArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridCategAjoutArticle->Location = System::Drawing::Point(689, 157);
			this->DataGridCategAjoutArticle->Name = L"DataGridCategAjoutArticle";
			this->DataGridCategAjoutArticle->RowHeadersWidth = 51;
			this->DataGridCategAjoutArticle->Size = System::Drawing::Size(283, 259);
			this->DataGridCategAjoutArticle->TabIndex = 41;
			// 
			// DataGridArticleAjoutArticle
			// 
			this->DataGridArticleAjoutArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridArticleAjoutArticle->Location = System::Drawing::Point(34, 152);
			this->DataGridArticleAjoutArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->DataGridArticleAjoutArticle->Name = L"DataGridArticleAjoutArticle";
			this->DataGridArticleAjoutArticle->RowHeadersWidth = 51;
			this->DataGridArticleAjoutArticle->Size = System::Drawing::Size(598, 292);
			this->DataGridArticleAjoutArticle->TabIndex = 40;
			// 
			// ButtonAjoutCategAjoutClient
			// 
			this->ButtonAjoutCategAjoutClient->Location = System::Drawing::Point(787, 468);
			this->ButtonAjoutCategAjoutClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ButtonAjoutCategAjoutClient->Name = L"ButtonAjoutCategAjoutClient";
			this->ButtonAjoutCategAjoutClient->Size = System::Drawing::Size(108, 19);
			this->ButtonAjoutCategAjoutClient->TabIndex = 39;
			this->ButtonAjoutCategAjoutClient->Text = L"Ajouter la catégorie";
			this->ButtonAjoutCategAjoutClient->UseVisualStyleBackColor = true;
			this->ButtonAjoutCategAjoutClient->Click += gcnew System::EventHandler(this, &MyForm::ClickAjoutCategAjoutArticle);
			// 
			// TextBoxAjoutCategAjoutArticle
			// 
			this->TextBoxAjoutCategAjoutArticle->Location = System::Drawing::Point(773, 444);
			this->TextBoxAjoutCategAjoutArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TextBoxAjoutCategAjoutArticle->Name = L"TextBoxAjoutCategAjoutArticle";
			this->TextBoxAjoutCategAjoutArticle->Size = System::Drawing::Size(135, 20);
			this->TextBoxAjoutCategAjoutArticle->TabIndex = 38;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(458, 67);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 13);
			this->label8->TabIndex = 37;
			this->label8->Text = L"TVA";
			// 
			// TextBoxTVAAjoutArticle
			// 
			this->TextBoxTVAAjoutArticle->Location = System::Drawing::Point(458, 82);
			this->TextBoxTVAAjoutArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TextBoxTVAAjoutArticle->Name = L"TextBoxTVAAjoutArticle";
			this->TextBoxTVAAjoutArticle->Size = System::Drawing::Size(38, 20);
			this->TextBoxTVAAjoutArticle->TabIndex = 36;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(416, 67);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(30, 13);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Seuil";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(369, 67);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Stock";
			// 
			// TextBoxPrixAjoutArticle
			// 
			this->TextBoxPrixAjoutArticle->Location = System::Drawing::Point(318, 82);
			this->TextBoxPrixAjoutArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TextBoxPrixAjoutArticle->Name = L"TextBoxPrixAjoutArticle";
			this->TextBoxPrixAjoutArticle->Size = System::Drawing::Size(41, 20);
			this->TextBoxPrixAjoutArticle->TabIndex = 33;
			// 
			// TextBoxSeuilAjoutArticle
			// 
			this->TextBoxSeuilAjoutArticle->Location = System::Drawing::Point(413, 82);
			this->TextBoxSeuilAjoutArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TextBoxSeuilAjoutArticle->Name = L"TextBoxSeuilAjoutArticle";
			this->TextBoxSeuilAjoutArticle->Size = System::Drawing::Size(38, 20);
			this->TextBoxSeuilAjoutArticle->TabIndex = 32;
			// 
			// ButtonAjoutArticle
			// 
			this->ButtonAjoutArticle->Location = System::Drawing::Point(541, 79);
			this->ButtonAjoutArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ButtonAjoutArticle->Name = L"ButtonAjoutArticle";
			this->ButtonAjoutArticle->Size = System::Drawing::Size(88, 23);
			this->ButtonAjoutArticle->TabIndex = 31;
			this->ButtonAjoutArticle->Text = L"Ajouter l\'article";
			this->ButtonAjoutArticle->UseVisualStyleBackColor = true;
			this->ButtonAjoutArticle->Click += gcnew System::EventHandler(this, &MyForm::ClickAjoutArticleAjoutArticle);
			// 
			// PrixHTC
			// 
			this->PrixHTC->AutoSize = true;
			this->PrixHTC->Location = System::Drawing::Point(320, 67);
			this->PrixHTC->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PrixHTC->Name = L"PrixHTC";
			this->PrixHTC->Size = System::Drawing::Size(39, 13);
			this->PrixHTC->TabIndex = 30;
			this->PrixHTC->Text = L"PrixHT";
			// 
			// LabelCategAjoutArticle
			// 
			this->LabelCategAjoutArticle->AutoSize = true;
			this->LabelCategAjoutArticle->Location = System::Drawing::Point(213, 67);
			this->LabelCategAjoutArticle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCategAjoutArticle->Name = L"LabelCategAjoutArticle";
			this->LabelCategAjoutArticle->Size = System::Drawing::Size(66, 13);
			this->LabelCategAjoutArticle->TabIndex = 29;
			this->LabelCategAjoutArticle->Text = L"ID Catégorie";
			// 
			// LabelNomAjoutArticle
			// 
			this->LabelNomAjoutArticle->AutoSize = true;
			this->LabelNomAjoutArticle->Location = System::Drawing::Point(101, 67);
			this->LabelNomAjoutArticle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNomAjoutArticle->Name = L"LabelNomAjoutArticle";
			this->LabelNomAjoutArticle->Size = System::Drawing::Size(63, 13);
			this->LabelNomAjoutArticle->TabIndex = 28;
			this->LabelNomAjoutArticle->Text = L"Désignation";
			// 
			// TextBoxStockAjoutArticle
			// 
			this->TextBoxStockAjoutArticle->Location = System::Drawing::Point(366, 82);
			this->TextBoxStockAjoutArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TextBoxStockAjoutArticle->Name = L"TextBoxStockAjoutArticle";
			this->TextBoxStockAjoutArticle->Size = System::Drawing::Size(38, 20);
			this->TextBoxStockAjoutArticle->TabIndex = 14;
			// 
			// TextBoxNomAjoutArticle
			// 
			this->TextBoxNomAjoutArticle->Location = System::Drawing::Point(93, 82);
			this->TextBoxNomAjoutArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TextBoxNomAjoutArticle->Name = L"TextBoxNomAjoutArticle";
			this->TextBoxNomAjoutArticle->Size = System::Drawing::Size(98, 20);
			this->TextBoxNomAjoutArticle->TabIndex = 12;
			// 
			// TextBoxCategAjoutArticle
			// 
			this->TextBoxCategAjoutArticle->Location = System::Drawing::Point(203, 82);
			this->TextBoxCategAjoutArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TextBoxCategAjoutArticle->Name = L"TextBoxCategAjoutArticle";
			this->TextBoxCategAjoutArticle->Size = System::Drawing::Size(92, 20);
			this->TextBoxCategAjoutArticle->TabIndex = 13;
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
			this->EcranSupprimerClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->EcranSupprimerClient->Name = L"EcranSupprimerClient";
			this->EcranSupprimerClient->Size = System::Drawing::Size(1000, 600);
			this->EcranSupprimerClient->TabIndex = 35;
			// 
			// ButtonSupprimerSupprimerClient
			// 
			this->ButtonSupprimerSupprimerClient->Location = System::Drawing::Point(392, 373);
			this->ButtonSupprimerSupprimerClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ButtonSupprimerSupprimerClient->Name = L"ButtonSupprimerSupprimerClient";
			this->ButtonSupprimerSupprimerClient->Size = System::Drawing::Size(88, 33);
			this->ButtonSupprimerSupprimerClient->TabIndex = 35;
			this->ButtonSupprimerSupprimerClient->Text = L"Supprimer le client";
			this->ButtonSupprimerSupprimerClient->UseVisualStyleBackColor = true;
			this->ButtonSupprimerSupprimerClient->Click += gcnew System::EventHandler(this, &MyForm::ClickSupprimerSupprimerClient);
			// 
			// TextBoxSupprimerSupprimerClient
			// 
			this->TextBoxSupprimerSupprimerClient->Location = System::Drawing::Point(397, 341);
			this->TextBoxSupprimerSupprimerClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TextBoxSupprimerSupprimerClient->Name = L"TextBoxSupprimerSupprimerClient";
			this->TextBoxSupprimerSupprimerClient->Size = System::Drawing::Size(76, 20);
			this->TextBoxSupprimerSupprimerClient->TabIndex = 34;
			// 
			// LabelSupprimerSupprimerClient
			// 
			this->LabelSupprimerSupprimerClient->AutoSize = true;
			this->LabelSupprimerSupprimerClient->Location = System::Drawing::Point(376, 328);
			this->LabelSupprimerSupprimerClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelSupprimerSupprimerClient->Name = L"LabelSupprimerSupprimerClient";
			this->LabelSupprimerSupprimerClient->Size = System::Drawing::Size(118, 13);
			this->LabelSupprimerSupprimerClient->TabIndex = 33;
			this->LabelSupprimerSupprimerClient->Text = L"ID du client à supprimer";
			// 
			// DataGridSupprimerClient
			// 
			this->DataGridSupprimerClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridSupprimerClient->Location = System::Drawing::Point(255, 37);
			this->DataGridSupprimerClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->DataGridSupprimerClient->Name = L"DataGridSupprimerClient";
			this->DataGridSupprimerClient->RowHeadersWidth = 51;
			this->DataGridSupprimerClient->Size = System::Drawing::Size(466, 238);
			this->DataGridSupprimerClient->TabIndex = 32;
			// 
			// ButtonChercherSupprimerClient
			// 
			this->ButtonChercherSupprimerClient->Location = System::Drawing::Point(90, 103);
			this->ButtonChercherSupprimerClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ButtonChercherSupprimerClient->Name = L"ButtonChercherSupprimerClient";
			this->ButtonChercherSupprimerClient->Size = System::Drawing::Size(127, 19);
			this->ButtonChercherSupprimerClient->TabIndex = 31;
			this->ButtonChercherSupprimerClient->Text = L"Chercher le client à supprimer";
			this->ButtonChercherSupprimerClient->UseVisualStyleBackColor = true;
			this->ButtonChercherSupprimerClient->Click += gcnew System::EventHandler(this, &MyForm::ClickChercherSupprimerClient);
			// 
			// LabelPrenomSupprimerClient
			// 
			this->LabelPrenomSupprimerClient->AutoSize = true;
			this->LabelPrenomSupprimerClient->Location = System::Drawing::Point(51, 73);
			this->LabelPrenomSupprimerClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelPrenomSupprimerClient->Name = L"LabelPrenomSupprimerClient";
			this->LabelPrenomSupprimerClient->Size = System::Drawing::Size(43, 13);
			this->LabelPrenomSupprimerClient->TabIndex = 19;
			this->LabelPrenomSupprimerClient->Text = L"Prénom";
			// 
			// LabelNomSupprimerClient
			// 
			this->LabelNomSupprimerClient->AutoSize = true;
			this->LabelNomSupprimerClient->Location = System::Drawing::Point(65, 52);
			this->LabelNomSupprimerClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNomSupprimerClient->Name = L"LabelNomSupprimerClient";
			this->LabelNomSupprimerClient->Size = System::Drawing::Size(29, 13);
			this->LabelNomSupprimerClient->TabIndex = 18;
			this->LabelNomSupprimerClient->Text = L"Nom";
			// 
			// TextBoxPrenomSupprimerClient
			// 
			this->TextBoxPrenomSupprimerClient->Location = System::Drawing::Point(98, 70);
			this->TextBoxPrenomSupprimerClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TextBoxPrenomSupprimerClient->Name = L"TextBoxPrenomSupprimerClient";
			this->TextBoxPrenomSupprimerClient->Size = System::Drawing::Size(114, 20);
			this->TextBoxPrenomSupprimerClient->TabIndex = 10;
			// 
			// TextBoxNomSupprimerClient
			// 
			this->TextBoxNomSupprimerClient->Location = System::Drawing::Point(98, 49);
			this->TextBoxNomSupprimerClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TextBoxNomSupprimerClient->Name = L"TextBoxNomSupprimerClient";
			this->TextBoxNomSupprimerClient->Size = System::Drawing::Size(114, 20);
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
			this->EcranIdle->Controls->Add(this->EcranPasserCommande);
			this->EcranIdle->Controls->Add(this->EcranAfficherPersonnel);
			this->EcranIdle->Controls->Add(this->EcranAjoutPersonnel);
			this->EcranIdle->Controls->Add(this->EcranAjoutClient);
			this->EcranIdle->Controls->Add(this->EcranAjoutArticle);
			this->EcranIdle->Controls->Add(this->EcranSuprimerArticle);
			this->EcranIdle->Controls->Add(this->EcranSupprimerClient);
			this->EcranIdle->Controls->Add(this->EcranModifierArticle);
			this->EcranIdle->Controls->Add(this->EcranModifierClient);
			this->EcranIdle->Controls->Add(this->EcranAfficherArticle);
			this->EcranIdle->Location = System::Drawing::Point(0, 0);
			this->EcranIdle->Name = L"EcranIdle";
			this->EcranIdle->Size = System::Drawing::Size(1000, 900);
			this->EcranIdle->TabIndex = 24;
			// 
			// EcranVide
			// 
			this->EcranVide->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranVide->AutoSize = true;
			this->EcranVide->Controls->Add(this->pictureBox2);
			this->EcranVide->Location = System::Drawing::Point(0, 22);
			this->EcranVide->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->EcranVide->Name = L"EcranVide";
			this->EcranVide->Size = System::Drawing::Size(1000, 600);
			this->EcranVide->TabIndex = 35;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(58, 24);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(882, 369);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
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
			this->MenuOnglet->Size = System::Drawing::Size(262, 24);
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
			this->OngletArticle->Size = System::Drawing::Size(53, 20);
			this->OngletArticle->Text = L"Article";
			// 
			// OngletAjoutArticle
			// 
			this->OngletAjoutArticle->Name = L"OngletAjoutArticle";
			this->OngletAjoutArticle->Size = System::Drawing::Size(129, 22);
			this->OngletAjoutArticle->Text = L"Ajouter";
			this->OngletAjoutArticle->Click += gcnew System::EventHandler(this, &MyForm::ClickOngletAjoutArticle);
			// 
			// OngletModifierArticle
			// 
			this->OngletModifierArticle->Name = L"OngletModifierArticle";
			this->OngletModifierArticle->Size = System::Drawing::Size(129, 22);
			this->OngletModifierArticle->Text = L"Modifier";
			this->OngletModifierArticle->Click += gcnew System::EventHandler(this, &MyForm::ClickOngletModifierArticle);
			// 
			// OngletSupprimerArticle
			// 
			this->OngletSupprimerArticle->Name = L"OngletSupprimerArticle";
			this->OngletSupprimerArticle->Size = System::Drawing::Size(129, 22);
			this->OngletSupprimerArticle->Text = L"Supprimer";
			this->OngletSupprimerArticle->Click += gcnew System::EventHandler(this, &MyForm::ClickOngletSupprimerArticle);
			// 
			// OngletAfficherArticle
			// 
			this->OngletAfficherArticle->Name = L"OngletAfficherArticle";
			this->OngletAfficherArticle->Size = System::Drawing::Size(129, 22);
			this->OngletAfficherArticle->Text = L"Afficher";
			this->OngletAfficherArticle->Click += gcnew System::EventHandler(this, &MyForm::ClickOngletAfficherArticle);
			// 
			// OngletPersonnel
			// 
			this->OngletPersonnel->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->OngletAjoutPersonnel,
					this->OngletModifierPersonnel, this->OngletSupprimerPersonnel, this->OngletAfficherPersonnel
			});
			this->OngletPersonnel->Name = L"OngletPersonnel";
			this->OngletPersonnel->Size = System::Drawing::Size(71, 20);
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
			this->OngletModifierPersonnel->Size = System::Drawing::Size(129, 22);
			this->OngletModifierPersonnel->Text = L"Modifier";
			// 
			// OngletSupprimerPersonnel
			// 
			this->OngletSupprimerPersonnel->Name = L"OngletSupprimerPersonnel";
			this->OngletSupprimerPersonnel->Size = System::Drawing::Size(129, 22);
			this->OngletSupprimerPersonnel->Text = L"Supprimer";
			// 
			// OngletAfficherPersonnel
			// 
			this->OngletAfficherPersonnel->Name = L"OngletAfficherPersonnel";
			this->OngletAfficherPersonnel->Size = System::Drawing::Size(129, 22);
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
			this->OngletClient->Size = System::Drawing::Size(50, 20);
			this->OngletClient->Text = L"Client";
			// 
			// OngletAjoutClient
			// 
			this->OngletAjoutClient->Name = L"OngletAjoutClient";
			this->OngletAjoutClient->Size = System::Drawing::Size(129, 22);
			this->OngletAjoutClient->Text = L"Ajouter";
			this->OngletAjoutClient->Click += gcnew System::EventHandler(this, &MyForm::ClickOngletAjoutClient);
			// 
			// OngletModifierClient
			// 
			this->OngletModifierClient->Name = L"OngletModifierClient";
			this->OngletModifierClient->Size = System::Drawing::Size(129, 22);
			this->OngletModifierClient->Text = L"Modifier";
			this->OngletModifierClient->Click += gcnew System::EventHandler(this, &MyForm::ClickOngletModifierClient);
			// 
			// OngletSupprimerClient
			// 
			this->OngletSupprimerClient->Name = L"OngletSupprimerClient";
			this->OngletSupprimerClient->Size = System::Drawing::Size(129, 22);
			this->OngletSupprimerClient->Text = L"Supprimer";
			this->OngletSupprimerClient->Click += gcnew System::EventHandler(this, &MyForm::ClickOngletSupprimerClient);
			// 
			// OngletAfficherClient
			// 
			this->OngletAfficherClient->Name = L"OngletAfficherClient";
			this->OngletAfficherClient->Size = System::Drawing::Size(129, 22);
			this->OngletAfficherClient->Text = L"Afficher";
			this->OngletAfficherClient->Click += gcnew System::EventHandler(this, &MyForm::ClickOngletAfficherClient);
			// 
			// OngletCommande
			// 
			this->OngletCommande->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->OngletPasserCommande,
					this->OngletModifierCommande, this->OngletSupprimerCommande, this->OngletAfficherCommande
			});
			this->OngletCommande->Name = L"OngletCommande";
			this->OngletCommande->Size = System::Drawing::Size(82, 20);
			this->OngletCommande->Text = L"Commande";
			// 
			// OngletPasserCommande
			// 
			this->OngletPasserCommande->Name = L"OngletPasserCommande";
			this->OngletPasserCommande->Size = System::Drawing::Size(171, 22);
			this->OngletPasserCommande->Text = L"Passer commande";
			this->OngletPasserCommande->Click += gcnew System::EventHandler(this, &MyForm::OngletPasserCommande_Click);
			// 
			// OngletModifierCommande
			// 
			this->OngletModifierCommande->Name = L"OngletModifierCommande";
			this->OngletModifierCommande->Size = System::Drawing::Size(171, 22);
			this->OngletModifierCommande->Text = L"Modifier";
			// 
			// OngletSupprimerCommande
			// 
			this->OngletSupprimerCommande->Name = L"OngletSupprimerCommande";
			this->OngletSupprimerCommande->Size = System::Drawing::Size(171, 22);
			this->OngletSupprimerCommande->Text = L"Supprimer";
			// 
			// OngletAfficherCommande
			// 
			this->OngletAfficherCommande->Name = L"OngletAfficherCommande";
			this->OngletAfficherCommande->Size = System::Drawing::Size(171, 22);
			this->OngletAfficherCommande->Text = L"Afficher";
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
			this->EcranAfficherClient->Location = System::Drawing::Point(0, 27);
			this->EcranAfficherClient->Name = L"EcranAfficherClient";
			this->EcranAfficherClient->Size = System::Drawing::Size(1000, 600);
			this->EcranAfficherClient->TabIndex = 36;
			// 
			// DataGridAfficherClient
			// 
			this->DataGridAfficherClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridAfficherClient->Location = System::Drawing::Point(352, 72);
			this->DataGridAfficherClient->Name = L"DataGridAfficherClient";
			this->DataGridAfficherClient->RowHeadersWidth = 51;
			this->DataGridAfficherClient->Size = System::Drawing::Size(500, 304);
			this->DataGridAfficherClient->TabIndex = 4;
			// 
			// TextBoxPrenomAfficherClient
			// 
			this->TextBoxPrenomAfficherClient->Location = System::Drawing::Point(126, 101);
			this->TextBoxPrenomAfficherClient->Name = L"TextBoxPrenomAfficherClient";
			this->TextBoxPrenomAfficherClient->Size = System::Drawing::Size(100, 20);
			this->TextBoxPrenomAfficherClient->TabIndex = 3;
			// 
			// TextBoxNomAfficherClient
			// 
			this->TextBoxNomAfficherClient->Location = System::Drawing::Point(126, 69);
			this->TextBoxNomAfficherClient->Name = L"TextBoxNomAfficherClient";
			this->TextBoxNomAfficherClient->Size = System::Drawing::Size(100, 20);
			this->TextBoxNomAfficherClient->TabIndex = 2;
			// 
			// LabelPrenomAfficherClient
			// 
			this->LabelPrenomAfficherClient->AutoSize = true;
			this->LabelPrenomAfficherClient->Location = System::Drawing::Point(80, 104);
			this->LabelPrenomAfficherClient->Name = L"LabelPrenomAfficherClient";
			this->LabelPrenomAfficherClient->Size = System::Drawing::Size(43, 13);
			this->LabelPrenomAfficherClient->TabIndex = 1;
			this->LabelPrenomAfficherClient->Text = L"Prénom";
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
			// buttonRechercherClient
			// 
			this->buttonRechercherClient->Location = System::Drawing::Point(129, 153);
			this->buttonRechercherClient->Name = L"buttonRechercherClient";
			this->buttonRechercherClient->Size = System::Drawing::Size(95, 38);
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
			this->EcranAfficherPersonnel->Location = System::Drawing::Point(0, 27);
			this->EcranAfficherPersonnel->Name = L"EcranAfficherPersonnel";
			this->EcranAfficherPersonnel->Size = System::Drawing::Size(1000, 600);
			this->EcranAfficherPersonnel->TabIndex = 37;
			// 
			// dataGridViewAfficherPersonnel
			// 
			this->dataGridViewAfficherPersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewAfficherPersonnel->Location = System::Drawing::Point(352, 72);
			this->dataGridViewAfficherPersonnel->Name = L"dataGridViewAfficherPersonnel";
			this->dataGridViewAfficherPersonnel->RowHeadersWidth = 51;
			this->dataGridViewAfficherPersonnel->Size = System::Drawing::Size(500, 304);
			this->dataGridViewAfficherPersonnel->TabIndex = 4;
			// 
			// textBoxPrenomAfficherPersonnel
			// 
			this->textBoxPrenomAfficherPersonnel->Location = System::Drawing::Point(126, 101);
			this->textBoxPrenomAfficherPersonnel->Name = L"textBoxPrenomAfficherPersonnel";
			this->textBoxPrenomAfficherPersonnel->Size = System::Drawing::Size(100, 20);
			this->textBoxPrenomAfficherPersonnel->TabIndex = 3;
			// 
			// textBoxNomAfficherPersonnel
			// 
			this->textBoxNomAfficherPersonnel->Location = System::Drawing::Point(126, 69);
			this->textBoxNomAfficherPersonnel->Name = L"textBoxNomAfficherPersonnel";
			this->textBoxNomAfficherPersonnel->Size = System::Drawing::Size(100, 20);
			this->textBoxNomAfficherPersonnel->TabIndex = 2;
			// 
			// labelPrenomAfficherPersonnel
			// 
			this->labelPrenomAfficherPersonnel->AutoSize = true;
			this->labelPrenomAfficherPersonnel->Location = System::Drawing::Point(80, 104);
			this->labelPrenomAfficherPersonnel->Name = L"labelPrenomAfficherPersonnel";
			this->labelPrenomAfficherPersonnel->Size = System::Drawing::Size(43, 13);
			this->labelPrenomAfficherPersonnel->TabIndex = 1;
			this->labelPrenomAfficherPersonnel->Text = L"Prénom";
			// 
			// labelNomAfficherPersonnel
			// 
			this->labelNomAfficherPersonnel->AutoSize = true;
			this->labelNomAfficherPersonnel->Location = System::Drawing::Point(80, 72);
			this->labelNomAfficherPersonnel->Name = L"labelNomAfficherPersonnel";
			this->labelNomAfficherPersonnel->Size = System::Drawing::Size(29, 13);
			this->labelNomAfficherPersonnel->TabIndex = 0;
			this->labelNomAfficherPersonnel->Text = L"Nom";
			// 
			// buttonRechercherAfficherPersonnel
			// 
			this->buttonRechercherAfficherPersonnel->Location = System::Drawing::Point(129, 153);
			this->buttonRechercherAfficherPersonnel->Name = L"buttonRechercherAfficherPersonnel";
			this->buttonRechercherAfficherPersonnel->Size = System::Drawing::Size(95, 38);
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
			this->EcranAjoutPersonnel->Location = System::Drawing::Point(0, 27);
			this->EcranAjoutPersonnel->Name = L"EcranAjoutPersonnel";
			this->EcranAjoutPersonnel->Size = System::Drawing::Size(1000, 600);
			this->EcranAjoutPersonnel->TabIndex = 27;
			// 
			// buttonAjoutPersonnel1
			// 
			this->buttonAjoutPersonnel1->Location = System::Drawing::Point(262, 343);
			this->buttonAjoutPersonnel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonAjoutPersonnel1->Name = L"buttonAjoutPersonnel1";
			this->buttonAjoutPersonnel1->Size = System::Drawing::Size(112, 24);
			this->buttonAjoutPersonnel1->TabIndex = 32;
			this->buttonAjoutPersonnel1->Text = L" Ajouter le personnel";
			this->buttonAjoutPersonnel1->UseVisualStyleBackColor = true;
			this->buttonAjoutPersonnel1->Click += gcnew System::EventHandler(this, &MyForm::buttonAjoutPersonnel_Click);
			// 
			// textBoxSuperieur1
			// 
			this->textBoxSuperieur1->Location = System::Drawing::Point(221, 173);
			this->textBoxSuperieur1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxSuperieur1->Name = L"textBoxSuperieur1";
			this->textBoxSuperieur1->Size = System::Drawing::Size(152, 20);
			this->textBoxSuperieur1->TabIndex = 31;
			// 
			// labelSuperieur1
			// 
			this->labelSuperieur1->AutoSize = true;
			this->labelSuperieur1->Location = System::Drawing::Point(150, 173);
			this->labelSuperieur1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSuperieur1->Name = L"labelSuperieur1";
			this->labelSuperieur1->Size = System::Drawing::Size(52, 13);
			this->labelSuperieur1->TabIndex = 28;
			this->labelSuperieur1->Text = L"Superieur";
			// 
			// labelCpPersonnel1
			// 
			this->labelCpPersonnel1->AutoSize = true;
			this->labelCpPersonnel1->Location = System::Drawing::Point(611, 260);
			this->labelCpPersonnel1->Name = L"labelCpPersonnel1";
			this->labelCpPersonnel1->Size = System::Drawing::Size(21, 13);
			this->labelCpPersonnel1->TabIndex = 30;
			this->labelCpPersonnel1->Text = L"CP";
			// 
			// labelVillePersonnel1
			// 
			this->labelVillePersonnel1->AutoSize = true;
			this->labelVillePersonnel1->Location = System::Drawing::Point(482, 259);
			this->labelVillePersonnel1->Name = L"labelVillePersonnel1";
			this->labelVillePersonnel1->Size = System::Drawing::Size(26, 13);
			this->labelVillePersonnel1->TabIndex = 29;
			this->labelVillePersonnel1->Text = L"Ville";
			// 
			// labelAdressePersonnel1
			// 
			this->labelAdressePersonnel1->AutoSize = true;
			this->labelAdressePersonnel1->Location = System::Drawing::Point(288, 258);
			this->labelAdressePersonnel1->Name = L"labelAdressePersonnel1";
			this->labelAdressePersonnel1->Size = System::Drawing::Size(45, 13);
			this->labelAdressePersonnel1->TabIndex = 28;
			this->labelAdressePersonnel1->Text = L"Adresse";
			// 
			// labelAnneePersonnel1
			// 
			this->labelAnneePersonnel1->AutoSize = true;
			this->labelAnneePersonnel1->Location = System::Drawing::Point(331, 210);
			this->labelAnneePersonnel1->Name = L"labelAnneePersonnel1";
			this->labelAnneePersonnel1->Size = System::Drawing::Size(38, 13);
			this->labelAnneePersonnel1->TabIndex = 27;
			this->labelAnneePersonnel1->Text = L"Année";
			// 
			// labelMoisPersonnel1
			// 
			this->labelMoisPersonnel1->AutoSize = true;
			this->labelMoisPersonnel1->Location = System::Drawing::Point(274, 210);
			this->labelMoisPersonnel1->Name = L"labelMoisPersonnel1";
			this->labelMoisPersonnel1->Size = System::Drawing::Size(29, 13);
			this->labelMoisPersonnel1->TabIndex = 26;
			this->labelMoisPersonnel1->Text = L"Mois";
			// 
			// labelJourPersonnel1
			// 
			this->labelJourPersonnel1->AutoSize = true;
			this->labelJourPersonnel1->Location = System::Drawing::Point(226, 210);
			this->labelJourPersonnel1->Name = L"labelJourPersonnel1";
			this->labelJourPersonnel1->Size = System::Drawing::Size(27, 13);
			this->labelJourPersonnel1->TabIndex = 25;
			this->labelJourPersonnel1->Text = L"Jour";
			// 
			// textBoxAnnePersonnel1
			// 
			this->textBoxAnnePersonnel1->Location = System::Drawing::Point(323, 227);
			this->textBoxAnnePersonnel1->Name = L"textBoxAnnePersonnel1";
			this->textBoxAnnePersonnel1->Size = System::Drawing::Size(52, 20);
			this->textBoxAnnePersonnel1->TabIndex = 24;
			// 
			// textBoxMoisPersonnel1
			// 
			this->textBoxMoisPersonnel1->Location = System::Drawing::Point(274, 227);
			this->textBoxMoisPersonnel1->Name = L"textBoxMoisPersonnel1";
			this->textBoxMoisPersonnel1->Size = System::Drawing::Size(33, 20);
			this->textBoxMoisPersonnel1->TabIndex = 23;
			// 
			// labelAdresseGenPersonnel1
			// 
			this->labelAdresseGenPersonnel1->AutoSize = true;
			this->labelAdresseGenPersonnel1->Location = System::Drawing::Point(154, 281);
			this->labelAdresseGenPersonnel1->Name = L"labelAdresseGenPersonnel1";
			this->labelAdresseGenPersonnel1->Size = System::Drawing::Size(48, 13);
			this->labelAdresseGenPersonnel1->TabIndex = 21;
			this->labelAdresseGenPersonnel1->Text = L"Adresse ";
			// 
			// labelHireDate1
			// 
			this->labelHireDate1->AutoSize = true;
			this->labelHireDate1->Location = System::Drawing::Point(113, 232);
			this->labelHireDate1->Name = L"labelHireDate1";
			this->labelHireDate1->Size = System::Drawing::Size(91, 13);
			this->labelHireDate1->TabIndex = 20;
			this->labelHireDate1->Text = L"Date d\'embauche";
			// 
			// labelPrenomPersonnel1
			// 
			this->labelPrenomPersonnel1->AutoSize = true;
			this->labelPrenomPersonnel1->Location = System::Drawing::Point(160, 140);
			this->labelPrenomPersonnel1->Name = L"labelPrenomPersonnel1";
			this->labelPrenomPersonnel1->Size = System::Drawing::Size(43, 13);
			this->labelPrenomPersonnel1->TabIndex = 19;
			this->labelPrenomPersonnel1->Text = L"Prénom";
			// 
			// labelNomPerosonnel1
			// 
			this->labelNomPerosonnel1->AutoSize = true;
			this->labelNomPerosonnel1->Location = System::Drawing::Point(175, 104);
			this->labelNomPerosonnel1->Name = L"labelNomPerosonnel1";
			this->labelNomPerosonnel1->Size = System::Drawing::Size(29, 13);
			this->labelNomPerosonnel1->TabIndex = 18;
			this->labelNomPerosonnel1->Text = L"Nom";
			// 
			// textBoxPrenomPersonnel1
			// 
			this->textBoxPrenomPersonnel1->Location = System::Drawing::Point(221, 137);
			this->textBoxPrenomPersonnel1->Name = L"textBoxPrenomPersonnel1";
			this->textBoxPrenomPersonnel1->Size = System::Drawing::Size(150, 20);
			this->textBoxPrenomPersonnel1->TabIndex = 10;
			// 
			// textBoxNomPersonnel1
			// 
			this->textBoxNomPersonnel1->Location = System::Drawing::Point(221, 102);
			this->textBoxNomPersonnel1->Name = L"textBoxNomPersonnel1";
			this->textBoxNomPersonnel1->Size = System::Drawing::Size(150, 20);
			this->textBoxNomPersonnel1->TabIndex = 9;
			// 
			// textBoxJourPersonnel1
			// 
			this->textBoxJourPersonnel1->Location = System::Drawing::Point(221, 227);
			this->textBoxJourPersonnel1->Name = L"textBoxJourPersonnel1";
			this->textBoxJourPersonnel1->Size = System::Drawing::Size(33, 20);
			this->textBoxJourPersonnel1->TabIndex = 11;
			// 
			// textBoxCpPersonnel1
			// 
			this->textBoxCpPersonnel1->Location = System::Drawing::Point(591, 279);
			this->textBoxCpPersonnel1->Name = L"textBoxCpPersonnel1";
			this->textBoxCpPersonnel1->Size = System::Drawing::Size(70, 20);
			this->textBoxCpPersonnel1->TabIndex = 14;
			// 
			// textBoxAdressePersonnel1
			// 
			this->textBoxAdressePersonnel1->Location = System::Drawing::Point(221, 279);
			this->textBoxAdressePersonnel1->Name = L"textBoxAdressePersonnel1";
			this->textBoxAdressePersonnel1->Size = System::Drawing::Size(187, 20);
			this->textBoxAdressePersonnel1->TabIndex = 12;
			// 
			// textBoxVillePersonnel1
			// 
			this->textBoxVillePersonnel1->Location = System::Drawing::Point(424, 279);
			this->textBoxVillePersonnel1->Name = L"textBoxVillePersonnel1";
			this->textBoxVillePersonnel1->Size = System::Drawing::Size(150, 20);
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
			this->EcranAjoutClient->Location = System::Drawing::Point(0, 27);
			this->EcranAjoutClient->Name = L"EcranAjoutClient";
			this->EcranAjoutClient->Size = System::Drawing::Size(1000, 600);
			this->EcranAjoutClient->TabIndex = 26;
			// 
			// ButtonAjoutClient
			// 
			this->ButtonAjoutClient->Location = System::Drawing::Point(277, 299);
			this->ButtonAjoutClient->Name = L"ButtonAjoutClient";
			this->ButtonAjoutClient->Size = System::Drawing::Size(118, 23);
			this->ButtonAjoutClient->TabIndex = 31;
			this->ButtonAjoutClient->Text = L"Ajouter le client";
			this->ButtonAjoutClient->UseVisualStyleBackColor = true;
			this->ButtonAjoutClient->Click += gcnew System::EventHandler(this, &MyForm::ButtonAjoutClient_Click);
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
			// EcranSuprimerArticle
			// 
			this->EcranSuprimerArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EcranSuprimerArticle->AutoSize = true;
			this->EcranSuprimerArticle->Controls->Add(this->ButtonIDSupprimerArticle);
			this->EcranSuprimerArticle->Controls->Add(this->TextBoxIDSupprimerArticle);
			this->EcranSuprimerArticle->Controls->Add(this->label9);
			this->EcranSuprimerArticle->Controls->Add(this->DataGridSupprimerArticle);
			this->EcranSuprimerArticle->Controls->Add(this->ButtonRecherchSupprimerArticle);
			this->EcranSuprimerArticle->Controls->Add(this->label11);
			this->EcranSuprimerArticle->Controls->Add(this->TextBoxRecherchSupprimerArticle);
			this->EcranSuprimerArticle->Location = System::Drawing::Point(0, 27);
			this->EcranSuprimerArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->EcranSuprimerArticle->Name = L"EcranSuprimerArticle";
			this->EcranSuprimerArticle->Size = System::Drawing::Size(1000, 600);
			this->EcranSuprimerArticle->TabIndex = 38;
			// 
			// ButtonIDSupprimerArticle
			// 
			this->ButtonIDSupprimerArticle->Location = System::Drawing::Point(554, 468);
			this->ButtonIDSupprimerArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ButtonIDSupprimerArticle->Name = L"ButtonIDSupprimerArticle";
			this->ButtonIDSupprimerArticle->Size = System::Drawing::Size(114, 47);
			this->ButtonIDSupprimerArticle->TabIndex = 35;
			this->ButtonIDSupprimerArticle->Text = L"Supprimer l\'article";
			this->ButtonIDSupprimerArticle->UseVisualStyleBackColor = true;
			this->ButtonIDSupprimerArticle->Click += gcnew System::EventHandler(this, &MyForm::ClickIDSupprimerArticle);
			// 
			// TextBoxIDSupprimerArticle
			// 
			this->TextBoxIDSupprimerArticle->Location = System::Drawing::Point(575, 437);
			this->TextBoxIDSupprimerArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TextBoxIDSupprimerArticle->Name = L"TextBoxIDSupprimerArticle";
			this->TextBoxIDSupprimerArticle->Size = System::Drawing::Size(76, 20);
			this->TextBoxIDSupprimerArticle->TabIndex = 34;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(554, 419);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(118, 13);
			this->label9->TabIndex = 33;
			this->label9->Text = L"ID du client à supprimer";
			// 
			// DataGridSupprimerArticle
			// 
			this->DataGridSupprimerArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridSupprimerArticle->Location = System::Drawing::Point(241, 37);
			this->DataGridSupprimerArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->DataGridSupprimerArticle->Name = L"DataGridSupprimerArticle";
			this->DataGridSupprimerArticle->RowHeadersWidth = 51;
			this->DataGridSupprimerArticle->Size = System::Drawing::Size(709, 364);
			this->DataGridSupprimerArticle->TabIndex = 32;
			// 
			// ButtonRecherchSupprimerArticle
			// 
			this->ButtonRecherchSupprimerArticle->Location = System::Drawing::Point(58, 106);
			this->ButtonRecherchSupprimerArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ButtonRecherchSupprimerArticle->Name = L"ButtonRecherchSupprimerArticle";
			this->ButtonRecherchSupprimerArticle->Size = System::Drawing::Size(134, 35);
			this->ButtonRecherchSupprimerArticle->TabIndex = 31;
			this->ButtonRecherchSupprimerArticle->Text = L"Chercher parmis les articles";
			this->ButtonRecherchSupprimerArticle->UseVisualStyleBackColor = true;
			this->ButtonRecherchSupprimerArticle->Click += gcnew System::EventHandler(this, &MyForm::ClickRecherchSupprimerArticle);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(91, 59);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 13);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Désignation";
			// 
			// TextBoxRecherchSupprimerArticle
			// 
			this->TextBoxRecherchSupprimerArticle->Location = System::Drawing::Point(66, 79);
			this->TextBoxRecherchSupprimerArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TextBoxRecherchSupprimerArticle->Name = L"TextBoxRecherchSupprimerArticle";
			this->TextBoxRecherchSupprimerArticle->Size = System::Drawing::Size(114, 20);
			this->TextBoxRecherchSupprimerArticle->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(984, 561);
			this->Controls->Add(this->EcranConnexion);
			this->Controls->Add(this->EcranIdle);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gestionnaire BDD";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->EcranConnexion->ResumeLayout(false);
			this->EcranConnexion->PerformLayout();
			this->EcranPasserCommande->ResumeLayout(false);
			this->EcranPasserCommande->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->EcranAfficherArticle->ResumeLayout(false);
			this->EcranAfficherArticle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridAfficherArticle))->EndInit();
			this->EcranModifierClient->ResumeLayout(false);
			this->EcranModifierClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridModifierClient))->EndInit();
			this->EcranModifierArticle->ResumeLayout(false);
			this->EcranModifierArticle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridModifierArticle))->EndInit();
			this->EcranAjoutArticle->ResumeLayout(false);
			this->EcranAjoutArticle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridCategAjoutArticle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridArticleAjoutArticle))->EndInit();
			this->EcranSupprimerClient->ResumeLayout(false);
			this->EcranSupprimerClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridSupprimerClient))->EndInit();
			this->EcranIdle->ResumeLayout(false);
			this->EcranIdle->PerformLayout();
			this->EcranVide->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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
			this->EcranSuprimerArticle->ResumeLayout(false);
			this->EcranSuprimerArticle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridSupprimerArticle))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/// variables venant des classes 
		CL_CAD connexion;
		CLclient client1;
		CLpersonnel personnel1;
		CLarticle article1;
		CLcommande commande1;
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
		DataGridAfficherClient->DataSource = client1.afficher("", "", textBox1->Text, textBox2->Text, textBox3->Text);
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
		MessageBox::Show("Nom et prénom du client modifiés !");
		DataGridModifierClient->DataSource = client1.afficherModifier(textBox1->Text, textBox2->Text, textBox3->Text);

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
		DataGridCategAjoutArticle->DataSource = article1.afficherCategAjout(textBox1->Text, textBox2->Text, textBox3->Text);
		DataGridArticleAjoutArticle->DataSource = article1.afficherArticle(textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void ClickAjoutCategAjoutArticle(System::Object^ sender, System::EventArgs^ e) {
		article1.creerCateg(TextBoxAjoutCategAjoutArticle->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Catégorie ajoutée !");
		DataGridCategAjoutArticle->DataSource = article1.afficherArticle(textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void ClickAjoutArticleAjoutArticle(System::Object^ sender, System::EventArgs^ e) {
		article1.creer(TextBoxNomAjoutArticle->Text, TextBoxCategAjoutArticle->Text, TextBoxPrixAjoutArticle->Text, TextBoxStockAjoutArticle->Text, TextBoxSeuilAjoutArticle->Text, TextBoxTVAAjoutArticle->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Article ajouté !");
		DataGridArticleAjoutArticle->DataSource = article1.afficherArticle(textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void ClickOngletSupprimerArticle(System::Object^ sender, System::EventArgs^ e) {
		this->EcranSuprimerArticle->BringToFront();
		DataGridSupprimerArticle->DataSource = article1.afficherArticle(textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void ClickIDSupprimerArticle(System::Object^ sender, System::EventArgs^ e) {
		article1.supprimer(TextBoxIDSupprimerArticle->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Article supprimé !");
		DataGridSupprimerArticle->DataSource = article1.afficherArticle(textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void ClickRecherchSupprimerArticle(System::Object^ sender, System::EventArgs^ e) {
		article1.recherch(TextBoxRecherchSupprimerArticle->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		DataGridSupprimerArticle->DataSource = article1.recherch(TextBoxRecherchSupprimerArticle->Text, textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void OngletPasserCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		this->EcranPasserCommande->BringToFront();
	}
	private: System::Void ClickOngletModifierArticle(System::Object^ sender, System::EventArgs^ e) {
		this->EcranModifierArticle->BringToFront();
		DataGridModifierArticle->DataSource = article1.afficherArticle(textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void ClickRecherchModifierArticle(System::Object^ sender, System::EventArgs^ e) {
		DataGridModifierArticle->DataSource = article1.recherch(TextBoxRecherchModifierArticle->Text, textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void ClickAfficherModifierArticle(System::Object^ sender, System::EventArgs^ e) {
		DataGridModifierArticle->DataSource = article1.afficherArticle(textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void ClickNomModifierArticle(System::Object^ sender, System::EventArgs^ e) {
		article1.modifierDesignation(TextBoxIDModifierArticle->Text, TextBoxModifNomModifierArticle->Text, TextBoxModifCategModifierArticle->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Désignation et catégorie modifiés !");
		DataGridModifierArticle->DataSource = article1.afficherArticle(textBox1->Text, textBox2->Text, textBox3->Text);

		TextBoxIDModifierArticle->Text = "";
		TextBoxModifNomModifierArticle->Text = "";
		TextBoxModifCategModifierArticle->Text = "";
	}
	private: System::Void ClickPrixModifierArticle(System::Object^ sender, System::EventArgs^ e) {
		article1.modifierPrix(TextBoxIDModifierArticle->Text, TextBoxModifPrixModifierArticle->Text, TextBoxModifTVAModifierArticle->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Prix et TVA modifiés !");
		DataGridModifierArticle->DataSource = article1.afficherArticle(textBox1->Text, textBox2->Text, textBox3->Text);

		TextBoxIDModifierArticle->Text = "";
		TextBoxModifPrixModifierArticle->Text = "";
		TextBoxModifTVAModifierArticle->Text = "";
	}

	private: System::Void ClickModifADRLivModifierCLient(System::Object^ sender, System::EventArgs^ e) {
		client1.modifierADRLiv(TextBoxIDModificationClient->Text, TextBoxModifAdrADRLivClient->Text, TextBoxModifVilleADRLivClient->Text, TextBoxModifCpADRLivClient->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Adresse de livraison modifiée !");
		DataGridModifierClient->DataSource = client1.afficherModifier(textBox1->Text, textBox2->Text, textBox3->Text);

		TextBoxIDModificationClient->Text = "";
		TextBoxModifAdrADRLivClient->Text = "";
		TextBoxModifVilleADRLivClient->Text = "";
		TextBoxModifCpADRLivClient->Text = "";
	}
	private: System::Void ClickModifADRFacModifierClient(System::Object^ sender, System::EventArgs^ e) {
		client1.modifierADRFact(TextBoxIDModificationClient->Text, TextBoxModifAdrADRFacClient->Text, TextBoxModifVilleADRFacClient->Text, TextBoxModifCpADRFacClient->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Adresse de facturation modifiée !");
		DataGridModifierClient->DataSource = client1.afficherModifier(textBox1->Text, textBox2->Text, textBox3->Text);

		TextBoxIDModificationClient->Text = "";
		TextBoxModifAdrADRFacClient->Text = "";
		TextBoxModifVilleADRFacClient->Text = "";
		TextBoxModifCpADRLivClient->Text = "";
	}
	private: System::Void ClickModifNaissModifierClient(System::Object^ sender, System::EventArgs^ e) {
		client1.modifierNaiss(TextBoxIDModificationClient->Text, TextBoxModifAnModificationClient->Text + "-" + TextBoxModifMoisModificationClient->Text + "-" + TextBoxModifJourModificationClient->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Date de naissance modifiée !");
		DataGridModifierClient->DataSource = client1.afficherModifier(textBox1->Text, textBox2->Text, textBox3->Text);

		TextBoxIDModificationClient->Text = "";
		TextBoxModifAnModificationClient->Text = "";
		TextBoxModifMoisModificationClient->Text = "";
		TextBoxModifJourModificationClient->Text = "";
	}

	private: System::Void ClickModifStockModifierArticle(System::Object^ sender, System::EventArgs^ e) {
		article1.modifierStockSeuil(TextBoxIDModifierArticle->Text, TextBoxModifStockModifierArticle->Text, TextBoxModifSeuilModifierArticle->Text, textBox1->Text, textBox2->Text, textBox3->Text);
		MessageBox::Show("Stock et seuil modifiés !");
		DataGridModifierArticle->DataSource = article1.afficherArticle(textBox1->Text, textBox2->Text, textBox3->Text);

		TextBoxIDModifierArticle->Text = "";
		TextBoxModifStockModifierArticle->Text = "";
		TextBoxModifSeuilModifierArticle->Text = "";
	}
	private: System::Void ClickOngletAfficherArticle(System::Object^ sender, System::EventArgs^ e) {
		EcranAfficherArticle->BringToFront();
		DataGridAfficherArticle->DataSource = article1.afficherArticle(textBox1->Text, textBox2->Text, textBox3->Text);
	}
	private: System::Void ClickRecherchAfficherArticle(System::Object^ sender, System::EventArgs^ e) {
		DataGridAfficherArticle->DataSource = article1.recherch(TextBoxNomAfficherArticle->Text, textBox1->Text, textBox2->Text, textBox3->Text);

	}
	private: System::Void buttonValiderPasserCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		commande1.passerCommande(textBoxNomPasserCommande->Text, textBoxPrenomPasserCommande->Text, textBoxDesignationPasserCommande->Text, Convert::ToInt16(textBoxQtePasserCommande->Text), textBoxAnneLivraisonPasserCommande->Text + "-" + textBoxMoisLivraisonPasserCommande->Text + "-" + textBoxJourLivraisonPasserCommande->Text, textBoxAnneDateEmissionPasserCommande->Text + "-" + textBoxMoisDateEmissionPasserCommande->Text + "-" + textBoxJourDateEmissionPasserCommande->Text, textBoxAnneeDatePaiementPasserCommande->Text + "-" + textBoxMoisDatePaiementPasserCommande->Text + "-" + textBoxJourDatePaiementPasserCommande->Text, textBoxAnneeDateSoldePasserCommande->Text + "-" + textBoxMoisDateSoldePasserCommande->Text + "-" + textBoxJourDateSoldePasserCommande->Text, textBox1->Text, textBox2->Text, textBox3->Text);
	}
	};
}
