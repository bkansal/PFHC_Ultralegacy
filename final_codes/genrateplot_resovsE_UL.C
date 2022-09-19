#include <stdio.h>
// #include<conio.h>

void genrateplot_resovsE_UL(string legendname,string plot_name, bool xaxis_pt, bool raw)
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


  sprintf(path_root1,"/Users/bkansal/work/Ultra_legacy/final/for_UL2016/trial1/response_plots_root");
  sprintf(path_root2,"/Users/bkansal/work/Ultra_legacy/final/for_UL2017/trial1/response_plots_root/before15may");
  sprintf(path_root3,"/Users/bkansal/work/Ultra_legacy/final/for_UL2018/trial1/response_plots_root");
  sprintf(rootfile1,"correta");
  sprintf(rootfile2,"correta");
  sprintf(rootfile3,"correta");
  sprintf(hname,"%s/%s_%s_10_6_0.root",path_root1,rootfile1,plot_name.c_str());
  sprintf(hname1,"%s/%s_%s_10_6_0_pre2.root",path_root2,rootfile2,plot_name.c_str());
  sprintf(hname2,"%s/%s_%s_10_6_0.root",path_root3,rootfile3,plot_name.c_str());
  sprintf(path,"/Users/bkansal/work/Ultra_legacy/final/plots/corrected/overlay_rawwrtUL_calib/responseplots/%s_reso.gif",plot_name.c_str());
  sprintf(path1,"/Users/bkansal/work/Ultra_legacy/final/plots/corrected/overlay_rawwrtUL_calib/responseplots/%s_reso.pdf",plot_name.c_str());
  sprintf(path2,"/Users/bkansal/work/Ultra_legacy/final/plots/corrected/overlay_rawwrtUL_calib/responseplots/%s_reso.png",plot_name.c_str());

  TFile * inputfile1 = new TFile(hname,"READ");
  TFile * inputfile2 = new TFile(hname1,"READ");
  TFile * inputfile3 = new TFile(hname2,"READ");
  TGraph* graph1 = (TGraph*) inputfile1 -> Get("Graph;2");
  TGraph* graph2 = (TGraph*) inputfile2 -> Get("Graph;2");
  TGraph* graph3 = (TGraph*) inputfile3 -> Get("Graph;2");
  TH2F *respHisto__1 = (TH2F*) inputfile1 -> Get("resoHisto");


  sprintf(path_root1,"/Users/bkansal/work/Ultra_legacy/final/for_UL2016/raw/response_plots_root");
  sprintf(path_root2,"/Users/bkansal/work/Ultra_legacy/final/for_UL2017/raw/response_plots_root");
  sprintf(path_root3,"/Users/bkansal/work/Ultra_legacy/final/for_UL2018/trial1/response_plots_root");
  sprintf(rootfile1,"Raw");
  sprintf(rootfile2,"Raw");
  sprintf(rootfile3,"Raw");
  sprintf(hname,"%s/%s_%s_10_6_0_pre2_response.root",path_root1,rootfile1,plot_name.c_str());
  sprintf(hname1,"%s/%s_%s_10_6_0_pre2.root",path_root2,rootfile2,plot_name.c_str());
  sprintf(hname2,"%s/%s_%s_10_6_0_pre2_response.root",path_root3,rootfile3,plot_name.c_str());
  sprintf(path,"/Users/bkansal/work/Ultra_legacy/final/plots/corrected/overlay_rawwrtUL_calib/responseplots/%s_reso.gif",plot_name.c_str());
  sprintf(path1,"/Users/bkansal/work/Ultra_legacy/final/plots/corrected/overlay_rawwrtUL_calib/responseplots/%s_reso.pdf",plot_name.c_str());
  sprintf(path2,"/Users/bkansal/work/Ultra_legacy/final/plots/corrected/overlay_rawwrtUL_calib/responseplots/%s_reso.png",plot_name.c_str());


  cout<<"file name --> "<<plot_name<<endl;  
   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",65,50,650,500);
   //   Canvas_1_n2->Range(-60.25,-0.625,562.25,0.625);
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
   TGraph* graph1_ = (TGraph*) inputfile1_ -> Get("Graph;2");
   TGraph* graph2_ = (TGraph*) inputfile2_ -> Get("Graph;2");
   TGraph* graph3_ = (TGraph*) inputfile3_ -> Get("Graph;2");

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
   /*
   graph1_->SetMarkerStyle(26);
   graph2_->SetMarkerStyle(26);
   graph3_->SetMarkerStyle(26);

   graph3->Draw("p");
   graph2->Draw("p");
   graph1->Draw("p");
   */
   graph3_->Draw("p");
   graph2_->Draw("p");
   graph1_->Draw("p");


   // TLine *line = new TLine(1.2273,0,498.0851,0);
   TLine *line = new TLine(0,0,500,0);
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

   TLegend* legends = new TLegend(0.18, 0.7, 0.9, 0.9,"","brNDC"); // the numbers determine the position of the box                                                                          
   legends->SetFillColor(0);
   legends->SetHeader(legendname.c_str(),"C");
   //legends->SetNColumns(2);
   //   legends->AddEntry(graph1,"2016 (After calibration)","P");//(name of hist,what you want it called in legend, l=line, p=polymarker, f=boxy thing )
   legends->AddEntry(graph1_,"2016 (Before calibration)","P");//(name of hist,what you want it called in legend, l=line, p=polymarker, f=boxy thing )
   //legends->AddEntry(graph2,"2017 (After calibration)","P");//(name of hist,what you want it called in legend, l=line, p=polymarker, f=boxy thing )                                        
   legends->AddEntry(graph2_,"2017 (Before calibration)","P");//(name of hist,what you want it called in legend, l=line, p=polymarker, f=boxy thing )                                       
   //legends->AddEntry(graph3,"2018 (After calibration)","P");
   legends->AddEntry(graph3_,"2018 (Before calibration)","P");

   legends->SetTextSize(0.04);
   //   legends->SetMarkerStyle(1);
   legends->Draw();
   TLegend* legend2 = new TLegend(0.15, 0.8, 0.3, 0.85,"","brNDC"); // the numbers determine the position of the bo
   /*
   if(!raw) legend2->SetHeader("After Calibration","C");
   if(raw) legend2->SetHeader("Before Calibration","C");
   legend2->SetBorderSize(0);
   legend2->SetTextSize(0.04);
   legend2->Draw();
   */
   Canvas_1_n2->SaveAs(path);
   Canvas_1_n2->SaveAs(path1);
   Canvas_1_n2->SaveAs(path2);

}
