void eff_bin1_allMasses()
{
//=========Macro generated from canvas: canvas1/canvas1
//=========  (Fri Dec 16 17:00:35 2016) by ROOT version6.04/02
   TCanvas *canvas1 = new TCanvas("canvas1", "canvas1",1680,23,900,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->Range(-829.6296,-0.7088607,5096.296,3.721519);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetTickx(1);
   canvas1->SetTicky(1);
   canvas1->SetLeftMargin(0.14);
   canvas1->SetRightMargin(0.05);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.16);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx3001[11] = {
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
   Double_t Graph0_fy3001[11] = {
   1.11456,
   1.206497,
   1.218852,
   1.054294,
   1.248917,
   1.555731,
   1.53072,
   1.7319,
   1.74977,
   1.72622,
   1.28199};
   Double_t Graph0_felx3001[11] = {
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
   Double_t Graph0_fely3001[11] = {
   0.0805568,
   0.08505323,
   0.08469196,
   0.07735618,
   0.0854654,
   0.1034928,
   0.0923176,
   0.0983271,
   0.106268,
   0.108886,
   0.127968};
   Double_t Graph0_fehx3001[11] = {
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
   Double_t Graph0_fehy3001[11] = {
   0.0805568,
   0.08892002,
   0.08469196,
   0.07735618,
   0.08546538,
   0.1034928,
   0.0923176,
   0.0983271,
   0.106268,
   0.108886,
   0.127968};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph0_fx3001,Graph0_fy3001,Graph0_felx3001,Graph0_fehx3001,Graph0_fely3001,Graph0_fehy3001);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","Graph",100,0,4800);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(3.5);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(8);
   Graph_Graph3001->SetMarkerSize(1.5);
   Graph_Graph3001->GetXaxis()->SetTitle("m(#chi) [MeV/c^{2}]");
   Graph_Graph3001->GetXaxis()->SetNdivisions(505);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetTitle("(f #times #varepsilon)_{1^{st} bin} (%)");
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.8);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("ap");
   
   Double_t Graph1_fx3002[11] = {
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
   Double_t Graph1_fy3002[11] = {
   0.813192,
   0.9017612,
   0.8641581,
   0.8463305,
   0.9679134,
   1.080174,
   1.09504,
   1.20661,
   1.24266,
   1.26911,
   0.898291};
   Double_t Graph1_felx3002[11] = {
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
   Double_t Graph1_fely3002[11] = {
   0.0296517,
   0.02917433,
   0.0278184,
   0.02568581,
   0.02853687,
   0.03201266,
   0.0295137,
   0.0321268,
   0.0340262,
   0.0368439,
   0.0381848};
   Double_t Graph1_fehx3002[11] = {
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
   Double_t Graph1_fehy3002[11] = {
   0.0296517,
   0.0350278,
   0.0278184,
   0.02568581,
   0.02853682,
   0.03201266,
   0.0295137,
   0.0321268,
   0.0340262,
   0.0368439,
   0.0381848};
   grae = new TGraphAsymmErrors(11,Graph1_fx3002,Graph1_fy3002,Graph1_felx3002,Graph1_fehx3002,Graph1_fely3002,Graph1_fehy3002);
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
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","Graph",100,0,4925);
   Graph_Graph3002->SetMinimum(0.7312989);
   Graph_Graph3002->SetMaximum(1.358195);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(8);
   Graph_Graph3002->SetMarkerSize(1.5);
   Graph_Graph3002->GetXaxis()->SetNdivisions(505);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("p");
   
   Double_t Graph2_fx3003[11] = {
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
   Double_t Graph2_fy3003[11] = {
   0.124493,
   0.1383234,
   0.1335971,
   0.1330733,
   0.1505849,
   0.1681272,
   0.170724,
   0.187737,
   0.194232,
   0.204182,
   0.14681};
   Double_t Graph2_felx3003[11] = {
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
   Double_t Graph2_fely3003[11] = {
   0.00475349,
   0.004768326,
   0.00464615,
   0.004295836,
   0.004856229,
   0.00543591,
   0.00508637,
   0.00553058,
   0.00591535,
   0.0068308,
   0.00738759};
   Double_t Graph2_fehx3003[11] = {
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
   Double_t Graph2_fehy3003[11] = {
   0.00475349,
   0.005619552,
   0.00464615,
   0.004295836,
   0.004856222,
   0.00543591,
   0.00508637,
   0.00553058,
   0.00591535,
   0.0068308,
   0.00738759};
   grae = new TGraphAsymmErrors(11,Graph2_fx3003,Graph2_fy3003,Graph2_felx3003,Graph2_fehx3003,Graph2_fely3003,Graph2_fehy3003);
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
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","Graph",100,0,4925);
   Graph_Graph3003->SetMinimum(0.1106122);
   Graph_Graph3003->SetMaximum(0.2201401);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(8);
   Graph_Graph3003->SetMarkerSize(1.5);
   Graph_Graph3003->GetXaxis()->SetNdivisions(505);
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("p");
   
   Double_t Graph3_fx3004[11] = {
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
   Double_t Graph3_fy3004[11] = {
   0.0132551,
   0.01457471,
   0.01409226,
   0.0140014,
   0.01600687,
   0.01786155,
   0.0181821,
   0.0200402,
   0.0207775,
   0.0219672,
   0.0159116};
   Double_t Graph3_felx3004[11] = {
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
   Double_t Graph3_fely3004[11] = {
   0.000518223,
   0.0005156927,
   0.0005028676,
   0.0004631206,
   0.0005300342,
   0.0005936165,
   0.000557186,
   0.000606451,
   0.00065062,
   0.000760192,
   0.000829436};
   Double_t Graph3_fehx3004[11] = {
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
   Double_t Graph3_fehy3004[11] = {
   0.000518223,
   0.0006034147,
   0.0005028676,
   0.0004631206,
   0.0005300334,
   0.0005936165,
   0.000557186,
   0.000606451,
   0.00065062,
   0.000760192,
   0.000829436};
   grae = new TGraphAsymmErrors(11,Graph3_fx3004,Graph3_fy3004,Graph3_felx3004,Graph3_fehx3004,Graph3_fely3004,Graph3_fehy3004);
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
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","Graph",100,0,4925);
   Graph_Graph3004->SetMinimum(0.01173783);
   Graph_Graph3004->SetMaximum(0.02372644);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(8);
   Graph_Graph3004->SetMarkerSize(1.5);
   Graph_Graph3004->GetXaxis()->SetNdivisions(505);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p");
   
   Double_t Graph4_fx3005[11] = {
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
   Double_t Graph4_fy3005[11] = {
   0.00217304,
   0.002005649,
   0.001805177,
   0.0007215032,
   0.001940483,
   0.002320498,
   0.00230421,
   0.00270885,
   0.00251138,
   0.00281053,
   0.00213008};
   Double_t Graph4_felx3005[11] = {
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
   Double_t Graph4_fely3005[11] = {
   0.000102972,
   0.0001151468,
   0.0001377709,
   0.0004278075,
   0.000187023,
   0.0001312038,
   0.000153664,
   0.000128027,
   0.000228045,
   0.000149409,
   0.00012937};
   Double_t Graph4_fehx3005[11] = {
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
   Double_t Graph4_fehy3005[11] = {
   0.000102972,
   0.0001229546,
   0.0001377709,
   0.0004278075,
   0.0001870229,
   0.0001312038,
   0.000153664,
   0.000128027,
   0.000228045,
   0.000149409,
   0.00012937};
   grae = new TGraphAsymmErrors(11,Graph4_fx3005,Graph4_fy3005,Graph4_felx3005,Graph4_fehx3005,Graph4_fely3005,Graph4_fehy3005);
   grae->SetName("Graph4");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineColor(8);
   grae->SetLineWidth(2);
   grae->SetMarkerColor(8);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","Graph",100,0,4925);
   Graph_Graph3005->SetMinimum(2.707128e-05);
   Graph_Graph3005->SetMaximum(0.003226563);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(8);
   Graph_Graph3005->SetMarkerSize(1.5);
   Graph_Graph3005->GetXaxis()->SetNdivisions(505);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
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
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
