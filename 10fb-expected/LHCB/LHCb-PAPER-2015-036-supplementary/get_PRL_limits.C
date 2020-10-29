//#include <iostream>
//#include <fstream>
#include "getUL.C"
// ctau in mm
void get_PRL_limits(double ctau=1.)
{
  double tau = 0.001*ctau/(3.e8); // in sec
  tau = tau*1.e12; // in psec
  cout << "ctau = " << ctau << " mm" << endl;
  cout << "tau  = " << tau << " psec" << endl;
  cout << "Writing output to blah.txt" << endl;

  ofstream myfile;
  myfile.open("blah.txt");
  myfile << "mass ctau ul"<< endl;
  for (double mass=500; mass<2050; mass=mass+10.) {
     double ul = getUL(mass, tau, 1);
     myfile << mass << " " << ctau << " " << ul << endl;
 }
}
