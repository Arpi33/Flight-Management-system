#include <iostream>
using namespace std;
class MilesAccount
{
  long nmb_of_miles;
  double miles_price;
public:
  MilesAccount();
  void setmiles(long);
  long getmiles() const;
  void increasemiles(int);
  ~MilesAccount();
};


MilesAccount::MilesAccount()
{
  nmb_of_miles = 0;
  miles_price = 0.75;
}

MilesAccount::~MilesAccount() {}

void MilesAccount::setmiles(long nmb_of_miles) {

	this->nmb_of_miles = nmb_of_miles;
}

long MilesAccount::getmiles()const {

	return nmb_of_miles;
}
void MilesAccount::increasemiles(int n) {

	nmb_of_miles += n;

}


