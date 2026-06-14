// CgsGuiShared.h:45
namespace BrnGui {
	// BrnBoostMessageManager.cpp:85
	extern BrnGui::BoostMessageManager::MessageType[8] KA_VEHICLE_SCORE_CATEGORY_TO_MESSAGE_TYPE;

	// BrnBoostMessageManager.cpp:97
	const float32_t KF_SHOWTIME_MESSAGE_TIME_TO_LIVE;

}

// BrnBoostMessageManager.cpp:543
void BrnGui::BoostMessageManager::HandleOnInProgressStunt(const GuiInProgressStuntEvent *  lpGuiInProgressStuntEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBoostMessageManager.cpp:569
void BrnGui::BoostMessageManager::HandleOnCompletedStunt(const GuiCompletedStuntEvent *  lpGuiCompletedStuntEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBoostMessageManager.cpp:1075
void BrnGui::BoostMessageManager::UpdateBoosting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBoostMessageManager.cpp:928
void BrnGui::BoostMessageManager::UpdateCrashEscape() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBoostMessageManager.cpp:214
void BrnGui::BoostMessageManager::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:218
		char[128] lacText;

		// BrnBoostMessageManager.cpp:219
		int32_t liIndex;

		BrnFlaptComponent::Prepare(/* parameters */);
	}
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
	CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBoostMessageManager.cpp:241
void BrnGui::BoostMessageManager::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  liEventType, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:425
		const GuiHUDMessageCrushCombo * lpCrushEvent;

	}
	{
		// BrnBoostMessageManager.cpp:398
		const GuiNearMissEvent * lpNearMissEvent;

	}
	{
		// BrnBoostMessageManager.cpp:272
		const GuiDriftingEvent * lpDriftEvent;

	}
	{
		// BrnBoostMessageManager.cpp:382
		const GuiTailgatingEvent * lpTailgatingEvent;

	}
	{
		// BrnBoostMessageManager.cpp:319
		const GuiImpactEvent * lpGuiImpactEvent;

	}
	{
		// BrnBoostMessageManager.cpp:365
		const GuiCompletedStuntEvent * lpGuiCompletedStuntEvent;

	}
	{
		// BrnBoostMessageManager.cpp:248
		const GuiStuntEvent * lpStuntEvent;

	}
	{
		// BrnBoostMessageManager.cpp:243
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBoostMessageManager.cpp:256
		const GuiSignatureStuntEvent * lpStuntEvent;

		{
			// BrnBoostMessageManager.cpp:257
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnBoostMessageManager.cpp:438
		const GuiEventBoostInfo * lpBoostInfo;

	}
	{
		// BrnBoostMessageManager.cpp:356
		const GuiInProgressStuntEvent * lpGuiInProgressStuntEvent;

	}
	{
		// BrnBoostMessageManager.cpp:281
		const GuiSpinningEvent * lpSpinEvent;

	}
	{
		// BrnBoostMessageManager.cpp:291
		const GuiEventBoostBarStuntInfo * lpGuiEventBoostBarStuntInfo;

	}
	{
		// BrnBoostMessageManager.cpp:374
		const GuiInAirEvent * lpAirEvent;

	}
	{
		// BrnBoostMessageManager.cpp:265
		const GuiOffenceShortcutEvent * lpShortcutEvent;

	}
	{
		// BrnBoostMessageManager.cpp:417
		const GuiHitVehicleEvent * lpHitEvent;

	}
	{
		// BrnBoostMessageManager.cpp:334
		const GuiSoftTakedownEvent * lpGuiSoftTakedownEvent;

	}
	{
		// BrnBoostMessageManager.cpp:348
		const GuiOncomingEvent * lpOncomingEvent;

	}
	{
		// BrnBoostMessageManager.cpp:390
		const GuiTrafficCheckEvent * lpCheckingEvent;

	}
}

// BrnBoostMessageManager.cpp:1778
void BrnGui::BoostMessageManager::FindMessageSlot(BrnGui::BoostMessageManager::MessageType  leMessageType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:1782
		BoostMessageSlot * lpMessageSlot;

		// BrnBoostMessageManager.cpp:1783
		uint32_t luIndex;

	}
	{
		// BrnBoostMessageManager.cpp:1780
		CgsDev::StrStream lStrStream;

	}
	CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
	CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
	CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnBoostMessageManager.cpp:1812
void BrnGui::BoostMessageManager::GetFreeSlot() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:1814
		BoostMessageSlot * lpMessageSlot;

		// BrnBoostMessageManager.cpp:1815
		uint32_t luIndex;

		CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
	}
	CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
}

// BrnBoostMessageManager.cpp:1838
void BrnGui::BoostMessageManager::GetNumActiveSlots() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:1840
		int32_t liActiveSlotCount;

		// BrnBoostMessageManager.cpp:1841
		uint32_t luIndex;

		CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBoostMessageManager.cpp:117
void BrnGui::BoostMessageManager::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:126
		char[64] lacText;

	}
	BrnFlaptComponent::Construct(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::Construct(/* parameters */);
	{
		// BrnBoostMessageManager.cpp:127
		int32_t liIndex;

		{
			// BrnBoostMessageManager.cpp:129
			BoostMessageSlot lNewMsgSlot;

			CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::Append(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBoostMessageManager.cpp:119
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBoostMessageManager.cpp:120
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBoostMessageManager.cpp:472
void BrnGui::BoostMessageManager::AddMessage(BrnGui::BoostMessageManager::MessageType  leMessageType, const char *  lpMessageText, float32_t  lfTimeToLive, int32_t  liMessageParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:474
		BoostMessageSlot * lpMessageSlot;

		// BrnBoostMessageManager.cpp:475
		bool lbResult;

		{
			// BrnBoostMessageManager.cpp:484
			uint32_t luIndex;

			// BrnBoostMessageManager.cpp:485
			bool lbCanShuffle;

			CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
		}
		CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
		CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
		CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
		CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBoostMessageManager.cpp:1716
void BrnGui::BoostMessageManager::UpdateShowtime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:1718
		char[256] lacText;

	}
	{
		// BrnBoostMessageManager.cpp:1725
		BrnGui::BoostMessageManager::MessageType leMessageType;

		CgsGui::StateInterface::GetLanguageManager(/* parameters */);
		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	}
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
}

// BrnBoostMessageManager.cpp:1658
void BrnGui::BoostMessageManager::UpdateNearMiss() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:1660
		const float32_t lfNearMissMessageTimeToLive;

		// BrnBoostMessageManager.cpp:1661
		const float32_t lfCrashEscapeMessageTimeToLive;

		// BrnBoostMessageManager.cpp:1662
		const float32_t lfExtraNearMissMessageTimeToLive;

	}
	{
		// BrnBoostMessageManager.cpp:1666
		BoostMessageSlot * lpSlot;

		{
			// BrnBoostMessageManager.cpp:1673
			char[128] lacText;

		}
	}
	{
		// BrnBoostMessageManager.cpp:1699
		BoostMessageSlot * lpSlot;

	}
}

// BrnBoostMessageManager.cpp:1611
void BrnGui::BoostMessageManager::UpdateChecking() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:1613
		const float32_t lfTrafficCheckMessageTimeToLive;

		// BrnBoostMessageManager.cpp:1614
		const float32_t lfExtraTrafficCheckMessageTimeToLive;

		{
			// BrnBoostMessageManager.cpp:1618
			BoostMessageSlot * lpSlot;

		}
	}
	{
		// BrnBoostMessageManager.cpp:1624
		char[128] lacText;

	}
}

// BrnBoostMessageManager.cpp:1456
void BrnGui::BoostMessageManager::UpdateStuntsJumpsAndSmashes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:1458
		float32_t lfTimeForStuntMessage;

	}
	{
		// BrnBoostMessageManager.cpp:1462
		CgsLanguage::LanguageManager * lpLanguageManager;

		// BrnBoostMessageManager.cpp:1464
		char[32] lacJumpCurrentValueText;

		// BrnBoostMessageManager.cpp:1468
		char[32] lacJumpTotalValueText;

		// BrnBoostMessageManager.cpp:1472
		char[128] lacText;

		// BrnBoostMessageManager.cpp:1486
		BoostMessageSlot * lpMessage;

		CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	}
	{
		// BrnBoostMessageManager.cpp:1509
		CgsLanguage::LanguageManager * lpLanguageManager;

		// BrnBoostMessageManager.cpp:1511
		char[32] lacSmashCurrentValueText;

		// BrnBoostMessageManager.cpp:1515
		char[32] lacSmashTotalValueText;

		// BrnBoostMessageManager.cpp:1519
		char[128] lacText;

		// BrnBoostMessageManager.cpp:1533
		BoostMessageSlot * lpMessage;

		CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	}
	{
		// BrnBoostMessageManager.cpp:1557
		CgsLanguage::LanguageManager * lpLanguageManager;

		// BrnBoostMessageManager.cpp:1559
		char[32] lacBillboardCurrentValueText;

		// BrnBoostMessageManager.cpp:1563
		char[32] lacBillboardTotalValueText;

		// BrnBoostMessageManager.cpp:1567
		char[128] lacText;

		// BrnBoostMessageManager.cpp:1581
		BoostMessageSlot * lpMessage;

		CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	}
}

// BrnBoostMessageManager.cpp:1380
void BrnGui::BoostMessageManager::UpdateTailgating() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:1382
		const float32_t lfTailgatingMessageTimeToLive;

		// BrnBoostMessageManager.cpp:1383
		const float32_t lfMinTailgatingAmountToYdsDisplay;

		// BrnBoostMessageManager.cpp:1384
		const float32_t lfExtraTailgatingMessageTimeToLive;

		// BrnBoostMessageManager.cpp:1385
		const char * lpMessageText;

	}
	{
		// BrnBoostMessageManager.cpp:1390
		BoostMessageSlot * lpTailSlot;

		{
			// BrnBoostMessageManager.cpp:1400
			CgsLanguage::LanguageManager * lpLanguageManager;

			// BrnBoostMessageManager.cpp:1402
			char[32] lacTailgateValueText;

			// BrnBoostMessageManager.cpp:1406
			char[256] lacText;

			CgsGui::StateInterface::GetLanguageManager(/* parameters */);
		}
	}
}

// BrnBoostMessageManager.cpp:1326
void BrnGui::BoostMessageManager::UpdateSpin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:1328
		float32_t lfAirSpinTimeToLive;

		// BrnBoostMessageManager.cpp:1329
		float32_t lfExtraAirSpinTimeToLive;

		// BrnBoostMessageManager.cpp:1330
		const char * lpMessageText;

		rw::math::fpu::IsZero(/* parameters */);
	}
	{
		// BrnBoostMessageManager.cpp:1335
		BoostMessageSlot * lpSpinSlot;

	}
}

// BrnBoostMessageManager.cpp:1247
void BrnGui::BoostMessageManager::UpdateDrift() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:1249
		const float32_t lfDriftMessageTimeToLive;

		// BrnBoostMessageManager.cpp:1250
		const float32_t lfMinDriftAmountToYdsDisplay;

		// BrnBoostMessageManager.cpp:1251
		const float32_t lfExtraDriftMessageTimeToLive;

		// BrnBoostMessageManager.cpp:1252
		const char * lpMessageText;

	}
	{
		// BrnBoostMessageManager.cpp:1257
		BoostMessageSlot * lpDriftSlot;

		{
			// BrnBoostMessageManager.cpp:1267
			CgsLanguage::LanguageManager * lpLanguageManager;

			// BrnBoostMessageManager.cpp:1269
			char[32] lacDriftvalueText;

			// BrnBoostMessageManager.cpp:1273
			char[256] lacText;

			CgsGui::StateInterface::GetLanguageManager(/* parameters */);
		}
	}
}

// BrnBoostMessageManager.cpp:1170
void BrnGui::BoostMessageManager::UpdateOncoming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:1172
		const float32_t lfOncomingMessageTimeToLive;

		// BrnBoostMessageManager.cpp:1173
		const float32_t lfMinOncomingAmountToYdsDisplay;

		// BrnBoostMessageManager.cpp:1174
		const float32_t lfExtraOncomingMessageTimeToLive;

		// BrnBoostMessageManager.cpp:1175
		const char * lpMessageText;

	}
	{
		// BrnBoostMessageManager.cpp:1180
		BoostMessageSlot * lpOncomingSlot;

		{
			// BrnBoostMessageManager.cpp:1190
			CgsLanguage::LanguageManager * lpLanguageManager;

			// BrnBoostMessageManager.cpp:1192
			char[32] lacOncomingValueText;

			// BrnBoostMessageManager.cpp:1196
			char[256] lacText;

			CgsGui::StateInterface::GetLanguageManager(/* parameters */);
		}
	}
}

// BrnBoostMessageManager.cpp:1045
void BrnGui::BoostMessageManager::UpdateShortcuts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:1047
		const float32_t lfDefaultShortcutTimeToLive;

		{
			// BrnBoostMessageManager.cpp:1050
			BoostMessageSlot * lpMessage;

		}
	}
}

// BrnBoostMessageManager.cpp:1018
void BrnGui::BoostMessageManager::UpdateSignatureStunts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:1020
		const float32_t lfDefaultSignatureStuntTime;

		{
			// BrnBoostMessageManager.cpp:1024
			char[128] lacText;

			// BrnBoostMessageManager.cpp:1025
			char[13] lacCgsString;

		}
	}
}

// BrnBoostMessageManager.cpp:972
void BrnGui::BoostMessageManager::UpdateStunts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:974
		const float32_t lfDefaultStuntTimeToLive;

		// BrnBoostMessageManager.cpp:975
		const float32_t lfExtraStuntMessageTimeToLive;

		{
			// BrnBoostMessageManager.cpp:979
			BoostMessageSlot * lpStuntMessage;

		}
	}
	{
		// BrnBoostMessageManager.cpp:985
		char[128] lacText;

	}
}

// BrnBoostMessageManager.cpp:940
void BrnGui::BoostMessageManager::UpdateBarrelRolls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:942
		float32_t lfBarrelRollMessageTimeToLive;

	}
	{
		// BrnBoostMessageManager.cpp:948
		char[128] lacText;

	}
}

// BrnBoostMessageManager.cpp:811
void BrnGui::BoostMessageManager::UpdateVehicleImpacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:813
		float32_t lfImpactMessageTimeToLive;

	}
	{
		// BrnBoostMessageManager.cpp:821
		BoostMessageSlot * lpMessage;

	}
	{
		// BrnBoostMessageManager.cpp:898
		BoostMessageSlot * lpMessage;

	}
	{
		// BrnBoostMessageManager.cpp:887
		BoostMessageSlot * lpMessage;

	}
	{
		// BrnBoostMessageManager.cpp:876
		BoostMessageSlot * lpMessage;

	}
	{
		// BrnBoostMessageManager.cpp:865
		BoostMessageSlot * lpMessage;

	}
	{
		// BrnBoostMessageManager.cpp:854
		BoostMessageSlot * lpMessage;

	}
	{
		// BrnBoostMessageManager.cpp:843
		BoostMessageSlot * lpMessage;

	}
	{
		// BrnBoostMessageManager.cpp:832
		BoostMessageSlot * lpMessage;

	}
}

// BrnBoostMessageManager.cpp:788
void BrnGui::BoostMessageManager::UpdateTakdowns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:790
		float32_t lfTakedownMessageTimeToLive;

		{
			// BrnBoostMessageManager.cpp:794
			BoostMessageSlot * lpMessage;

		}
	}
}

// BrnBoostMessageManager.cpp:733
void BrnGui::BoostMessageManager::UpdateHandBrake() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:735
		float32_t lfHandBreakTurnTimeToLive;

		// BrnBoostMessageManager.cpp:736
		float32_t lfExtraSpinMessageTimeToLive;

		// BrnBoostMessageManager.cpp:737
		const char * lpMessageText;

		rw::math::fpu::IsZero(/* parameters */);
	}
	{
		// BrnBoostMessageManager.cpp:742
		BoostMessageSlot * lpSpinSlot;

	}
}

// BrnBoostMessageManager.cpp:704
void BrnGui::BoostMessageManager::UpdateLandingsCheck() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:706
		float32_t lfCleanLandingTimeToLive;

	}
}

// BrnBoostMessageManager.cpp:1089
void BrnGui::BoostMessageManager::UpdateAir() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:1091
		const float32_t lfAirMessageTimeToLive;

		// BrnBoostMessageManager.cpp:1092
		const float32_t lfMinAirAmountSecondsToDisplay;

		// BrnBoostMessageManager.cpp:1093
		const float32_t lfExtraAirMessageTimeToLive;

		// BrnBoostMessageManager.cpp:1094
		const char * lpMessageText;

	}
	{
		// BrnBoostMessageManager.cpp:1099
		BoostMessageSlot * lpAirSlot;

		{
			// BrnBoostMessageManager.cpp:1109
			CgsLanguage::LanguageManager * lpLanguageManager;

			// BrnBoostMessageManager.cpp:1111
			char[32] lacAirValueText;

			// BrnBoostMessageManager.cpp:1115
			char[256] lacText;

			CgsGui::StateInterface::GetLanguageManager(/* parameters */);
		}
	}
	{
		// BrnBoostMessageManager.cpp:1149
		GuiEventRequestTraining lRequestTraining;

		OutputGuiEvent<BrnGui::GuiEventRequestTraining>(/* parameters */);
	}
}

// BrnBoostMessageManager.cpp:603
void BrnGui::BoostMessageManager::Update(float32_t  lfTimeStep, bool  lbInShowtime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostMessageManager.cpp:607
		BitArray<3u> ScreenPosUseage;

		// BrnBoostMessageManager.cpp:614
		uint32_t luIndex;

		// BrnBoostMessageManager.cpp:615
		bool lbSlotsInTransition;

	}
	CgsContainers::BitArray<3u>::UnSetAll(/* parameters */);
	{
		// BrnBoostMessageManager.cpp:618
		BoostMessageSlot * lpSlot;

		CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
	}
	CgsContainers::BitArray<3u>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBoostMessageManager.cpp:636
		int32_t liActiveSlotCount;

		// BrnBoostMessageManager.cpp:639
		int32_t liSlot;

		CgsContainers::BitArray<3u>::IsBitSet(/* parameters */);
	}
	{
		// BrnBoostMessageManager.cpp:649
		BoostMessageSlot * lpSlot;

		CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBoostMessageManager.cpp:31
// BrnBoostMessageManager.cpp:34
