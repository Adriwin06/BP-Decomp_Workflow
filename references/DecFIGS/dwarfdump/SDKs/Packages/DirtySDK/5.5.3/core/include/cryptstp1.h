// cryptstp1.h:36
struct CryptStp1StreamT {
	// cryptstp1.h:37
	int32_t bEncrypt;

	// cryptstp1.h:38
	int32_t bDecrypt;

	// cryptstp1.h:39
	CryptArc4T RecvArc4;

	// cryptstp1.h:40
	CryptArc4T SendArc4;

}

// cryptstp1.h:41
typedef CryptStp1StreamT CryptStp1StreamT;

// cryptstp1.h:49
struct CryptStp1SecretT {
	// cryptstp1.h:50
	char[16] strSend;

	// cryptstp1.h:51
	char[16] strRecv;

}

// cryptstp1.h:52
typedef CryptStp1SecretT CryptStp1SecretT;

// cryptstp1.h:59
struct {
	// cryptstp1.h:58
	char[16] IV;

}

// cryptstp1.h:64
struct {
	// cryptstp1.h:62
	CryptStp1SecretT Secret;

	// cryptstp1.h:63
	uint32_t uTime;

}

// cryptstp1.h:55
struct CryptStp1TicketT {
	// cryptstp1.h:59
	// cryptstp1.h:59
	struct {
		// cryptstp1.h:58
		char[16] IV;

	}

 Plain;

	// cryptstp1.h:64
	// cryptstp1.h:64
	struct {
		// cryptstp1.h:62
		CryptStp1SecretT Secret;

		// cryptstp1.h:63
		uint32_t uTime;

	}

 Encrypted;

}

// cryptstp1.h:65
typedef CryptStp1TicketT CryptStp1TicketT;

// cryptstp1.h:68
struct CryptStp1WalletT {
	// cryptstp1.h:69
	CryptStp1SecretT Secret;

	// cryptstp1.h:70
	CryptStp1TicketT Ticket;

}

// cryptstp1.h:71
typedef CryptStp1WalletT CryptStp1WalletT;

// cryptstp1.h:44
struct CryptStp1SharedT {
	// cryptstp1.h:45
	unsigned char[32] strSecret;

}

// cryptstp1.h:46
typedef CryptStp1SharedT CryptStp1SharedT;

