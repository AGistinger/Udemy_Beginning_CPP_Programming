##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SmartPointerShared
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining
ProjectPath            :=C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/SmartPointerShared
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
ObjectsFileList        :="SmartPointerShared.txt"
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
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/SmartAccount.cpp$(ObjectSuffix) $(IntermediateDirectory)/SmartPrint.cpp$(ObjectSuffix) $(IntermediateDirectory)/SmartTrust.cpp$(ObjectSuffix) $(IntermediateDirectory)/SmartSavings.cpp$(ObjectSuffix) $(IntermediateDirectory)/SmartChecking.cpp$(ObjectSuffix) 



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
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/SmartPointerShared/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/SmartAccount.cpp$(ObjectSuffix): SmartAccount.cpp $(IntermediateDirectory)/SmartAccount.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/SmartPointerShared/SmartAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SmartAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SmartAccount.cpp$(DependSuffix): SmartAccount.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SmartAccount.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SmartAccount.cpp$(DependSuffix) -MM SmartAccount.cpp

$(IntermediateDirectory)/SmartAccount.cpp$(PreprocessSuffix): SmartAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SmartAccount.cpp$(PreprocessSuffix) SmartAccount.cpp

$(IntermediateDirectory)/SmartPrint.cpp$(ObjectSuffix): SmartPrint.cpp $(IntermediateDirectory)/SmartPrint.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/SmartPointerShared/SmartPrint.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SmartPrint.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SmartPrint.cpp$(DependSuffix): SmartPrint.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SmartPrint.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SmartPrint.cpp$(DependSuffix) -MM SmartPrint.cpp

$(IntermediateDirectory)/SmartPrint.cpp$(PreprocessSuffix): SmartPrint.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SmartPrint.cpp$(PreprocessSuffix) SmartPrint.cpp

$(IntermediateDirectory)/SmartTrust.cpp$(ObjectSuffix): SmartTrust.cpp $(IntermediateDirectory)/SmartTrust.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/SmartPointerShared/SmartTrust.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SmartTrust.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SmartTrust.cpp$(DependSuffix): SmartTrust.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SmartTrust.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SmartTrust.cpp$(DependSuffix) -MM SmartTrust.cpp

$(IntermediateDirectory)/SmartTrust.cpp$(PreprocessSuffix): SmartTrust.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SmartTrust.cpp$(PreprocessSuffix) SmartTrust.cpp

$(IntermediateDirectory)/SmartSavings.cpp$(ObjectSuffix): SmartSavings.cpp $(IntermediateDirectory)/SmartSavings.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/SmartPointerShared/SmartSavings.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SmartSavings.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SmartSavings.cpp$(DependSuffix): SmartSavings.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SmartSavings.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SmartSavings.cpp$(DependSuffix) -MM SmartSavings.cpp

$(IntermediateDirectory)/SmartSavings.cpp$(PreprocessSuffix): SmartSavings.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SmartSavings.cpp$(PreprocessSuffix) SmartSavings.cpp

$(IntermediateDirectory)/SmartChecking.cpp$(ObjectSuffix): SmartChecking.cpp $(IntermediateDirectory)/SmartChecking.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/SmartPointerShared/SmartChecking.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SmartChecking.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SmartChecking.cpp$(DependSuffix): SmartChecking.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SmartChecking.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SmartChecking.cpp$(DependSuffix) -MM SmartChecking.cpp

$(IntermediateDirectory)/SmartChecking.cpp$(PreprocessSuffix): SmartChecking.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SmartChecking.cpp$(PreprocessSuffix) SmartChecking.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


