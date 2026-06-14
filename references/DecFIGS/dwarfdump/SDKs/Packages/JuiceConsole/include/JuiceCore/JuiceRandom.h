// JuiceRandom.h:24
struct Juice::JuiceRandom {
private:
	// JuiceRandom.h:31
	unsigned int[6] mSimSeed;

public:
	// JuiceRandom.h:26
	void SetSeed(unsigned int);

	// JuiceRandom.h:27
	unsigned int GetRandom();

	// JuiceRandom.h:28
	JuiceRandom * Instance();

private:
	// JuiceRandom.h:32
	void JuiceRandom();

}

