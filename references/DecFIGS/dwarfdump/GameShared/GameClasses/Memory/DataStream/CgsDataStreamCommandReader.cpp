// CgsDataStreamCommandReader.cpp:46
void CgsMemory::DataStreamCommandReader::Construct(DataStreamCommandPoster *  lpPoster) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDataStreamCommandReader.cpp:61
		uint64_t luCurrEncodedValue;

		// CgsDataStreamCommandReader.cpp:62
		uint8_t luCurrNumUsers;

		// CgsDataStreamCommandReader.cpp:63
		uint32_t luCurrNextCommand;

		// CgsDataStreamCommandReader.cpp:64
		uint64_t luNewEncodedValue;

		GetPosterEncodedStatus(/* parameters */);
		SetPosterEncodedStatusConditional(/* parameters */);
	}
}

// CgsDataStreamCommandReader.cpp:89
void CgsMemory::DataStreamCommandReader::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDataStreamCommandReader.cpp:91
		uint64_t luCurrEncodedValue;

		// CgsDataStreamCommandReader.cpp:92
		uint8_t luCurrNumUsers;

		// CgsDataStreamCommandReader.cpp:93
		uint32_t luCurrNextCommand;

		// CgsDataStreamCommandReader.cpp:94
		uint64_t luNewEncodedValue;

		GetPosterEncodedStatus(/* parameters */);
		SetPosterEncodedStatusConditional(/* parameters */);
	}
}

// CgsDataStreamCommandReader.cpp:123
void CgsMemory::DataStreamCommandReader::ReadCommand(void *  lpBuffer, int32_t *  lpiOutCommandIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDataStreamCommandReader.cpp:125
		uint64_t luCurrEncodedValue;

		// CgsDataStreamCommandReader.cpp:126
		uint8_t luCurrNumUsers;

		// CgsDataStreamCommandReader.cpp:127
		uint32_t luCurrNextCommand;

		// CgsDataStreamCommandReader.cpp:128
		uint64_t luNewEncodedValue;

		// CgsDataStreamCommandReader.cpp:129
		bool lbSetResult;

		// CgsDataStreamCommandReader.cpp:153
		char * lpcSource;

		GetPosterEncodedStatus(/* parameters */);
		DataStreamCommandPoster::DecodeStatus(/* parameters */);
		SetPosterEncodedStatusConditional(/* parameters */);
		CgsCore::MemCpy(/* parameters */);
	}
}

// CgsDataStreamCommandReader.cpp:185
void CgsMemory::DataStreamCommandReader::ReadCommands(void *  lpBuffer, int32_t  liNumCommandsToRead, int32_t *  lpiOutNumCommandsRead, int32_t *  lpiOutCommandIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDataStreamCommandReader.cpp:187
		uint64_t luCurrEncodedValue;

		// CgsDataStreamCommandReader.cpp:188
		uint8_t luCurrNumUsers;

		// CgsDataStreamCommandReader.cpp:189
		uint32_t luCurrNextCommand;

		// CgsDataStreamCommandReader.cpp:190
		uint64_t luNewEncodedValue;

		// CgsDataStreamCommandReader.cpp:191
		bool lbSetResult;

		// CgsDataStreamCommandReader.cpp:192
		uint32_t luNumCommandsToRead;

		// CgsDataStreamCommandReader.cpp:223
		char * lpcSource;

		GetPosterEncodedStatus(/* parameters */);
		DataStreamCommandPoster::DecodeStatus(/* parameters */);
		SetPosterEncodedStatusConditional(/* parameters */);
		CgsCore::MemCpy(/* parameters */);
	}
}

