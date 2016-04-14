/**
 * cata.h
 * Διεπιφάνεια της κλάσης catalog. 
 * Προγραμματιστικές τεχνικές. Άσκηση 11 (10).
 * Νικόλαος Κατωμέρης, 8551
 * 10/01/2016
 */

#include <string>
using std::string;

class catalog{
public:
    catalog(const string& namee, long int num);
    catalog();
    catalog(const catalog& other);
    bool operator<(const catalog& one) const;
    void setName(const string& namee);
    void setNumber(long int num);
    string getName() const;
    void show() const;
    ~catalog();
private:
  string name;
  int *number;
};
