#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

class GraphicEditor {
    int index;
public:
    GraphicEditor(int i) { index = i; }
    virtual void show() = 0;
    int getIndex() { return index; }
    void subIndex() { --index; }
};

#endif // !GRAPHICEDITOR_H