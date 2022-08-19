#include <iostream>

typedef struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
}box;

void print_box(const box temp);
void change_volume(box * temp);

int main()
{
	box a = { "adidis", 10, 10, 10, 0 };

	print_box(a);
	change_volume(&a);
	print_box(a);

}

void print_box(const box temp) {

	using std::cout;
	using std::endl;

	cout << "box maker : " << temp.maker << endl;
	cout << "box height : " << temp.height << endl;
	cout << "box width : " << temp.width << endl;
	cout << "box length : " << temp.length << endl;
	cout << "box volume : " << temp.volume << endl;
	cout << endl;
}

void change_volume(box * temp) {

	temp->volume = temp->height * temp->width * temp->length;

}