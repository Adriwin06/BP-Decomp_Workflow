// CgsIOBufferStack.h:53
struct CgsModule::IOBufferStack {
private:
	// CgsIOBufferStack.h:95
	uint8_t * mpData;

	// CgsIOBufferStack.h:96
	uint32_t muSize;

	// CgsIOBufferStack.h:97
	uint32_t muAlignment;

	// CgsIOBufferStack.h:98
	uint32_t muAllocated;

	// CgsIOBufferStack.h:99
	uint32_t muMaxAllocated;

	// CgsIOBufferStack.h:100
	uint32_t muNumAllocated;

public:
	// CgsIOBufferStack.h:65
	void Construct(const char *);

	// CgsIOBufferStack.h:68
	bool Prepare(void *, uint32_t, uint32_t);

	// CgsIOBufferStack.h:71
	bool Release();

	// CgsIOBufferStack.h:74
	void Destruct();

	// CgsIOBufferStack.h:77
	void Clear();

	// CgsIOBufferStack.h:88
	void DebugInitStackTracking(rw::IResourceAllocator *, uint32_t);

	// CgsIOBufferStack.h:91
	void DebugPrintStack();

private:
	// CgsIOBufferStack.h:115
	void * Alloc(uint32_t, const char *);

	// CgsIOBufferStack.h:118
	bool Free(void *, uint32_t);

}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnParticle::ParticleIO::DispatchInputBuffer>(DispatchInputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnParticle::ParticleIO::DispatchInputBuffer>(DispatchInputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnParticle::ParticleIO::PrepareOutputBuffer>(PrepareOutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnParticle::ParticleIO::PrepareOutputBuffer>(PrepareOutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnDirector::DirectorIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsGui::ModelIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsGui::CgsGuiModuleIO::OutputBuffer>(CgsGui::CgsGuiModuleIO::OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsGui::ViewIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsGui::CgsGuiModuleIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsGui::CgsGuiModuleIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsGui::ViewIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsGui::CgsGuiModuleIO::OutputBuffer>(CgsGui::CgsGuiModuleIO::OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsGui::ModelIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnDirector::DirectorIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnDirector::DirectorIO::SceneQueryOutputBuffer>(SceneQueryOutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnDirector::DirectorIO::SceneQueryOutputBuffer>(SceneQueryOutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnGame::DispatchThreadInputBuffer>(DispatchThreadInputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnGame::DispatchThreadInputBuffer>(DispatchThreadInputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnResource::GameDataIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnResource::GameDataIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnGameState::GameStateModuleIO::OutputBuffer>(BrnGameState::GameStateModuleIO::OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
			}
		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnGameState::GameStateModuleIO::OutputBuffer>(BrnGameState::GameStateModuleIO::OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorldIO::UpdateOutputBuffer>(UpdateOutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
			}
		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorldIO::UpdateOutputBuffer>(UpdateOutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnSound::Module::Io::RootInputBuffer>(RootInputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					{
						(None)unknown_arg
					}
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
					}
				}
			}
			{
				(None)unknown_arg
			}
		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnSound::Module::Io::RootOutputBuffer>(RootOutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					{
						(None)unknown_arg
					}
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
					}
				}
			}
			{
				(None)unknown_arg
			}
		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnSound::Module::Io::RootOutputBuffer>(RootOutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnSound::Module::Io::RootInputBuffer>(RootInputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnNetwork::BrnNetworkModuleIO::OutputBuffer>(BrnNetwork::BrnNetworkModuleIO::OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
			}
		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnReplays::ReplayIO::InputBuffer_PostSim>(InputBuffer_PostSim **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnReplays::ReplayIO::InputBuffer_PostSim>(InputBuffer_PostSim **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnReplays::ReplayIO::InputBuffer_PreSim>(InputBuffer_PreSim **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnReplays::ReplayIO::InputBuffer_PreSim>(InputBuffer_PreSim **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnEffects::EffectsIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnEffects::EffectsIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer>(PostSimulationInputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer>(PostSimulationInputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsInput::InputIO::PreWorldInputBuffer>(PreWorldInputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsInput::InputIO::PreWorldInputBuffer>(PreWorldInputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorldIO::DispatchInputBuffer>(DispatchInputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorldIO::DispatchOutputBuffer>(DispatchOutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<RendererIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<RendererIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnEffects::EffectsIO::DispatchInputBuffer>(DispatchInputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnEffects::EffectsIO::DispatchInputBuffer>(DispatchInputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<RendererIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<RendererIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorldIO::DispatchOutputBuffer>(DispatchOutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorldIO::DispatchInputBuffer>(DispatchInputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnNetwork::BrnNetworkModuleIO::PreSimulationInputBuffer>(PreSimulationInputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnNetwork::BrnNetworkModuleIO::PreSimulationInputBuffer>(PreSimulationInputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnGameState::GameStateModuleIO::PreWorldInputBuffer>(PreWorldInputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnGameState::GameStateModuleIO::PreWorldInputBuffer>(PreWorldInputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsInput::InputIO::PostWorldInputBuffer>(PostWorldInputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsInput::InputIO::PostWorldInputBuffer>(PostWorldInputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorldIO::UpdateInputBuffer>(UpdateInputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorldIO::UpdateInputBuffer>(UpdateInputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnGameState::GameStateModuleIO::PostWorldInputBuffer>(PostWorldInputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnGameState::GameStateModuleIO::PostWorldInputBuffer>(PostWorldInputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnEffects::EffectsIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnEffects::EffectsIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnNetwork::BrnNetworkModuleIO::OutputBuffer>(BrnNetwork::BrnNetworkModuleIO::OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSceneManager::SceneManagerIO::InputBuffer_Query>(CgsSceneManager::SceneManagerIO::InputBuffer_Query **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnDirector::DirectorIO::SceneQueryInputBuffer>(SceneQueryInputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSceneManager::SceneManagerIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSceneManager::SceneManagerIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnDirector::DirectorIO::SceneQueryInputBuffer>(SceneQueryInputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSceneManager::SceneManagerIO::InputBuffer_Query>(CgsSceneManager::SceneManagerIO::InputBuffer_Query **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsInput::InputIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnDirector::DirectorIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnReplays::ReplayIO::OutputBuffer_PreSim>(OutputBuffer_PreSim **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnReplays::ReplayIO::OutputBuffer_PostSim>(OutputBuffer_PostSim **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnSound::Module::Io::RootPreUpdateOutputBuffer>(RootPreUpdateOutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnSound::Module::Io::RootPreUpdateOutputBuffer>(RootPreUpdateOutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnReplays::ReplayIO::OutputBuffer_PostSim>(OutputBuffer_PostSim **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnReplays::ReplayIO::OutputBuffer_PreSim>(OutputBuffer_PreSim **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnDirector::DirectorIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsInput::InputIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsGui::ViewIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsGui::ModelIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsGui::ModelIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsGui::ViewIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsPhysics::PhysicsSimulationIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
			}
		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsPhysics::PhysicsSimulationIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnPhysics::Vehicle::VehicleManagerOutputBuffer>(VehicleManagerOutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnPhysics::Vehicle::VehicleManagerOutputBuffer>(VehicleManagerOutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsPhysics::PhysicsSimulationIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnPhysics::PhysicsModuleIO::PotentialContactInterface>(PotentialContactInterface **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnPhysics::Props::PropRaceCarContactBuffer>(PropRaceCarContactBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsMemory::IOStackLinearMalloc<1048576> >(IOStackLinearMalloc<1048576> **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSceneManager::CgsCollision::CollisionGenerator>(CollisionGenerator **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsMemory::IOStackLinearMalloc<1048576> >(IOStackLinearMalloc<1048576> **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSceneManager::CgsCollision::CollisionGenerator>(CollisionGenerator **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnPhysics::Props::PropRaceCarContactBuffer>(PropRaceCarContactBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnPhysics::PhysicsModuleIO::PotentialContactInterface>(PotentialContactInterface **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsPhysics::PhysicsSimulationIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnPhysics::ContactGenList>(BrnPhysics::ContactGenList **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnPhysics::Deformation::PenetrationSolver>(PenetrationSolver **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnPhysics::Deformation::PenetrationSolver>(PenetrationSolver **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnPhysics::Vehicle::RaceCarTractionLineBuffer>(RaceCarTractionLineBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnVehicleManager.cpp:288
	typedef TractionLineBuffer<32> RaceCarTractionLineBuffer;

	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnPhysics::Vehicle::RaceCarTractionLineBuffer>(RaceCarTractionLineBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnPhysics::Vehicle::TrafficTractionLineBuffer>(TrafficTractionLineBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnPhysicalTrafficManagerIO.h:166
	typedef TractionLineBuffer<100> TrafficTractionLineBuffer;

	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnPhysics::Vehicle::TrafficTractionLineBuffer>(TrafficTractionLineBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnPhysics::ContactGenList>(BrnPhysics::ContactGenList **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnPhysics::Vehicle::ArticulatedJointCreateBuffer>(ArticulatedJointCreateBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnPhysics::Vehicle::ArticulatedJointCreateBuffer>(ArticulatedJointCreateBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsAttribSys::AttribSysIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsResource::ResourceIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsResource::ResourceIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsResource::ResourceIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsAttribSys::AttribSysIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnSound::Module::Io::LogicOutputBuffer>(LogicOutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSound::Playback::Module::Io::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSound::Playback::Module::Io::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSound::Playback::Module::Io::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSound::Playback::Module::Io::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnSound::Module::Io::LogicOutputBuffer>(LogicOutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnSound::Module::Io::LogicPreUpdateOutputBuffer>(LogicPreUpdateOutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnSound::Module::Io::LogicPreUpdateOutputBuffer>(LogicPreUpdateOutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnAI::RouteMapModuleIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnAI::RouteMapModuleIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnAI::RouteMapModuleIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnAI::RouteMapModuleIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnPhysics::PhysicsModuleIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
			}
		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnAI::AIModuleIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
			}
		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics>(InputBuffer_PostPhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSceneManager::SceneManagerIO::InputBuffer_Update>(InputBuffer_Update **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
			}
		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics>(OutputBuffer_PostPhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics>(OutputBuffer_PostPhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics>(OutputBuffer_PostPhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics>(OutputBuffer_PostPhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSceneManager::SceneManagerIO::InputBuffer_Update>(InputBuffer_Update **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics>(InputBuffer_PostPhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnAI::AIModuleIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnPhysics::PhysicsModuleIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene>(OutputBuffer_PostScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>(InputBuffer_GenerateDispatchLists **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch>(InputBuffer_Dispatch **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::PropEntityIO::InputBuffer_Dispatch>(InputBuffer_Dispatch **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists>(InputBuffer_GenerateDispatchLists **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<FilteredEntityData>(FilteredEntityData **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PreDispatch>(InputBuffer_PreDispatch **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PreDispatch>(OutputBuffer_PreDispatch **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PreDispatch>(InputBuffer_PreDispatch **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PreDispatch>(OutputBuffer_PreDispatch **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<FilteredEntityData>(FilteredEntityData **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists>(InputBuffer_GenerateDispatchLists **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::PropEntityIO::InputBuffer_Dispatch>(InputBuffer_Dispatch **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch>(InputBuffer_Dispatch **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>(InputBuffer_GenerateDispatchLists **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_Prepare>(OutputBuffer_Prepare **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_Prepare>(OutputBuffer_Prepare **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene>(OutputBuffer_PostScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_Prepare>(OutputBuffer_Prepare **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_Prepare>(OutputBuffer_Prepare **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_Prepare>(OutputBuffer_Prepare **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_Prepare>(OutputBuffer_Prepare **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_Prepare>(OutputBuffer_Prepare **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_Prepare>(OutputBuffer_Prepare **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnPhysics::PhysicsModuleIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene>(InputBuffer_PreScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene>(OutputBuffer_PreScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene>(InputBuffer_PostScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics>(InputBuffer_PrePhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics>(OutputBuffer_PrePhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PostScene>(InputBuffer_PostScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::CrashIO::InputBuffer_PreScene>(InputBuffer_PreScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::CrashIO::OutputBuffer_PreScene>(OutputBuffer_PreScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::CrashIO::InputBuffer_PostPhysics>(InputBuffer_PostPhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::CrashIO::OutputBuffer_PostPhysics>(OutputBuffer_PostPhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene>(OutputBuffer_PreScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene>(OutputBuffer_PreScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_PreScene>(OutputBuffer_PreScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_PreScene>(OutputBuffer_PreScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics>(InputBuffer_PrePhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics>(InputBuffer_PrePhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::PropEntityIO::InputBuffer_PrePhysics>(InputBuffer_PrePhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene>(InputBuffer_PreScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PreScene>(InputBuffer_PreScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::PropEntityIO::InputBuffer_PreScene>(InputBuffer_PreScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::WorldEntityIO::InputBuffer_PreScene>(InputBuffer_PreScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::WorldEntityIO::InputBuffer_PreScene>(InputBuffer_PreScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::PropEntityIO::InputBuffer_PreScene>(InputBuffer_PreScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PreScene>(InputBuffer_PreScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene>(InputBuffer_PreScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_PreScene>(OutputBuffer_PreScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_PreScene>(OutputBuffer_PreScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene>(OutputBuffer_PreScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PostScene>(OutputBuffer_PostScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostScene>(OutputBuffer_PostScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_PostScene>(OutputBuffer_PostScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_PostScene>(OutputBuffer_PostScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene>(InputBuffer_PostScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::PropEntityIO::InputBuffer_PostScene>(InputBuffer_PostScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::WorldEntityIO::InputBuffer_PostScene>(InputBuffer_PostScene **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::WorldEntityIO::InputBuffer_PostScene>(InputBuffer_PostScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::PropEntityIO::InputBuffer_PostScene>(InputBuffer_PostScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene>(InputBuffer_PostScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnAI::AIModuleIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnAI::AIModuleIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_PostScene>(OutputBuffer_PostScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_PostScene>(OutputBuffer_PostScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostScene>(OutputBuffer_PostScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics>(OutputBuffer_PrePhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics>(OutputBuffer_PrePhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_PrePhysics>(OutputBuffer_PrePhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::WorldEntityIO::InputBuffer_PrePhysics>(InputBuffer_PrePhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics>(OutputBuffer_PrePhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics>(OutputBuffer_PrePhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::WorldEntityIO::InputBuffer_PrePhysics>(InputBuffer_PrePhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_PrePhysics>(OutputBuffer_PrePhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics>(OutputBuffer_PrePhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics>(OutputBuffer_PrePhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PostScene>(OutputBuffer_PostScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene>(OutputBuffer_PreScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::PropEntityIO::InputBuffer_PrePhysics>(InputBuffer_PrePhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics>(InputBuffer_PrePhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics>(InputBuffer_PrePhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnAI::AIModuleIO::InputBuffer_PostPhysics>(InputBuffer_PostPhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnAI::AIModuleIO::InputBuffer_PostPhysics>(InputBuffer_PostPhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics>(OutputBuffer_PostPhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_PostPhysics>(OutputBuffer_PostPhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics>(InputBuffer_PostPhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::PropEntityIO::InputBuffer_PostPhysics>(InputBuffer_PostPhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<BrnWorld::WorldEntityIO::InputBuffer_PostPhysics>(InputBuffer_PostPhysics **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::WorldEntityIO::InputBuffer_PostPhysics>(InputBuffer_PostPhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::PropEntityIO::InputBuffer_PostPhysics>(InputBuffer_PostPhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics>(InputBuffer_PostPhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_PostPhysics>(OutputBuffer_PostPhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics>(OutputBuffer_PostPhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::CrashIO::OutputBuffer_PostPhysics>(OutputBuffer_PostPhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::CrashIO::InputBuffer_PostPhysics>(InputBuffer_PostPhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::CrashIO::OutputBuffer_PreScene>(OutputBuffer_PreScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::CrashIO::InputBuffer_PreScene>(InputBuffer_PreScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PostScene>(InputBuffer_PostScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics>(OutputBuffer_PrePhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics>(InputBuffer_PrePhysics **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene>(InputBuffer_PostScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene>(OutputBuffer_PreScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene>(InputBuffer_PreScene **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<BrnPhysics::PhysicsModuleIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsGui::GuiResourceModuleIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsGui::GuiResourceModuleIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsGui::EventInterpreterModuleIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsGui::EventInterpreterModuleIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsGui::EventInterpreterModuleIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsGui::EventInterpreterModuleIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsGui::GuiResourceModuleIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsGui::GuiResourceModuleIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:53
struct CgsModule::IOBufferStack {
private:
	// CgsIOBufferStack.h:95
	uint8_t * mpData;

	// CgsIOBufferStack.h:96
	uint32_t muSize;

	// CgsIOBufferStack.h:97
	uint32_t muAlignment;

	// CgsIOBufferStack.h:98
	uint32_t muAllocated;

	// CgsIOBufferStack.h:99
	uint32_t muMaxAllocated;

	// CgsIOBufferStack.h:100
	uint32_t muNumAllocated;

public:
	// CgsIOBufferStack.h:65
	void Construct(const char *);

	// CgsIOBufferStack.h:68
	bool Prepare(void *, uint32_t, uint32_t);

	// CgsIOBufferStack.h:71
	bool Release();

	// CgsIOBufferStack.h:74
	void Destruct();

	// CgsIOBufferStack.h:77
	void Clear();

	// CgsIOBufferStack.h:88
	void DebugInitStackTracking(rw::IResourceAllocator *, uint32_t);

	// CgsIOBufferStack.h:91
	// Declaration
	void DebugPrintStack() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsIOBufferStack.cpp:292
		using namespace CgsDev::Message;

		// CgsIOBufferStack.cpp:293
		using namespace CgsDev::Message;

		// CgsIOBufferStack.cpp:294
		using namespace CgsDev::Message;

		// CgsIOBufferStack.cpp:295
		using namespace CgsDev::Message;

		// CgsIOBufferStack.cpp:296
		using namespace CgsDev::Message;

		// CgsIOBufferStack.cpp:306
		using namespace CgsDev::Message;

	}

private:
	// CgsIOBufferStack.h:115
	void * Alloc(uint32_t, const char *);

	// CgsIOBufferStack.h:118
	bool Free(void *, uint32_t);

}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsPhysics::IslandGenerator>(IslandGenerator **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsPhysics::IslandGenerator>(IslandGenerator **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSceneManager::SpatialPartitionIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSceneManager::SpatialPartitionIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSceneManager::FineIntersectionTestIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSceneManager::SceneManagerIO::TriCacheQueryBuffer>(TriCacheQueryBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSceneManager::SceneManagerIO::TriCacheQueryBuffer>(TriCacheQueryBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSceneManager::FineIntersectionTestIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSceneManager::OverlapCullingIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSceneManager::OverlapCullingIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSceneManager::OverlapGenerationIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSceneManager::ContactGenerator::QueryAccumulator>(CgsSceneManager::ContactGenerator::QueryAccumulator **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSceneManager::ContactGenerator::QueryAccumulator>(CgsSceneManager::ContactGenerator::QueryAccumulator **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSceneManager::OverlapCullingIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSceneManager::OverlapGenerationIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSceneManager::OverlapCullingIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSceneManager::SpatialPartitionIO::InputBuffer_Update>(InputBuffer_Update **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsSceneManager::OverlapGenerationIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSceneManager::OverlapGenerationIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsSceneManager::SpatialPartitionIO::InputBuffer_Update>(InputBuffer_Update **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsMemory::MemoryIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsResource::BundleLoaderIO::InputBuffer_Update>(InputBuffer_Update **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsResource::PoolIO::InputBuffer>(InputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsMemory::MemoryIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsResource::BundleLoaderIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsResource::PoolIO::OutputBuffer>(OutputBuffer **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:136
extern bool CreateIOBuffer<CgsResource::BundleLoaderIO::InputBuffer_Record>(InputBuffer_Record **  lpOutBuffer, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:139
		CgsDev::StrStream lStrStream;

	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsResource::BundleLoaderIO::InputBuffer_Record>(InputBuffer_Record **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsResource::PoolIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsResource::BundleLoaderIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsMemory::MemoryIO::OutputBuffer>(OutputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsResource::PoolIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsResource::BundleLoaderIO::InputBuffer_Update>(InputBuffer_Update **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsIOBufferStack.h:177
extern bool DestroyIOBuffer<CgsMemory::MemoryIO::InputBuffer>(InputBuffer **  lpInOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBufferStack.h:190
		bool lbResult;

		{
			// CgsIOBufferStack.h:180
			CgsDev::StrStream lStrStream;

		}
	}
}

