#ifndef YEN_H
#define YEN_H

class Yen : public Currency {
private:
	bool YenCreated = false;
public:
	Yen(int initWhole, int initFractional);
	~Yen();
	void setUp();
};

#endif
