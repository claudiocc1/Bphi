void eff_bin3_allMasses()
{
//=========Macro generated from canvas: canvas3/canvas3
//=========  (Fri Dec 16 17:00:36 2016) by ROOT version6.04/02
   TCanvas *canvas3 = new TCanvas("canvas3", "canvas3",1680,23,900,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas3->Range(-829.6296,-0.2835443,5096.296,1.488608);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetTickx(1);
   canvas3->SetTicky(1);
   canvas3->SetLeftMargin(0.14);
   canvas3->SetRightMargin(0.05);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.16);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
   
   Double_t Graph0_fx3011[11] = {
   250,
   500,
   800,
   1000,
   1500,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500};
   Double_t Graph0_fy3011[11] = {
   3.21878e-46,
   3.763654e-44,
   6.243027e-44,
   6.984361e-44,
   1.205102e-43,
   3.265911e-43,
   4.5857e-43,
   1.04822e-42,
   2.06284e-43,
   5.4728e-43,
   5.41054e-43};
   Double_t Graph0_felx3011[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fely3011[11] = {
   1.97089e-46,
   7.919837e-45,
   9.554071e-45,
   8.505611e-45,
   2.710868e-44,
   2.112342e-43,
   3.51203e-43,
   7.74043e-43,
   5.10828e-44,
   3.30155e-43,
   2.56198e-43};
   Double_t Graph0_fehx3011[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fehy3011[11] = {
   1.97089e-46,
   7.961059e-45,
   9.554071e-45,
   8.505611e-45,
   2.710868e-44,
   2.112342e-43,
   3.51203e-43,
   7.74043e-43,
   5.10828e-44,
   3.30155e-43,
   2.56198e-43};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph0_fx3011,Graph0_fy3011,Graph0_felx3011,Graph0_fehx3011,Graph0_fely3011,Graph0_fehy3011);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","Graph",100,0,4800);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(1.4);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(8);
   Graph_Graph3011->SetMarkerSize(1.5);
   Graph_Graph3011->GetXaxis()->SetTitle("m(#chi) [MeV/c^{2}]");
   Graph_Graph3011->GetXaxis()->SetNdivisions(505);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetTitle("(f #times #varepsilon)_{3^{rd} bin} (%)");
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.8);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("ap");
   
   Double_t Graph1_fx3012[11] = {
   250,
   500,
   800,
   1000,
   1500,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500};
   Double_t Graph1_fy3012[11] = {
   6.26438e-07,
   1.544829e-05,
   4.180086e-05,
   5.560134e-05,
   7.381688e-05,
   8.260252e-05,
   8.9252e-05,
   0.000103407,
   0.000105785,
   0.000100121,
   7.59527e-05};
   Double_t Graph1_felx3012[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fely3012[11] = {
   1.39039e-07,
   8.861722e-07,
   1.775861e-06,
   2.079783e-06,
   2.633117e-06,
   2.967013e-06,
   2.90306e-06,
   3.27986e-06,
   3.4846e-06,
   3.6669e-06,
   4.00244e-06};
   Double_t Graph1_fehx3012[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fehy3012[11] = {
   1.39039e-07,
   9.463575e-07,
   1.775861e-06,
   2.079783e-06,
   2.633114e-06,
   2.967013e-06,
   2.90306e-06,
   3.27986e-06,
   3.4846e-06,
   3.6669e-06,
   4.00244e-06};
   grae = new TGraphAsymmErrors(11,Graph1_fx3012,Graph1_fy3012,Graph1_felx3012,Graph1_fehx3012,Graph1_fely3012,Graph1_fehy3012);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","Graph",100,0,4925);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(0.0001201478);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(8);
   Graph_Graph3012->SetMarkerSize(1.5);
   Graph_Graph3012->GetXaxis()->SetNdivisions(505);
   Graph_Graph3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p");
   
   Double_t Graph2_fx3013[11] = {
   250,
   500,
   800,
   1000,
   1500,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500};
   Double_t Graph2_fy3013[11] = {
   0.00197876,
   0.04345388,
   0.15014,
   0.2181461,
   0.3694776,
   0.4735069,
   0.533382,
   0.628457,
   0.66981,
   0.646121,
   0.493312};
   Double_t Graph2_felx3013[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fely3013[11] = {
   0.000290131,
   0.00164756,
   0.003819642,
   0.00479263,
   0.007524442,
   0.009411253,
   0.00971872,
   0.0112832,
   0.0120875,
   0.0121057,
   0.0113147};
   Double_t Graph2_fehx3013[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fehy3013[11] = {
   0.000290131,
   0.001893963,
   0.003819642,
   0.00479263,
   0.007524414,
   0.009411253,
   0.00971872,
   0.0112832,
   0.0120875,
   0.0121057,
   0.0113147};
   grae = new TGraphAsymmErrors(11,Graph2_fx3013,Graph2_fy3013,Graph2_felx3013,Graph2_fehx3013,Graph2_fely3013,Graph2_fehy3013);
   grae->SetName("Graph2");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(22);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","Graph",100,0,4925);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(0.7499184);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(8);
   Graph_Graph3013->SetMarkerSize(1.5);
   Graph_Graph3013->GetXaxis()->SetNdivisions(505);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p");
   
   Double_t Graph3_fx3014[11] = {
   250,
   500,
   800,
   1000,
   1500,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500};
   Double_t Graph3_fy3014[11] = {
   0.000643309,
   0.01440168,
   0.05681287,
   0.08976656,
   0.1830901,
   0.2663884,
   0.329954,
   0.413936,
   0.455445,
   0.443957,
   0.327606};
   Double_t Graph3_felx3014[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fely3014[11] = {
   9.31733e-05,
   0.0005156182,
   0.001333114,
   0.001810704,
   0.003409969,
   0.004817574,
   0.00549131,
   0.00678933,
   0.00746463,
   0.00735117,
   0.00609581};
   Double_t Graph3_fehx3014[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fehy3014[11] = {
   9.31733e-05,
   0.0006014277,
   0.001333114,
   0.001810704,
   0.003409954,
   0.004817574,
   0.00549131,
   0.00678933,
   0.00746463,
   0.00735117,
   0.00609581};
   grae = new TGraphAsymmErrors(11,Graph3_fx3014,Graph3_fy3014,Graph3_felx3014,Graph3_fehx3014,Graph3_fely3014,Graph3_fehy3014);
   grae->SetName("Graph3");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#cc00cc");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#cc00cc");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(23);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","Graph",100,0,4925);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(0.5091456);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(8);
   Graph_Graph3014->SetMarkerSize(1.5);
   Graph_Graph3014->GetXaxis()->SetNdivisions(505);
   Graph_Graph3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("p");
   
   Double_t Graph4_fx3015[11] = {
   250,
   500,
   800,
   1000,
   1500,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500};
   Double_t Graph4_fy3015[11] = {
   0.000118184,
   0.002237149,
   0.008373248,
   0.005399979,
   0.02683271,
   0.04301779,
   0.0532804,
   0.0726355,
   0.072102,
   0.0740792,
   0.0565775};
   Double_t Graph4_felx3015[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fely3015[11] = {
   1.74117e-05,
   0.000128626,
   0.0005971752,
   0.003198675,
   0.002477809,
   0.002110522,
   0.00327353,
   0.00288438,
   0.00625359,
   0.00321837,
   0.00202583};
   Double_t Graph4_fehx3015[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fehy3015[11] = {
   1.74117e-05,
   0.000137323,
   0.0005971752,
   0.003198675,
   0.002477809,
   0.002110522,
   0.00327353,
   0.00288438,
   0.00625359,
   0.00321837,
   0.00202583};
   grae = new TGraphAsymmErrors(11,Graph4_fx3015,Graph4_fy3015,Graph4_felx3015,Graph4_fehx3015,Graph4_fely3015,Graph4_fehy3015);
   grae->SetName("Graph4");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineColor(8);
   grae->SetLineWidth(2);
   grae->SetMarkerColor(8);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","Graph",100,0,4925);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(0.08618107);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(8);
   Graph_Graph3015->SetMarkerSize(1.5);
   Graph_Graph3015->GetXaxis()->SetNdivisions(505);
   Graph_Graph3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.68,0.65,0.98,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph0","#tau_{#chi} = 0.1 ps","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","#tau_{#chi} = 1 ps","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2","#tau_{#chi} = 10 ps","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph3","#tau_{#chi} = 100 ps","lp");

   ci = TColor::GetColor("#cc00cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc00cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph4","#tau_{#chi} = 1000 ps","lp");
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   leg->Draw();
   
   TPaveLabel *pl = new TPaveLabel(0.15,0.75,0.5,0.93,"LHCb simulation","blNDC");
   pl->SetBorderSize(1);
   pl->SetFillColor(1);
   pl->SetFillStyle(0);
   pl->SetLineWidth(0);
   pl->SetTextFont(42);
   pl->SetTextSize(0.99);
   pl->Draw();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
