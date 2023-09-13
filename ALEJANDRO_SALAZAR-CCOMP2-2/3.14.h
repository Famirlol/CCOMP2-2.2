#include <iostream>
#include <string>
using namespace std;
class classaccount {
public:
classaccount(unsigned int b,string a,string e, double d)
:b_(b),a_(a),e_(e),d_(d){}
private:
unsigned int b_;
string a_;
string e_;
double d_;
};