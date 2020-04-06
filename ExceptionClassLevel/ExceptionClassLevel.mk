##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=ExceptionClassLevel
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining
ProjectPath            :=C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/ExceptionClassLevel
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
ObjectsFileList        :="ExceptionClassLevel.txt"
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
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Print.cpp$(ObjectSuffix) $(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/AccountUtil.cpp$(ObjectSuffix) $(IntermediateDirectory)/Trust.cpp$(ObjectSuffix) $(IntermediateDirectory)/Savings.cpp$(ObjectSuffix) $(IntermediateDirectory)/Checking.cpp$(ObjectSuffix) 



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
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/ExceptionClassLevel/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Print.cpp$(ObjectSuffix): Print.cpp $(IntermediateDirectory)/Print.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/ExceptionClassLevel/Print.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Print.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Print.cpp$(DependSuffix): Print.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Print.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Print.cpp$(DependSuffix) -MM Print.cpp

$(IntermediateDirectory)/Print.cpp$(PreprocessSuffix): Print.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Print.cpp$(PreprocessSuffix) Print.cpp

$(IntermediateDirectory)/Account.cpp$(ObjectSuffix): Account.cpp $(IntermediateDirectory)/Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/ExceptionClassLevel/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Account.cpp$(DependSuffix): Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Account.cpp$(DependSuffix) -MM Account.cpp

$(IntermediateDirectory)/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Account.cpp$(PreprocessSuffix) Account.cpp

$(IntermediateDirectory)/AccountUtil.cpp$(ObjectSuffix): AccountUtil.cpp $(IntermediateDirectory)/AccountUtil.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/ExceptionClassLevel/AccountUtil.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/AccountUtil.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/AccountUtil.cpp$(DependSuffix): AccountUtil.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/AccountUtil.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/AccountUtil.cpp$(DependSuffix) -MM AccountUtil.cpp

$(IntermediateDirectory)/AccountUtil.cpp$(PreprocessSuffix): AccountUtil.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/AccountUtil.cpp$(PreprocessSuffix) AccountUtil.cpp

$(IntermediateDirectory)/Trust.cpp$(ObjectSuffix): Trust.cpp $(IntermediateDirectory)/Trust.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/ExceptionClassLevel/Trust.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Trust.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Trust.cpp$(DependSuffix): Trust.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Trust.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Trust.cpp$(DependSuffix) -MM Trust.cpp

$(IntermediateDirectory)/Trust.cpp$(PreprocessSuffix): Trust.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Trust.cpp$(PreprocessSuffix) Trust.cpp

$(IntermediateDirectory)/Savings.cpp$(ObjectSuffix): Savings.cpp $(IntermediateDirectory)/Savings.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/ExceptionClassLevel/Savings.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Savings.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Savings.cpp$(DependSuffix): Savings.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Savings.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Savings.cpp$(DependSuffix) -MM Savings.cpp

$(IntermediateDirectory)/Savings.cpp$(PreprocessSuffix): Savings.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Savings.cpp$(PreprocessSuffix) Savings.cpp

$(IntermediateDirectory)/Checking.cpp$(ObjectSuffix): Checking.cpp $(IntermediateDirectory)/Checking.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/ExceptionClassLevel/Checking.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Checking.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Checking.cpp$(DependSuffix): Checking.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Checking.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Checking.cpp$(DependSuffix) -MM Checking.cpp

$(IntermediateDirectory)/Checking.cpp$(PreprocessSuffix): Checking.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Checking.cpp$(PreprocessSuffix) Checking.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


