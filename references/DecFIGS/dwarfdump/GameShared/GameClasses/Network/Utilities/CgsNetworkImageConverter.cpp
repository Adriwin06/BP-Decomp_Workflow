// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsNetworkImageConverter.cpp:34
	const uint64_t KU_MASK_OUT_LOWEST_COLOUR_BIT = [0, 0, 0, 0, 254, 254, 254, 254];

	// CgsNetworkImageConverter.cpp:35
	const uint64_t KU_MASK_OUT_2ND_LOWEST_COLOUR_BIT = [0, 0, 0, 0, 253, 253, 253, 252];

	// CgsNetworkImageConverter.cpp:36
	const uint64_t KU64_MULSCALE = 1;

	// CgsNetworkImageConverter.cpp:37
	const uint32_t KU_NO_ALPHA = 4278190080;

}

// CgsNetworkImageConverter.cpp:67
void CgsNetwork::NetworkImageConverter::SetupPerfmons() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkImageConverter.cpp:585
void CgsNetwork::NetworkImageConverter::Copy(const CgsNetwork::NetworkTexture *  lpSrcTexture, CgsNetwork::NetworkTexture *  lpDstTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsNetworkImageConverter.cpp:142
void CgsNetwork::NetworkImageConverter::ConvertAndResize(const CgsNetwork::NetworkTexture *  lpSrcTexture, CgsNetwork::NetworkTexture *  lpDstTexture, int32_t  liStartColumn, int32_t  liEndColumn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkImageConverter.cpp:161
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsNetworkImageConverter.cpp:508
void CgsNetwork::NetworkImageConverter::BilinearFilterA8R8G8B8Texture(const uint64_t *  lpSrcPixels, uint32_t *  lpDstPixels, int32_t  liSrcStride, int32_t  liSrcWidth, int32_t  liSrcHeight, int32_t  liDstWidth, int32_t  liDstHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkImageConverter.cpp:510
		int32_t liSrcRow;

		// CgsNetworkImageConverter.cpp:511
		int32_t liSrcColumn;

		// CgsNetworkImageConverter.cpp:512
		const uint64_t * lpu64SrcRowPointer1;

		// CgsNetworkImageConverter.cpp:513
		const uint64_t * lpu64SrcRowPointer2;

		// CgsNetworkImageConverter.cpp:514
		uint32_t * lpu32DstRowPointer;

		// CgsNetworkImageConverter.cpp:515
		uint64_t luIncrement;

	}
	{
		// CgsNetworkImageConverter.cpp:517
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsNetworkImageConverter.cpp:518
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsNetworkImageConverter.cpp:530
		uint64_t lu64Row1Pixels;

		// CgsNetworkImageConverter.cpp:531
		uint64_t lu64Row2Pixels;

		// CgsNetworkImageConverter.cpp:532
		uint64_t lu64RowInterp;

		// CgsNetworkImageConverter.cpp:533
		uint64_t lu64Pixel;

	}
}

// CgsNetworkImageConverter.cpp:636
void CgsNetwork::NetworkImageConverter::UnpackFromNetworkTexture(const CgsNetwork::NetworkTexture *  lpcSrcTexture, renderengine::Texture::Locked *  lpDstLocked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkImageConverter.cpp:638
		int32_t liRowIndex;

		// CgsNetworkImageConverter.cpp:639
		int32_t liSrcStride;

		// CgsNetworkImageConverter.cpp:640
		int32_t liDestStride;

		// CgsNetworkImageConverter.cpp:641
		int32_t liRowsToCopy;

		// CgsNetworkImageConverter.cpp:642
		int32_t liBytesToCopy;

		// CgsNetworkImageConverter.cpp:643
		const char * lpcSrcPointer;

		// CgsNetworkImageConverter.cpp:644
		char * lpcDstPointer;

	}
	rw::math::vpu::Min<std::int32_t>(/* parameters */);
	NetworkTexture::GetFormat(/* parameters */);
	{
		// CgsNetworkImageConverter.cpp:674
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		NetworkTexture::GetFormat(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	NetworkTexture::GetHeight(/* parameters */);
	rw::math::vpu::Min<std::int32_t>(/* parameters */);
	rw::math::vpu::Min<std::int32_t>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

// CgsNetworkImageConverter.cpp:611
void CgsNetwork::NetworkImageConverter::UnpackFromNetworkTexture(const CgsNetwork::NetworkTexture *  lpcSrcTexture, Texture2D *  lpDstTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkImageConverter.cpp:614
		renderengine::Texture::Locked lLocked;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	renderengine::Texture2D::Lock(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsNetworkImageConverter.cpp:423
void CgsNetwork::NetworkImageConverter::Resize32BitTexture(const CgsNetwork::NetworkTexture *  lpSrcTexture, CgsNetwork::NetworkTexture *  lpDstTexture, int32_t  liStartColumn, int32_t  liEndColumn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkImageConverter.cpp:427
		float32_t lfWidthRatio;

		// CgsNetworkImageConverter.cpp:428
		float32_t lfHeightRatio;

		// CgsNetworkImageConverter.cpp:429
		int32_t liColumnsFromEnd;

		// CgsNetworkImageConverter.cpp:430
		int32_t liSrcBytesPerPixel;

		// CgsNetworkImageConverter.cpp:431
		int32_t liDstBytesPerPixel;

		// CgsNetworkImageConverter.cpp:432
		int32_t liDstRow;

		// CgsNetworkImageConverter.cpp:433
		int32_t liDstPixel;

		// CgsNetworkImageConverter.cpp:434
		int32_t liSrcRow;

		// CgsNetworkImageConverter.cpp:435
		int32_t liSrcPixel;

		// CgsNetworkImageConverter.cpp:436
		int32_t liSrcPixelValue;

		// CgsNetworkImageConverter.cpp:437
		char * lpcSrcRowPointer;

		// CgsNetworkImageConverter.cpp:438
		char * lpcDstRowPointer;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	NetworkTexture::GetTexture(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	NetworkTexture::GetTexture(/* parameters */);
	NetworkTexture::GetTexture(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsNetworkImageConverter.cpp:232
void CgsNetwork::NetworkImageConverter::ConvertAndResizeX8R8G8B8ToA1R5G5B5(const CgsNetwork::NetworkTexture *  lpSrcTexture, CgsNetwork::NetworkTexture *  lpDstTexture, int32_t  liStartColumn, int32_t  liEndColumn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkImageConverter.cpp:236
		int32_t liDestWidth;

		// CgsNetworkImageConverter.cpp:237
		int32_t liDestHeight;

		// CgsNetworkImageConverter.cpp:238
		int32_t liSourceWidth;

		// CgsNetworkImageConverter.cpp:239
		int32_t liSourceHeight;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	NetworkTexture::GetTexture(/* parameters */);
	NetworkTexture::GetHeight(/* parameters */);
	NetworkTexture::GetHeight(/* parameters */);
	NetworkTexture::GetWidth(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	{
		// CgsNetworkImageConverter.cpp:373
		int32_t liColumnsFromEnd;

		// CgsNetworkImageConverter.cpp:375
		float32_t lfWidthRatio;

		// CgsNetworkImageConverter.cpp:376
		float32_t lfHeightRatio;

		// CgsNetworkImageConverter.cpp:378
		char * lpcSrcBuffer;

		// CgsNetworkImageConverter.cpp:379
		char * lpcDstBuffer;

		// CgsNetworkImageConverter.cpp:384
		int32_t liSrcBytesPerPixel;

		// CgsNetworkImageConverter.cpp:385
		int32_t liDstBytesPerPixel;

		// CgsNetworkImageConverter.cpp:387
		int32_t liDstRow;

		// CgsNetworkImageConverter.cpp:388
		int32_t liDstPixel;

		NetworkTexture::GetTexture(/* parameters */);
		NetworkTexture::GetTexture(/* parameters */);
	}
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// CgsNetworkImageConverter.cpp:391
		int32_t liSrcRow;

		// CgsNetworkImageConverter.cpp:393
		char * lpcSrcRowPointer;

		// CgsNetworkImageConverter.cpp:394
		char * lpcDstRowPointer;

		{
			// CgsNetworkImageConverter.cpp:398
			int32_t liSrcPixel;

			// CgsNetworkImageConverter.cpp:399
			int32_t liSourcePixel;

		}
	}
	{
		// CgsNetworkImageConverter.cpp:250
		int32_t liDestX;

		// CgsNetworkImageConverter.cpp:251
		int32_t liDestY;

		// CgsNetworkImageConverter.cpp:252
		uint32_t luSourceRowIncrement;

		// CgsNetworkImageConverter.cpp:253
		uint32_t luDestRowIncrement;

		// CgsNetworkImageConverter.cpp:254
		uint32_t[2] lauSourceX;

		// CgsNetworkImageConverter.cpp:255
		uint32_t[2] lauSourceY;

		// CgsNetworkImageConverter.cpp:256
		uint32_t[2] lauRatioX;

		// CgsNetworkImageConverter.cpp:257
		uint32_t[2] lauRatioY;

		// CgsNetworkImageConverter.cpp:258
		uint32_t[4] lauSourcePixel;

		// CgsNetworkImageConverter.cpp:259
		uint32_t[4] lauSourceR;

		// CgsNetworkImageConverter.cpp:260
		uint32_t[4] lauSourceG;

		// CgsNetworkImageConverter.cpp:261
		uint32_t[4] lauSourceB;

		// CgsNetworkImageConverter.cpp:262
		uint32_t luDestR;

		// CgsNetworkImageConverter.cpp:263
		uint32_t luDestG;

		// CgsNetworkImageConverter.cpp:264
		uint32_t luDestB;

		// CgsNetworkImageConverter.cpp:265
		uint16_t * lpu16Dest;

		// CgsNetworkImageConverter.cpp:266
		uint32_t * lpuSource;

		// CgsNetworkImageConverter.cpp:267
		uint32_t luIncrementX;

		// CgsNetworkImageConverter.cpp:268
		uint32_t luIncrementY;

		// CgsNetworkImageConverter.cpp:269
		uint32_t luRatio00;

		// CgsNetworkImageConverter.cpp:270
		uint32_t luRatio01;

		// CgsNetworkImageConverter.cpp:271
		uint32_t luRatio10;

		// CgsNetworkImageConverter.cpp:272
		uint32_t luRatio11;

		// CgsNetworkImageConverter.cpp:273
		uint32_t luSourceYFraction;

		// CgsNetworkImageConverter.cpp:274
		uint32_t luSourceXFraction;

		// CgsNetworkImageConverter.cpp:275
		uint32_t luTest;

		// CgsNetworkImageConverter.cpp:276
		int32_t liPixelOffsetY;

		// CgsNetworkImageConverter.cpp:277
		int32_t liPixelOffsetX;

		rw::core::stdc::Min(/* parameters */);
		rw::core::stdc::Min(/* parameters */);
		rw::core::stdc::Min(/* parameters */);
		rw::core::stdc::Min(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsNetworkImageConverter.cpp:177
void CgsNetwork::NetworkImageConverter::ConvertX8R8G8B8ToA1R5G5B5(const CgsNetwork::NetworkTexture *  lpSrcTexture, CgsNetwork::NetworkTexture *  lpDstTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkImageConverter.cpp:181
		char * lpcSrcBuffer;

		// CgsNetworkImageConverter.cpp:182
		char * lpcDstBuffer;

		// CgsNetworkImageConverter.cpp:184
		int32_t liSrcStride;

		// CgsNetworkImageConverter.cpp:185
		int32_t liDstStride;

		// CgsNetworkImageConverter.cpp:187
		int32_t liRowIndex;

		// CgsNetworkImageConverter.cpp:188
		int32_t liPixelIndex;

		// CgsNetworkImageConverter.cpp:189
		int32_t liSourcePixel;

		// CgsNetworkImageConverter.cpp:190
		int32_t * lpiSrcPixel;

		// CgsNetworkImageConverter.cpp:191
		int16_t * lpi16DstPixel;

		// CgsNetworkImageConverter.cpp:192
		char * lpcSrcRow;

		// CgsNetworkImageConverter.cpp:193
		char * lpcDstRow;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	NetworkTexture::GetTexture(/* parameters */);
	NetworkTexture::GetTexture(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsNetworkImageConverter.cpp:101
void CgsNetwork::NetworkImageConverter::Convert(const CgsNetwork::NetworkTexture *  lpSrcTexture, CgsNetwork::NetworkTexture *  lpDstTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	NetworkTexture::GetFormat(/* parameters */);
	{
		// CgsNetworkImageConverter.cpp:123
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsNetworkImageConverter.cpp:40
// CgsNetworkImageConverter.cpp:41
// CgsNetworkImageConverter.cpp:42
// CgsNetworkImageConverter.cpp:43
// CgsNetworkImageConverter.cpp:44
// CgsNetworkImageConverter.cpp:45
// CgsNetworkImageConverter.cpp:46
// CgsNetworkImageConverter.cpp:47
