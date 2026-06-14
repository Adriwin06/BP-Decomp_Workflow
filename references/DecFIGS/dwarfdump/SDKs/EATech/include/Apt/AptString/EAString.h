// EAString.h:291
extern char[9] s_EmptyInternalData;

// EAString.h:31
struct EAStringC {
	// EAString.h:63
	struct StringDataC {
		// EAString.h:66
		uint16_t volatile m_uRefCount;

		// EAString.h:70
		uint16_t m_uSize;

		// EAString.h:71
		uint16_t m_uMaxSize;

		// EAString.h:72
		uint16_t m_uHash;

	}

	// EAString.h:76
	struct DebugDataC : public EAStringC::StringDataC {
		// EAString.h:78
		char[256] m_strText;

	}

	// EAString.h:88
	struct StaticStringHelperT {
		// EAString.h:89
		EAStringC::StringDataC sd;

		// EAString.h:90
		char[256] pbuf;

	}

	// EAString.h:257
	enum EmptyString {
		EMPTY_STRING = 0,
	}

	// EAString.h:277
	enum CBPushZero {
		CB_NO_PUSH_ZERO = 0,
		CB_PUSH_ZERO = 1,
	}

private:
	// EAString.h:289
	EAStringC::DebugDataC * m_pData;

	// EAString.h:291
	extern char[9] s_EmptyInternalData;

	// EAString.h:293
	extern AptUserFunctions * sAptCallbacks;

public:
	// EAString.h:33
	EAStringC();

	// EAString.h:39
	EAStringC(uint32_t);

	// EAString.h:40
	EAStringC(uint32_t, uint32_t);

	// EAString.h:42
	EAStringC(const char *);

	// EAString.h:50
	EAStringC(const EAStringC &);

	// EAString.h:55
	~EAStringC();

private:
	// EAString.h:81
	char * GetInternalBuffer() const;

public:
	// EAString.h:93
	const char * GetBuffer() const;

	// EAString.h:98
	const char * operator const char*() const;

	// EAString.h:103
	bool IsConstantString();

	// EAString.h:108
	uint32_t operator[](int32_t) const;

	// EAString.h:110
	EAStringC & operator=(const EAStringC &);

	// EAString.h:112
	EAStringC & operator=(const EAStringC::StaticStringHelperT &);

	// EAString.h:114
	bool operator==(const EAStringC &) const;

	// EAString.h:116
	bool operator!=(const EAStringC &) const;

	// EAString.h:118
	bool operator<(const EAStringC &) const;

	// EAString.h:120
	bool operator<=(const EAStringC &) const;

	// EAString.h:121
	bool operator>(const EAStringC &) const;

	// EAString.h:122
	bool operator>=(const EAStringC &) const;

	// EAString.h:124
	bool operator==(const char *) const;

	// EAString.h:125
	bool operator!=(const char *) const;

	// EAString.h:126
	bool operator<(const char *) const;

	// EAString.h:127
	bool operator<=(const char *) const;

	// EAString.h:128
	bool operator>(const char *) const;

	// EAString.h:129
	bool operator>=(const char *) const;

	// EAString.h:131
	EAStringC operator+(const EAStringC &) const;

	// EAString.h:132
	EAStringC & operator+=(const EAStringC &);

	// EAString.h:133
	EAStringC operator+(const char *) const;

	// EAString.h:134
	EAStringC & operator+=(const char *);

	// EAString.h:138
	EAStringC & Duplicate(const EAStringC &);

	// EAString.h:140
	uint32_t GetLength() const;

	// EAString.h:141
	void Clear();

	// EAString.h:142
	void ClearConstantValue();

	// EAString.h:144
	void ReserveSize(uint32_t);

	// EAString.h:145
	bool IsEnoughSize(uint32_t) const;

	// EAString.h:147
	EAStringC & Append(const char *, uint32_t);

	// EAString.h:148
	void AppendFormat(const char *, ...);

	// EAString.h:149
	void Format(const char *, ...);

	// EAString.h:150
	void vsFormat(const char *, va_list);

	// EAString.h:152
	bool Equal(const char *) const;

	// EAString.h:153
	bool Equal(const EAStringC &) const;

	// EAString.h:154
	bool EqualNoCase(const char *) const;

	// EAString.h:156
	bool EqualNoCase(const EAStringC &) const;

	// EAString.h:157
	int32_t Compare(const char *) const;

	// EAString.h:158
	int32_t Compare(const EAStringC &) const;

	// EAString.h:159
	int32_t CompareNoCase(const char *) const;

	// EAString.h:160
	int32_t CompareNoCase(const EAStringC &) const;

	// EAString.h:162
	bool EqualHash(const EAStringC &) const;

	// EAString.h:164
	bool EqualNoCaseHash(const EAStringC &) const;

	// EAString.h:166
	int32_t Find(const char *, int32_t) const;

	// EAString.h:167
	int32_t Find(char, int32_t) const;

	// EAString.h:168
	int32_t FindOneOf(const char *) const;

	// EAString.h:169
	int32_t ReverseFind(char) const;

	// EAString.h:170
	int32_t LastIndexOf(const char *, int32_t) const;

	// EAString.h:172
	int32_t Delete(int32_t, int32_t);

	// EAString.h:173
	int32_t Remove(char);

	// EAString.h:174
	int32_t Insert(int32_t, const char *);

	// EAString.h:175
	int32_t Insert(int32_t, char);

	// EAString.h:176
	int32_t Replace(const char *, const char *);

	// EAString.h:177
	int32_t Replace(char, char);

	// EAString.h:179
	EAStringC Left(int32_t) const;

	// EAString.h:180
	EAStringC Right(int32_t) const;

	// EAString.h:181
	EAStringC Mid(int32_t) const;

	// EAString.h:182
	EAStringC Mid(int32_t, int32_t) const;

	// EAString.h:184
	EAStringC & MakeLower();

	// EAString.h:185
	EAStringC & MakeUpper();

	// EAString.h:186
	EAStringC & MakeReverse();

	// EAString.h:188
	EAStringC & TrimLeft(const char *);

	// EAString.h:189
	EAStringC & TrimRight(const char *);

	// EAString.h:190
	EAStringC & Trim(const char *);

	// EAString.h:191
	bool StartWith(const char *) const;

	// EAString.h:192
	bool StartWithIgnoreCase(const char *) const;

	// EAString.h:193
	bool EndWith(const char *) const;

	// EAString.h:194
	bool EndWithIgnoreCase(const char *) const;

	// EAString.h:195
	bool StartWithRemove(const char *);

	// EAString.h:196
	bool StartWithRemoveIgnoreCase(const char *);

	// EAString.h:197
	bool EndWithRemove(const char *);

	// EAString.h:198
	bool EndWithRemoveIgnoreCase(const char *);

	// EAString.h:200
	const char * UTF8_GetBuffer(int32_t);

	// EAString.h:201
	int32_t UTF8_CharAt(int32_t) const;

	// EAString.h:202
	int32_t UTF8_Size() const;

	// EAString.h:203
	EAStringC UTF8_Mid(int32_t) const;

	// EAString.h:204
	EAStringC UTF8_Mid(int32_t, int32_t) const;

	// EAString.h:205
	EAStringC & UTF8_Append(const char *, int32_t);

	// EAString.h:206
	int32_t UTF8_Find(const char *, int32_t) const;

	// EAString.h:207
	EAStringC & UTF8_MakeLower();

	// EAString.h:208
	EAStringC & UTF8_MakeUpper();

	// EAString.h:209
	EAStringC & UTF8_Initialize(int32_t);

	// EAString.h:212
	int32_t UTF8_GetCharacterSize(const char *);

	// EAString.h:213
	int32_t UTF8_GetCharacterSize(int32_t);

	// EAString.h:214
	const char * UTF8_GetBuffer(const char *, int32_t);

	// EAString.h:215
	int32_t UTF8_GetSize(const char *);

	// EAString.h:216
	int32_t UTF8_GetCharacter(const char *);

	// EAString.h:217
	void UTF8_SetCharacter(char *, int32_t);

	// EAString.h:218
	void UTF8_SetOneCharacter(int32_t);

	// EAString.h:220
	const char * UTF8_ReadCharacter(const char *, int32_t *);

	// EAString.h:222
	bool UTF8_IsValid(int32_t);

	// EAString.h:225
	bool IsEmpty() const;

	// EAString.h:227
	const char * c_str() const;

	// EAString.h:230
	const char * ConstRawPtr() const;

	// EAString.h:231
	int Size() const;

	// EAString.h:232
	void Reserve(int32_t);

	// EAString.h:234
	void MemInitialize(AptUserFunctions *);

	// EAString.h:235
	void MemUninitialize();

	// EAString.h:237
	void Invalidate();

	// EAString.h:238
	void Validate();

	// EAString.h:239
	void Validate(const EAStringC &);

	// EAString.h:240
	bool IsValid() const;

	// EAString.h:242
	uint16_t GetHashValue() const;

	// EAString.h:244
	uint16_t UpdateHashValue() const;

	// EAString.h:246
	void CalculateHashValue() const;

	// EAString.h:248
	uint16_t CalculateHashValue(const char *);

	// EAString.h:251
	uint32_t GetInternalSize() const;

	// EAString.h:252
	uint32_t GetInternalMaxSize() const;

	// EAString.h:253
	uint32_t GetInternalRefCount() const;

private:
	// EAString.h:262
	EAStringC(EAStringC::EmptyString);

	// EAString.h:267
	void SetInternalSize(uint32_t);

	// EAString.h:268
	void SetInternalMaxSize(uint32_t);

	// EAString.h:269
	void SetInternalRefCount(uint32_t);

	// EAString.h:271
	void IncreaseInternalRefCount();

	// EAString.h:273
	void DecreaseInternalRefCount(EAStringC::StringDataC *);

	// EAString.h:275
	void InvalidateHashValue() const;

	// EAString.h:283
	void ChangeBuffer(uint32_t, uint32_t, uint32_t, EAStringC::CBPushZero, uint32_t);

	// EAString.h:284
	void InitFromBuffer(const char *);

	// EAString.h:286
	void AllocateBuffer(uint32_t);

	// EAString.h:287
	void DeallocateBuffer(const void *, uint32_t);

}

// EAString.h:303
typedef EAStringC AptNativeString;

