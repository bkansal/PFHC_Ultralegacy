#include <stdio.h>
// #include<conio.h>
void generate_1Dplots_wrtRaw_UL(string legendname,string plot_name,bool raw)
{
  TLatex textOnTop,intLumiE;
  
  gStyle->SetOptStat(0);
  char* hname = new char[200];
  char* hist_name = new char[200];
  char* stat_name = new char[200];
  char* hname1 = new char[2000];
  char* hname2 = new char[2000];
  char* path = new char[2000];
  char* full_path = new char[2000];
  char* path1 = new char[2000];
  char* full_path1 = new char[2000];
  char* path2 = new char[2000];
  char* full_path2 = new char[2000];
  //  char* plot_name = new char[200];
  char* old_rel = new char[200];
  char* new_rel = new char[200];
  char* rel = new char[200];
  char* old_release = new char[50];
  char* new_release = new char[50];
  char* hist = new char[200];
  // sprintf(old_release, "corrEta");
  // sprintf(new_release, "corrEta");
  //  sprintf(plot_name, "EH_barrel");
  //  sprintf(plot_name, "EH_ec_out");
  sprintf(hist, "histcorhybrid");

  //comparision for old calib and new calib

  if(raw){
  sprintf(hname,"/Users/bkansal/work/Ultra_legacy/final/for_UL2016/raw/1D_response/Raw_%s_10_6_0_pre2_response.root",plot_name.c_str());
  sprintf(hname1,"/Users/bkansal/work/Ultra_legacy/final/for_UL2017/raw/1D_response/Raw_%s_10_6_0_pre2.root",plot_name.c_str());
  sprintf(hname2,"/Users/bkansal/work/Ultra_legacy/final/for_UL2018/raw_comparision_UL2018vs10_0_3/1D_response/Raw_%s_10_6_0_pre2.root",plot_name.c_str());
  sprintf(path,"/Users/bkansal/work/Ultra_legacy/final/plots/raw/overlay_wrtUL_calib/1D_responseplots/gif/%s",plot_name.c_str());
  sprintf(path1,"/Users/bkansal/work/Ultra_legacy/final/plots/raw/overlay_wrtUL_calib/1D_responseplots/pdf/%s",plot_name.c_str());
  sprintf(path2,"/Users/bkansal/work/Ultra_legacy/final/plots/raw/overlay_wrtUL_calib/1D_responseplots/png/%s",plot_name.c_str());
  }
  else if(!raw)
    {
      sprintf(hname,"/Users/bkansal/work/Ultra_legacy/final/for_UL2016/trial1/1D_response/correta_%s_10_6_0.root",plot_name.c_str());
      sprintf(hname1,"/Users/bkansal/work/Ultra_legacy/final/for_UL2017/trial1/1D_response/before15may/correta_%s_10_6_0_pre2.root",plot_name.c_str());
      sprintf(hname2,"/Users/bkansal/work/Ultra_legacy/final/for_UL2018/trial1/1D_response/correta_%s_10_6_0.root",plot_name.c_str());
      sprintf(path,"/Users/bkansal/work/Ultra_legacy/final/plots/corrected/overlay_wrtUL_calib/1D_responseplots/gif/%s",plot_name.c_str());
      sprintf(path1,"/Users/bkansal/work/Ultra_legacy/final/plots/corrected/overlay_wrtUL_calib/1D_responseplots/pdf/%s",plot_name.c_str());
      sprintf(path2,"/Users/bkansal/work/Ultra_legacy/final/plots/corrected/overlay_wrtUL_calib/1D_responseplots/png/%s",plot_name.c_str());
    }
  /* sprintf(hname,"/Users/bkansal/work/Ultra_legacy/final/for_UL2018/raw_comparision_UL2018vs10_0_3/1D_response/Raw_%s_10_0_3.root",plot_name.c_str()); */
  /* sprintf(hname1,"/Users/bkansal/work/Ultra_legacy/final/for_UL2018/raw_comparision_UL2018vs10_0_3/1D_response/Raw_%s_10_6_0_pre2.root",plot_name.c_str()); */

  //  sprintf(path1,"/Users/bkansal/work/Ultra_legacy/final/overlay_wrtUL_calib/1D_responseplots/");//,plot_name.c_str()); */

  /* sprintf(path1,"/Users/bkansal/work/Ultra_legacy/final/for_UL2017/plots/overlay/overlay_wrtRaw_UL/1D_responseplots/pdf/%s",plot_name.c_str()); */
  /* sprintf(path2,"/Users/bkansal/work/Ultra_legacy/final/for_UL2017/plots/overlay/overlay_wrtRaw_UL/1D_responseplots/png/%s",plot_name.c_str()); */
  //  sprintf(new_rel,"new calib (10_6_0)");
  //sprintf(old_rel,"old calib (10_0_3)");
  sprintf(old_rel,"For UL 2016");
  sprintf(new_rel,"For UL 2017");
  sprintf(rel,"For UL 2018");
  /* sprintf(new_rel,"After Ultralegacy"); */
  /* sprintf(old_rel,"Before Ultralegacy"); */

  //comparision for old calib and new calib
  // sprintf(hname1,"/home/work/bhumika/work/calibration/Ultra_legacy/for_UL2016/trial3/1D_response/correta_%s_10_6_0.root",plot_name);
  // sprintf(hname,"/home/work/bhumika/work/calibration/Ultra_legacy/for_UL2016/raw/1D_response/Raw_%s_10_6_0_pre2_response.root",plot_name);
  // sprintf(path,"/home/work/bhumika/work/calibration/Ultra_legacy/for_UL2016/trial3/overlay_plots_with_raw/1D_response/gif/correta_%s",plot_name);
  // sprintf(path1,"/home/work/bhumika/work/calibration/Ultra_legacy/for_UL2016/trial3/overlay_plots_with_raw/1D_response/pdf/correta_%s",plot_name);
  // sprintf(path2,"/home/work/bhumika/work/calibration/Ultra_legacy/for_UL2016/trial3/overlay_plots_with_raw/1D_response/png/correta_%s",plot_name);
  // sprintf(new_rel,"After Calibration");
  // sprintf(old_rel,"Without Calibration");

  //========= Raw E comparision for UL2016 and UL2017=====================
  // sprintf(hname1,"/home/work/bhumika/work/calibration/Ultra_legacy/for_UL2016/raw/1D_response/Raw_%s_10_6_0_pre2_response.root",plot_name);
  // sprintf(hname,"/home/work/bhumika/work/calibration/Ultra_legacy/for_UL2017/raw/1D_response/Raw_%s_10_6_0_pre2.root",plot_name);
  // sprintf(path,"/home/work/bhumika/work/calibration/Ultra_legacy/for_UL2016/raw/gif/overlay_plots_with_UL2017/1D_response/Raw_%s",plot_name);
  // sprintf(path1,"/home/work/bhumika/work/calibration/Ultra_legacy/for_UL2016/raw/pdf/overlay_plots_with_UL2017/1D_response/Raw_%s",plot_name);
  // sprintf(path2,"/home/work/bhumika/work/calibration/Ultra_legacy/for_UL2016/raw/png/overlay_plots_with_UL2017/1D_response/Raw_%s",plot_name);
  // sprintf(new_rel,"for UL2016");
  // sprintf(old_rel,"for UL2017");

      
  double xmin= -1., xmax =1.;
  double ymin= 0, y1, y2, ymax=0.1;
  int n[69];
  n[0]=0;
  n[1]=2;
  for(int i=2; i<69; i++)
    {
      if (n[i-1]<12)
	n[i]=n[i-1]+2;
      else if (n[i-1]>=12 && n[i-1]<104)
	n[i]=n[i-1]+4;
      else
	n[i]=n[i-1]+10;
    }
   TFile * inputfile1 = new TFile(hname,"READ");
   TFile *inputfile2 = new TFile(hname1,"READ");

   TFile *inputfile3 = new TFile(hname2,"READ");
   
   // for(int i=2; i<69;i++)
   for(int i=15; i<16;i++)
    { 
      sprintf(stat_name,"E_{true} =  {%d GeV - %d GeV}",n[i],n[i+1]);

      sprintf(hist_name,"%s%d",hist,n[i]);
      sprintf(full_path,"%s/00%d_%s.gif",path,n[i],hist_name);
      sprintf(full_path1,"%s/00%d_%s.pdf",path1,n[i],hist_name);
      sprintf(full_path2,"%s/00%d_%s.png",path2,n[i],hist_name);
      TH1D *resp1 = (TH1D*)inputfile1->Get(hist_name);
      TH1D *resp2 = (TH1D*)inputfile2->Get(hist_name);
      TH1D *resp3 = (TH1D*)inputfile3->Get(hist_name);

   TCanvas *Canvas_1_n2 = new TCanvas(hist_name, hist_name,65,52,525,527);
   Canvas_1_n2->Range(-60.25,-0.625,562.25,0.625);
   Canvas_1_n2->SetFillColor(0);
   Canvas_1_n2->SetBorderMode(0);
   Canvas_1_n2->SetBorderSize(2);
   Canvas_1_n2->SetGridx(0);
   Canvas_1_n2->SetGridy(0);
   Canvas_1_n2->SetFrameBorderMode(0);
   Canvas_1_n2->SetFrameBorderMode(0);
 
   // respHisto__1->SetStats(0);

   // Int_t ci;      // for color index setting
   // TColor *color; // for color definition with alpha
   // ci = TColor::GetColor("#000099");
   // respHisto__1->SetLineColor(ci);
   // respHisto__1->Draw("");
   //   TPaveStats *ptstats = new TPaveStats(0.60,0.67,0.9,0.9,"brNDC");
   TPaveStats *ptstats = new TPaveStats(0.60,0.47,0.9,0.67,"brNDC");
   //   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetLineColor(4);
   ptstats->SetTextAlign(12);
   ptstats->SetTextColor(4);
   ptstats->SetTextFont(42);
   ptstats->AddText(hist_name);
   ptstats->SetTextSize(0.0315317);
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(10001);
   ptstats->Draw();
   resp1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(resp1);

   TPaveStats *ptstats2 = new TPaveStats(0.60,0.47,0.9,0.67,"brNDC");
   ptstats2->SetBorderSize(1);
   ptstats2->SetFillColor(0);
   ptstats2->SetLineColor(kRed);
   ptstats2->SetTextAlign(12);
   ptstats2->SetTextColor(kRed);
   ptstats2->SetTextFont(42);
   ptstats2->SetTextSize(0.0315317);
   ptstats2->SetOptStat(1111);
   ptstats2->SetOptFit(10001);
   //   ptstats2->Draw();
   resp2->GetListOfFunctions()->Add(ptstats2);
   ptstats2->SetParent(resp2);

   TPaveStats *ptstats3 = new TPaveStats(0.60,0.27,0.9,0.47,"brNDC");
   ptstats3->SetBorderSize(1);
   ptstats3->SetFillColor(0);
   ptstats3->SetLineColor(kBlack);
   ptstats3->SetTextAlign(12);
   ptstats3->SetTextColor(kBlack);
   ptstats3->SetTextFont(42);
   ptstats3->SetTextSize(0.0315317);
   ptstats3->SetOptStat(1111);
   ptstats3->SetOptFit(10001);
   //   ptstats3->Draw();
   resp3->GetListOfFunctions()->Add(ptstats3);
   ptstats3->SetParent(resp3);

   resp1->SetTitle(0);
   resp2->SetLineColor(4);
   resp2->SetLineWidth(2);
 
   resp2->Scale(1.0/resp2->Integral());
  
   resp2->GetXaxis()->SetTitle("Energy response");
   resp2->GetXaxis()->SetTitleSize(22);
   resp2->GetXaxis()->SetTitleFont(43);
   resp2->GetXaxis()->SetTitleOffset(0.8);  
   resp2->SetName(legendname.c_str());
   resp2->SetName(new_rel);
   resp1->GetXaxis()->SetTitle("(E_{true}-E_{corrected})/E_{true}");
   resp1->GetYaxis()->SetTitle("Entries");
   resp1->GetYaxis()->SetTitleOffset(1.38);  
   //   resp2->Fit("gaus");
   TF1* ga1 = (TF1*)resp1->GetFunction("gaus");
   ga1->Delete();
      // cout<<"2 \n";
   TF1* ga2 = (TF1*)resp2->GetFunction("gaus");
   ga2->Delete();
   TF1* ga3 = (TF1*)resp3->GetFunction("gaus");
   ga3->Delete();


   resp1->SetLineColor(kRed);
   resp1->SetLineWidth(2);
   //
   resp1->Scale(1.0/resp1->Integral());
   resp3->SetLineColor(kGreen);
   resp3->SetLineWidth(2);
   resp3->SetName(rel);
   //
   resp3->Scale(1.0/resp3->Integral());

   y1=resp1->GetMaximum();
   y2=resp2->GetMaximum();
   if (y1>y2)
     ymax=y1 + 0.01;
   else
     ymax=y2 + 0.01;

   cout<<"ymax    "<<ymax<<endl;

   resp2->GetXaxis()->SetRangeUser(xmin , xmax);
   resp2->GetYaxis()->SetRangeUser(ymin , ymax);
   resp1->GetXaxis()->SetRangeUser(xmin,xmax); 
   resp1->GetYaxis()->SetRangeUser(ymin , ymax);
  
   resp1->SetName(old_rel);

   resp1->Draw("hists");

    resp2->Draw("hist same");
     resp3->Draw("hist same");
   textOnTop.SetTextSize(0.04);
   intLumiE.SetTextSize(0.06);
  //  if(isPaper) textOnTop.DrawLatexNDC(0.12,0.91,"CMS #it{#bf{Simulation Supplementary}}");                                                                                                
   textOnTop.DrawLatexNDC(0.1,0.91,"CMS #it{#bf{Simulation Preliminary}}");

   TLegend* legends = new TLegend(0.55, 0.7, 0.9, 0.9,"","brNDC"); // the numbers determine the position of the box                                           
   legends->SetFillColor(0);
   legends->SetHeader(legendname.c_str());
   legends->AddEntry(resp1,old_rel,"l");//(name of hist,what you want it called in legend, l=line, p=polymarker, f=boxy thing )
   legends->AddEntry(resp2,new_rel,"l");
   legends->AddEntry(resp3,rel,"l");
   legends->SetTextSize(0.04);
   legends->Draw();

   TLegend* legend2 = new TLegend(0.15, 0.8, 0.45, 0.85,"","brNDC"); // the numbers determine the position of the box
   if(!raw) legend2->SetHeader("After Calibration","C");
   if(raw) legend2->SetHeader("Before Calibration","C");
   legend2->SetBorderSize(0);
   legend2->SetTextSize(0.04);
   legend2->Draw();
   TLegend* legend1 = new TLegend(0.15, 0.85, 0.45, 0.9,"","brNDC"); // the numbers determine the position of the box                          
   legend1->SetHeader(stat_name,"C");
   legend1->SetBorderSize(0);
   legend1->SetTextSize(0.04);
   legend1->Draw();

   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);

   if (n[i]==494) continue;

   Canvas_1_n2->SaveAs(full_path);
   Canvas_1_n2->SaveAs(full_path1);
   Canvas_1_n2->SaveAs(full_path2);
    }
}
