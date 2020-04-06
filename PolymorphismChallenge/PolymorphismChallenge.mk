##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PolymorphismChallenge
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining
ProjectPath            :=C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/PolymorphismChallenge
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=gistadr
Date                   :=10/09/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="PolymorphismChallenge.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS := -std=c++14 -Wall -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/PolyAccount.cpp$(ObjectSuffix) $(IntermediateDirectory)/PolySavings.cpp$(ObjectSuffix) $(IntermediateDirectory)/PolyTrust.cpp$(ObjectSuffix) $(IntermediateDirectory)/PolyPrint.cpp$(ObjectSuffix) $(IntermediateDirectory)/PolyMenu.cpp$(ObjectSuffix) $(IntermediateDirectory)/PolyUtil.cpp$(ObjectSuffix) $(IntermediateDirectory)/PolyChecking.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/PolymorphismChallenge/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/PolyAccount.cpp$(ObjectSuffix): PolyAccount.cpp $(IntermediateDirectory)/PolyAccount.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/PolymorphismChallenge/PolyAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PolyAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PolyAccount.cpp$(DependSuffix): PolyAccount.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PolyAccount.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PolyAccount.cpp$(DependSuffix) -MM PolyAccount.cpp

$(IntermediateDirectory)/PolyAccount.cpp$(PreprocessSuffix): PolyAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PolyAccount.cpp$(PreprocessSuffix) PolyAccount.cpp

$(IntermediateDirectory)/PolySavings.cpp$(ObjectSuffix): PolySavings.cpp $(IntermediateDirectory)/PolySavings.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/PolymorphismChallenge/PolySavings.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PolySavings.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PolySavings.cpp$(DependSuffix): PolySavings.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PolySavings.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PolySavings.cpp$(DependSuffix) -MM PolySavings.cpp

$(IntermediateDirectory)/PolySavings.cpp$(PreprocessSuffix): PolySavings.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PolySavings.cpp$(PreprocessSuffix) PolySavings.cpp

$(IntermediateDirectory)/PolyTrust.cpp$(ObjectSuffix): PolyTrust.cpp $(IntermediateDirectory)/PolyTrust.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/PolymorphismChallenge/PolyTrust.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PolyTrust.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PolyTrust.cpp$(DependSuffix): PolyTrust.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PolyTrust.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PolyTrust.cpp$(DependSuffix) -MM PolyTrust.cpp

$(IntermediateDirectory)/PolyTrust.cpp$(PreprocessSuffix): PolyTrust.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PolyTrust.cpp$(PreprocessSuffix) PolyTrust.cpp

$(IntermediateDirectory)/PolyPrint.cpp$(ObjectSuffix): PolyPrint.cpp $(IntermediateDirectory)/PolyPrint.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/PolymorphismChallenge/PolyPrint.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PolyPrint.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PolyPrint.cpp$(DependSuffix): PolyPrint.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PolyPrint.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PolyPrint.cpp$(DependSuffix) -MM PolyPrint.cpp

$(IntermediateDirectory)/PolyPrint.cpp$(PreprocessSuffix): PolyPrint.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PolyPrint.cpp$(PreprocessSuffix) PolyPrint.cpp

$(IntermediateDirectory)/PolyMenu.cpp$(ObjectSuffix): PolyMenu.cpp $(IntermediateDirectory)/PolyMenu.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/PolymorphismChallenge/PolyMenu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PolyMenu.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PolyMenu.cpp$(DependSuffix): PolyMenu.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PolyMenu.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PolyMenu.cpp$(DependSuffix) -MM PolyMenu.cpp

$(IntermediateDirectory)/PolyMenu.cpp$(PreprocessSuffix): PolyMenu.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PolyMenu.cpp$(PreprocessSuffix) PolyMenu.cpp

$(IntermediateDirectory)/PolyUtil.cpp$(ObjectSuffix): PolyUtil.cpp $(IntermediateDirectory)/PolyUtil.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/PolymorphismChallenge/PolyUtil.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PolyUtil.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PolyUtil.cpp$(DependSuffix): PolyUtil.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PolyUtil.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PolyUtil.cpp$(DependSuffix) -MM PolyUtil.cpp

$(IntermediateDirectory)/PolyUtil.cpp$(PreprocessSuffix): PolyUtil.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PolyUtil.cpp$(PreprocessSuffix) PolyUtil.cpp

$(IntermediateDirectory)/PolyChecking.cpp$(ObjectSuffix): PolyChecking.cpp $(IntermediateDirectory)/PolyChecking.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/PolymorphismChallenge/PolyChecking.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PolyChecking.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PolyChecking.cpp$(DependSuffix): PolyChecking.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PolyChecking.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PolyChecking.cpp$(DependSuffix) -MM PolyChecking.cpp

$(IntermediateDirectory)/PolyChecking.cpp$(PreprocessSuffix): PolyChecking.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PolyChecking.cpp$(PreprocessSuffix) PolyChecking.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


