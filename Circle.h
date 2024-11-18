#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public GraphicEditor {
public:
    Circle(int index) : GraphicEditor(index) {}
    void show();
};

#endif // !CIRCLE_H