#include "Stats.h"


DataTable^ Stats::underSeuil(String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "SELECT designation, stock, seuil FROM Article WHERE stock < seuil;";
    return obj.receiveSQLTable(queryString);

}

String^ Stats::sommeStockCommercial(String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "SELECT (SUM(prixHT * stock)) from Article;";
    return obj.receiveSQLString(queryString);
}

String^ Stats::sommeStockAchat(String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    String^ queryString = "SELECT (SUM((prixHT * ((100-tva)/100)) * stock)) from Article;";
    return obj.receiveSQLString(queryString);

}


String^ Stats::simulCom(String^ Marge, String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    if(Marge == "")
    {
        String^ queryString = "SELECT SUM(prixHT * stock) from Article;";
        return obj.receiveSQLString(queryString);
    }
    else
    {
        String^ queryString = "SELECT SUM(prixHT * stock * ((100+" + Marge + ")/100)) from Article;";
        return obj.receiveSQLString(queryString);
    }
}

String^ Stats::simulAchat(String^ Marge, String^ TVA, String^ ip, String^ user, String^ mdp)
{
    CL_CAD obj;
    obj.connect(ip, user, mdp);
    obj.disconnect();

    if (Marge == "" && TVA == "")
    {
        String^ queryString = "SELECT (SUM((prixHT * ((100-tva)/100)) * stock)) from Article;";
        return obj.receiveSQLString(queryString);
    }
    ////////
 
    else if (Marge == "" && TVA != "")
    {
        String^ queryString = "SELECT (SUM((prixHT * ((100-tva-" + TVA +")/100)) * stock)) from Article;";
        return obj.receiveSQLString(queryString);
    }
    //////    

    else if (TVA == "" && Marge != "")
    {
        String^ queryString = "SELECT (SUM((prixHT * ((100-tva)/100)) * ((100+"+ Marge +")/100) * stock)) from Article;";
        return obj.receiveSQLString(queryString);
    }
    //
    else if (TVA != "" && Marge != "")
    {
        String^ queryString = "SELECT (SUM((prixHT * ((100-tva-" + TVA + ")/100)) * ((100+" + Marge + ")/100) * stock)) from Article;";
        return obj.receiveSQLString(queryString);
    }

}