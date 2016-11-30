#ifndef test_h_
#define test_h_

#include <stdio.h>
#include "2.4/message/VXX_V02.h"
#include "2.4/message/VXU_V04.h"
#include "2.4/message/VXR_V03.h"
#include "2.4/message/VXQ_V01.h"
#include "2.4/message/VQQ_Q07.h"
#include "2.4/message/UDM_Q05.h"
#include "2.4/message/TCU_U10.h"
#include "2.4/message/TBR_R08.h"
#include "2.4/message/SUR_P09.h"
#include "2.4/message/SSU_U03.h"
#include "2.4/message/SSR_U04.h"
#include "2.4/message/SRR_S01.h"
#include "2.4/message/SRM_S01.h"
#include "2.4/message/SQR_S25.h"
#include "2.4/message/SQM_S25.h"
#include "2.4/message/SPQ_Q08.h"
#include "2.4/message/SIU_S12.h"
#include "2.4/message/RTB_Z74.h"
#include "2.4/message/RTB_Q13.h"
#include "2.4/message/RTB_Knn.h"
#include "2.4/message/RTB_K13.h"
#include "2.4/message/RSP_Z90.h"
#include "2.4/message/RSP_Z88.h"
#include "2.4/message/RSP_Z86.h"
#include "2.4/message/RSP_Z82.h"
#include "2.4/message/RSP_K25.h"
#include "2.4/message/RSP_K24.h"
#include "2.4/message/RSP_K23.h"
#include "2.4/message/RSP_K22.h"
#include "2.4/message/RSP_K21.h"
#include "2.4/message/RSP_K15.h"
#include "2.4/message/RSP_K13.h"
#include "2.4/message/RSP_K11.h"
#include "2.4/message/RRI_I12.h"
#include "2.4/message/RRG_O16.h"
#include "2.4/message/RRE_O12.h"
#include "2.4/message/RRD_O14.h"
#include "2.4/message/RRA_O18.h"
#include "2.4/message/RQQ_Q09.h"
#include "2.4/message/RQP_I04.h"
#include "2.4/message/RQI_I01.h"
#include "2.4/message/RQC_I05.h"
#include "2.4/message/RQA_I08.h"
#include "2.4/message/RPR_I03.h"
#include "2.4/message/RPL_I02.h"
#include "2.4/message/RPI_I04.h"
#include "2.4/message/RPI_I01.h"
#include "2.4/message/RPA_I08.h"
#include "2.4/message/ROR_ROR.h"
#include "2.4/message/RGV_O15.h"
#include "2.4/message/RGR_RGR.h"
#include "2.4/message/RER_RER.h"
#include "2.4/message/REF_I12.h"
#include "2.4/message/RDY_K15.h"
#include "2.4/message/RDS_O13.h"
#include "2.4/message/RDR_RDR.h"
#include "2.4/message/RDE_O11.h"
#include "2.4/message/RCL_I06.h"
#include "2.4/message/RCI_I05.h"
#include "2.4/message/RAS_O17.h"
#include "2.4/message/RAR_RAR.h"
#include "2.4/message/QVR_Q17.h"
#include "2.4/message/QSB_Q16.h"
#include "2.4/message/QRY_T12.h"
#include "2.4/message/QRY_R02.h"
#include "2.4/message/QRY_Q02.h"
#include "2.4/message/QRY_Q01.h"
#include "2.4/message/QRY_PC4.h"
#include "2.4/message/QRY_P04.h"
#include "2.4/message/QRY_A19.h"
#include "2.4/message/QCN_J01.h"
#include "2.4/message/QCK_Q02.h"
#include "2.4/message/QBP_Z73.h"
#include "2.4/message/QBP_Qnn.h"
#include "2.4/message/QBP_Q21.h"
#include "2.4/message/QBP_Q15.h"
#include "2.4/message/QBP_Q13.h"
#include "2.4/message/QBP_Q11.h"
#include "2.4/message/QBP_K13.h"
#include "2.4/message/PTR_PCF.h"
#include "2.4/message/PRR_PC5.h"
#include "2.4/message/PPV_PCA.h"
#include "2.4/message/PPT_PCL.h"
#include "2.4/message/PPR_PC1.h"
#include "2.4/message/PPP_PCB.h"
#include "2.4/message/PPG_PCG.h"
#include "2.4/message/PMU_B04.h"
#include "2.4/message/PMU_B03.h"
#include "2.4/message/PMU_B01.h"
#include "2.4/message/PGL_PC6.h"
#include "2.4/message/PEX_P07.h"
#include "2.4/message/OUL_R21.h"
#include "2.4/message/OSR_Q06.h"
#include "2.4/message/OSQ_Q06.h"
#include "2.4/message/ORU_R01.h"
#include "2.4/message/ORS_O06.h"
#include "2.4/message/ORR_O02.h"
#include "2.4/message/ORP_O10.h"
#include "2.4/message/ORN_O08.h"
#include "2.4/message/ORM_O01.h"
#include "2.4/message/ORL_O22.h"
#include "2.4/message/ORG_O20.h"
#include "2.4/message/ORF_R04.h"
#include "2.4/message/ORD_O04.h"
#include "2.4/message/OMS_O05.h"
#include "2.4/message/OMP_O09.h"
#include "2.4/message/OMN_O07.h"
#include "2.4/message/OML_O21.h"
#include "2.4/message/OMG_O19.h"
#include "2.4/message/OMD_O03.h"
//#include"NUL.h"
#include "2.4/message/NMR_N01.h"
#include "2.4/message/NMQ_N01.h"
#include "2.4/message/NMD_N02.h"
#include "2.4/message/MFR_M01.h"
#include "2.4/message/MFQ_M01.h"
#include "2.4/message/MFN_M12.h"
#include "2.4/message/MFN_M11.h"
#include "2.4/message/MFN_M10.h"
#include "2.4/message/MFN_M09.h"
#include "2.4/message/MFN_M08.h"
#include "2.4/message/MFN_M07.h"
#include "2.4/message/MFN_M06.h"
#include "2.4/message/MFN_M05.h"
#include "2.4/message/MFN_M04.h"
#include "2.4/message/MFN_M03.h"
#include "2.4/message/MFN_M02.h"
#include "2.4/message/MFN_M01.h"
#include "2.4/message/MFK_M01.h"
#include "2.4/message/MDM_T02.h"
#include "2.4/message/MDM_T01.h"
#include "2.4/message/LSU_U12.h"
#include "2.4/message/INU_U05.h"
#include "2.4/message/INR_U06.h"
#include "2.4/message/ESU_U01.h"
#include "2.4/message/ESR_U02.h"
#include "2.4/message/ERP_R09.h"
#include "2.4/message/EQQ_Q04.h"
#include "2.4/message/EDR_R07.h"
#include "2.4/message/EAR_U08.h"
#include "2.4/message/EAN_U09.h"
#include "2.4/message/EAC_U07.h"
#include "2.4/message/DSR_Q03.h"
#include "2.4/message/DSR_Q01.h"
#include "2.4/message/DSR_P04.h"
#include "2.4/message/DOC_T12.h"
#include "2.4/message/DFT_P11.h"
#include "2.4/message/DFT_P03.h"
#include "2.4/message/CSU_C09.h"
#include "2.4/message/CRM_C01.h"
#include "2.4/message/BAR_P10.h"
#include "2.4/message/BAR_P06.h"
#include "2.4/message/BAR_P05.h"
#include "2.4/message/BAR_P02.h"
#include "2.4/message/BAR_P01.h"
#include "2.4/message/ADT_A61.h"
#include "2.4/message/ADT_A60.h"
#include "2.4/message/ADT_A54.h"
#include "2.4/message/ADT_A52.h"
#include "2.4/message/ADT_A50.h"
#include "2.4/message/ADT_A45.h"
#include "2.4/message/ADT_A43.h"
#include "2.4/message/ADT_A39.h"
#include "2.4/message/ADT_A38.h"
#include "2.4/message/ADT_A37.h"
#include "2.4/message/ADT_A30.h"
#include "2.4/message/ADT_A24.h"
#include "2.4/message/ADT_A21.h"
#include "2.4/message/ADT_A20.h"
#include "2.4/message/ADT_A18.h"
#include "2.4/message/ADT_A17.h"
#include "2.4/message/ADT_A16.h"
#include "2.4/message/ADT_A15.h"
#include "2.4/message/ADT_A09.h"
#include "2.4/message/ADT_A06.h"
#include "2.4/message/ADT_A05.h"
#include "2.4/message/ADT_A03.h"
#include "2.4/message/ADT_A02.h"
#include "2.4/message/ADT_A01.h"
#include "2.4/message/ADR_A19.h"
#include "2.4/message/ACK_N02.h"
#include "2.4/message/ACK.h"

using namespace HL7_24;

void test_2() {
	ACK _ACK;
	printf("_ACK : %p\n", _ACK.getMSH_1());
	ACK_N02 _ACK_N02;
	//printf("_ACK_N02 : %p\n", _ACK_N02.getMSH_1());
	ADR_A19 _ADR_A19;
	printf("_ADR_A19 : %p\n", _ADR_A19.getMSH_1());
	ADT_A01 _ADT_A01;
	printf("_ADT_A01 : %p\n", _ADT_A01.getMSH_1());
	ADT_A02 _ADT_A02;
	printf("_ADT_A02 : %p\n", _ADT_A02.getMSH_1());
	ADT_A03 _ADT_A03;
	printf("_ADT_A03 : %p\n", _ADT_A03.getMSH_1());
	ADT_A05 _ADT_A05;
	printf("_ADT_A05 : %p\n", _ADT_A05.getMSH_1());
	ADT_A06 _ADT_A06;
	printf("_ADT_A06 : %p\n", _ADT_A06.getMSH_1());
	ADT_A09 _ADT_A09;
	printf("_ADT_A09 : %p\n", _ADT_A09.getMSH_1());
	ADT_A15 _ADT_A15;
	printf("_ADT_A15 : %p\n", _ADT_A15.getMSH_1());
	ADT_A16 _ADT_A16;
	printf("_ADT_A16 : %p\n", _ADT_A16.getMSH_1());
	ADT_A17 _ADT_A17;
	printf("_ADT_A17 : %p\n", _ADT_A17.getMSH_1());
	ADT_A18 _ADT_A18;
	printf("_ADT_A18 : %p\n", _ADT_A18.getMSH_1());
	ADT_A20 _ADT_A20;
	printf("_ADT_A20 : %p\n", _ADT_A20.getMSH_1());
	ADT_A21 _ADT_A21;
	printf("_ADT_A21 : %p\n", _ADT_A21.getMSH_1());
	ADT_A24 _ADT_A24;
	printf("_ADT_A24 : %p\n", _ADT_A24.getMSH_1());
	ADT_A30 _ADT_A30;
	printf("_ADT_A30 : %p\n", _ADT_A30.getMSH_1());
	ADT_A37 _ADT_A37;
	printf("_ADT_A37 : %p\n", _ADT_A37.getMSH_1());
	ADT_A38 _ADT_A38;
	printf("_ADT_A38 : %p\n", _ADT_A38.getMSH_1());
	ADT_A39 _ADT_A39;
	printf("_ADT_A39 : %p\n", _ADT_A39.getMSH_1());
	ADT_A43 _ADT_A43;
	printf("_ADT_A43 : %p\n", _ADT_A43.getMSH_1());
	ADT_A45 _ADT_A45;
	printf("_ADT_A45 : %p\n", _ADT_A45.getMSH_1());
	ADT_A50 _ADT_A50;
	printf("_ADT_A50 : %p\n", _ADT_A50.getMSH_1());
	ADT_A52 _ADT_A52;
	printf("_ADT_A52 : %p\n", _ADT_A52.getMSH_1());
	ADT_A54 _ADT_A54;
	printf("_ADT_A54 : %p\n", _ADT_A54.getMSH_1());
	ADT_A60 _ADT_A60;
	printf("_ADT_A60 : %p\n", _ADT_A60.getMSH_1());
	ADT_A61 _ADT_A61;
	printf("_ADT_A61 : %p\n", _ADT_A61.getMSH_1());
	BAR_P01 _BAR_P01;
	printf("_BAR_P01 : %p\n", _BAR_P01.getMSH_1());
	BAR_P02 _BAR_P02;
	printf("_BAR_P02 : %p\n", _BAR_P02.getMSH_1());
	BAR_P05 _BAR_P05;
	printf("_BAR_P05 : %p\n", _BAR_P05.getMSH_1());
	BAR_P06 _BAR_P06;
	printf("_BAR_P06 : %p\n", _BAR_P06.getMSH_1());
	BAR_P10 _BAR_P10;
	printf("_BAR_P10 : %p\n", _BAR_P10.getMSH_1());
	CRM_C01 _CRM_C01;
	printf("_CRM_C01 : %p\n", _CRM_C01.getMSH_1());
	CSU_C09 _CSU_C09;
	printf("_CSU_C09 : %p\n", _CSU_C09.getMSH_1());
	DFT_P03 _DFT_P03;
	printf("_DFT_P03 : %p\n", _DFT_P03.getMSH_1());
	DFT_P11 _DFT_P11;
	printf("_DFT_P11 : %p\n", _DFT_P11.getMSH_1());
	DOC_T12 _DOC_T12;
	//printf("_DOC_T12 : %p\n", _DOC_T12.getMSH_1());
	DSR_P04 _DSR_P04;
	//printf("_DSR_P04 : %p\n", _DSR_P04.getMSH_1());
	DSR_Q01 _DSR_Q01;
	//printf("_DSR_Q01 : %p\n", _DSR_Q01.getMSH_1());
	DSR_Q03 _DSR_Q03;
	//printf("_DSR_Q03 : %p\n", _DSR_Q03.getMSH_1());
	EAC_U07 _EAC_U07;
	printf("_EAC_U07 : %p\n", _EAC_U07.getMSH_1());
	EAN_U09 _EAN_U09;
	printf("_EAN_U09 : %p\n", _EAN_U09.getMSH_1());
	EAR_U08 _EAR_U08;
	printf("_EAR_U08 : %p\n", _EAR_U08.getMSH_1());
	EDR_R07 _EDR_R07;
	//printf("_EDR_R07 : %p\n", _EDR_R07.getMSH_1());
	EQQ_Q04 _EQQ_Q04;
	//printf("_EQQ_Q04 : %p\n", _EQQ_Q04.getMSH_1());
	ERP_R09 _ERP_R09;
	//printf("_ERP_R09 : %p\n", _ERP_R09.getMSH_1());
	ESR_U02 _ESR_U02;
	printf("_ESR_U02 : %p\n", _ESR_U02.getMSH_1());
	ESU_U01 _ESU_U01;
	printf("_ESU_U01 : %p\n", _ESU_U01.getMSH_1());
	INR_U06 _INR_U06;
	printf("_INR_U06 : %p\n", _INR_U06.getMSH_1());
	INU_U05 _INU_U05;
	printf("_INU_U05 : %p\n", _INU_U05.getMSH_1());
	LSU_U12 _LSU_U12;
	printf("_LSU_U12 : %p\n", _LSU_U12.getMSH_1());
	MDM_T01 _MDM_T01;
	printf("_MDM_T01 : %p\n", _MDM_T01.getMSH_1());
	MDM_T02 _MDM_T02;
	printf("_MDM_T02 : %p\n", _MDM_T02.getMSH_1());
	MFK_M01 _MFK_M01;
	printf("_MFK_M01 : %p\n", _MFK_M01.getMSH_1());
	MFN_M01 _MFN_M01;
	printf("_MFN_M01 : %p\n", _MFN_M01.getMSH_1());
	MFN_M02 _MFN_M02;
	printf("_MFN_M02 : %p\n", _MFN_M02.getMSH_1());
	MFN_M03 _MFN_M03;
	printf("_MFN_M03 : %p\n", _MFN_M03.getMSH_1());
	MFN_M04 _MFN_M04;
	printf("_MFN_M04 : %p\n", _MFN_M04.getMSH_1());
	MFN_M05 _MFN_M05;
	printf("_MFN_M05 : %p\n", _MFN_M05.getMSH_1());
	MFN_M06 _MFN_M06;
	printf("_MFN_M06 : %p\n", _MFN_M06.getMSH_1());
	MFN_M07 _MFN_M07;
	printf("_MFN_M07 : %p\n", _MFN_M07.getMSH_1());
	MFN_M08 _MFN_M08;
	printf("_MFN_M08 : %p\n", _MFN_M08.getMSH_1());
	MFN_M09 _MFN_M09;
	printf("_MFN_M09 : %p\n", _MFN_M09.getMSH_1());
	MFN_M10 _MFN_M10;
	printf("_MFN_M10 : %p\n", _MFN_M10.getMSH_1());
	MFN_M11 _MFN_M11;
	printf("_MFN_M11 : %p\n", _MFN_M11.getMSH_1());
	MFN_M12 _MFN_M12;
	printf("_MFN_M12 : %p\n", _MFN_M12.getMSH_1());
	MFQ_M01 _MFQ_M01;
	printf("_MFQ_M01 : %p\n", _MFQ_M01.getMSH_1());
	MFR_M01 _MFR_M01;
	printf("_MFR_M01 : %p\n", _MFR_M01.getMSH_1());
	NMD_N02 _NMD_N02;
	printf("_NMD_N02 : %p\n", _NMD_N02.getMSH_1());
	NMQ_N01 _NMQ_N01;
	printf("_NMQ_N01 : %p\n", _NMQ_N01.getMSH_1());
	NMR_N01 _NMR_N01;
	printf("_NMR_N01 : %p\n", _NMR_N01.getMSH_1());
	//NUL _NUL;
	//printf("_NUL : %p\n", _NUL.getMSH_1());
	OMD_O03 _OMD_O03;
	printf("_OMD_O03 : %p\n", _OMD_O03.getMSH_1());
	OMG_O19 _OMG_O19;
	printf("_OMG_O19 : %p\n", _OMG_O19.getMSH_1());
	OML_O21 _OML_O21;
	printf("_OML_O21 : %p\n", _OML_O21.getMSH_1());
	OMN_O07 _OMN_O07;
	printf("_OMN_O07 : %p\n", _OMN_O07.getMSH_1());
	OMP_O09 _OMP_O09;
	printf("_OMP_O09 : %p\n", _OMP_O09.getMSH_1());
	OMS_O05 _OMS_O05;
	printf("_OMS_O05 : %p\n", _OMS_O05.getMSH_1());
	ORD_O04 _ORD_O04;
	printf("_ORD_O04 : %p\n", _ORD_O04.getMSH_1());
	ORF_R04 _ORF_R04;
	printf("_ORF_R04 : %p\n", _ORF_R04.getMSH_1());
	ORG_O20 _ORG_O20;
	printf("_ORG_O20 : %p\n", _ORG_O20.getMSH_1());
	ORL_O22 _ORL_O22;
	printf("_ORL_O22 : %p\n", _ORL_O22.getMSH_1());
	ORM_O01 _ORM_O01;
	printf("_ORM_O01 : %p\n", _ORM_O01.getMSH_1());
	ORN_O08 _ORN_O08;
	printf("_ORN_O08 : %p\n", _ORN_O08.getMSH_1());
	ORP_O10 _ORP_O10;
	printf("_ORP_O10 : %p\n", _ORP_O10.getMSH_1());
	ORR_O02 _ORR_O02;
	printf("_ORR_O02 : %p\n", _ORR_O02.getMSH_1());
	ORS_O06 _ORS_O06;
	printf("_ORS_O06 : %p\n", _ORS_O06.getMSH_1());
	ORU_R01 _ORU_R01;
	printf("_ORU_R01 : %p\n", _ORU_R01.getMSH_1());
	OSQ_Q06 _OSQ_Q06;
	//printf("_OSQ_Q06 : %p\n", _OSQ_Q06.getMSH_1());
	OSR_Q06 _OSR_Q06;
	//printf("_OSR_Q06 : %p\n", _OSR_Q06.getMSH_1());
	OUL_R21 _OUL_R21;
	printf("_OUL_R21 : %p\n", _OUL_R21.getMSH_1());
	PEX_P07 _PEX_P07;
	printf("_PEX_P07 : %p\n", _PEX_P07.getMSH_1());
	PGL_PC6 _PGL_PC6;
	printf("_PGL_PC6 : %p\n", _PGL_PC6.getMSH_1());
	PMU_B01 _PMU_B01;
	printf("_PMU_B01 : %p\n", _PMU_B01.getMSH_1());
	PMU_B03 _PMU_B03;
	printf("_PMU_B03 : %p\n", _PMU_B03.getMSH_1());
	PMU_B04 _PMU_B04;
	printf("_PMU_B04 : %p\n", _PMU_B04.getMSH_1());
	PPG_PCG _PPG_PCG;
	printf("_PPG_PCG : %p\n", _PPG_PCG.getMSH_1());
	PPP_PCB _PPP_PCB;
	printf("_PPP_PCB : %p\n", _PPP_PCB.getMSH_1());
	PPR_PC1 _PPR_PC1;
	printf("_PPR_PC1 : %p\n", _PPR_PC1.getMSH_1());
	PPT_PCL _PPT_PCL;
	printf("_PPT_PCL : %p\n", _PPT_PCL.getMSH_1());
	PPV_PCA _PPV_PCA;
	printf("_PPV_PCA : %p\n", _PPV_PCA.getMSH_1());
	PRR_PC5 _PRR_PC5;
	printf("_PRR_PC5 : %p\n", _PRR_PC5.getMSH_1());
	PTR_PCF _PTR_PCF;
	printf("_PTR_PCF : %p\n", _PTR_PCF.getMSH_1());
	QBP_K13 _QBP_K13;
	printf("_QBP_K13 : %p\n", _QBP_K13.getMSH_1());
	QBP_Q11 _QBP_Q11;
	printf("_QBP_Q11 : %p\n", _QBP_Q11.getMSH_1());
	QBP_Q13 _QBP_Q13;
	printf("_QBP_Q13 : %p\n", _QBP_Q13.getMSH_1());
	QBP_Q15 _QBP_Q15;
	printf("_QBP_Q15 : %p\n", _QBP_Q15.getMSH_1());
	QBP_Q21 _QBP_Q21;
	printf("_QBP_Q21 : %p\n", _QBP_Q21.getMSH_1());
	QBP_Qnn _QBP_Qnn;
	printf("_QBP_Qnn : %p\n", _QBP_Qnn.getMSH_1());
	QBP_Z73 _QBP_Z73;
	printf("_QBP_Z73 : %p\n", _QBP_Z73.getMSH_1());
	QCK_Q02 _QCK_Q02;
	//printf("_QCK_Q02 : %p\n", _QCK_Q02.getMSH_1());
	QCN_J01 _QCN_J01;
	printf("_QCN_J01 : %p\n", _QCN_J01.getMSH_1());
	QRY_A19 _QRY_A19;
	printf("_QRY_A19 : %p\n", _QRY_A19.getMSH_1());
	QRY_P04 _QRY_P04;
	//printf("_QRY_P04 : %p\n", _QRY_P04.getMSH_1());
	QRY_PC4 _QRY_PC4;
	printf("_QRY_PC4 : %p\n", _QRY_PC4.getMSH_1());
	QRY_Q01 _QRY_Q01;
	printf("_QRY_Q01 : %p\n", _QRY_Q01.getMSH_1());
	QRY_Q02 _QRY_Q02;
	//printf("_QRY_Q02 : %p\n", _QRY_Q02.getMSH_1());
	QRY_R02 _QRY_R02;
	printf("_QRY_R02 : %p\n", _QRY_R02.getMSH_1());
	QRY_T12 _QRY_T12;
	//printf("_QRY_T12 : %p\n", _QRY_T12.getMSH_1());
	QSB_Q16 _QSB_Q16;
	printf("_QSB_Q16 : %p\n", _QSB_Q16.getMSH_1());
	QVR_Q17 _QVR_Q17;
	printf("_QVR_Q17 : %p\n", _QVR_Q17.getMSH_1());
	RAR_RAR _RAR_RAR;
	printf("_RAR_RAR : %p\n", _RAR_RAR.getMSH_1());
	RAS_O17 _RAS_O17;
	printf("_RAS_O17 : %p\n", _RAS_O17.getMSH_1());
	RCI_I05 _RCI_I05;
	printf("_RCI_I05 : %p\n", _RCI_I05.getMSH_1());
	RCL_I06 _RCL_I06;
	printf("_RCL_I06 : %p\n", _RCL_I06.getMSH_1());
	RDE_O11 _RDE_O11;
	printf("_RDE_O11 : %p\n", _RDE_O11.getMSH_1());
	RDR_RDR _RDR_RDR;
	printf("_RDR_RDR : %p\n", _RDR_RDR.getMSH_1());
	RDS_O13 _RDS_O13;
	printf("_RDS_O13 : %p\n", _RDS_O13.getMSH_1());
	RDY_K15 _RDY_K15;
	printf("_RDY_K15 : %p\n", _RDY_K15.getMSH_1());
	REF_I12 _REF_I12;
	printf("_REF_I12 : %p\n", _REF_I12.getMSH_1());
	RER_RER _RER_RER;
	printf("_RER_RER : %p\n", _RER_RER.getMSH_1());
	RGR_RGR _RGR_RGR;
	printf("_RGR_RGR : %p\n", _RGR_RGR.getMSH_1());
	RGV_O15 _RGV_O15;
	printf("_RGV_O15 : %p\n", _RGV_O15.getMSH_1());
	ROR_ROR _ROR_ROR;
	printf("_ROR_ROR : %p\n", _ROR_ROR.getMSH_1());
	RPA_I08 _RPA_I08;
	printf("_RPA_I08 : %p\n", _RPA_I08.getMSH_1());
	RPI_I01 _RPI_I01;
	printf("_RPI_I01 : %p\n", _RPI_I01.getMSH_1());
	RPI_I04 _RPI_I04;
	printf("_RPI_I04 : %p\n", _RPI_I04.getMSH_1());
	RPL_I02 _RPL_I02;
	printf("_RPL_I02 : %p\n", _RPL_I02.getMSH_1());
	RPR_I03 _RPR_I03;
	printf("_RPR_I03 : %p\n", _RPR_I03.getMSH_1());
	RQA_I08 _RQA_I08;
	printf("_RQA_I08 : %p\n", _RQA_I08.getMSH_1());
	RQC_I05 _RQC_I05;
	printf("_RQC_I05 : %p\n", _RQC_I05.getMSH_1());
	RQI_I01 _RQI_I01;
	printf("_RQI_I01 : %p\n", _RQI_I01.getMSH_1());
	RQP_I04 _RQP_I04;
	printf("_RQP_I04 : %p\n", _RQP_I04.getMSH_1());
	RQQ_Q09 _RQQ_Q09;
	//printf("_RQQ_Q09 : %p\n", _RQQ_Q09.getMSH_1());
	RRA_O18 _RRA_O18;
	printf("_RRA_O18 : %p\n", _RRA_O18.getMSH_1());
	RRD_O14 _RRD_O14;
	printf("_RRD_O14 : %p\n", _RRD_O14.getMSH_1());
	RRE_O12 _RRE_O12;
	printf("_RRE_O12 : %p\n", _RRE_O12.getMSH_1());
	RRG_O16 _RRG_O16;
	printf("_RRG_O16 : %p\n", _RRG_O16.getMSH_1());
	RRI_I12 _RRI_I12;
	printf("_RRI_I12 : %p\n", _RRI_I12.getMSH_1());
	RSP_K11 _RSP_K11;
	printf("_RSP_K11 : %p\n", _RSP_K11.getMSH_1());
	RSP_K13 _RSP_K13;
	printf("_RSP_K13 : %p\n", _RSP_K13.getMSH_1());
	RSP_K15 _RSP_K15;
	printf("_RSP_K15 : %p\n", _RSP_K15.getMSH_1());
	RSP_K21 _RSP_K21;
	printf("_RSP_K21 : %p\n", _RSP_K21.getMSH_1());
	RSP_K22 _RSP_K22;
	printf("_RSP_K22 : %p\n", _RSP_K22.getMSH_1());
	RSP_K23 _RSP_K23;
	printf("_RSP_K23 : %p\n", _RSP_K23.getMSH_1());
	RSP_K24 _RSP_K24;
	printf("_RSP_K24 : %p\n", _RSP_K24.getMSH_1());
	RSP_K25 _RSP_K25;
	printf("_RSP_K25 : %p\n", _RSP_K25.getMSH_1());
	RSP_Z82 _RSP_Z82;
	printf("_RSP_Z82 : %p\n", _RSP_Z82.getMSH_1());
	RSP_Z86 _RSP_Z86;
	printf("_RSP_Z86 : %p\n", _RSP_Z86.getMSH_1());
	RSP_Z88 _RSP_Z88;
	printf("_RSP_Z88 : %p\n", _RSP_Z88.getMSH_1());
	RSP_Z90 _RSP_Z90;
	printf("_RSP_Z90 : %p\n", _RSP_Z90.getMSH_1());
	RTB_K13 _RTB_K13;
	printf("_RTB_K13 : %p\n", _RTB_K13.getMSH_1());
	RTB_Knn _RTB_Knn;
	printf("_RTB_Knn : %p\n", _RTB_Knn.getMSH_1());
	RTB_Q13 _RTB_Q13;
	printf("_RTB_Q13 : %p\n", _RTB_Q13.getMSH_1());
	RTB_Z74 _RTB_Z74;
	printf("_RTB_Z74 : %p\n", _RTB_Z74.getMSH_1());
	SIU_S12 _SIU_S12;
	printf("_SIU_S12 : %p\n", _SIU_S12.getMSH_1());
	SPQ_Q08 _SPQ_Q08;
	//printf("_SPQ_Q08 : %p\n", _SPQ_Q08.getMSH_1());
	SQM_S25 _SQM_S25;
	//printf("_SQM_S25 : %p\n", _SQM_S25.getMSH_1());
	SQR_S25 _SQR_S25;
	//printf("_SQR_S25 : %p\n", _SQR_S25.getMSH_1());
	SRM_S01 _SRM_S01;
	printf("_SRM_S01 : %p\n", _SRM_S01.getMSH_1());
	SRR_S01 _SRR_S01;
	printf("_SRR_S01 : %p\n", _SRR_S01.getMSH_1());
	SSR_U04 _SSR_U04;
	printf("_SSR_U04 : %p\n", _SSR_U04.getMSH_1());
	SSU_U03 _SSU_U03;
	printf("_SSU_U03 : %p\n", _SSU_U03.getMSH_1());
	SUR_P09 _SUR_P09;
	printf("_SUR_P09 : %p\n", _SUR_P09.getMSH_1());
	TBR_R08 _TBR_R08;
	//printf("_TBR_R08 : %p\n", _TBR_R08.getMSH_1());
	TCU_U10 _TCU_U10;
	printf("_TCU_U10 : %p\n", _TCU_U10.getMSH_1());
	UDM_Q05 _UDM_Q05;
	//printf("_UDM_Q05 : %p\n", _UDM_Q05.getMSH_1());
	VQQ_Q07 _VQQ_Q07;
	//printf("_VQQ_Q07 : %p\n", _VQQ_Q07.getMSH_1());
	VXQ_V01 _VXQ_V01;
	//printf("_VXQ_V01 : %p\n", _VXQ_V01.getMSH_1());
	VXR_V03 _VXR_V03;
	//printf("_VXR_V03 : %p\n", _VXR_V03.getMSH_1());
	VXU_V04 _VXU_V04;
	//printf("_VXU_V04 : %p\n", _VXU_V04.getMSH_1());
	VXX_V02 _VXX_V02;
	//printf("_VXX_V02 : %p\n", _VXX_V02.getMSH_1());

}
#endif /*  test_h_ */
