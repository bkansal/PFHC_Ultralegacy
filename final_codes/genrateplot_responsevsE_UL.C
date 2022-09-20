#include <stdio.h>
// #include<conio.h>

void genrateplot_responsevsE_UL(TString legendname,string plot_name, bool xaxis_pt, bool corrE=false,   bool raw=false)
{
  //=========Macro generated from canvas: Canvas_1_n2/Canvas_1_n2                                                                                                                   
//=========  (Mon Apr  1 19:35:54 2019) by ROOT version 6.14/06
//  bool corrE=true;
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
  TFile * inputfile1 ;
  TFile * inputfile2 ;
  TFile * inputfile3 ;
  TGraph* graph1;
  TGraph* graph2;
  TGraph* graph3;
  TH2F* respHisto__1;
  TString varName;

  if(!xaxis_pt)
    {

      sprintf(path_root1,"UL2016/response");
      sprintf(path_root2,"UL2017/response");
      sprintf(path_root3,"UL2018/response");
      if(corrE)
	{
	  sprintf(rootfile1,"corrE");
	  sprintf(rootfile2,"corrE");
	  sprintf(rootfile3,"corrE");
	}
      else
	{
	  sprintf(rootfile1,"correta");
	  sprintf(rootfile2,"correta");
	  sprintf(rootfile3,"correta");
	}

      sprintf(hname,"%s/%s_%s_10_6_0.root",path_root1,rootfile1,plot_name.c_str());
      if(corrE) sprintf(hname1,"%s/%s_%s_10_6_0.root",path_root2,rootfile2,plot_name.c_str());
      else sprintf(hname1,"%s/%s_%s_10_6_0_pre2.root",path_root2,rootfile2,plot_name.c_str());
      sprintf(hname2,"%s/%s_%s_10_6_0.root",path_root3,rootfile3,plot_name.c_str());

      sprintf(path,"plots/%s_response.gif",plot_name.c_str());
      sprintf(path1,"plots/%s_response.pdf",plot_name.c_str());
      sprintf(path2,"plots/%s_response.png",plot_name.c_str());

      inputfile1 = new TFile(hname,"READ");
      inputfile2 = new TFile(hname1,"READ");
      inputfile3 = new TFile(hname2,"READ");
      graph1 = (TGraph*) inputfile1 -> Get("Graph;1");
      if(corrE)graph2 = (TGraph*) inputfile2 -> Get("Graph0;1");
      else graph2 = (TGraph*) inputfile2 -> Get("Graph;1"); 
      graph3 = (TGraph*) inputfile3 -> Get("Graph;1");
      respHisto__1 = (TH2F*) inputfile1 -> Get("respHisto");

      sprintf(rootfile1,"Raw");
      sprintf(rootfile2,"Raw");
      sprintf(rootfile3,"Raw");
      sprintf(hname,"%s/%s_%s_10_6_0_pre2_response.root",path_root1,rootfile1,plot_name.c_str());
      sprintf(hname1,"%s/%s_%s_10_6_0_pre2.root",path_root2,rootfile2,plot_name.c_str());
      sprintf(hname2,"%s/%s_%s_10_6_0_pre2_response.root",path_root3,rootfile3,plot_name.c_str());
      if(corrE && !raw){
	sprintf(path,"plots/corrE_%s_response.gif",plot_name.c_str());
	sprintf(path1,"plots/corrE_%s_response.pdf",plot_name.c_str());
	sprintf(path2,"plots/corrE_%s_response.png",plot_name.c_str());
      }
      else if(!corrE && raw){
        sprintf(path,"plots/raw_%s_response.gif",plot_name.c_str());
        sprintf(path1,"plots/raw_%s_response.pdf",plot_name.c_str());
        sprintf(path2,"plots/raw_%s_response.png",plot_name.c_str());
      }
      else if(corrE && raw){
        sprintf(path,"plots/corrEwrtraw_%s_response.gif",plot_name.c_str());
        sprintf(path1,"plots/corrEwrtraw_%s_response.pdf",plot_name.c_str());
        sprintf(path2,"plots/corrEwrtraw_%s_response.png",plot_name.c_str());
      }

      else if(!corrE && !raw){
	sprintf(path,"plots/corrEtawrtraw_%s_response.gif",plot_name.c_str());
	sprintf(path1,"plots/corrEtawrtraw_%s_response.pdf",plot_name.c_str());
	sprintf(path2,"plots/corrEtawrtraw_%s_response.png",plot_name.c_str());
      }
      varName="Graph;1";
    }
  else if(xaxis_pt==true){ 
    sprintf(path_root1,"UL2016/response");
    sprintf(path_root2,"UL2017/response");
    sprintf(path_root3,"UL2018/response");
    sprintf(rootfile1,"correta");
    sprintf(rootfile2,"correta");
    sprintf(rootfile3,"correta");
    sprintf(hname,"%s/%s_%s_10_6_0_pt.root",path_root1,rootfile1,plot_name.c_str()); 
    sprintf(hname1,"%s/%s_%s_10_6_0_pre2_pt.root",path_root2,rootfile2,plot_name.c_str());
    sprintf(hname2,"%s/%s_%s_10_6_0_pt.root",path_root3,rootfile3,plot_name.c_str());
    inputfile1 = new TFile(hname,"READ");
    inputfile2 = new TFile(hname1,"READ");
    inputfile3 = new TFile(hname2,"READ");
    graph1 = (TGraph*) inputfile1 -> Get("Graph;1");
    graph2 = (TGraph*) inputfile2 -> Get("Graph;1");
    graph3 = (TGraph*) inputfile3 -> Get("Graph;1");
    respHisto__1 = (TH2F*) inputfile1 -> Get("respHisto");
    sprintf(rootfile1,"Raw");
    sprintf(rootfile2,"Raw");
    sprintf(rootfile3,"Raw");
    sprintf(hname,"%s/%s_%s_10_6_0_pre2_response_pt.root",path_root1,rootfile1,plot_name.c_str());
    sprintf(hname1,"%s/%s_%s_10_6_0_pre2_pt.root",path_root2,rootfile2,plot_name.c_str());
    sprintf(hname2,"%s/%s_%s_10_6_0_pre2_response_pt.root",path_root3,rootfile3,plot_name.c_str());    
    sprintf(path,"/Users/bkansal/work/Ultra_legacy/final/plots/corrected/overlay_rawwrtUL_calib/responseplots/%s_response_pt.gif",plot_name.c_str());
    sprintf(path1,"/Users/bkansal/work/Ultra_legacy/final/plots/corrected/overlay_rawwrtUL_calib/responseplots/%s_response_pt.pdf",plot_name.c_str());
    sprintf(path2,"/Users/bkansal/work/Ultra_legacy/final/plots/corrected/overlay_rawwrtUL_calib/responseplots/%s_response_pt.png",plot_name.c_str());
    varName="response;1";
  } 
  

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
   TGraph* graph1_ = (TGraph*) inputfile1_ -> Get(varName);
   TGraph* graph2_ = (TGraph*) inputfile2_ -> Get(varName);
   TGraph* graph3_;
   if(xaxis_pt) graph3_= (TGraph*) inputfile3_ -> Get("Graph;1");
   else graph3_ = (TGraph*) inputfile3_ -> Get(varName);
   //  TH2F *respHisto__1 = (TH2F*) inputfile1_ -> Get("respHisto");


   // respHisto__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   respHisto__1->SetLineColor(ci);
   respHisto__1->GetXaxis()->SetTitleSize(0.045);
   respHisto__1->Draw("");
   
   graph1->SetMarkerColor(kRed);
   graph2->SetMarkerColor(kBlue);
   graph3->SetMarkerColor(kGreen);
   graph1_->SetMarkerColor(kRed);
   graph2_->SetMarkerColor(kBlue);
   graph3_->SetMarkerColor(kGreen);


   if(!raw && corrE){
     /*
     graph1->SetMarkerStyle(33);
     graph2->SetMarkerStyle();
     graph3->SetMarkerStyle(26);
     */
     graph3->Draw("p");
     graph2->Draw("p");
     graph1->Draw("p");
   }
   if(!corrE && raw){

     graph3_->Draw("p");
     graph2_->Draw("p");
     graph1_->Draw("p");
   }
   else if(corrE && raw){
     graph1_->SetMarkerStyle(26);
     graph2_->SetMarkerStyle(26);
     graph3_->SetMarkerStyle(26);
     graph3->Draw("p");
     graph2->Draw("p");
     graph1->Draw("p");
     graph3_->Draw("p");
     graph2_->Draw("p");
     graph1_->Draw("p");

   }
   else if(!corrE && !raw){
     graph1_->SetMarkerStyle(26);
     graph2_->SetMarkerStyle(26);
     graph3_->SetMarkerStyle(26);
     graph3->Draw("p");
     graph2->Draw("p");
     graph1->Draw("p");
     graph3_->Draw("p");
     graph2_->Draw("p");
     graph1_->Draw("p");

   }

   // TLine *line = new TLine(1.2273,0,498.0851,0);
   TLine *line = new TLine(0,0,500,0);
   if(xaxis_pt) line = new TLine(0,0,100,0);
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

   TLegend* legends = new TLegend(0.28, 0.7, 0.9, 0.9,"","brNDC"); // the numbers determine the position of the box 
   legends->SetFillColor(0); 
   legends->SetHeader(legendname,"C");
   //   legends->SetNColumns(2);   

   if(corrE && ! raw)
   {
     //legends->AddEntry(graph1,"2016 (Raw calibration)","P");//(name of hist,what you want it called in legend, l=line, p=polymarker, f=boxy thing ) 
     legends->AddEntry(graph1,"2016 (After E calibration)","P");//(name of hist,what you want it called in legend, l=line, p=polymarker, f=boxy thing )   
     //legends->AddEntry(graph2,"2017 (Raw calibration)","P");//(name of hist,what you want it called in legend, l=line, p=polymarker, f=boxy thing )
     legends->AddEntry(graph2,"2017 (After E calibration)","P");//(name of hist,what you want it called in legend, l=line, p=polymarker, f=boxy thing )
     //legends->AddEntry(graph3,"2018 (After calibration)","P");
     legends->AddEntry(graph3,"2018 (After E calibration)","P");
   }
   else if(!corrE && raw)
     {
       legends->AddEntry(graph1_,"for Ultralegacy 2016 ","P");
       legends->AddEntry(graph2_,"for Ultralegacy 2017 ","P");
       legends->AddEntry(graph3_,"for Ultralegacy 2018 ","P");
     }
   else if(corrE && raw){
     legends = new TLegend(0.18, 0.7, 0.9, 0.9,"","brNDC");
     legends->SetFillColor(0);
     legends->SetHeader(legendname,"C");
     legends->SetNColumns(2);  
     legends->AddEntry(graph1,"2016 (After E calibration)","P");
     legends->AddEntry(graph1_,"2016 (Before calibration)","P");
     legends->AddEntry(graph2,"2017 (After E calibration)","P");
     legends->AddEntry(graph2_,"2017 (Before calibration)","P");
     legends->AddEntry(graph3,"2018 (After E calibration)","P");
     legends->AddEntry(graph3_,"2018 (Before calibration)","P");
   }
   else if(!corrE && !raw){
     legends = new TLegend(0.18, 0.7, 0.9, 0.9,"","brNDC");
     legends->SetFillColor(0);
     legends->SetHeader(legendname,"C");
     legends->SetNColumns(2);  
     legends->AddEntry(graph1,"2016 (After Eta calibration)","P");
     legends->AddEntry(graph1_,"2016 (Before calibration)","P");
     legends->AddEntry(graph2,"2017 (After Eta calibration)","P");
     legends->AddEntry(graph2_,"2017 (Before calibration)","P");
     legends->AddEntry(graph3,"2018 (After Eta calibration)","P");
     legends->AddEntry(graph3_,"2018 (Before calibration)","P");
   }   
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

