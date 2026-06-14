// BrnTrafficLogger.cpp:327
void BrnTraffic::Logger::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficLogger.cpp:349
void BrnTraffic::Logger::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficLogger.cpp:59
void BrnTraffic::HashBuffer::Dump(std::FILE *  lpFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLogger.cpp:65
		uint32_t luActiveHull;

		// BrnTrafficLogger.cpp:114
		uint32_t luParam;

	}
	CgsNumeric::Random::RandomUInt(/* parameters */);
	{
		// BrnTrafficLogger.cpp:117
		const BrnTraffic::HashBuffer::ParamData * lpData;

		{
			// BrnTrafficLogger.cpp:126
			uint32_t luPlan;

			{
				// BrnTrafficLogger.cpp:156
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	}
	{
		// BrnTrafficLogger.cpp:189
		const BrnTraffic::HashBuffer::StaticParamData * lpData;

	}
	{
		// BrnTrafficLogger.cpp:205
		uint32_t luRow;

		// BrnTrafficLogger.cpp:206
		uint32_t luFreeParam;

		// BrnTrafficLogger.cpp:207
		const uint32_t KU_PARAMS_PER_ROW;

		{
			// BrnTrafficLogger.cpp:212
			uint32_t luColumn;

		}
	}
	{
		// BrnTrafficLogger.cpp:224
		uint32_t luRow;

		// BrnTrafficLogger.cpp:225
		uint32_t luFreeStaticParam;

		// BrnTrafficLogger.cpp:226
		const uint32_t KU_PARAMS_PER_ROW;

		{
			// BrnTrafficLogger.cpp:231
			uint32_t luColumn;

		}
	}
	{
		// BrnTrafficLogger.cpp:243
		uint32_t luRow;

		// BrnTrafficLogger.cpp:244
		uint32_t luParam;

		// BrnTrafficLogger.cpp:245
		const uint32_t KU_PARAMS_PER_ROW;

		{
			// BrnTrafficLogger.cpp:250
			uint32_t luColumn;

		}
	}
	{
		// BrnTrafficLogger.cpp:262
		uint32_t luRow;

		// BrnTrafficLogger.cpp:263
		uint32_t luSParam;

		// BrnTrafficLogger.cpp:264
		const uint32_t KU_PARAMS_PER_ROW;

		{
			// BrnTrafficLogger.cpp:269
			uint32_t luColumn;

		}
	}
	{
		// BrnTrafficLogger.cpp:76
		BrnTraffic::HashBuffer::ActiveHullData * lpHullData;

		// BrnTrafficLogger.cpp:80
		uint32_t luJunction;

		// BrnTrafficLogger.cpp:86
		uint64_t lxMask;

		// BrnTrafficLogger.cpp:87
		uint32_t luStopline;

		// BrnTrafficLogger.cpp:96
		uint32_t luRow;

		// BrnTrafficLogger.cpp:97
		uint32_t luSpan;

		// BrnTrafficLogger.cpp:98
		const uint32_t KU_SPANS_PER_ROW;

		{
			// BrnTrafficLogger.cpp:103
			uint32_t luColumn;

		}
	}
}

// BrnTrafficLogger.cpp:289
void BrnTraffic::FrameLogData::Dump(std::FILE *  lpFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLogger.cpp:298
		uint32_t luActiveRaceCar;

		// BrnTrafficLogger.cpp:305
		uint32_t luHullChange;

	}
}

// BrnTrafficLogger.cpp:368
void BrnTraffic::Logger::HashState(const BrnTraffic::TrafficEntityModule *  lpModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLogger.cpp:374
		HashBuffer lHashBuffer;

		// BrnTrafficLogger.cpp:375
		HashBuffer * lpHashBuffer;

		// BrnTrafficLogger.cpp:386
		uint32_t luParam;

		// BrnTrafficLogger.cpp:483
		uint32_t luFreeParam;

		// BrnTrafficLogger.cpp:491
		uint32_t luFreeStaticParam;

		// BrnTrafficLogger.cpp:499
		uint32_t luPurgParam;

		// BrnTrafficLogger.cpp:506
		uint32_t luPurgSParam;

		// BrnTrafficLogger.cpp:514
		uint32_t luActiveHull;

		// BrnTrafficLogger.cpp:551
		uint32_t luHash32;

		// BrnTrafficLogger.cpp:552
		uint16_t luHash;

		HashBuffer(/* parameters */);
		{
			// BrnTrafficLogger.cpp:389
			const BrnTraffic::Param * lpParam;

			// BrnTrafficLogger.cpp:390
			BrnTraffic::HashBuffer::ParamData * lpData;

			{
				// BrnTrafficLogger.cpp:403
				uint32_t luPlan;

				// BrnTrafficLogger.cpp:443
				const ParamNeedToSlowData * lpSlowData;

				// BrnTrafficLogger.cpp:447
				const ParamListNode * lpNode;

				// BrnTrafficLogger.cpp:452
				const ParamTransform * lpTransform;

				{
					// BrnTrafficLogger.cpp:433
					CgsDev::StrStream lStrStream;

					CgsDev::StrStream::StrStream(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
				}
			}
		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector4::Set(/* parameters */);
		TrafficEntityModule::GetParam(/* parameters */);
		Param::IsAlive(/* parameters */);
		{
			// BrnTrafficLogger.cpp:465
			const StaticTrafficParam * lpParam;

			// BrnTrafficLogger.cpp:466
			BrnTraffic::HashBuffer::StaticParamData * lpData;

		}
		StaticTrafficParam::IsAlive(/* parameters */);
		CgsContainers::Stack<uint16_t,400>::GetLength(/* parameters */);
		CgsContainers::Stack<uint16_t,400>::GetLength(/* parameters */);
		CgsContainers::Stack<uint16_t,400>::operator[](/* parameters */);
		CgsContainers::Stack<uint8_t,200>::GetLength(/* parameters */);
		CgsContainers::Stack<uint8_t,200>::GetLength(/* parameters */);
		CgsContainers::Stack<uint8_t,200>::operator[](/* parameters */);
		CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::operator[](/* parameters */);
		CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::operator[](/* parameters */);
		CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
		CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
		{
			// BrnTrafficLogger.cpp:517
			const BrnTraffic::Hull * lpHull;

			// BrnTrafficLogger.cpp:518
			const HullRuntime * lpHullRuntime;

			// BrnTrafficLogger.cpp:520
			BrnTraffic::HashBuffer::ActiveHullData * lpHullData;

			// BrnTrafficLogger.cpp:527
			uint32_t luJunction;

			// BrnTrafficLogger.cpp:534
			uint64_t lxMask;

			// BrnTrafficLogger.cpp:535
			uint32_t luStopline;

		}
		CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
		CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
		TrafficEntityModule::GetHullRuntime(/* parameters */);
		CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
		HullRuntime::GetJunctionCurrentStates(/* parameters */);
		HullRuntime::IsStoplineRed(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnTrafficLogger.cpp:609
void BrnTraffic::Logger::Dump(const char *  lpLogName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLogger.cpp:612
		char[256] lacCurrentUserName;

		// BrnTrafficLogger.cpp:613
		char[256] lacFilename;

		// BrnTrafficLogger.cpp:614
		const char * lpFilename;

		// BrnTrafficLogger.cpp:615
		SceNpId::SceNpOnlineId lOnlineId;

		// BrnTrafficLogger.cpp:616
		int32_t lOnlineStatus;

		// BrnTrafficLogger.cpp:617
		bool lbOnline;

		// BrnTrafficLogger.cpp:649
		std::FILE * lpFile;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnTrafficLogger.cpp:683
void BrnTraffic::Logger::HACKDump(const char *  lpLogName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnTrafficLogger.cpp:43
