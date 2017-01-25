CMAKE_MINIMUM_REQUIRED( VERSION 2.8 )
PROJECT(verify_test)
SET(PROJECT_TOP_DIR "../..")
SET(COMMON_DIR ${PROJECT_TOP_DIR}/common)
SET(SRC_24_DIR ${PROJECT_TOP_DIR}/2.4)
SET(COMMON_SRC
	${COMMON_DIR}/HL7Object.h
	${COMMON_DIR}/HL7Object.cpp
	${COMMON_DIR}/dataencode.h
	${COMMON_DIR}/dataencode.cpp
	${COMMON_DIR}/validation.cpp
	${COMMON_DIR}/validation.h
	)
ADD_DEFINITIONS( -std=c++11 )
SET(verify_test_src verify_test.cpp ${COMMON_SRC})
INCLUDE_DIRECTORIES(${COMMON_DIR} ${SRC_24_DIR})
ADD_EXECUTABLE(verify_test ${verify_test_src})
