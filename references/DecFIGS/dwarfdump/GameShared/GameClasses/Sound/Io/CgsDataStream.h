// CgsDataStream.h:146
struct CgsSound::Io::DataStream : public EventQueue<CgsSound::Io::QueueElement,1024> {
public:
	// CgsDataStream.h:148
	void DataStream();

	// CgsDataStream.h:149
	void ~DataStream();

}

