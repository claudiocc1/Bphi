void eff_bin2_allMasses()
{
//=========Macro generated from canvas: canvas2/canvas2
//=========  (Fri Dec 16 17:00:36 2016) by ROOT version6.04/02
   TCanvas *canvas2 = new TCanvas("canvas2", "canvas2",1680,23,900,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas2->Range(-829.6296,-0.5063291,5096.296,2.658228);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetTickx(1);
   canvas2->SetTicky(1);
   canvas2->SetLeftMargin(0.14);
   canvas2->SetRightMargin(0.05);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.16);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx3006[11] = {
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
   Double_t Graph0_fy3006[11] = {
   0.0212714,
   0.000202874,
   8.683348e-05,
   8.287112e-05,
   7.059416e-05,
   5.751737e-05,
   8.07928e-05,
   0.000104395,
   0.000143594,
   0.000253619,
   0.00089731};
   Double_t Graph0_felx3006[11] = {
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
   Double_t Graph0_fely3006[11] = {
   0.0115704,
   8.386441e-05,
   9.841696e-06,
   8.828728e-06,
   8.104881e-06,
   7.124571e-06,
   1.42778e-05,
   1.60922e-05,
   2.30256e-05,
   5.22419e-05,
   0.000326288};
   Double_t Graph0_fehx3006[11] = {
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
   Double_t Graph0_fehy3006[11] = {
   0.0115704,
   8.397774e-05,
   9.841696e-06,
   8.828728e-06,
   8.10488e-06,
   7.124571e-06,
   1.42778e-05,
   1.60922e-05,
   2.30256e-05,
   5.22419e-05,
   0.000326288};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph0_fx3006,Graph0_fy3006,Graph0_felx3006,Graph0_fehx3006,Graph0_fely3006,Graph0_fehy3006);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","Graph",100,0,4800);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2.5);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(8);
   Graph_Graph3006->SetMarkerSize(1.5);
   Graph_Graph3006->GetXaxis()->SetTitle("m(#chi) [MeV/c^{2}]");
   Graph_Graph3006->GetXaxis()->SetNdivisions(505);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetTitle("(f #times #varepsilon)_{2^{nd} bin} (%)");
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.8);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("ap");
   
   Double_t Graph1_fx3007[11] = {
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
   Double_t Graph1_fy3007[11] = {
   0.53321,
   0.7271846,
   0.668542,
   0.6437985,
   0.5548493,
   0.5215305,
   0.548186,
   0.658701,
   0.752825,
   0.900017,
   0.769401};
   Double_t Graph1_felx3007[11] = {
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
   Double_t Graph1_fely3007[11] = {
   0.0206377,
   0.0236162,
   0.02166273,
   0.0196392,
   0.01758455,
   0.01732049,
   0.0164118,
   0.019142,
   0.021911,
   0.0276017,
   0.0320336};
   Double_t Graph1_fehx3007[11] = {
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
   Double_t Graph1_fehy3007[11] = {
   0.0206377,
   0.0283215,
   0.02166273,
   0.0196392,
   0.01758452,
   0.01732049,
   0.0164118,
   0.019142,
   0.021911,
   0.0276017,
   0.0320336};
   grae = new TGraphAsymmErrors(11,Graph1_fx3007,Graph1_fy3007,Graph1_felx3007,Graph1_fehx3007,Graph1_fely3007,Graph1_fehy3007);
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
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","Graph",100,0,4925);
   Graph_Graph3007->SetMinimum(0.4618691);
   Graph_Graph3007->SetMaximum(0.9699596);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(8);
   Graph_Graph3007->SetMarkerSize(1.5);
   Graph_Graph3007->GetXaxis()->SetNdivisions(505);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("p");
   
   Double_t Graph2_fx3008[11] = {
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
   Double_t Graph2_fy3008[11] = {
   0.359253,
   0.7669469,
   0.9152444,
   0.9260765,
   0.9105272,
   0.9117552,
   0.957339,
   1.11004,
   1.21385,
   1.36381,
   1.10066};
   Double_t Graph2_felx3008[11] = {
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
   Double_t Graph2_fely3008[11] = {
   0.0103703,
   0.01654137,
   0.01852427,
   0.01739981,
   0.01720537,
   0.01733879,
   0.0168422,
   0.0192727,
   0.0210341,
   0.0235982,
   0.0216328};
   Double_t Graph2_fehx3008[11] = {
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
   Double_t Graph2_fehy3008[11] = {
   0.0103703,
   0.02335498,
   0.01852427,
   0.01739981,
   0.0172053,
   0.01733879,
   0.0168422,
   0.0192727,
   0.0210341,
   0.0235982,
   0.0216328};
   grae = new TGraphAsymmErrors(11,Graph2_fx3008,Graph2_fy3008,Graph2_felx3008,Graph2_fehx3008,Graph2_fely3008,Graph2_fehy3008);
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
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","Graph",100,0,4925);
   Graph_Graph3008->SetMinimum(0.2450302);
   Graph_Graph3008->SetMaximum(1.491261);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(8);
   Graph_Graph3008->SetMarkerSize(1.5);
   Graph_Graph3008->GetXaxis()->SetNdivisions(505);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p");
   
   Double_t Graph3_fx3009[11] = {
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
   Double_t Graph3_fy3009[11] = {
   0.0474671,
   0.1117534,
   0.1417317,
   0.1449593,
   0.147105,
   0.1493895,
   0.156971,
   0.182032,
   0.198229,
   0.220656,
   0.178429};
   Double_t Graph3_felx3009[11] = {
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
   Double_t Graph3_fely3009[11] = {
   0.00135738,
   0.002410229,
   0.002883492,
   0.002745001,
   0.00280898,
   0.002876969,
   0.00280112,
   0.00321561,
   0.00350841,
   0.00396445,
   0.0037858};
   Double_t Graph3_fehx3009[11] = {
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
   Double_t Graph3_fehy3009[11] = {
   0.00135738,
   0.003403069,
   0.002883492,
   0.002745001,
   0.002808968,
   0.002876969,
   0.00280112,
   0.00321561,
   0.00350841,
   0.00396445,
   0.0037858};
   grae = new TGraphAsymmErrors(11,Graph3_fx3009,Graph3_fy3009,Graph3_felx3009,Graph3_fehx3009,Graph3_fely3009,Graph3_fehy3009);
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
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","Graph",100,0,4925);
   Graph_Graph3009->SetMinimum(0.02825865);
   Graph_Graph3009->SetMaximum(0.2424715);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(8);
   Graph_Graph3009->SetMarkerSize(1.5);
   Graph_Graph3009->GetXaxis()->SetNdivisions(505);
   Graph_Graph3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p");
   
   Double_t Graph4_fx3010[11] = {
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
   Double_t Graph4_fy3010[11] = {
   0.00796139,
   0.01592179,
   0.01891628,
   0.007794024,
   0.01864688,
   0.02032388,
   0.0208283,
   0.0257571,
   0.0250667,
   0.0294909,
   0.0249406};
   Double_t Graph4_felx3010[11] = {
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
   Double_t Graph4_fely3010[11] = {
   0.00031099,
   0.0007966437,
   0.001332316,
   0.004616531,
   0.001724647,
   0.001008229,
   0.00128811,
   0.00103947,
   0.00218191,
   0.00130199,
   0.000938923};
   Double_t Graph4_fehx3010[11] = {
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
   Double_t Graph4_fehy3010[11] = {
   0.00031099,
   0.0008670624,
   0.001332316,
   0.004616531,
   0.001724646,
   0.001008229,
   0.00128811,
   0.00103947,
   0.00218191,
   0.00130199,
   0.000938923};
   grae = new TGraphAsymmErrors(11,Graph4_fx3010,Graph4_fy3010,Graph4_felx3010,Graph4_fehx3010,Graph4_fely3010,Graph4_fehy3010);
   grae->SetName("Graph4");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineColor(8);
   grae->SetLineWidth(2);
   grae->SetMarkerColor(8);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","Graph",100,0,4925);
   Graph_Graph3010->SetMinimum(0.0004159535);
   Graph_Graph3010->SetMaximum(0.03355443);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(8);
   Graph_Graph3010->SetMarkerSize(1.5);
   Graph_Graph3010->GetXaxis()->SetNdivisions(505);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
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
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
