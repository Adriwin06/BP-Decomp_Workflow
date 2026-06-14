// CgsVoiceHierarchyCollection.h:69
struct CgsSound::Logic::VoiceHierarchyCollection {
private:
	// CgsVoiceHierarchyCollection.h:156
	const ID * mpResourceIds;

	// CgsVoiceHierarchyCollection.h:157
	int32_t miNumIds;

	// CgsVoiceHierarchyCollection.h:159
	VoiceHierarchy ** mppHierarchies;

	// CgsVoiceHierarchyCollection.h:160
	int32_t miNumHierarchies;

public:
	// CgsVoiceHierarchyCollection.h:89
	void VoiceHierarchyCollection(VoiceHierarchy **, int32_t);

	// CgsVoiceHierarchyCollection.h:120
	void SetResourceIds(const ID *, int32_t);

	// CgsVoiceHierarchyCollection.h:127
	int32_t GetNumHierarchies() const;

	// CgsVoiceHierarchyCollection.h:135
	const VoiceHierarchy * GetHierarchyPointer(int32_t) const;

	// CgsVoiceHierarchyCollection.h:142
	int32_t GetNumResourceIds() const;

	// CgsVoiceHierarchyCollection.h:150
	const ID * GetResourceId(int32_t) const;

}

