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

    String^ queryString = "SELECT (SUM((prixHT + tva) * stock)) from Article;";
    return obj.receiveSQLString(queryString);

}