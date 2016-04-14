/**
 * cata.h
 * Βασικό πρόγραμμα ερωτήματος 2. 
 * Προγραμματιστικές τεχνικές. Άσκηση 11 (10).
 * Νικόλαος Κατωμέρης, 8551
 * 10/01/2016
 */

#include <iostream>
#include <string>
#include <set>
#include <iterator>

#include "cata.h" //Αρχείο με την κλάση catalog

using namespace std;

//Δομή για την ταξινόμηση της set.
struct SortOrder{
    bool operator()(const catalog& one, const catalog& two){
        if(one < two) return 1;
        else return 0;
    }
};

struct SortOrderReverse{
    bool operator()(const catalog& one, const catalog& two){
        if(one < two) return 0;
        else return 1;
    }
};

int main(){
    //Στοιχεία για εισαγωγή στον κατάλογο.
    catalog first("Lafas", 45678);
    catalog second("Rotodas", 78492);
    catalog third("Mitrakos", 29384);
    catalog fourth("Atreas", 48392);
    catalog fifth("Rekanos", 93745);
    catalog sixth("Kehagiat", 32956);
    catalog seventh("Zaharis", 83925);
    catalog eighth("Kadi", 83725);
    catalog ninth("Akonsta", 24924);
    catalog tenth("Sevastiadis", 45267);
    
    //Δημιουργία δομής set τύπου catalog ταξιμομημένη σύμφωνα με την SortOrder.
    set<catalog, SortOrder> katalogos;
    //Δημιουργεία iterator για την προσπέλαση των στοιχείων της δομής στα for loop.
    set<catalog>::iterator it;
    
    //Εισαγωγή των στοιχείων στη δομή set.
    katalogos.insert(first);
    katalogos.insert(second);
    katalogos.insert(third);
    katalogos.insert(fourth);
    katalogos.insert(fifth);
    katalogos.insert(sixth);
    katalogos.insert(seventh);
    katalogos.insert(eighth);
    katalogos.insert(ninth);
    katalogos.insert(tenth);
    
    //Δημιουργία δομής set τύπου catalog ταξιμομημένη σύμφωνα με την SortOrderReverse.
    set<catalog, SortOrderReverse> rkatalogos;
    
    //Εισαγωγή των στοιχείων στη δομή set.
    rkatalogos.insert(first);
    rkatalogos.insert(second);
    rkatalogos.insert(third);
    rkatalogos.insert(fourth);
    rkatalogos.insert(fifth);
    rkatalogos.insert(sixth);
    rkatalogos.insert(seventh);
    rkatalogos.insert(eighth);
    rkatalogos.insert(ninth);
    rkatalogos.insert(tenth);
    
    //Εμφάνιση των στοιχείων του καταλόγου σε αλφαβητική σειρά.
    for (it = katalogos.begin(); it != katalogos.end(); it++){
        it->show();
    }
    
    cout << endl;
    
    //Εμφάνιση των στοιχείων του καταλόγου σε αντίστροφη αλφαβητική σειρά.
    for (it = rkatalogos.begin(); it != rkatalogos.end(); it++){
        it->show();
    }
    
    return 0;
}
