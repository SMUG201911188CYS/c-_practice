
class Golf {

private:
	enum { Len = 40 };
	char fullname[Len];
	int hc;

public:
	Golf();
	Golf(const char* name, int hc);
	int setGolf();
	void setHandicap(int hc);
	void showgolf();
};