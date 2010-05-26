/*
	NameUnitStrings.h
 
	These are just some big const string arrays used by ChannelMap.mm
*/


// Name Lookup Tables ........................................................

const char * const ObdiiName[] = {
	"None",
	"RPM",
	"TP",
	"LOAD_PCT",
	"SPARKADV",
	"MAF",
	"MAP",
	"VSS",
	"ECT",
	"IAT",
	"PTO_STAT",
	"FUEL1_OL",
	"FUEL2_OL",
	"SHRTFT1",
	"LONGFT1",
	"SHRTFT2",
	"LONGFT2",
	"SHRTFT3",
	"LONGFT3",
	"SHRTFT4",
	"LONGFT4",
	"FRP",
	"FRP_MED",
	"FRP_HIGH",
	"EQ_RAT",
	"LOAD_ABS",
	"EGR_PCT",
	"EGR_ERR",
	"TP_R",
	"TP_B",
	"TP_C",
	"APP_D",
	"APP_E",
	"APP_F",
	"TAC_PCT",
	"EVAP_PCT",
	"EVAP_VP",
	"AIR_UPS",
	"AIR_DNS",
	"AIR_OFF",
	"FLI",
	"BARO",
	"AAT",
	"VPWR",
	"MIL",
	"DTC_CNT",
	"MIL_DIST",
	"MIL_TIME",
	"CLR_DIST",
	"WARM_UPS",
	"RUNTM",
	"O2S11",
	"SHRTFT11",
	"O2S12",
	"SHRTFT12",
	"O2S21",
	"SHRTFT21",
	"O2S22",
	"SHRTFT22",
	"O2S31",
	"SHRTFT31",
	"O2S32",
	"SHRTFT32",
	"O2S41",
	"SHRTFT41",
	"O2S42",
	"SHRTFT42",
	"EQ_RAT11",
	"WO2S11",
	"EQ_RAT12",
	"WO2S12",
	"EQ_RAT21",
	"WO2S21",
	"EQ_RAT22",
	"WO2S22",
	"EQ_RAT31",
	"WO2S31",
	"EQ_RAT32",
	"WO2S32",
	"EQ_RAT41",
	"WO2S41",
	"EQ_RAT42",
	"WO2S42",
	"WBEQ_RAT11",
	"WBO2S11",
	"WBEQ_RAT12",
	"WBO2S12",
	"WBEQ_RAT21",
	"WBO2S21",
	"WBEQ_RAT22",
	"WBO2S22",
	"WBEQ_RAT31",
	"WBO2S31",
	"WBEQ_RAT32",
	"WBO2S32",
	"WBEQ_RAT41",
	"WBO2S41",
	"WBEQ_RAT42",
	"WBO2S42",
	"CATEMP11",
	"CATEMP21",
	"CATEMP12",
	"CATEMP22",
	"RPM2"
};


const char * const ImsNames[] = {
	"O2",
	"RPM",
	"RPM2",
	"FREQ",
	"DWELL",
	"EGT",
	"CHT",
	"SIDE",
	"SIDE",
	"SIDE",
	"TIMING",
	"MAP",
	"MAP",
	"MAP",
	"MAP",
	"ACC",
	"ACC",
	"ACC",
	"AUX",
	"AUX",
};


// Units Lookup Tables .......................................................

const char * const ImsUnits[] = {
	"AFR",
	"RPM",
	"RPM",
	"Hz",
	"%",
	"degC",
	"degC",
	"g",
	"g",
	"g",
	"degBTDC",
	"PSI",
	"PSI",
	"PSI",
	"PSI",
	"g",
	"g",
	"g",
	"Volts",
	"%",
};

const char * const ImsIUnits[] = {
	"AFR",
	"RPM",
	"RPM",
	"Hz",
	"%",
	"degF",
	"degF",
	"g",
	"g",
	"g",
	"degBTDC",
	"PSI",
	"PSI",
	"PSI",
	"PSI",
	"g",
	"g",
	"g",
	"Volts",
	"%",
};

const char * const ObdiiUnits[] = {
	"Volts",
	"RPM",
	"%",
	"%",
	"degBTDC",
	"g/s",
	"kPa",
	"km/h",
	"degC",
	"degC",
	"PTO",
	"OL",
	"OL",
	"%",
	"%",
	"%",
	"%",
	"%",
	"%",
	"%",
	"%",
	"kPa",
	"kPa",
	"kPa",
	"Lambda",
	"%",	
	"%",			
	"%",			
	"%",
	"%",
	"%",
	"%",
	"%",
	"%",
	"%",
	"%",
	"Pa",
	"UPS",
	"DNS",
	"OFF",
	"%",
	"kPa",
	"degC",
	"Volts",
	"MIL",
	"DTCs",
	"km",
	"hours",
	"km",
	"WUs",
	"mins",
	"Volts",
	"%",
	"Volts",
	"%",
	"Volts",
	"%",
	"Volts",
	"%",
	"Volts",
	"%",
	"Volts",
	"%",
	"Volts",
	"%",
	"Volts",
	"%",
	"Lambda",
	"Volts",
	"Lambda",
	"Volts",
	"Lambda",
	"Volts",
	"Lambda",
	"Volts",
	"Lambda",
	"Volts",
	"Lambda",
	"Volts",
	"Lambda",
	"Volts",
	"Lambda",
	"Volts",
	"Lambda",
	"mA",
	"Lambda",
	"mA",
	"Lambda",
	"mA",
	"Lambda",
	"mA",
	"Lambda",
	"mA",
	"Lambda",
	"mA",
	"Lambda",
	"mA",
	"Lambda",
	"mA",
	"degC",
	"degC",
	"degC",
	"degC",
	"RPM"
};


const char * const ObdiiIUnits[] = {
	"Volts",
	"RPM",
	"%",
	"%",
	"degBTDC",
	"g/s",
	"inHg",
	"MPH",
	"degF",
	"degF",
	"PTO",
	"OL",
	"OL",
	"%",
	"%",
	"%",
	"%",
	"%",
	"%",
	"%",
	"%",
	"PSI",
	"PSI",
	"PSI",
	"Lambda",
	"%",	
	"%",			
	"%",			
	"%",
	"%",
	"%",
	"%",
	"%",
	"%",
	"%",
	"%",
	"Pa",
	"UPS",
	"DNS",
	"OFF",
	"%",
	"inHg",
	"degF",
	"Volts",
	"MIL",
	"DTCs",
	"miles",
	"hours",
	"miles",
	"WUs",
	"mins",
	"Volts",
	"%",
	"Volts",
	"%",
	"Volts",
	"%",
	"Volts",
	"%",
	"Volts",
	"%",
	"Volts",
	"%",
	"Volts",
	"%",
	"Volts",
	"%",
	"Lambda",
	"Volts",
	"Lambda",
	"Volts",
	"Lambda",
	"Volts",
	"Lambda",
	"Volts",
	"Lambda",
	"Volts",
	"Lambda",
	"Volts",
	"Lambda",
	"Volts",
	"Lambda",
	"Volts",
	"Lambda",
	"mA",
	"Lambda",
	"mA",
	"Lambda",
	"mA",
	"Lambda",
	"mA",
	"Lambda",
	"mA",
	"Lambda",
	"mA",
	"Lambda",
	"mA",
	"Lambda",
	"mA",
	"degF",
	"degF",
	"degF",
	"degF",
	"RPM"
};
