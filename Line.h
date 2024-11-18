#ifndef LINE_H
#define LINE_H

class Line : public GraphicEditor {
public:
    Line(int index) : GraphicEditor(index) {}
    void show();
};

#endif // !LINE_H