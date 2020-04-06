##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=InheritanceRedefineBaseClassMethods
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining
ProjectPath            :=C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/InheritanceRedefineBaseClassMethods
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
ObjectsFileList        :="InheritanceRedefineBaseClassMethods.txt"
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
Objects0=$(IntermediateDirectory)/InheritanceRedefineMethodsAccount.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/InheritanceRedefineMethodsSavings.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/InheritanceRedefineMethodsAccount.cpp$(ObjectSuffix): InheritanceRedefineMethodsAccount.cpp $(IntermediateDirectory)/InheritanceRedefineMethodsAccount.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/InheritanceRedefineBaseClassMethods/InheritanceRedefineMethodsAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/InheritanceRedefineMethodsAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/InheritanceRedefineMethodsAccount.cpp$(DependSuffix): InheritanceRedefineMethodsAccount.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/InheritanceRedefineMethodsAccount.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/InheritanceRedefineMethodsAccount.cpp$(DependSuffix) -MM InheritanceRedefineMethodsAccount.cpp

$(IntermediateDirectory)/InheritanceRedefineMethodsAccount.cpp$(PreprocessSuffix): InheritanceRedefineMethodsAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/InheritanceRedefineMethodsAccount.cpp$(PreprocessSuffix) InheritanceRedefineMethodsAccount.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/InheritanceRedefineBaseClassMethods/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/InheritanceRedefineMethodsSavings.cpp$(ObjectSuffix): InheritanceRedefineMethodsSavings.cpp $(IntermediateDirectory)/InheritanceRedefineMethodsSavings.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/gistadr/Documents/CPPWorkspace/CPPWorkspace/CPPTraining/InheritanceRedefineBaseClassMethods/InheritanceRedefineMethodsSavings.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/InheritanceRedefineMethodsSavings.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/InheritanceRedefineMethodsSavings.cpp$(DependSuffix): InheritanceRedefineMethodsSavings.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/InheritanceRedefineMethodsSavings.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/InheritanceRedefineMethodsSavings.cpp$(DependSuffix) -MM InheritanceRedefineMethodsSavings.cpp

$(IntermediateDirectory)/InheritanceRedefineMethodsSavings.cpp$(PreprocessSuffix): InheritanceRedefineMethodsSavings.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/InheritanceRedefineMethodsSavings.cpp$(PreprocessSuffix) InheritanceRedefineMethodsSavings.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


