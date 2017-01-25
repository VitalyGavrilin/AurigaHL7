CMAKE_MINIMUM_REQUIRED( VERSION 2.8 )
PROJECT(server)
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
	${COMMON_DIR}/validation.cpp
	${COMMON_DIR}/validation.h
	)
ADD_DEFINITIONS( -std=c++11 )
SET(server_src server.cpp ${COMMON_SRC})
INCLUDE_DIRECTORIES(${COMMON_DIR} ${SRC_24_DIR})
ADD_EXECUTABLE(server ${server_src})
