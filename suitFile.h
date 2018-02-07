#include<string>
class suit {
private:
           float length;
           string brand;
public:
       suit (float l, string b) {
        length =l;
        brand = b;
       }
void setBrand  (string brandName) {
          brand = brandName;
          }
string getBrand () const {
          return brand;
          }

void setLength (float suitLength) {
       if (length > 0) {
       length = suitLength;
      }
     };
