// JuiceNetwork.h:16
struct Juice::INetwork {
	int (*)(...) * _vptr.INetwork;

	// JuiceNetwork.h:20
	extern const int JUICE_PACKET_HDR_SIZE = 12;

private:
	// JuiceNetwork.cpp:9
	extern Juice::INetwork * sCurrentNetExtention;

public:
	void INetwork(const INetwork &);

	// JuiceNetwork.h:29
	virtual int Connect(const char *, int);

	// JuiceNetwork.h:36
	virtual int IsConnected();

	// JuiceNetwork.h:47
	virtual int Recv(char *, int *, int);

	// JuiceNetwork.h:55
	virtual int PeekHdr(char *);

	// JuiceNetwork.h:66
	virtual int Send(int, int, char *);

	// JuiceNetwork.h:73
	virtual int IsEnabled();

	// JuiceNetwork.h:79
	virtual int Initialize();

	// JuiceNetwork.h:85
	virtual int Disconnect();

	// JuiceNetwork.h:92
	virtual void MaintainConn();

	// JuiceNetwork.h:98
	virtual void TearDown();

	// JuiceNetwork.h:104
	virtual void FreeEverything();

	// JuiceNetwork.h:111
	virtual const char * GetMac();

	// JuiceNetwork.cpp:19
	int ExtractChannel(char *);

	// JuiceNetwork.cpp:31
	int ExtractSize(char *);

	// JuiceNetwork.cpp:43
	int PackBuffer(int, int, char **);

	// JuiceNetwork.h:143
	virtual const char * GetLocalIpAddress();

	// JuiceNetwork.h:155
	virtual const char * GetConnectionKey();

	// JuiceNetwork.h:158
	Juice::INetwork * ActiveNetExtension();

protected:
	// JuiceNetwork.cpp:14
	void INetwork();

	// JuiceNetwork.cpp:71
	virtual void ~INetwork();

}

// JuiceNetwork.h:20
extern const int JUICE_PACKET_HDR_SIZE = 12;

// JuiceDefines.h:17
namespace Juice {
	// Declaration
	struct INetwork {
	private:
		// JuiceNetwork.h:168
		extern Juice::INetwork * sCurrentNetExtention;

	}

}

// JuiceNetwork.h:168
extern Juice::INetwork * sCurrentNetExtention;

