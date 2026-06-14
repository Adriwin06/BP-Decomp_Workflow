struct _CGprogram;

struct _CGparameter;

extern void LocklessQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::uint64_t>::AtomicInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LocklessQueue<CgsContainers::LocklessQueueUnitTestEntry>::Construct(LocklessQueueUnitTestEntry *  lpBuffer, uint16_t  luBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::uint64_t>::SetValue(uint64_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eathread_atomic_powerpc.h:458
		uint64_t nOriginalValue;

	}
}

void CgsContainers::LocklessQueueUnitTest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLocklessQueue.cpp:42
		LocklessQueueUnitTestEntry[10] lEntries;

		// CgsLocklessQueue.cpp:43
		LocklessQueue<CgsContainers::LocklessQueueUnitTestEntry> lQueue;

		LocklessQueue<CgsContainers::LocklessQueueUnitTestEntry>::Construct(/* parameters */);
	}
}

void CgsContainers::ReadOnlyObjectCacheUnitTest::UnitTest_InitSourceData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsReadOnlyObjectCache.cpp:56
		int32_t liIndex;

	}
}

void rw::EndianSwap(const int64_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<char>(const char *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const int32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsContainers::DictEntry>(const DictEntry *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::DictionaryBase::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::ResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::~BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::~BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::DictionaryResourceTypeBase::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsDictionaryResourceType.cpp:50
	ResourceDescriptor & lDescriptor;

	{
		// CgsDictionaryResourceType.cpp:49
		const DictionaryBase * lpSrcDictionary;

		// CgsDictionaryResourceType.cpp:50
		ResourceDescriptor lDescriptor;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	}
}

void CgsContainers::BitArray<1024u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<1024u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<1024>::Iterator::operator++() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:250
		uint64_t luTempSourceMask;

		// CgsFastBitArray.h:251
		uint64_t luStartMaskIndex;

		// CgsFastBitArray.h:252
		uint64_t luStartMaskMod;

		// CgsFastBitArray.h:253
		uint64_t luMaskIndex;

		// CgsFastBitArray.h:254
		const uint64_t * lpxSourceMasks;

		// CgsFastBitArray.h:256
		int32_t liCurrIndex;

		// CgsFastBitArray.h:257
		uint64_t lxCurrMask;

	}
	{
		// CgsFastBitArray.h:279
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:311
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:247
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:281
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:248
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::FastBitArray<1024>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void CgsContainers::FastBitArray<1024>::SetBit(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:430
		int32_t liMaskIndex;

		// CgsFastBitArray.h:431
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:428
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<1024u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::FastBitArray<1024>::Iterator::Iterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<1024>::Begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<1024>::Iterator::Iterator(const uint64_t *  lpxSourceMasks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<1024>::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<1024>::Iterator::operator!=(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<1024u>::GetFirstNonZeroBit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:543
		uint32_t liIndex;

		{
			// CgsBitArray.h:553
			int32_t liFirstOneBit;

			{
				// CgsBitArray.h:554
				CgsDev::StrStream lStrStream;

			}
		}
		{
			// CgsBitArray.h:559
			int32_t liFirstOneBit;

		}
	}
}

void CgsContainers::BitArray<1024u>::GetZeroBitInInt(int64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:796
		uint32_t liLeadingZeros;

	}
}

void CgsContainers::_CountLeadingZeros64(uint64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:169
		uint64_t luRes;

	}
}

void CgsContainers::BitArray<1024u>::GetNextNonZeroBit(uint32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:642
		uint32_t liEndOfWord;

		// CgsBitArray.h:651
		uint32_t luWordIndex;

	}
	{
		// CgsBitArray.h:663
		uint32_t liEndOfWord;

		// CgsBitArray.h:683
		uint32_t luWordIndex;

	}
}

void CgsContainers::BitArray<1024u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::UnitTestFastBitArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.cpp:52
		int32_t liIncrement;

		{
			// CgsFastBitArray.cpp:58
			char[1024] lacValues;

			// CgsFastBitArray.cpp:62
			int32_t liIndex;

			// CgsFastBitArray.cpp:78
			int32_t liFastSetCount;

			// CgsFastBitArray.cpp:79
			int32_t liSlowSetCount;

			// CgsFastBitArray.cpp:80
			int32_t liIteration;

			// CgsFastBitArray.cpp:92
			FastBitArray<1024> lTestArray;

			// CgsFastBitArray.cpp:93
			BitArray<1024u> lSlowTestArray;

			FastBitArray<1024>::UnSetAll(/* parameters */);
			BitArray<1024u>::UnSetAll(/* parameters */);
			BitArray<1024u>::SetBit(/* parameters */);
			FastBitArray<1024>::SetBit(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
			{
				// CgsFastBitArray.cpp:116
				Iterator lIterator;

				FastBitArray<1024>::Begin(/* parameters */);
				FastBitArray<1024>::Iterator::Iterator(/* parameters */);
			}
			{
				// CgsFastBitArray.cpp:137
				int32_t liUnSetBit;

				BitArray<1024u>::GetFirstNonZeroBit(/* parameters */);
			}
		}
	}
	BitArray<1024u>::GetNextNonZeroBit(/* parameters */);
	BitArray<1024u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::datacontainer::DEFAULTBATCHSIZE = -2147483648;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

rw::math::fpu::SMALL_FLOAT = [55, 128, 0, 0];

rw::math::fpu::DEGREES_TO_RADIANS = [60, 142, 250, 53];

rw::math::fpu::RADIANS_TO_DEGREES = [66, 101, 46, 225];

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::PI = [64, 73, 15, 219];

rw::math::fpu::TWO_PI = [64, 201, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::MATRIX_MIN_SLERP_ANGLE = [61, 14, 250, 53];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

rw::math::fpu::MINIMUM_RECIPROCAL = [0, 32, 0, 0];

rw::math::fpu::EPSILON = [52, 0, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

