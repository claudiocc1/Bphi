#include "Fig4-S.C"
void get_PRD_limits(double ctau=1.) {
  
  double tau = 0.001*ctau/(3.e8); // in sec
  tau = tau*1.e12; // in psec
  cout << "ctau = " << ctau << " mm" << endl;
  cout << "tau  = " << tau << " psec" << endl;
  cout << "Writing output to blah.txt" << endl;
  ofstream myfile;
  myfile.open("blah.txt");
  myfile << "mass ctau ul"<< endl;

  // Make the histogram
  excluded_limit2D_psi4160Veto_log_CL90();

  // Retrieve ir from never-never-land
  TH2D *histo2D = (TH2D*)gDirectory->Get("histo2D");
  
  // This is rough because I did not bother to do an interpolation
  // and the binning is rough

  TAxis *xaxis = histo2D->GetXaxis();
  TAxis *yaxis = histo2D->GetYaxis();
  Int_t biny = yaxis->FindBin(tau);
  
  for (double mass=500; mass<2050; mass=mass+10.) {
      Int_t binx = xaxis->FindBin(mass);
      double ul = histo2D->GetBinContent(binx,biny);
      myfile << mass << " " << ctau << " " << ul << endl;
  }

}
      
