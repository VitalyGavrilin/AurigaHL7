CMAKE_MINIMUM_REQUIRED( VERSION 2.8 )
PROJECT(client)
SET(PROJECT_TOP_DIR "../..")
SET(COMMON_DIR ${PROJECT_TOP_DIR}/common)
SET(SRC_24_DIR ${PROJECT_TOP_DIR}/2.4)
SET(COMMON_SRC
	${COMMON_DIR}/HL7Object.h
	${COMMON_DIR}/HL7Object.cpp
	${COMMON_DIR}/ObjToPipe.h
	${COMMON_DIR}/ObjToPipe.cpp
	${COMMON_DIR}/Util.h
	${COMMON_DIR}/Util.cpp
	${COMMON_DIR}/hl7socket.h
	${COMMON_DIR}/hl7mllp.h
	${COMMON_DIR}/dataencode.h
	${COMMON_DIR}/dataencode.cpp
	)
ADD_DEFINITIONS( -std=c++11 )
SET(client_src client.cpp ${COMMON_SRC})
INCLUDE_DIRECTORIES(${COMMON_DIR} ${SRC_24_DIR})
ADD_EXECUTABLE(client ${client_src})
