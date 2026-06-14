// ICEActionQueue.hpp:21
namespace ICE {
	// ICEData.cpp:36
	extern void InitICEDescriptions();

}

// ICEData.cpp:399
void ICE::ICEChannel::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEData.cpp:536
void ICE::ICEChannel::GetKeyIndex(uint16_t  lu16Interval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEData.cpp:195
void ICE::ICEElementDescription::GetRawInt(uint8_t *  lpData, int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:197
		int32_t liBitSize;

		// ICEData.cpp:198
		int32_t liBitStart;

		// ICEData.cpp:199
		int32_t liBitEnd;

		// ICEData.cpp:200
		int32_t liByteEnd;

		// ICEData.cpp:201
		int32_t liByteStart;

		// ICEData.cpp:203
		uint32_t luRet;

		// ICEData.cpp:204
		uint8_t * lpDataStart;

		// ICEData.cpp:205
		int32_t liShiftRight;

		// ICEData.cpp:206
		uint64_t lu64Mask;

		{
			// ICEData.cpp:207
			int32_t liLoop;

		}
		{
			// ICEData.cpp:209
			uint32_t luTemp;

		}
	}
}

// ICEData.cpp:232
void ICE::ICEElementDescription::SetRawInt(uint8_t *  lpData, int32_t  liIndex, uint32_t  luValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:234
		int32_t liBitSize;

		// ICEData.cpp:235
		int32_t liBitStart;

		// ICEData.cpp:236
		int32_t liBitEnd;

		// ICEData.cpp:237
		int32_t liByteEnd;

		// ICEData.cpp:238
		int32_t liByteStart;

		// ICEData.cpp:241
		uint8_t * lpDataStart;

		// ICEData.cpp:242
		int32_t liShiftLeft;

		// ICEData.cpp:243
		uint64_t lu64Mask;

		// ICEData.cpp:244
		uint64_t lu64Val;

		{
			// ICEData.cpp:245
			int32_t liLoop;

		}
	}
}

// ICEData.cpp:554
void ICE::ICEChannel::SetIntervalKey(uint16_t  lu16Interval, int16_t  li16Key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEData.cpp:1028
void ICE::ICETakeData::ComputeEditSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:1030
		uint32_t size;

		{
			// ICEData.cpp:1041
			int32_t i;

			{
				// ICEData.cpp:1043
				bool is_key;

				// ICEData.cpp:1044
				int32_t num_data;

			}
		}
	}
}

// ICEData.cpp:1108
void ICE::ICETakeData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:1117
		int32_t i;

	}
}

// ICEData.cpp:1136
void ICE::ICETakeData::FixUp(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEData.cpp:86
void ICE::ICEElementDescription::Decode(uint32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:88
		float32_t lfVal;

	}
}

// ICEData.cpp:571
void ICE::ICEChannel::GetIntervalParameter(uint16_t  lu16Interval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ICEParameter::GetValue(/* parameters */);
}

// ICEData.cpp:624
void ICE::ICEChannel::GetIntervalBracket(uint16_t  lu16Interval, float32_t *  lpOne, float32_t *  lpTwo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEData.cpp:607
void ICE::ICEChannel::GetIntervalSize(uint16_t  lu16Interval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEData.cpp:2631
void ICE::ICEGroup::GetAssembly(int32_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:2633
		ICE::ICETakeData * assembly;

		bTList<ICE::ICETakeData>::GetNode(/* parameters */);
	}
}

// ICEData.cpp:355
void ICE::ICEElementDescription::GetDefaultFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ICEValue::GetFloat(/* parameters */);
	ICEMath::IntToFloat(/* parameters */);
}

// ICEData.cpp:905
void ICE::ICETake::GetValueFloat(int32_t  liElementNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:907
		const const ICEValue & lValue;

		// ICEData.cpp:908
		const const ICEElementDescription & lElement;

		ICEMath::IntToFloat(/* parameters */);
	}
	ICEValue::GetFloat(/* parameters */);
}

// ICEData.cpp:2670
void ICE::ICEGroup::GetTakeNumber(ICE::ICETakeData *  take_data) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:2672
		int32_t n;

		{
			// ICEData.cpp:2673
			ICE::ICETakeData * take;

			bTList<ICE::ICETakeData>::GetHead(/* parameters */);
		}
	}
	bTNode<ICE::ICETakeData>::GetNext(/* parameters */);
}

// ICEData.cpp:2692
void ICE::ICEGroup::GetAssemblyNumber(ICE::ICETakeData *  assembly_take_data) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:2694
		int32_t n;

		{
			// ICEData.cpp:2695
			ICE::ICETakeData * assembly;

			bTList<ICE::ICETakeData>::GetHead(/* parameters */);
		}
	}
	bTNode<ICE::ICETakeData>::GetNext(/* parameters */);
}

// ICEData.cpp:517
void ICE::ICEChannel::IsHardCut(uint16_t  lu16Interval, int32_t  liWhichEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:519
		int16_t li16Neighbour;

	}
	ICEMath::Clamp(/* parameters */);
	rw::math::vpu::Min<int32_t>(/* parameters */);
}

// ICEData.cpp:309
void ICE::ICEElementDescription::GetValue(uint8_t *  lpData, int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:315
		int32_t liSignExtendShift;

		// ICEData.cpp:316
		int32_t liSignedRaw;

		ICEValue::ICEValue(/* parameters */);
	}
	{
		// ICEData.cpp:333
		float32_t * lpFloatData;

		ICEValue::ICEValue(/* parameters */);
	}
	ICEValue::ICEValue(/* parameters */);
	ICEValue::ICEValue(/* parameters */);
}

// ICEData.cpp:1453
void ICE::ICETake::FreeEditBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEData.cpp:678
void ICE::ICETake::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEData.cpp:834
void ICE::ICETake::GetValue(int32_t  liElementNumber, uint16_t  lu16Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:837
		const const ICEElementDescription & lElement;

		// ICEData.cpp:838
		const const ICEChannel & lChannel;

	}
	{
		// ICEData.cpp:843
		bool is_key;

	}
	ICEChannel::HasData(/* parameters */);
}

// ICEData.cpp:887
void ICE::ICETake::GetValueFloat(int32_t  liElementNumber, uint16_t  lu16Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:889
		ICEValue lValue;

		// ICEData.cpp:890
		const const ICEElementDescription & lElement;

	}
	ICEMath::IntToFloat(/* parameters */);
	ICEValue::GetFloat(/* parameters */);
}

// ICEData.cpp:1063
void ICE::ICETakeData::ComputeActualSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:1065
		uint32_t size;

		// ICEData.cpp:1067
		int32_t total_indices;

		// ICEData.cpp:1068
		int32_t total_parameters;

		{
			// ICEData.cpp:1069
			int32_t i;

			{
				// ICEData.cpp:1071
				int32_t num_intervals;

				ICEMath::Max(/* parameters */);
				ICEMath::Max(/* parameters */);
			}
		}
		{
			// ICEData.cpp:1086
			int32_t i;

			{
				// ICEData.cpp:1088
				bool is_key;

				// ICEData.cpp:1089
				const const ICEElementDescription & element;

			}
		}
	}
}

// ICEData.cpp:1004
void ICE::ICETakeData::operator=(const const ICETakeData &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:1009
		uint32_t luSize;

		// ICEData.cpp:1010
		uint8_t * lpDest;

		// ICEData.cpp:1011
		uint8_t * lpSrc;

	}
	GetVariableDataSize(/* parameters */);
}

// ICEData.cpp:983
void ICE::ICETakeData::operator==(const const ICETakeData &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:985
		uint32_t luSize;

		// ICEData.cpp:988
		const uint8_t * lpA;

		// ICEData.cpp:989
		const uint8_t * lpB;

		ICEMath::MemCmp(/* parameters */);
	}
}

// ICEData.cpp:2817
void ICE::ICEGroup::FlushAllocatedAssemblyTakes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:2819
		ICE::ICETakeData * assembly_take_data;

		// ICEData.cpp:2820
		ICE::ICETakeData * next_assembly_take;

		bTList<ICE::ICETakeData>::GetHead(/* parameters */);
	}
	bTNode<ICE::ICETakeData>::GetNext(/* parameters */);
	bTList<ICE::ICETakeData>::Remove(/* parameters */);
}

// ICEData.cpp:2649
void ICE::ICEGroup::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	bList::Construct(/* parameters */);
	bList::Construct(/* parameters */);
}

// ICEData.cpp:2346
void ICE::ICETake::GetSlope(int32_t  liElement, int32_t  channel, ICETakeData::ICE_KEY_INDEX  interval, int32_t  which_key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:2350
		float32_t lfSlope;

		// ICEData.cpp:2351
		int32_t liCubicLinearElement;

		// ICEData.cpp:2354
		bool lbUseCubic;

		{
			// ICEData.cpp:2364
			int32_t neighbour_interval;

			// ICEData.cpp:2365
			ICETakeData::ICE_KEY_INDEX current_key;

			// ICEData.cpp:2399
			float32_t tangent_scale;

			// ICEData.cpp:2400
			int32_t tangent_scale_element;

			ICEMath::Clamp(/* parameters */);
		}
	}
	{
		// ICEData.cpp:2368
		ICETakeData::ICE_KEY_INDEX neighbour_start_key;

		// ICEData.cpp:2369
		ICETakeData::ICE_KEY_INDEX adjacent_key;

		{
			// ICEData.cpp:2373
			float32_t v1;

			// ICEData.cpp:2374
			float32_t v0;

			// ICEData.cpp:2376
			float32_t current_weight;

			// ICEData.cpp:2377
			float32_t neighbour_weight;

			// ICEData.cpp:2378
			float32_t current_interval_size;

			// ICEData.cpp:2379
			float32_t neighbour_interval_size;

			// ICEData.cpp:2380
			float32_t total_interval_size;

		}
	}
}

// ICEData.cpp:2789
void ICE::ICEGroup::FlushAllocatedTakes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:2791
		ICE::ICETakeData * take;

		// ICEData.cpp:2792
		ICE::ICETakeData * next_take;

		bTList<ICE::ICETakeData>::GetHead(/* parameters */);
	}
	bTNode<ICE::ICETakeData>::GetNext(/* parameters */);
	bTList<ICE::ICETakeData>::Remove(/* parameters */);
}

// ICEData.cpp:2614
void ICE::ICEGroup::GetTake(int32_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:2616
		ICE::ICETakeData * take;

		bTList<ICE::ICETakeData>::GetNode(/* parameters */);
	}
}

// ICEData.cpp:105
void ICE::ICEElementDescription::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ICEMath::Clamp(/* parameters */);
	{
		// ICEData.cpp:140
		float32_t lfMin;

		// ICEData.cpp:141
		float32_t lfMax;

		// ICEData.cpp:142
		float32_t lfDefault;

		// ICEData.cpp:150
		float32_t lfSlotsTotal;

		ICEValue::GetFloat(/* parameters */);
		ICEValue::GetFloat(/* parameters */);
		ICEValue::GetFloat(/* parameters */);
		ICEMath::Clamp(/* parameters */);
		ICEMath::IntToFloat(/* parameters */);
		ICEMath::Round(/* parameters */);
	}
	{
		// ICEData.cpp:161
		int32_t lfMin;

	}
	{
		// ICEData.cpp:172
		uint32_t lfMax;

	}
}

// ICEData.cpp:67
void ICE::ICEElementDescription::Encode(float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:69
		float32_t lfVal;

		ICEValue::GetFloat(/* parameters */);
		ICEValue::GetFloat(/* parameters */);
		ICEMath::Clamp(/* parameters */);
		ICEMath::RoundFloatToInt(/* parameters */);
	}
	ICEMath::RoundFloatToInt(/* parameters */);
}

// ICEData.cpp:264
void ICE::ICEElementDescription::SetValue(uint8_t *  lpData, int32_t  liIndex, const const ICEValue &  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:289
		float32_t * lpFloatData;

	}
}

// ICEData.cpp:863
void ICE::ICETake::SetValue(int32_t  liElementNumber, uint16_t  lu16Index, ICEValue  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:866
		const const ICEElementDescription & lElement;

		// ICEData.cpp:868
		const const ICEChannel & lChannel;

		// ICEData.cpp:869
		bool lbIsKey;

	}
}

// ICEData.cpp:377
void ICE::ICEElementDescription::GetDefaultSignedInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ICEValue::GetFloat(/* parameters */);
	ICEMath::RoundFloatToInt(/* parameters */);
	ICEValue::GetSignedInt(/* parameters */);
}

// ICEData.cpp:589
void ICE::ICEChannel::SetIntervalParameter(uint16_t  lu16Interval, float32_t  lfParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ICEParameter::SetValue(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	ICEMath::RoundFloatToInt(/* parameters */);
}

// ICEData.cpp:923
void ICE::ICETake::GetValueInt(int32_t  liElementNumber, uint16_t  lu16Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:925
		ICEValue lValue;

		// ICEData.cpp:926
		const const ICEElementDescription & lElement;

	}
	ICEValue::GetSignedInt(/* parameters */);
	ICEValue::GetFloat(/* parameters */);
	ICEMath::RoundFloatToInt(/* parameters */);
}

// ICEData.cpp:941
void ICE::ICETake::GetValueInt(int32_t  liElementNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:943
		const const ICEValue & lValue;

		// ICEData.cpp:944
		const const ICEElementDescription & lElement;

		ICEValue::GetSignedInt(/* parameters */);
	}
	ICEValue::GetFloat(/* parameters */);
	ICEMath::RoundFloatToInt(/* parameters */);
}

// ICEData.cpp:433
void ICE::ICEChannel::SetParameter(float32_t  lfParam, float32_t *  lpStart, float32_t *  lpEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:435
		ICEParameter lIceParamMin;

		// ICEData.cpp:436
		ICEParameter lIceParamMax;

		// ICEData.cpp:437
		uint16_t lNewInterval;

		ICEParameter::ICEParameter(/* parameters */);
	}
	ICEMath::RoundFloatToInt(/* parameters */);
	ICEMath::IntToFloat(/* parameters */);
	ICEParameter::ICEParameter(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	ICEMath::RoundFloatToInt(/* parameters */);
	{
		// ICEData.cpp:441
		ICEParameter lIceParam;

		ICEParameter::ICEParameter(/* parameters */);
		ICEMath::Clamp(/* parameters */);
		{
			// ICEData.cpp:463
			uint16_t lIntervalMin;

			// ICEData.cpp:464
			uint16_t lIntervalMax;

			// ICEData.cpp:465
			float32_t lfParamMin;

			// ICEData.cpp:466
			float32_t lfParamMax;

			ICEMath::Clamp(/* parameters */);
			ICEParameter::SetValue(/* parameters */);
			ICEParameter::SetValue(/* parameters */);
			rw::math::vpu::Min<float>(/* parameters */);
			ICEMath::RoundFloatToInt(/* parameters */);
			{
				// ICEData.cpp:475
				uint16_t lIntervalMid;

				// ICEData.cpp:476
				const const ICEParameter & lIceParamMid;

			}
			ICEParameter::ICEParameter(/* parameters */);
		}
	}
	{
		// ICEData.cpp:449
		const const ICEParameter & lMin;

		// ICEData.cpp:450
		const const ICEParameter & lMax;

		// ICEData.cpp:451
		bool lbHardRangeEnd;

		// ICEData.cpp:452
		bool lbLessThanMax;

		ICEParameter::ICEParameter(/* parameters */);
		ICEParameter::ICEParameter(/* parameters */);
	}
}

// ICEData.cpp:2422
void ICE::ICETake::SetParameter(int32_t  channel_number, float32_t  param, bool  force_refresh) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:2424
		float32_t start;

		// ICEData.cpp:2424
		float32_t end;

		// ICEData.cpp:2425
		const ICEChannel & channel;

		// ICEData.cpp:2426
		const const ICEChannelDescription & channel_description;

		// ICEData.cpp:2427
		bool new_interval;

		// ICEData.cpp:2472
		float32_t size;

		// ICEData.cpp:2474
		float32_t norm_param;

		// ICEData.cpp:2475
		int32_t num_keys;

	}
	{
		// ICEData.cpp:2476
		int32_t i;

	}
	{
		// ICEData.cpp:2432
		int32_t num_keys;

		// ICEData.cpp:2462
		int32_t num_intervals;

		{
			// ICEData.cpp:2435
			ICETakeData::ICE_KEY_INDEX interval_number;

			// ICEData.cpp:2436
			ICETakeData::ICE_KEY_INDEX key_number;

			{
				// ICEData.cpp:2437
				int32_t i;

			}
		}
		{
			// ICEData.cpp:2463
			int32_t i;

			{
				// ICEData.cpp:2465
				int32_t element_number;

				ICEValue::operator=(/* parameters */);
			}
		}
	}
	{
		// ICEData.cpp:2478
		int32_t element_number;

		// ICEData.cpp:2479
		float32_t value_float;

	}
	ICEMath::RoundFloatToInt(/* parameters */);
	ICEMath::IntToFloat(/* parameters */);
	ICEValue::Set(/* parameters */);
	ICEValue::Set(/* parameters */);
	{
		// ICEData.cpp:2449
		int32_t i;

		{
			// ICEData.cpp:2451
			int32_t element_number;

			// ICEData.cpp:2452
			float32_t default_value;

			Cubic1D::SetValDesired(/* parameters */);
			Cubic1D::SetVal(/* parameters */);
			Cubic1D::SetdValDesired(/* parameters */);
			Cubic1D::SetdVal(/* parameters */);
		}
	}
	{
		// ICEData.cpp:2439
		int32_t element_number;

		Cubic1D::SetVal(/* parameters */);
		Cubic1D::SetValDesired(/* parameters */);
		Cubic1D::SetdVal(/* parameters */);
		Cubic1D::SetdValDesired(/* parameters */);
	}
}

// ICEData.cpp:1495
void ICE::ICETake::SetDataPointers(ICE::ICETakeData *  lpTakeData, bool  lbIsSubTake) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:1519
		int32_t i;

	}
	{
		// ICEData.cpp:1532
		int32_t liTotalIndices;

		// ICEData.cpp:1533
		int32_t liTotalParameters;

		// ICEData.cpp:1541
		ICETakeData::ICE_KEY_INDEX * lpKeyIndices;

		// ICEData.cpp:1542
		ICEParameter * lpKeyParameters;

		// ICEData.cpp:1543
		uint8_t * lpElementData;

		{
			// ICEData.cpp:1534
			int32_t i;

			{
				// ICEData.cpp:1536
				int32_t liNumIntervals;

			}
			ICEMath::Max(/* parameters */);
			ICEMath::Max(/* parameters */);
		}
		{
			// ICEData.cpp:1545
			int32_t i;

			{
				// ICEData.cpp:1547
				ICETakeData::ICE_KEY_INDEX lu16NumIntervals;

				// ICEData.cpp:1548
				ICETakeData::ICE_KEY_INDEX lu16NumKeys;

			}
			ICEMath::Max(/* parameters */);
			ICEMath::Max(/* parameters */);
			MarkChannelFromSubTake(/* parameters */);
			ICEChannel::SetNumKeys(/* parameters */);
			ICEChannel::SetParameterData(/* parameters */);
			ICEChannel::SetKeyData(/* parameters */);
			ICEChannel::SetNumIntervals(/* parameters */);
		}
		{
			// ICEData.cpp:1568
			int32_t i;

			{
				// ICEData.cpp:1570
				int32_t channel_number;

				// ICEData.cpp:1576
				int32_t liNumEntries;

			}
		}
	}
	{
		// ICEData.cpp:1506
		int32_t i;

		MarkChannelFromSubTake(/* parameters */);
	}
	{
		// ICEData.cpp:1521
		int32_t channel_number;

	}
	ICEValue::operator=(/* parameters */);
}

// ICEData.cpp:2594
void ICE::ICETake::SetSubTake(const ICETakeData *  lpSubTakeData, bool  lbForceReset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEData.cpp:2572
void ICE::ICETake::SetSubTake(int32_t  liSubTakeGuid, bool  lbForceReset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:2574
		ICE::ICETakeData * lpSubTakeData;

	}
}

// ICEData.cpp:2499
void ICE::ICETake::SetParameter(float32_t  param, bool  force_refresh, bool  ignore_assembly_channel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:2501
		bool assemChnlNewInterval;

	}
	ICEMath::Clamp(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	ICEValue::operator=(/* parameters */);
	{
		// ICEData.cpp:2547
		int32_t channel_number;

	}
	GetValue(/* parameters */);
	ICEValue::operator=(/* parameters */);
	{
		// ICEData.cpp:2512
		float32_t sub_param;

		GetValue(/* parameters */);
		{
			// ICEData.cpp:2517
			float32_t sub_start;

			// ICEData.cpp:2518
			float32_t top_start;

			// ICEData.cpp:2519
			float32_t sub_coef;

			GetValue(/* parameters */);
		}
		ICEMath::Clamp(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
		{
			// ICEData.cpp:2523
			int32_t channel_number;

		}
	}
}

// ICEData.cpp:1475
void ICE::ICETake::SetData(ICE::ICETakeData *  take_data, float32_t  param) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEData.cpp:650
void ICE::ICETake::Construct(const ICE::IResourceManager *  lpResourceManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:661
		int32_t liLoop;

		ICEChannel::Construct(/* parameters */);
	}
}

// ICEData.cpp:1195
void ICE::ICETakeData::FixDown(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:1202
		ICETake lTake;

	}
	ICETake(/* parameters */);
	{
		// ICEData.cpp:1205
		int32_t i;

		{
			// ICEData.cpp:1207
			const const ICEElementDescription & element_description;

			{
				// ICEData.cpp:1210
				float32_t * data;

				// ICEData.cpp:1211
				int32_t channel;

				// ICEData.cpp:1212
				int32_t num_data;

				{
					// ICEData.cpp:1214
					int32_t j;

				}
			}
		}
	}
	{
		// ICEData.cpp:1218
		int32_t i;

		{
			// ICEData.cpp:1220
			ICETakeData::ICE_KEY_INDEX num_intervals;

			// ICEData.cpp:1221
			ICETakeData::ICE_KEY_INDEX num_keyIndices;

			// ICEData.cpp:1222
			ICETakeData::ICE_KEY_INDEX num_Parameters;

			// ICEData.cpp:1223
			ICEParameter * pParameters;

			// ICEData.cpp:1228
			ICETakeData::ICE_KEY_INDEX * pKeyIndices;

			ICEMath::Max(/* parameters */);
			ICEMath::Max(/* parameters */);
			{
				// ICEData.cpp:1227
				int32_t j;

			}
			{
				// ICEData.cpp:1229
				int32_t j;

			}
		}
	}
	{
		// ICEData.cpp:1234
		int32_t liLoop;

	}
}

// ICEData.cpp:1432
void ICE::ICETake::NewEditBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:1434
		const float32_t initial_parameter;

		// ICEData.cpp:1435
		ICE::ICETakeData * lpTakeData;

	}
}

