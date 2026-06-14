// BrnBehaviourParameterBank.cpp:461
void BrnDirector::Camera::BehaviourParameterBank::SetBumperParameters(camerabumperbehaviour *  lBumperParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Behaviour::Parameters::SetDebugName(/* parameters */);
}

// BrnBehaviourParameterBank.cpp:401
void BrnDirector::Camera::BehaviourParameterBank::SetExternalParameters(cameraexternalbehaviour *  lExternalParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Behaviour::Parameters::SetDebugName(/* parameters */);
}

// BrnBehaviourParameterBank.cpp:32
void BrnDirector::Camera::BehaviourParameterBank::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourParameterBank.cpp:340
		BehaviourParameterNamingSerialiser lSerialiser;

	}
}

// BrnBehaviourParameterBank.cpp:349
void BrnDirector::Camera::BehaviourParameterBank::LoadParameters(void *  lpVoid) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourParameterBank.cpp:353
		BehaviourParameterBank * lpBehaviourParameterBank;

		// BrnBehaviourParameterBank.cpp:354
		TextFileReadSerialiser lrSerialiser;

		TextFileReadSerialiser::Construct(/* parameters */);
	}
	TextFileReadSerialiser::Destruct(/* parameters */);
}

// BrnBehaviourParameterBank.cpp:368
void BrnDirector::Camera::BehaviourParameterBank::SaveParameters(void *  lpVoid) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourParameterBank.cpp:372
		BehaviourParameterBank * lpBehaviourParameterBank;

		// BrnBehaviourParameterBank.cpp:373
		TextFileWriteSerialiser lrSerialiser;

		TextFileWriteSerialiser::Construct(/* parameters */);
	}
	TextFileWriteSerialiser::Destruct(/* parameters */);
}

