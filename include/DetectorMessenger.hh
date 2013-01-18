#ifndef DetectorMessenger_h
#define DetectorMessenger_h 1

#include "globals.hh"
#include "G4UImessenger.hh"

class DetectorConstruction;
class Run;
class G4UIdirectory;
class G4UIcmdWithAString;
class G4UIcmdWithoutParameter;
class G4UIcmdWithADoubleAndUnit;
class G4UIcmdWithABool;

class DetectorMessenger: public G4UImessenger
{
  public:

    DetectorMessenger(DetectorConstruction*);
   ~DetectorMessenger();
    
    void SetNewValue(G4UIcommand*, G4String);
    
  private:

    DetectorConstruction* detector;
    
    G4UIdirectory* dir;
    G4UIdirectory* geoDir;
    G4UIdirectory* detDir;
    G4UIdirectory* maskDir;

    G4UIcmdWithADoubleAndUnit* maskPixSizeCmd;
    G4UIcmdWithADoubleAndUnit* maskHeightCmd;
    G4UIcmdWithADoubleAndUnit* detDistToMaskCmd;
    G4UIcmdWithoutParameter* updateCmd;    

    G4UIdirectory* outputDir;
    G4UIcmdWithABool* outputBinaryCmd;
    G4UIcmdWithABool* outputTextCmd;
    
};

#endif

