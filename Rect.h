#ifndef RECT_H
#define RECT_H

class Rect : public GraphicEditor {
public:
    Rect(int index) : GraphicEditor(index) {}
    void show();
};

#endif // !RECT_H