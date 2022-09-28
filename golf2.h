
class Golf {

	private :
		static const int Len = 40;
		char fullname[Len];
		int hc;

	public :
		Golf();
		Golf(const char* name , int hc);
		int setGolf(Golf &g);
		void handicap(int hc);
		void showgolf();
};