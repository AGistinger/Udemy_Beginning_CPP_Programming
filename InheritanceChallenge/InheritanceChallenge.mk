##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=InheritanceChallenge
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining
ProjectPath            :=C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/InheritanceChallenge
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=gistadr
Date                   :=09/09/2019
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
ObjectsFileList        :="InheritanceChallenge.txt"
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
Objects0=$(IntermediateDirectory)/InheritianceChallengeSavings.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/InheritanceChallengeChecking.cpp$(ObjectSuffix) $(IntermediateDirectory)/InheritanceChallengeMenu.cpp$(ObjectSuffix) $(IntermediateDirectory)/InheritanceChallengeAccount.cpp$(ObjectSuffix) $(IntermediateDirectory)/InheritanceChallengeUtil.cpp$(ObjectSuffix) $(IntermediateDirectory)/InheritanceChallengeTrust.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/InheritianceChallengeSavings.cpp$(ObjectSuffix): InheritianceChallengeSavings.cpp $(IntermediateDirectory)/InheritianceChallengeSavings.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/InheritanceChallenge/InheritianceChallengeSavings.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/InheritianceChallengeSavings.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/InheritianceChallengeSavings.cpp$(DependSuffix): InheritianceChallengeSavings.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/InheritianceChallengeSavings.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/InheritianceChallengeSavings.cpp$(DependSuffix) -MM InheritianceChallengeSavings.cpp

$(IntermediateDirectory)/InheritianceChallengeSavings.cpp$(PreprocessSuffix): InheritianceChallengeSavings.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/InheritianceChallengeSavings.cpp$(PreprocessSuffix) InheritianceChallengeSavings.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/InheritanceChallenge/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/InheritanceChallengeChecking.cpp$(ObjectSuffix): InheritanceChallengeChecking.cpp $(IntermediateDirectory)/InheritanceChallengeChecking.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/InheritanceChallenge/InheritanceChallengeChecking.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/InheritanceChallengeChecking.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/InheritanceChallengeChecking.cpp$(DependSuffix): InheritanceChallengeChecking.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/InheritanceChallengeChecking.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/InheritanceChallengeChecking.cpp$(DependSuffix) -MM InheritanceChallengeChecking.cpp

$(IntermediateDirectory)/InheritanceChallengeChecking.cpp$(PreprocessSuffix): InheritanceChallengeChecking.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/InheritanceChallengeChecking.cpp$(PreprocessSuffix) InheritanceChallengeChecking.cpp

$(IntermediateDirectory)/InheritanceChallengeMenu.cpp$(ObjectSuffix): InheritanceChallengeMenu.cpp $(IntermediateDirectory)/InheritanceChallengeMenu.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/InheritanceChallenge/InheritanceChallengeMenu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/InheritanceChallengeMenu.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/InheritanceChallengeMenu.cpp$(DependSuffix): InheritanceChallengeMenu.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/InheritanceChallengeMenu.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/InheritanceChallengeMenu.cpp$(DependSuffix) -MM InheritanceChallengeMenu.cpp

$(IntermediateDirectory)/InheritanceChallengeMenu.cpp$(PreprocessSuffix): InheritanceChallengeMenu.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/InheritanceChallengeMenu.cpp$(PreprocessSuffix) InheritanceChallengeMenu.cpp

$(IntermediateDirectory)/InheritanceChallengeAccount.cpp$(ObjectSuffix): InheritanceChallengeAccount.cpp $(IntermediateDirectory)/InheritanceChallengeAccount.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/InheritanceChallenge/InheritanceChallengeAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/InheritanceChallengeAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/InheritanceChallengeAccount.cpp$(DependSuffix): InheritanceChallengeAccount.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/InheritanceChallengeAccount.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/InheritanceChallengeAccount.cpp$(DependSuffix) -MM InheritanceChallengeAccount.cpp

$(IntermediateDirectory)/InheritanceChallengeAccount.cpp$(PreprocessSuffix): InheritanceChallengeAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/InheritanceChallengeAccount.cpp$(PreprocessSuffix) InheritanceChallengeAccount.cpp

$(IntermediateDirectory)/InheritanceChallengeUtil.cpp$(ObjectSuffix): InheritanceChallengeUtil.cpp $(IntermediateDirectory)/InheritanceChallengeUtil.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/InheritanceChallenge/InheritanceChallengeUtil.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/InheritanceChallengeUtil.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/InheritanceChallengeUtil.cpp$(DependSuffix): InheritanceChallengeUtil.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/InheritanceChallengeUtil.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/InheritanceChallengeUtil.cpp$(DependSuffix) -MM InheritanceChallengeUtil.cpp

$(IntermediateDirectory)/InheritanceChallengeUtil.cpp$(PreprocessSuffix): InheritanceChallengeUtil.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/InheritanceChallengeUtil.cpp$(PreprocessSuffix) InheritanceChallengeUtil.cpp

$(IntermediateDirectory)/InheritanceChallengeTrust.cpp$(ObjectSuffix): InheritanceChallengeTrust.cpp $(IntermediateDirectory)/InheritanceChallengeTrust.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/InheritanceChallenge/InheritanceChallengeTrust.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/InheritanceChallengeTrust.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/InheritanceChallengeTrust.cpp$(DependSuffix): InheritanceChallengeTrust.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/InheritanceChallengeTrust.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/InheritanceChallengeTrust.cpp$(DependSuffix) -MM InheritanceChallengeTrust.cpp

$(IntermediateDirectory)/InheritanceChallengeTrust.cpp$(PreprocessSuffix): InheritanceChallengeTrust.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/InheritanceChallengeTrust.cpp$(PreprocessSuffix) InheritanceChallengeTrust.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


