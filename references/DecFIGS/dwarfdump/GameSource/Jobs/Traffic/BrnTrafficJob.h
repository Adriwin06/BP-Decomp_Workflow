// BrnTrafficJob.h:50
struct BrnTraffic::TrafficJobStub {
private:
	// BrnTrafficJob.h:76
	bool mbRunningJob;

	// BrnTrafficJob.h:77
	Job mJob;

	// BrnTrafficJob.h:78
	TrafficJobData mJobData;

	// BrnTrafficJob.h:81
	PhysicalRequestInfoList mNewPhysicalRequests;

public:
	// BrnTrafficJob.h:55
	void Construct();

	// BrnTrafficJob.h:59
	void Destruct();

	// BrnTrafficJob.h:63
	void Execute(JobParams *);

	// BrnTrafficJob.h:67
	void WaitOn();

	// BrnTrafficJob.h:71
	PhysicalRequestInfoList * GetNewPhysicalRequests();

}

