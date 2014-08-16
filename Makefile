IDIR       = inc
ODIR       = obj
SDIR       = src

#CXX       = ~/.vim/bundle/ClangComplete/bin/cc_args.py g++
CXX        = g++

CXXFLAGS  += -Iinc -std=c++0x
## Optimization flag
CXXFLAGS += -O3
## Enable the maximun warning
#CXXFLAGS += -Wall -Wextra -Weffc++ -g

## Include ROOT
CXXFLAGS  += $(shell root-config --cflags)

LD         = g++
LDFLAGS    =

LIBS       = $(shell root-config --glibs)

#============================================================================#
#--------------------------   Include OxbridgeMT2   -------------------------#
#============================================================================#
ifeq ($(shell echo $(OxbridgeMT2)), True)
  CXXFLAGS  += -I../OxbridgeMT2/include/oxbridgekinetics-1.0/ -DOXBRIDGE_MT2
  LIBS      += -L../OxbridgeMT2/lib -loxbridgekinetics-1.0
endif


#============================================================================#
#-----------------------------   Include Boost   ----------------------------#
#============================================================================#
ifeq ($(shell echo $(BOOSTROOT)), '')
  CPPFLAGS  += -I$(shell echo $(BOOSTROOT))
endif


OBJ        = runCollar.o Puppi.o HistTool.o JetPerformance.o
PROGRAM    = runCollar

OBJS       = $(patsubst %, $(ODIR)/%, $(OBJ))

all:          $(PROGRAM)


$(ODIR)/%.o : $(SDIR)/%.C $(HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ -c $<

$(ODIR)/%.o : $(SDIR)/%.cc $(HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ -c $<


$(PROGRAM):  $(OBJS)
	@echo "Linking $(PROGRAM) ..."
	@$(LD) $(OBJS) $(LIBS) -o $(PROGRAM)
	@echo "done"

clean:;         @rm -f $(OBJS) $(PROGRAM) core 

