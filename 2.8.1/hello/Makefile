#
# hacca - C Toolkit for HL7 Protocol
#
# R. Carbone (rocco@tecsiel.it)
# 2Q 2020
#
# SPDX-License-Identifier: BSD-2-Clause-FreeBSD
#

# Project directories
ROOTDIR   = ../..

# Variables
NAMESPACE = 281

# C/C++ Compilers and flags
C++       = g++
INCLUDE  += -I${ROOTDIR}/common -I../datatype -I../segment -I../message
INCLUDES += ${INCLUDE}

# The main target is responsible to make all
all: dts segs msgs

# generate/compile/run Datatypes on-place
dts:
	@echo "Generate, compile and run hello-world programs for each Data item"
	@echo
#
	@make --silent SOME=datatypes.txt some

# generate/compile/run Segments on-place
segs:
	@echo "Generate, compile and run hello-world programs for each Segment"
	@echo
	@make --silent SOME=segments.txt some

# generate/compile/run Messages on-place
msgs:
	@echo "Generate, compile and run hello-world programs for each Message"
	@echo
	@make --silent SOME=messages.txt some


# Compile and run Auriga headers implementing SOME in-place
some: ${SOME}
	@for item in `cat $^ | grep -v '^#' | cut -d ' ' -f 1` ; do \
           echo -n "=*= generating/compiling/run C++ source $$item.cpp =*= " ; \
           echo "#include <iostream>" > $$item.cpp ; \
           echo "#include \"HL7Object.cpp\"" >> $$item.cpp ; \
           echo "#include \"$$item.h\"" >> $$item.cpp ; \
           echo "int main (int argc , char * argv [])" >> $$item.cpp ; \
           echo "{" >> $$item.cpp ; \
           echo "  try { " >> $$item.cpp ; \
           echo "    HL7_${NAMESPACE}::$$item $$item;" >> $$item.cpp ; \
           echo "    std::cout << \"--- Hello [\" << $$item . className () << \"] ---\" << std::endl;" >> $$item.cpp ; \
           echo "  }" >> $$item.cpp ; \
           echo "  catch (HL7Exception & e) {" >> $$item.cpp ; \
           echo "    std::cout << \"--- Hello [Exception: \" << e . what () << \"] ---\" << std::endl;" >> $$item.cpp ; \
           echo "  }" >> $$item.cpp ; \
           echo "  return 0;" >> $$item.cpp ; \
           echo "}" >> $$item.cpp ; \
           ${C++} ${INCLUDE} $$item.cpp -o $$item ; \
           if [ -x ./$$item ]; then ./$$item ; fi ; \
           rm -f $$item ; \
           rm -f $$item.cpp ; \
         done

# Cleanup rules
clean:
	@rm -f *~

distclean: clean

# -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

help:
	@echo "Usage:"
	@echo "  make [all]      - gen/cc/run all currently supported items"
	@echo "  make clean      - currently no effect"
	@echo "  make distclean  - currently no effect"
	@echo
	@echo "  Generate, compile and run hello-world programs for each item in a given DataElement"
	@echo "   make dts  - HL7 Data Types"
	@echo "   make segs - HL7 Segments"
	@echo "   make msgs - HL7 Messages"
