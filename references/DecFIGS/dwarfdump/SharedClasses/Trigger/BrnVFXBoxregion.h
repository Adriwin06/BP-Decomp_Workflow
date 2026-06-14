// BrnVFXBoxregion.h:46
struct BrnTrigger::VFXBoxRegion : public TriggerRegion {
public:
	// BrnVFXBoxregion.h:52
	void Construct(CgsID, _Locinfo::string, const BoxRegion *);

	// BrnVFXBoxregion.h:53
	void FixDown();

	// BrnVFXBoxregion.h:54
	void FixUp();

}

