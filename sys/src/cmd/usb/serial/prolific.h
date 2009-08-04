enum {
	/* flavours of the device */
	Type0,
	Type1,
	TypeHX,

	/* usbcmd parameters */
	SetLineReq = 0x20,

	SetCtlReq = 0x22,
	CtlDTR = 0x01,
	CtlRTS = 0x02,

	BreakReq = 0x23,
	BreakOn = 0xffff,
	BreakOff = 0x0000,

	GetLineReq = 0x21,

	VendorWriteReq = 0x01,	/* BUG: is this a standard request? */
	VendorReadReq = 0x01,

	VendorReqSize = 10,

	/* status read from interrupt endpoint */
	DcdStatus =	0x01,
	DsrStatus =	0x02,
	BreakerrStatus=	0x04,
	RingStatus =	0x08,
	FrerrStatus =	0x10,
	ParerrStatus =	0x20,
	OvererrStatus =	0x40,
	CtsStatus =	0x80,

	/*
	 * flow control bits, Dcr0InitH
	 * I think, composed this list from various drivers and specs.
	 * FlowOutCts =	0x0001,
	 * FlowOutDsr =	0x0002,
	 * FlowInDsr =	0x0004,
	 * FlowInDtr =	0x0008,
	 * FlowInRts =	0x0010,
	 * FlowOutRts =	0x0020,
	 * FlowOutXon =	0x0080,
	 * FlowInXon =	0x0100,
	 */

	Dcr0InitH = 0x0041,
	Dcr0InitX = 0x0061,
	Dcr1InitH = 0x0080,
	Dcr1InitX = 0x0000,
	Dcr2InitH = 0x0024,
	Dcr2InitX = 0x0044,
};

enum {
	PL2303Vid =	0x067b,
	PL2303Did =	0x2303,
	PL2303DidRSAQ2=	0x04bb,
	PL2303DidDCU11=	0x1234,
	PL2303DidPHAROS=0xaaa0,
	PL2303DidRSAQ3=	0xaaa2,
	PL2303DidALDIGA=0x0611,
	PL2303DidMMX =	0x0612,
	PL2303DidGPRS =	0x0609,

	ATENVid =	0x0557,
	ATENVid2 =	0x0547,
	ATENDid =	0x2008,

	IODATAVid =	0x04bb,
	IODATADid =	0x0a03,
	IODATADidRSAQ5=	0x0a0e,

	ELCOMVid =	0x056e,
	ELCOMDid =	0x5003,
	ELCOMDidUCSGT =	0x5004,

	ITEGNOVid =	0x0eba,
	ITEGNODid =	0x1080,
	ITEGNODid2080 =	0x2080,

	MA620Vid =	0x0df7,
	MA620Did =	0x0620,

	RATOCVid =	0x0584,
	RATOCDid =	0xb000,

	TRIPPVid =	0x2478,
	TRIPPDid =	0x2008,

	RADIOSHACKVid =	0x1453,
	RADIOSHACKDid =	0x4026,

	DCU10Vid =	0x0731,
	DCU10Did =	0x0528,

	SITECOMVid =	0x6189,
	SITECOMDid =	0x2068,

	 /* Alcatel OT535/735 USB cable */
	ALCATELVid =	0x11f7,
	ALCATELDid =	0x02df,

	/* Samsung I330 phone cradle */
	SAMSUNGVid =	0x04e8,
	SAMSUNGDid =	0x8001,

	SIEMENSVid =	0x11f5,
	SIEMENSDidSX1 =	0x0001,
	SIEMENSDidX65 =	0x0003,
	SIEMENSDidX75 =	0x0004,
	SIEMENSDidEF81=	0x0005,

	SYNTECHVid =	0x0745,
	SYNTECHDid =	0x0001,

	/* Nokia CA-42 Cable */
	NOKIACA42Vid =	0x078b,
	NOKIACA42Did =	0x1234,

	/* CA-42 CLONE Cable www.ca-42.com chipset: Prolific Technology Inc */
	CA42CA42Vid =	0x10b5,
	CA42CA42Did =	0xac70,

	SAGEMVid =	0x079b,
	SAGEMDid =	0x0027,

	/* Leadtek GPS 9531 (ID 0413:2101) */
	LEADTEKVid =	0x0413,
	LEADTEK9531Did=	0x2101,

	 /* USB GSM cable from Speed Dragon Multimedia, Ltd */
	SPEEDDRAGONVid=	0x0e55,
	SPEEDDRAGONDid=	0x110b,

	/* DATAPILOT Universal-2 Phone Cable */
	BELKINVid =	0x050d,
	BELKINDid =	0x0257,

	/* Belkin "F5U257" Serial Adapter */
	DATAPILOTU2Vid=	0x0731,
	DATAPILOTU2Did=	0x2003,

	ALCORVid =	0x058F,
	ALCORDid =	0x9720,

	/* Willcom WS002IN Data Driver (by NetIndex Inc.) */,
	WS002INVid =	0x11f6,
	WS002INDid =	0x2001,

	/* Corega CG-USBRS232R Serial Adapter */,
	COREGAVid =	0x07aa,
	COREGADid =	0x002a,

	/* Y.C. Cable U.S.A., Inc - USB to RS-232 */,
	YCCABLEVid =	0x05ad,
	YCCABLEDid =	0x0fba,

	/* "Superial" USB - Serial */,
	SUPERIALVid =	0x5372,
	SUPERIALDid =	0x2303,

	/* Hewlett-Packard LD220-HP POS Pole Display */,
	HPVid =		0x03f0,
	HPLD220Did =	0x3524,
};