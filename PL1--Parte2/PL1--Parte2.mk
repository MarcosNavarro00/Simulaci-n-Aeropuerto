##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PL1--Parte2
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/marco/Documents/c++
ProjectPath            :=C:/Users/marco/Desktop/PL2-final/PL1--Parte2/PL1--Parte2
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=marco
Date                   :=20/01/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/mingw/bin/g++.exe
SharedObjectLinkerName :=C:/mingw/bin/g++.exe -shared -fPIC
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
ObjectsFileList        :="PL1--Parte2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/mingw/bin/windres.exe
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
AR       := C:/mingw/bin/ar.exe rcu
CXX      := C:/mingw/bin/g++.exe
CC       := C:/mingw/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/box.cpp$(ObjectSuffix) $(IntermediateDirectory)/cola.cpp$(ObjectSuffix) $(IntermediateDirectory)/pasajero.cpp$(ObjectSuffix) $(IntermediateDirectory)/pila.cpp$(ObjectSuffix) $(IntermediateDirectory)/lista.cpp$(ObjectSuffix) $(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) $(IntermediateDirectory)/nodoArbol.cpp$(ObjectSuffix) $(IntermediateDirectory)/nodoLista.cpp$(ObjectSuffix) $(IntermediateDirectory)/nodoPila.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/nodoCola.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/marco/Desktop/PL2-final/PL1--Parte2/PL1--Parte2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/box.cpp$(ObjectSuffix): box.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/box.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/box.cpp$(DependSuffix) -MM box.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/marco/Desktop/PL2-final/PL1--Parte2/PL1--Parte2/box.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/box.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/box.cpp$(PreprocessSuffix): box.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/box.cpp$(PreprocessSuffix) box.cpp

$(IntermediateDirectory)/cola.cpp$(ObjectSuffix): cola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/cola.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/cola.cpp$(DependSuffix) -MM cola.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/marco/Desktop/PL2-final/PL1--Parte2/PL1--Parte2/cola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/cola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/cola.cpp$(PreprocessSuffix): cola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/cola.cpp$(PreprocessSuffix) cola.cpp

$(IntermediateDirectory)/pasajero.cpp$(ObjectSuffix): pasajero.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/pasajero.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/pasajero.cpp$(DependSuffix) -MM pasajero.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/marco/Desktop/PL2-final/PL1--Parte2/PL1--Parte2/pasajero.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/pasajero.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/pasajero.cpp$(PreprocessSuffix): pasajero.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/pasajero.cpp$(PreprocessSuffix) pasajero.cpp

$(IntermediateDirectory)/pila.cpp$(ObjectSuffix): pila.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/pila.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/pila.cpp$(DependSuffix) -MM pila.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/marco/Desktop/PL2-final/PL1--Parte2/PL1--Parte2/pila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/pila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/pila.cpp$(PreprocessSuffix): pila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/pila.cpp$(PreprocessSuffix) pila.cpp

$(IntermediateDirectory)/lista.cpp$(ObjectSuffix): lista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/lista.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/lista.cpp$(DependSuffix) -MM lista.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/marco/Desktop/PL2-final/PL1--Parte2/PL1--Parte2/lista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/lista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/lista.cpp$(PreprocessSuffix): lista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/lista.cpp$(PreprocessSuffix) lista.cpp

$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix): Arbol.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Arbol.cpp$(DependSuffix) -MM Arbol.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/marco/Desktop/PL2-final/PL1--Parte2/PL1--Parte2/Arbol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Arbol.cpp$(PreprocessSuffix): Arbol.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Arbol.cpp$(PreprocessSuffix) Arbol.cpp

$(IntermediateDirectory)/nodoArbol.cpp$(ObjectSuffix): nodoArbol.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/nodoArbol.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/nodoArbol.cpp$(DependSuffix) -MM nodoArbol.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/marco/Desktop/PL2-final/PL1--Parte2/PL1--Parte2/nodoArbol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/nodoArbol.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/nodoArbol.cpp$(PreprocessSuffix): nodoArbol.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/nodoArbol.cpp$(PreprocessSuffix) nodoArbol.cpp

$(IntermediateDirectory)/nodoLista.cpp$(ObjectSuffix): nodoLista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/nodoLista.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/nodoLista.cpp$(DependSuffix) -MM nodoLista.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/marco/Desktop/PL2-final/PL1--Parte2/PL1--Parte2/nodoLista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/nodoLista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/nodoLista.cpp$(PreprocessSuffix): nodoLista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/nodoLista.cpp$(PreprocessSuffix) nodoLista.cpp

$(IntermediateDirectory)/nodoPila.cpp$(ObjectSuffix): nodoPila.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/nodoPila.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/nodoPila.cpp$(DependSuffix) -MM nodoPila.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/marco/Desktop/PL2-final/PL1--Parte2/PL1--Parte2/nodoPila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/nodoPila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/nodoPila.cpp$(PreprocessSuffix): nodoPila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/nodoPila.cpp$(PreprocessSuffix) nodoPila.cpp

$(IntermediateDirectory)/nodoCola.cpp$(ObjectSuffix): nodoCola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/nodoCola.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/nodoCola.cpp$(DependSuffix) -MM nodoCola.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/marco/Desktop/PL2-final/PL1--Parte2/PL1--Parte2/nodoCola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/nodoCola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/nodoCola.cpp$(PreprocessSuffix): nodoCola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/nodoCola.cpp$(PreprocessSuffix) nodoCola.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


