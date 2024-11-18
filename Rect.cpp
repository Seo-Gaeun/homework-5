#include <iostream>
using namespace std;

#include "GraphicEditor.h"
#include "Rect.h"

void Rect::show() {
	cout << getIndex() << ": Rectangle" << endl;
}