#include <stdio.h>
// #include<conio.h>

void genrateplot_responsevsEta_UL(string legendname,string plot_name, bool Ecorr, bool raw)
{
//=========Macro generated from canvas: Canvas_1_n2/Canvas_1_n2                                                                                                                   
//=========  (Mon Apr  1 19:35:54 2019) by ROOT version 6.14/06
  TLatex textOnTop,intLumiE;
                       
  char* hname = new char[2000];
  char* hist_name = new char[200];
  char* stat_name = new char[200];
  char* hname1 = new char[2000];
  char* hname2 = new char[2000];
  char* path = new char[200];
  char* path1 = new char[200];
  char* path2 = new char[200];
  // char* plot_name = new char[2000];                                                                                                                                            
  //  char* legendname = new char[200];                                                                                                                                           
  char* old_rel = new char[200];
  char* new_rel = new char[200];
  char* old_release = new char[50];
  char* new_release = new char[50];
  char* hist = new char[200];
  char* path_root1 = new char[2000];
  char* path_root2 = new char[2000];
  char* path_root3 = new char[2000];
  char* rootfile1 = new char[2000];
  char* rootfile2 = new char[2000];
  char* rootfile3 = new char[2000];

  bool xaxis_pt=false;

    
  sprintf(rootfile1,"Eta_corrected");
  sprintf(rootfile2,"Eta_corrected");
  sprintf(rootfile3,"Eta_corrected");
  sprintf(path_root1,"UL2016/response");
  sprintf(path_root2,"UL2017/response");
  sprintf(path_root3,"UL2018/response");
  sprintf(hname,"%s/%s_%s_10_6_0.root",path_root1,rootfile1,plot_name.c_str());
  sprintf(hname1,"%s/%s_%s_10_6_0_pre2.root",path_root2,rootfile2,plot_name.c_str());
  sprintf(hname2,"%s/%s_%s_10_6_0.root",path_root3,rootfile3,plot_name.c_str());
  
  TFile * inputfile1 = new TFile(hname,"READ");
  TFile * inputfile2 = new TFile(hname1,"READ");
  TFile * inputfile3 = new TFile(hname2,"READ");
  TGraph* graph1 = (TGraph*) inputfile1 -> Get("Graph;1");
  TGraph* graph2 = (TGraph*) inputfile2 -> Get("Graph;1");
  TGraph* graph3 = (TGraph*) inputfile3 -> Get("Graph;1");
  TH2F *respHisto__1 = (TH2F*) inputfile1 -> Get("respHisto");

  if(Ecorr){
  sprintf(rootfile1,"E_correta");
  sprintf(rootfile2,"E_correta");
  sprintf(rootfile3,"E_correta");
  }
  if(raw){
  sprintf(rootfile1,"RawEta_response");
  sprintf(rootfile2,"RawEta_response");
  sprintf(rootfile3,"RawEta_response");
  }
  sprintf(hname,"%s/%s_%s_10_6_0.root",path_root1,rootfile1,plot_name.c_str());
  sprintf(hname1,"%s/%s_%s_10_6_0.root",path_root2,rootfile2,plot_name.c_str());
  sprintf(hname2,"%s/%s_%s_10_6_0.root",path_root3,rootfile3,plot_name.c_str());
  sprintf(path,"plots/%s_Ecorr_response.gif",plot_name.c_str());
  sprintf(path1,"plots/%s_Ecorr_response.pdf",plot_name.c_str());
  sprintf(path2,"plots/%s_Ecorr_response.png",plot_name.c_str());

  
  cout<<"file name --> "<<plot_name<<endl;  
   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",65,50,650,500);
   Canvas_1_n2->Range(-60.25,-0.625,562.25,0.625);
   Canvas_1_n2->SetFillColor(0);
   Canvas_1_n2->SetBorderMode(0);
   Canvas_1_n2->SetBorderSize(2);
   Canvas_1_n2->SetGridx(0);
   Canvas_1_n2->SetGridy(0);
   Canvas_1_n2->SetFrameBorderMode(0);
   Canvas_1_n2->SetFrameBorderMode(0);
   TFile * inputfile1_ = new TFile(hname,"READ");
   TFile * inputfile2_ = new TFile(hname1,"READ");
   TFile * inputfile3_ = new TFile(hname2,"READ");
   TGraph* graph1_ = (TGraph*) inputfile1_ -> Get("Graph;1");
   TGraph* graph2_ = (TGraph*) inputfile2_ -> Get("Graph;1");
   TGraph* graph3_ = (TGraph*) inputfile3_ -> Get("Graph;1");


   // respHisto__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   respHisto__1->SetLineColor(ci);
   respHisto__1->GetXaxis()->SetTitleSize(0.045);
   respHisto__1->Draw("");
   
   graph1->SetMarkerColor(kRed);
   graph2->SetMarkerColor(kBlue);
   graph3->SetMarkerColor(kGreen+3);
   graph1_->SetMarkerColor(kRed);
   graph2_->SetMarkerColor(kBlue);
   graph3_->SetMarkerColor(kGreen+3);

   graph1_->SetMarkerStyle(26);
   graph2_->SetMarkerStyle(26);
   graph3_->SetMarkerStyle(26);

   graph3->Draw("p");
   graph2->Draw("p");
   graph1->Draw("p");

   graph3_->Draw("p");
   graph2_->Draw("p");
   graph1_->Draw("p");


   // TLine *line = new TLine(1.2273,0,498.0851,0);
   TLine *line = new TLine(0,0,3,0);
   line->SetLineColor(2);
   line->SetLineWidth(2);
   line->Draw();
   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);

   textOnTop.SetTextSize(0.04);
   intLumiE.SetTextSize(0.06);
  //  if(isPaper) textOnTop.DrawLatexNDC(0.12,0.91,"CMS #it{#bf{Simulation Supplementary}}")
   textOnTop.DrawLatexNDC(0.1,0.91,"CMS #it{#bf{Simulation Preliminary}}");
   
   TLegend* legends = new TLegend(0.1, 0.7, 0.9, 0.9,"","brNDC"); // the numbers determine the position of the box                                                        
   legends->SetFillColor(0);
   legends->SetHeader(legendname.c_str(),"C");


   legends->SetNColumns(2);
   if(Ecorr){
     legends->AddEntry(graph1,"2016 (After Eta dep. calibration)","P");//(name of hist,what you want it called in legend, l=line, p=polymarker, f=boxy thing )
     legends->AddEntry(graph1_,"2016 (After E calibration)","P");//(name of hist,what you want it called in legend, l=line, p=polymarker, f=boxy thing )
     legends->AddEntry(graph2,"2017 (After Eta dep. calibration)","P");//(name of hist,what you want it called in legend, l=line, p=polymarker, f=boxy thing )
     legends->AddEntry(graph2_,"2017 (After E calibration)","P");//(name of hist,what you want it called in legend, l=line, p=polymarker, f=boxy thing )
     legends->AddEntry(graph3,"2018 (After Eta dep. calibration)","P");   
     legends->AddEntry(graph3_,"2018 (After E calibration)","P");   
   }
   if(raw){
     legends->AddEntry(graph1,"2016 (After Eta dep. calibration)","P");
     legends->AddEntry(graph1_," 2016 (Before calibration)","P");     
     legends->AddEntry(graph2,"2017 (After Eta dep. calibration)","P");
     legends->AddEntry(graph2_," 2017 (Before calibration)","P");
     legends->AddEntry(graph3,"2018 (After Eta dep. calibration)","P");
     legends->AddEntry(graph3_," 2018 (Before calibration)","P");         
   }
   //  legends->AddEntry(graph1_," 2016 (Before calibration)","P");
   //legends->AddEntry(graph2_," 2017 (Before calibration)","P");
   //legends->AddEntry(graph3_," 2018 (Before calibration)","P");

   legends->SetTextSize(0.037);
   //   legends->SetColumnSeparation(0.05);
   //legends->SetMargin(0.08);

   //   legends->SetMarkerStyle(1);
   legends->Draw();
   Canvas_1_n2->SaveAs(path);
   Canvas_1_n2->SaveAs(path1);
   Canvas_1_n2->SaveAs(path2);

}
