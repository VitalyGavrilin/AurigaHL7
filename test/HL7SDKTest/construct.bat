rem debug\mainIncludeConstructor.exe /f=../HL7v2/2.4 /p=../ /x=WIN ../HL7v2/2.4/WIN/main.cpp
debug\mainIncludeConstructor.exe /f=../HL7v2/2.%1 /p=../ /x=WIN /e=construct_end.txt ../HL7v2/2.%1/WIN/main.cpp
rem @echo #include "../../common/hl7socket.h" >> ../HL7v2/2.%1/WIN/main.cpp
