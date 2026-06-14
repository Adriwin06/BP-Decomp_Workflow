// CgsPolygonSoupListSpatialMap.cpp:54
void CgsGeometric::PolygonSoupListSpatialMap::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPolygonSoupListSpatialMap.cpp:72
void CgsGeometric::PolygonSoupListSpatialMap::Prepare(ResourceHandle *  lpaPolySoupListHandles, int32_t  liNumSoupLists) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPolygonSoupListSpatialMap.cpp:89
void CgsGeometric::PolygonSoupListSpatialMap::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPolygonSoupListSpatialMap.cpp:99
		int32_t liIndex;

	}
}

// CgsPolygonSoupListSpatialMap.cpp:149
void CgsGeometric::PolygonSoupListSpatialMap::AddList(const CgsGeometric::PolygonSoupList *  lpPolyList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPolygonSoupListSpatialMap.cpp:121
void CgsGeometric::PolygonSoupListSpatialMap::GetPolySoupList(int32_t  liPolySoupListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPolygonSoupListSpatialMap.cpp:127
		const const ResourceHandle & lPolySoupListHandle;

	}
}

// CgsPolygonSoupListSpatialMap.cpp:167
void CgsGeometric::PolygonSoupListSpatialMap::BuildSpacialPartition(LinearMalloc *  lpAllocator, int32_t  liNumLevels, int32_t  liQueryBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPolygonSoupListSpatialMap.cpp:177
		int32_t liSoupList;

		// CgsPolygonSoupListSpatialMap.cpp:178
		int32_t liTotalSoups;

		// CgsPolygonSoupListSpatialMap.cpp:179
		int32_t liLevelSize;

		// CgsPolygonSoupListSpatialMap.cpp:180
		int32_t liLevelIndex;

		// CgsPolygonSoupListSpatialMap.cpp:181
		int32_t liSoupIndex;

		// CgsPolygonSoupListSpatialMap.cpp:182
		int32_t liLevelWidth;

		// CgsPolygonSoupListSpatialMap.cpp:183
		PolygonSoupSpacialNode * lpNodes;

		// CgsPolygonSoupListSpatialMap.cpp:184
		int32_t liNode;

		// CgsPolygonSoupListSpatialMap.cpp:186
		PolygonSoupLeafNode * lpLeafNodes;

		// CgsPolygonSoupListSpatialMap.cpp:188
		Vector3 lMin;

		// CgsPolygonSoupListSpatialMap.cpp:188
		Vector3 lMax;

		// CgsPolygonSoupListSpatialMap.cpp:240
		Vector3 lBoxSize;

	}
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	MallocArray<CgsGeometric::PolygonSoupLeafNode>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	MallocArray<std::uint16_t>(/* parameters */);
	{
		// CgsPolygonSoupListSpatialMap.cpp:364
		Vector3 lBoxMin;

		// CgsPolygonSoupListSpatialMap.cpp:365
		Vector3 lBoxMax;

		// CgsPolygonSoupListSpatialMap.cpp:367
		uint16_t luSubNode;

		// CgsPolygonSoupListSpatialMap.cpp:368
		PolygonSoupSpacialNode * lpSubNodes;

	}
	AxisAlignedBox::GetCentrePos(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	AxisAlignedBox::GetCentrePos(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	MallocArray<std::uint16_t>(/* parameters */);
	MallocArray<std::uint16_t>(/* parameters */);
	{
		// CgsPolygonSoupListSpatialMap.cpp:221
		const CgsGeometric::PolygonSoupList * lpList;

		PolygonSoupList::GetNumPolygonSoups(/* parameters */);
		{
			// CgsPolygonSoupListSpatialMap.cpp:227
			const PolygonSoupLeafNode & lNode;

			PolygonSoupList::GetAxisAlignedBox(/* parameters */);
			PolygonSoupList::GetPolygonSoup(/* parameters */);
			{
			}
		}
		rw::math::vpu::Min(/* parameters */);
		rw::math::vpu::Max(/* parameters */);
		PolygonSoupList::Get4Boxes(/* parameters */);
	}
	{
		// CgsPolygonSoupListSpatialMap.cpp:249
		PolygonSoupSpacialNode * lpNode;

		// CgsPolygonSoupListSpatialMap.cpp:252
		int32_t liX;

		// CgsPolygonSoupListSpatialMap.cpp:252
		int32_t liZ;

		{
			// CgsPolygonSoupListSpatialMap.cpp:257
			Vector3 lBoxMin;

			// CgsPolygonSoupListSpatialMap.cpp:258
			Vector3 lBoxMax;

			// CgsPolygonSoupListSpatialMap.cpp:263
			int32_t liSubLevelWidth;

			rw::math::vpu::operator+<VectorAxisZ>(/* parameters */);
		}
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
		}
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
		MallocArray<std::uint16_t>(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::operator+(/* parameters */);
		{
			// CgsPolygonSoupListSpatialMap.cpp:268
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsPolygonSoupListSpatialMap.cpp:269
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsPolygonSoupListSpatialMap.cpp:270
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsPolygonSoupListSpatialMap.cpp:271
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsPolygonSoupListSpatialMap.cpp:293
		int32_t liX;

		// CgsPolygonSoupListSpatialMap.cpp:294
		int32_t liZ;

		rw::math::vpu::operator/<VectorAxisZ>(/* parameters */);
		{
			// CgsPolygonSoupListSpatialMap.cpp:296
			CgsDev::StrStream lStrStream;

			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsPolygonSoupListSpatialMap.cpp:297
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsPolygonSoupListSpatialMap.cpp:298
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	AxisAlignedBox::GetCentrePos(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsPolygonSoupListSpatialMap.cpp:342
		Vector3 lBoxMin;

		// CgsPolygonSoupListSpatialMap.cpp:343
		Vector3 lBoxMax;

		// CgsPolygonSoupListSpatialMap.cpp:345
		uint16_t luSubNode;

	}
	AxisAlignedBox::GetCentrePos(/* parameters */);
	AxisAlignedBox::GetCentrePos(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsPolygonSoupListSpatialMap.cpp:320
		int32_t liX;

		// CgsPolygonSoupListSpatialMap.cpp:321
		int32_t liZ;

		rw::math::vpu::operator/<VectorAxisZ>(/* parameters */);
		{
			// CgsPolygonSoupListSpatialMap.cpp:323
			CgsDev::StrStream lStrStream;

			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsPolygonSoupListSpatialMap.cpp:324
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsPolygonSoupListSpatialMap.cpp:325
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	AxisAlignedBox::GetCentrePos(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsPolygonSoupListSpatialMap.cpp:173
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	MallocArray<CgsGeometric::PolygonSoupSpacialNode>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsPolygonSoupListSpatialMap.cpp:206
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPolygonSoupListSpatialMap.cpp:311
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPolygonSoupListSpatialMap.cpp:384
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPolygonSoupListSpatialMap.cpp:382
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPolygonSoupListSpatialMap.cpp:213
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPolygonSoupListSpatialMap.cpp:172
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsPolygonSoupListSpatialMap.cpp:406
void CgsGeometric::PolygonSoupListSpatialMap::RunQuery(const AxisAlignedBoxArg  lBox) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPolygonSoupListSpatialMap.cpp:413
		uint16_t luNumSrcNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:414
		uint16_t luNumDestNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:415
		uint16_t * lpuSrcNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:416
		uint16_t * lpuDestNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:418
		int32_t liLevel;

	}
	{
		// CgsPolygonSoupListSpatialMap.cpp:428
		PolygonSoupSpacialNode * lpNodes;

		// CgsPolygonSoupListSpatialMap.cpp:434
		uint16_t luNodeIndexEntry;

		// CgsPolygonSoupListSpatialMap.cpp:456
		uint16_t * lpTemp;

		{
			// CgsPolygonSoupListSpatialMap.cpp:438
			PolygonSoupSpacialNode * lpNode;

			CgsGeometric(/* parameters */);
			rw::math::vpl::VecPermuteSingleImm<4131>(/* parameters */);
			rw::math::vpl::VecPermuteSingleImm<8211>(/* parameters */);
			rw::math::vpl::VecAnd(/* parameters */);
			rw::math::vpl::VecAnd(/* parameters */);
			rw::math::vpl::VecAnd(/* parameters */);
			rw::math::vpl::VecSplat_Word<0>(/* parameters */);
			rw::math::vpu::MaskScalar::GetBool(/* parameters */);
			{
				// CgsPolygonSoupListSpatialMap.cpp:444
				uint16_t luNodeToAdd;

			}
			{
				// CgsPolygonSoupListSpatialMap.cpp:447
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
	}
}

// CgsPolygonSoupListSpatialMap.cpp:551
void CgsGeometric::PolygonSoupListSpatialMap::RunJobQuery(const AxisAlignedBoxArg  lBox, PolygonSoupJobQueryParams *  lpParams, uint16_t **  lppuOutResultBuffer, int32_t *  lpiOutNumResults, PolygonSoupSpacialNodeCache *  lpSpacialNodeCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPolygonSoupListSpatialMap.cpp:559
		uint16_t luNumSrcNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:560
		uint16_t luNumDestNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:561
		uint16_t * lpuSrcNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:562
		uint16_t * lpuDestNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:564
		int32_t liLevel;

	}
	{
		// CgsPolygonSoupListSpatialMap.cpp:578
		PolygonSoupSpacialNode * lpNodes;

		// CgsPolygonSoupListSpatialMap.cpp:590
		uint16_t luNodeIndexEntry;

		// CgsPolygonSoupListSpatialMap.cpp:626
		uint16_t * lpTemp;

		CgsContainers::ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>::Construct(/* parameters */);
		{
			// CgsPolygonSoupListSpatialMap.cpp:594
			const PolygonSoupSpacialNode * lpNode;

			CgsContainers::ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>::Fetch(/* parameters */);
			CgsGeometric(/* parameters */);
			rw::math::vpl::VecPermuteSingleImm<4131>(/* parameters */);
			rw::math::vpl::VecPermuteSingleImm<8211>(/* parameters */);
			rw::math::vpl::VecAnd(/* parameters */);
			rw::math::vpl::VecAnd(/* parameters */);
			rw::math::vpl::VecAnd(/* parameters */);
			rw::math::vpl::VecSplat_Word<0>(/* parameters */);
			rw::math::vpu::MaskScalar::GetBool(/* parameters */);
			{
				// CgsPolygonSoupListSpatialMap.cpp:603
				const uint16_t * lpNodeIndices;

				// CgsPolygonSoupListSpatialMap.cpp:611
				uint16_t luNodeToAdd;

				{
					// CgsPolygonSoupListSpatialMap.cpp:614
					CgsDev::StrStream lStrStream;

					CgsDev::StrStream::StrStream(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
				}
			}
		}
	}
}

// CgsPolygonSoupListSpatialMap.cpp:479
void CgsGeometric::PolygonSoupListSpatialMap::RunQuery(const LineArg  lLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPolygonSoupListSpatialMap.cpp:486
		uint16_t luNumSrcNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:487
		uint16_t luNumDestNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:488
		uint16_t * lpuSrcNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:489
		uint16_t * lpuDestNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:491
		int32_t liLevel;

		// CgsPolygonSoupListSpatialMap.cpp:493
		Vector3 lLineStart;

		// CgsPolygonSoupListSpatialMap.cpp:494
		Vector3 lLineEnd;

	}
	{
		// CgsPolygonSoupListSpatialMap.cpp:504
		PolygonSoupSpacialNode * lpNodes;

		// CgsPolygonSoupListSpatialMap.cpp:510
		uint16_t luNodeIndexEntry;

		// CgsPolygonSoupListSpatialMap.cpp:532
		uint16_t * lpTemp;

		{
			// CgsPolygonSoupListSpatialMap.cpp:514
			PolygonSoupSpacialNode * lpNode;

			TestLineStartEndAxisAlignedBox(/* parameters */);
			rw::math::vpl::VecRecipEst(/* parameters */);
			rw::math::vpl::VecNegMultSub(/* parameters */);
			rw::math::vpl::VecMultAdd(/* parameters */);
			CgsNumeric::NewtonRaphsonReciprocalIteratation(/* parameters */);
			CgsNumeric::NewtonRaphsonReciprocalIteratation(/* parameters */);
			rw::math::vpu::MaskScalar::GetBool(/* parameters */);
			{
				// CgsPolygonSoupListSpatialMap.cpp:520
				uint16_t luNodeToAdd;

			}
			{
				// CgsPolygonSoupListSpatialMap.cpp:523
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
	}
}

// CgsPolygonSoupListSpatialMap.cpp:642
void CgsGeometric::PolygonSoupListSpatialMap::RunJobQuery(const LineArg  lLine, PolygonSoupJobQueryParams *  lpParams, uint16_t **  lppuOutResultBuffer, int32_t *  lpiOutNumResults, PolygonSoupSpacialNodeCache *  lpSpacialNodeCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPolygonSoupListSpatialMap.cpp:650
		uint16_t luNumSrcNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:651
		uint16_t luNumDestNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:652
		uint16_t * lpuSrcNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:653
		uint16_t * lpuDestNodeIndices;

		// CgsPolygonSoupListSpatialMap.cpp:655
		int32_t liLevel;

		// CgsPolygonSoupListSpatialMap.cpp:662
		Vector3 lLineStart;

		// CgsPolygonSoupListSpatialMap.cpp:663
		Vector3 lLineEnd;

	}
	{
		// CgsPolygonSoupListSpatialMap.cpp:673
		PolygonSoupSpacialNode * lpNodes;

		// CgsPolygonSoupListSpatialMap.cpp:685
		uint16_t luNodeIndexEntry;

		// CgsPolygonSoupListSpatialMap.cpp:721
		uint16_t * lpTemp;

		CgsContainers::ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>::Construct(/* parameters */);
		{
			// CgsPolygonSoupListSpatialMap.cpp:689
			const PolygonSoupSpacialNode * lpNode;

			CgsContainers::ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>::Fetch(/* parameters */);
			TestLineStartEndAxisAlignedBox(/* parameters */);
			rw::math::vpu::MaskScalar::GetBool(/* parameters */);
			{
				// CgsPolygonSoupListSpatialMap.cpp:698
				const uint16_t * lpNodeIndices;

				// CgsPolygonSoupListSpatialMap.cpp:706
				uint16_t luNodeToAdd;

				{
					// CgsPolygonSoupListSpatialMap.cpp:709
					CgsDev::StrStream lStrStream;

					CgsDev::StrStream::StrStream(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
				}
			}
		}
	}
}

