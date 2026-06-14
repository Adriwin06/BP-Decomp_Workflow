// BrnAICar.h:648
extern const float32_t KF_RACE_SPEED_MATCHING_STRENGTH;

// BrnRoute.h:26
namespace BrnAI {
	// BrnAICar.h:48
	enum ELocationRelativeToPlayer {
		E_RELATIVE_BEHIND_APPROACHING = 0,
		E_RELATIVE_BEHIND_SEPARATING = 1,
		E_RELATIVE_INFRONT_APPROACHING = 2,
		E_RELATIVE_INFRONT_SEPARATING = 3,
		E_RELATIVE_UNKNOWN = 4,
	}

}

// BrnAICar.h:78
struct BrnAI::AICar {
private:
	// BrnAICar.h:648
	extern const float32_t KF_RACE_SPEED_MATCHING_STRENGTH;

	// BrnAICar.h:653
	Route mRoute;

	// BrnAICar.h:654
	Aggressiveness mAggressiveness;

	// BrnAICar.h:657
	Vector3 mPosition;

	// BrnAICar.h:658
	Vector3 mDirection;

	// BrnAICar.h:659
	Vector3 mUnitRight;

	// BrnAICar.h:660
	Vector3 mLastGoodPosition;

	// BrnAICar.h:662
	Vector3 mVelocity;

	// BrnAICar.h:664
	Vector3 mLastRoutePosition;

	// BrnAICar.h:666
	Vector3 mPlaceOnTrackPosition;

	// BrnAICar.h:667
	Vector3 mPlaceOnTrackDirection;

	// BrnAICar.h:670
	BrnAI::AIDriver * mpDriver;

	// BrnAICar.h:672
	BrnAI::EAIBehaviour meBehaviour;

	// BrnAICar.h:673
	BrnAI::EAIBehaviour mPreviousBehaviour;

	// BrnAICar.h:674
	BrnAI::EAISpeedSelectionMethod meSpeedSelectionMethod;

	// BrnAICar.h:675
	BrnAI::ERouteFindingStyle meRouteFindingStyle;

	// BrnAICar.h:676
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnAICar.h:677
	BrnAI::EAICarState meCarState;

	// BrnAICar.h:678
	BrnAI::EPersonalityType mePersonalityType;

	// BrnAICar.h:679
	BrnAI::EResetSpeedType meResetSpeedType;

	// BrnAICar.h:680
	BrnAI::ELocationRelativeToPlayer meRelativeLocation;

	// BrnAICar.h:682
	Attribute::Key mCarAssetAttribKey;

	// BrnAICar.h:684
	float32_t mfBehaviourTime;

	// BrnAICar.h:685
	float32_t mfActualInRangeSpeed;

	// BrnAICar.h:686
	float32_t mfDesiredSpeed;

	// BrnAICar.h:687
	float32_t mfRouteTimer;

	// BrnAICar.h:688
	float32_t mfDistanceToCheckpoint;

	// BrnAICar.h:689
	float32_t mfWrongWayTime;

	// BrnAICar.h:690
	float32_t mfDistanceAheadOfPlayer;

	// BrnAICar.h:691
	float32_t mfRaceTimer;

	// BrnAICar.h:692
	float32_t mfAlternativeRouteTimer;

	// BrnAICar.h:693
	float32_t mfMaxPlayerSpeed;

	// BrnAICar.h:694
	float32_t mfDistanceToPlayer;

	// BrnAICar.h:695
	float32_t mfPlaceOnTrackSpeed;

	// BrnAICar.h:696
	float32_t mfBuzzFrequencyRatio;

	// BrnAICar.h:697
	float32_t mfTimeInInvalidSection;

	// BrnAICar.h:698
	float32_t[2] mafScheduleOffsets;

	// BrnAICar.h:700
	int32_t miCurrentCheckpoint;

	// BrnAICar.h:701
	int32_t miNextRouteNodeIndex;

	// BrnAICar.h:702
	int32_t miRouteTimeStamp;

	// BrnAICar.h:703
	int32_t miProximityIndex;

	// BrnAICar.h:706
	uint16_t muResetOnTrackSectionIndex;

	// BrnAICar.h:707
	uint16_t muCurrentSectionIndex;

	// BrnAICar.h:708
	uint16_t muUnderCarSectionIndex;

	// BrnAICar.h:709
	uint16_t muDestinationAISectionIndex;

	// BrnAICar.h:712
	uint8_t muResetOnTrackStartPortal;

	// BrnAICar.h:713
	uint8_t muResetOnTrackEndPortal;

	// BrnAICar.h:714
	int8_t miOpponentIndex;

	// BrnAICar.h:715
	bool mbIsAheadOfPlayer;

	// BrnAICar.h:716
	bool mbPlaceOnTrackRequested;

	// BrnAICar.h:717
	bool mbUseBlockSections;

	// BrnAICar.h:718
	bool mbCanUseAIShortcuts;

	// BrnAICar.h:719
	bool mbCanDeviateFromRoute;

	// BrnAICar.h:720
	bool mbSectionChangedFlag;

	// BrnAICar.h:721
	bool mbIsInAir;

	// BrnAICar.h:722
	bool mbIsCrashing;

	// BrnAICar.h:723
	bool mbIsInShowtime;

	// BrnAICar.h:724
	bool mbIsDrifting;

	// BrnAICar.h:725
	bool mbIsTouchingRaceCar;

	// BrnAICar.h:726
	bool mbIsTouchingPlayer;

	// BrnAICar.h:727
	bool mbIsOnStartLine;

	// BrnAICar.h:728
	bool mbIsStartingRace;

	// BrnAICar.h:729
	bool mbIsPlayer;

	// BrnAICar.h:730
	bool mbIsDrivenByPlayer;

	// BrnAICar.h:731
	bool mbIsInGameMode;

	// BrnAICar.h:732
	bool mbIsInShortcut;

	// BrnAICar.h:733
	bool mbRouteRequested;

	// BrnAICar.h:734
	bool mbIsInMasterRoute;

	// BrnAICar.h:735
	bool mbIsInJunkYard;

	// BrnAICar.h:736
	bool mbIsOnline;

	// BrnAICar.h:737
	bool mbIsInResetPairSection;

public:
	// BrnAICar.h:86
	void Construct(EGlobalRaceCarIndex);

	// BrnAICar.h:95
	void Update(const BrnAI::RaceBalancingManager *, float32_t, const AICar *, AISectionsData *, const Route *, bool);

	// BrnAICar.h:100
	void Reset(BrnAI::EPersonalityType, bool);

	// BrnAICar.h:104
	void UpdateShortcut(AISectionsData *);

	// BrnAICar.h:109
	void UpdateRouteFinding(float32_t, const AICar *);

	// BrnAICar.h:114
	void UpdateRouteFindingRace(float32_t, const AICar *);

	// BrnAICar.h:118
	void UpdateRouteFindingFreeRoam(const AICar *);

	// BrnAICar.h:121
	void UpdateRouteFindingRoadRage();

	// BrnAICar.h:125
	void SetDriver(BrnAI::AIDriver *);

	// BrnAICar.h:128
	bool IsInShortCut() const;

	// BrnAICar.h:131
	BrnAI::AIDriver * GetDriver() const;

	// BrnAICar.h:134
	Vector3 GetPosition() const;

	// BrnAICar.h:137
	Vector3 GetDirection() const;

	// BrnAICar.h:140
	Vector3 GetRight() const;

	// BrnAICar.h:143
	Vector3 GetVelocity() const;

	// BrnAICar.h:146
	Vector3 GetLastGoodPosition() const;

	// BrnAICar.h:149
	Vector3 GetVelocityDirection() const;

	// BrnAICar.h:152
	Vector3 GetUsefulDirection() const;

	// BrnAICar.h:155
	uint16_t GetCurrentSectionIndex() const;

	// BrnAICar.h:158
	uint16_t GetBestSectionIndex() const;

	// BrnAICar.h:161
	uint16_t GetCurrentUnderSectionIndex() const;

	// BrnAICar.h:164
	uint16_t GetNextSectionIndex() const;

	// BrnAICar.h:167
	BrnAI::EResetSpeedType GetResetSpeedType() const;

	// BrnAICar.h:170
	uint16_t GetResetOnTrackSectionIndex() const;

	// BrnAICar.h:173
	uint8_t GetResetOnTrackStartPortal() const;

	// BrnAICar.h:176
	uint8_t GetResetOnTrackEndPortal() const;

	// BrnAICar.h:179
	const Route * GetRoute() const;

	// BrnAICar.h:182
	const RouteNode * GetNextRouteNode() const;

	// BrnAICar.h:185
	int32_t GetNextRouteNodeIndex() const;

	// BrnAICar.h:189
	void SetNextRouteNodeIndex(int32_t);

	// BrnAICar.h:192
	uint16_t GetSectionIndexOfLastSectionInRoute() const;

	// BrnAICar.h:197
	void UpdateRoute(const Route *, const AISectionsData *);

	// BrnAICar.h:202
	void UpdatePositionOutOfRange(float32_t, AISectionsData *);

	// BrnAICar.h:205
	void IncrementRouteNodeIndex();

	// BrnAICar.h:208
	void UpdateRouteFindingPursuit();

	// BrnAICar.h:225
	void UpdateInRangeData(AISectionsData *, Matrix44Affine, Vector3, float32_t, uint16_t, bool, bool, bool, bool, bool, bool, bool, bool, bool);

	// BrnAICar.h:232
	void UpdateResetOnTrackSection(BrnAI::EResetSpeedType, uint16_t, uint8_t, uint8_t);

	// BrnAICar.h:240
	void UpdateOutOfRangeData(Vector3, Vector3, uint16_t, uint8_t);

	// BrnAICar.h:245
	void SetTransform(Vector3, Vector3);

	// BrnAICar.h:251
	void UpdateRaceDistance(const AISectionsData *, const AICar *, float32_t);

	// BrnAICar.h:255
	void UpdateRelativePositionToPlayer(const AICar *);

	// BrnAICar.h:259
	BrnAI::ELocationRelativeToPlayer GetRelativePositionToPlayer() const;

	// BrnAICar.h:262
	bool HasValidRoute() const;

	// BrnAICar.h:265
	bool HasRouteWithMoreThanOneNode() const;

	// BrnAICar.h:268
	bool NeedsNewRoute() const;

	// BrnAICar.h:272
	void SetState(BrnAI::EAICarState);

	// BrnAICar.h:275
	BrnAI::EAICarState GetState() const;

	// BrnAICar.h:278
	EGlobalRaceCarIndex GetGlobalRaceCarIndex() const;

	// BrnAICar.h:281
	float32_t GetSpeed() const;

	// BrnAICar.h:284
	float32_t GetDesiredSpeed() const;

	// BrnAICar.h:287
	float32_t GetMaxPlayerSpeed() const;

	// BrnAICar.h:290
	float32_t GetDistanceToPlayer() const;

	// BrnAICar.h:293
	bool IsActive() const;

	// BrnAICar.h:296
	bool IsInRange() const;

	// BrnAICar.h:299
	bool IsInAir();

	// BrnAICar.h:302
	bool IsCrashing() const;

	// BrnAICar.h:305
	bool IsInShowtime() const;

	// BrnAICar.h:308
	bool IsDrifting();

	// BrnAICar.h:311
	bool IsTouchingAnotherRaceCar();

	// BrnAICar.h:314
	bool IsTouchingPlayer();

	// BrnAICar.h:317
	bool IsOnStartLine() const;

	// BrnAICar.h:320
	bool IsStartingRace() const;

	// BrnAICar.h:323
	bool IsInEvent() const;

	// BrnAICar.h:326
	bool IsPlayerCar() const;

	// BrnAICar.h:329
	bool IsCurrentlyDrivenByPlayer() const;

	// BrnAICar.h:332
	bool IsAheadOfPlayer() const;

	// BrnAICar.h:336
	void SetCurrentlyDrivenByPlayer(bool);

	// BrnAICar.h:339
	void OnNonStandardReset();

	// BrnAICar.h:343
	bool IsInGameMode() const;

	// BrnAICar.h:346
	float32_t GetDistanceToCheckpoint() const;

	// BrnAICar.h:349
	int32_t GetCurrentCheckpoint() const;

	// BrnAICar.h:352
	bool CurrentSectionIsOK();

	// BrnAICar.h:358
	void CheckForSectionChange(float32_t, AISectionsData *, const Route *);

	// BrnAICar.h:363
	bool MoveToSectionOnRoute(uint16_t, const Route *);

	// BrnAICar.h:367
	bool IsOpponent() const;

	// BrnAICar.h:371
	int8_t GetOpponentIndex() const;

	// BrnAICar.h:375
	float32_t GetRaceTimer() const;

	// BrnAICar.h:379
	float32_t GetCurrentNodeY(AISectionsData *);

	// BrnAICar.h:382
	int32_t GetRouteTimeStamp() const;

	// BrnAICar.h:385
	void ClearAllSectionData();

	// BrnAICar.h:388
	void InvalidateRoute();

	// BrnAICar.h:398
	void OnModeStart(BrnAI::EAISpeedSelectionMethod, int32_t, BrnAI::ERouteFindingStyle, bool, bool, uint16_t, float32_t);

	// BrnAICar.h:401
	void OnModeStartRacing();

	// BrnAICar.h:404
	void OnRollingStart();

	// BrnAICar.h:408
	void OnFinishedMode(bool);

	// BrnAICar.h:412
	void OnCrossedFinishLine(const AICar *);

	// BrnAICar.h:415
	void OnModeEnd();

	// BrnAICar.h:421
	// Declaration
	void RequestPlaceOnTrack(float32_t, Vector3, Vector3) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAICar.h:1392
		using namespace CgsDev::Message;

	}

	// BrnAICar.h:427
	bool PlaceOnTrackRequested(float32_t *, Vector3 &, Vector3 &);

	// BrnAICar.h:431
	void SetBehaviour(BrnAI::EAIBehaviour);

	// BrnAICar.h:434
	BrnAI::EAIBehaviour GetBehaviour() const;

	// BrnAICar.h:437
	bool IsInPostEventBehaviour();

	// BrnAICar.h:440
	float32_t GetBehaviourTime() const;

	// BrnAICar.h:443
	BrnAI::EAIBehaviour GetPreviousBehaviour() const;

	// BrnAICar.h:447
	void SetSpeedSelectionMethod(BrnAI::EAISpeedSelectionMethod);

	// BrnAICar.h:450
	BrnAI::EAISpeedSelectionMethod GetSpeedSelectionMethod() const;

	// BrnAICar.h:454
	void SetRouteFindingStyle(BrnAI::ERouteFindingStyle);

	// BrnAICar.h:457
	BrnAI::ERouteFindingStyle GetRouteFindingStyle() const;

	// BrnAICar.h:460
	bool CanUseAIShortcuts() const;

	// BrnAICar.h:463
	bool CanDeviateFromRoute() const;

	// BrnAICar.h:467
	void SetCarAssetAttribKey(Attribute::Key);

	// BrnAICar.h:470
	Attribute::Key GetCarAssetAttribKey() const;

	// BrnAICar.h:473
	Aggressiveness * GetAggressiveness();

	// BrnAICar.h:476
	float32_t GetRandomNumber() const;

	// BrnAICar.h:480
	bool IsDrivingAwayFromPlayer(const AICar *);

	// BrnAICar.h:486
	bool ComputeDistanceToCheckpoint(const AISectionsData *, const AICar *, float32_t *) const;

	// BrnAICar.h:489
	bool HasValidDestination() const;

	// BrnAICar.h:493
	void SetDestination(uint16_t);

	// BrnAICar.h:496
	void InvalidateDestination();

	// BrnAICar.h:499
	uint16_t GetDestination() const;

	// BrnAICar.h:502
	bool UseBlockSections() const;

	// BrnAICar.h:507
	void OnReachedCheckpoint(int32_t, uint16_t);

	// BrnAICar.h:510
	bool IsInMarkedMan() const;

	// BrnAICar.h:513
	bool IsInRoadRage() const;

	// BrnAICar.h:516
	bool IsInPursuit() const;

	// BrnAICar.h:519
	bool IsInRace() const;

	// BrnAICar.h:522
	bool IsInFreeRoam() const;

	// BrnAICar.h:525
	bool IsInAggressiveGameMode() const;

	// BrnAICar.h:528
	void OnResetOnTrack();

	// BrnAICar.h:532
	void SetDirection(Vector3);

	// BrnAICar.h:536
	void SetRight(Vector3);

	// BrnAICar.h:541
	bool SetDirectionFromPoints(Vector3, Vector3);

	// BrnAICar.h:545
	void SetUnderCarSectionIndex(uint16_t);

	// BrnAICar.h:549
	void SetCurrentSectionIndex(uint16_t);

	// BrnAICar.h:552
	float32_t GetDistanceAheadOfPlayer() const;

	// BrnAICar.h:556
	void SetRoadRageMadness(float32_t);

	// BrnAICar.h:559
	void RequestRoute();

	// BrnAICar.h:562
	void ClearRouteRequest();

	// BrnAICar.h:566
	float32_t GetScheduleOffset(BrnAI::GraphType) const;

	// BrnAICar.h:569
	int32_t GetProximityIndex() const;

	// BrnAICar.h:572
	void SetProximityIndex(int32_t);

	// BrnAICar.h:575
	float32_t GetDecentSpeed() const;

	// BrnAICar.h:578
	bool IsNearRaceFinish() const;

	// BrnAICar.h:581
	bool IsInJunkYard() const;

	// BrnAICar.h:584
	// Declaration
	void SetIsInJunkyard(bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAICar.h:1469
		using namespace CgsDev::Message;

		// BrnAICar.h:1473
		using namespace CgsDev::Message;

		// BrnAICar.h:1478
		using namespace CgsDev::Message;

		// BrnAICar.h:1482
		using namespace CgsDev::Message;

	}

	// BrnAICar.h:589
	float32_t GetRankAggression(BrnAI::EPersonalityType, float32_t) const;

	// BrnAICar.h:594
	void SetBuzzFrequencyRatio(float32_t);

	// BrnAICar.h:597
	float32_t GetBuzzFrequencyRatio() const;

	// BrnAICar.h:600
	bool IsOnline() const;

	// BrnAICar.h:603
	bool IsInResetPairSection();

	// BrnAICar.h:607
	void SetInResetPairSection(bool);

private:
	// BrnAICar.h:611
	void ResetTimeInInvalidSection();

	// BrnAICar.h:617
	float32_t CalcDesiredSpeed(const BrnAI::RaceBalancingManager *, AISectionsData *, const AICar *);

	// BrnAICar.h:621
	float32_t CalcPersonalitySpeed(const AICar *);

	// BrnAICar.h:625
	float32_t CalcRoadRageSpeed(const AICar *);

	// BrnAICar.h:628
	float32_t GetSeperationFromNextNode();

	// BrnAICar.h:631
	bool IsFreeRoamingCarsRouteOld();

	// BrnAICar.h:634
	bool HasValidSection() const;

	// BrnAICar.h:637
	bool IsExtrapolatedRouteGettingOld();

	// BrnAICar.h:640
	bool IsRouteToChasedCarGettingOld();

	// BrnAICar.h:643
	bool IsPursuitCarsRouteOld();

	// BrnAICar.h:646
	void CheckForFreeRoamSwapToPursuit();

}

