// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnDirectorArbitratorUtils.h:31
	namespace ArbUtils {
		// BrnDirectorArbitratorUtils.h:78
		extern void ChangeToStateWithoutRelease<BrnDirector::ArbStateRoaming::EState>(BrnDirector::ArbStateSharedInfo &, BrnDirector::ArbitratorStateContainer::EState, BrnDirector::ArbStateRoaming::EState &, BrnDirector::ArbStateRoaming::EState, BrnDirector::ArbStateRoaming::EState);

		// BrnDirectorArbitratorUtils.h:48
		extern void ChangeToState<BrnDirector::ArbStateTakedown::EState>(BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &, BrnDirector::ArbitratorStateContainer::EState, BrnDirector::ArbStateTakedown::EState &, BrnDirector::ArbStateTakedown::EState);

		// BrnDirectorArbitratorUtils.h:48
		extern void ChangeToState<BrnDirector::ArbStatePostEvent::EState>(BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &, BrnDirector::ArbitratorStateContainer::EState, BrnDirector::ArbStatePostEvent::EState &, BrnDirector::ArbStatePostEvent::EState);

		// BrnDirectorArbitratorUtils.h:48
		extern void ChangeToState<BrnDirector::ArbStateRaceIntro::EState>(BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &, BrnDirector::ArbitratorStateContainer::EState, BrnDirector::ArbStateRaceIntro::EState &, BrnDirector::ArbStateRaceIntro::EState);

		// BrnDirectorArbitratorUtils.h:48
		extern void ChangeToState<BrnDirector::ArbStateDriveThru::EState>(BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &, BrnDirector::ArbitratorStateContainer::EState, BrnDirector::ArbStateDriveThru::EState &, BrnDirector::ArbStateDriveThru::EState);

		// BrnDirectorArbitratorUtils.h:48
		extern void ChangeToState<BrnDirector::ArbStateOnlineRaceIntro::EState>(BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &, BrnDirector::ArbitratorStateContainer::EState, BrnDirector::ArbStateOnlineRaceIntro::EState &, BrnDirector::ArbStateOnlineRaceIntro::EState);

		// BrnDirectorArbitratorUtils.h:48
		extern void ChangeToState<BrnDirector::ArbStateOnlineCarSelect::EState>(BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &, BrnDirector::ArbitratorStateContainer::EState, BrnDirector::ArbStateOnlineCarSelect::EState &, BrnDirector::ArbStateOnlineCarSelect::EState);

	}

}

