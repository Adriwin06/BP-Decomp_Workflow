// functional.h:33
struct eastl::binary_function<Attrib::TypeDesc,Attrib::TypeDesc,bool> {
}

// functional.h:133
struct eastl::less<Attrib::TypeDesc> : public binary_function<Attrib::TypeDesc,Attrib::TypeDesc,bool> {
public:
	// functional.h:134
	bool operator()(const TypeDesc &, const TypeDesc &) const;

}

// functional.h:33
struct eastl::binary_function<Attrib::EditSpecifier,Attrib::EditSpecifier,bool> {
}

// functional.h:133
struct eastl::less<Attrib::EditSpecifier> : public binary_function<Attrib::EditSpecifier,Attrib::EditSpecifier,bool> {
public:
	// functional.h:134
	bool operator()(const EditSpecifier &, const EditSpecifier &) const;

}

