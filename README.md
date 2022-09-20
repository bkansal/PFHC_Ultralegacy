# PFHC_Ultralegacy

This repository includes overlay scripts for final corrected energy responses wrt raw or only energy corrected energy responses.
```
git clone -b JERC_plotting_scripts https://github.com/bkansal/PFHC_Ultralegacy.git
cd PFHC_Ultralegacy
```

For running overlay script, use following commands :

(for raw energy response wrt true energy only having UL overlay)                                                                                                                
```
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("EH hadrons (0 < |#eta| <1.55) without correction ","EH_barrel",false,false,true)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("EH hadrons (1.55 < |#eta| <2.5) without correction ","EH_ec_in",false,false,true)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("EH hadrons (2.5 < |#eta| <2.75) without correction ","EH_ec_out",false,false,true)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("H hadrons (0 < |#eta| <1.55) without correction ","H_barrel",false,false,true)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("H hadrons (1.55 < |#eta| <2.5) without correction ","H_ec_in",false,false,true)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("H hadrons (2.5 < |#eta| <2.75) without correction ","H_ec_out",false,false,true)'
```

(for final Eta-Energy corrected response wrt true energy only having UL overlay)
```
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("EH hadrons (0 < |#eta| <1.55) for Ultralegacy ","EH_barrel",false,true,false)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("EH hadrons (1.55 < |#eta| <2.5) for Ultralegacy ","EH_ec_in",false,true,false)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("EH hadrons (2.5 < |#eta| <2.75) for Ultralegacy ","EH_ec_out",false,true,false)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("H hadrons (0 < |#eta| <1.55) for Ultralegacy ","H_barrel",false,true,false)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("H hadrons (1.55 < |#eta| <2.5) for Ultralegacy ","H_ec_in",false,true,false)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("H hadrons (2.5 < |#eta| <2.75) for Ultralegacy ","H_ec_out",false,true,false)'
```

(for Energy corrected & Raw response wrt true energy only having UL overlay)
``` 
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("EH hadrons (0 < |#eta| <1.55) for Ultralegacy ","EH_barrel",false,true,true)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("EH hadrons (1.55 < |#eta| <2.5) for Ultralegacy ","EH_ec_in",false,true,true)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("EH hadrons (2.5 < |#eta| <2.75) for Ultralegacy ","EH_ec_out",false,true,true)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("H hadrons (0 < |#eta| <1.55) for Ultralegacy ","H_barrel",false,true,true)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("H hadrons (1.55 < |#eta| <2.5) for Ultralegacy ","H_ec_in",false,true,true)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("H hadrons (2.5 < |#eta| <2.75) for Ultralegacy ","H_ec_out",false,true,true)'
```

(for final Eta-Energy & Raw response wrt true energy only having UL overlay)
``` 
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("EH hadrons (0 < |#eta| <1.55) for Ultralegacy ","EH_barrel",false,false,false)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("EH hadrons (1.55 < |#eta| <2.5) for Ultralegacy ","EH_ec_in",false,false,false)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("EH hadrons (2.5 < |#eta| <2.75) for Ultralegacy ","EH_ec_out",false,false,false)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("H hadrons (0 < |#eta| <1.55) for Ultralegacy ","H_barrel",false,false,false)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("H hadrons (1.55 < |#eta| <2.5) for Ultralegacy ","H_ec_in",false,false,false)'
root -l -q 'final_codes/genrateplot_responsevsE_UL.C("H hadrons (2.5 < |#eta| <2.75) for Ultralegacy ","H_ec_out",false,false,false)'
```

(for final Eta-Energy & Energy corrected response wrt true energy only having UL overlay)
```
root -l 'final_codes/genrateplot_responsevsEta_UL.C("H hadrons","H",true,false)'
root -l 'final_codes/genrateplot_responsevsEta_UL.C("EH hadrons","EH",true,false)'
```

(for final Eta-Energy corrected & raw response wrt true energy only having UL overlay)
```
root -l 'final_codes/genrateplot_responsevsEta_UL.C("H hadrons","H",false,true)'
root -l 'final_codes/genrateplot_responsevsEta_UL.C("EH hadrons","EH",false,true)'
```
