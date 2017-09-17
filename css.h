#include <QString>

#ifndef CSS_H
#define CSS_H


enum Property{
    color,background,height,width,MaxWidth,MinWidth,padding,margin,border,textAlign,font,display,position
};
enum Colors{
    number,red,green,whilte,black,yellow,orange,purple,skyblue
};
enum Place{
    p_top,p_right,p_bottom,p_left,p_center,p_none
};
enum Defined{
    AUTO,percent,px,em
};
enum BorderKind{
    Solid,Dotted,Dashed,Double
};
enum PositionKind{
    Static,Relative,Absolute,Fixed
};
enum BackgroundKind{
    backgroundColor,backgroundImage,repeate,attachment,backgroundPosition
};
enum Repeat{
    repeatX,repeatY,repeatNo
};
enum textAlignKind{
    textleft,textcenter,textright
};
enum displayKind{
    Inline,Block,InlineBlock
};
struct backgroundPos{
    unsigned top : 1;
    unsigned right :1;
    unsigned bottom : 1;
    unsigned left : 1;
    unsigned center : 1;
};


class CSS
{
public:
    CSS* list;
    Property p;
};

class Color : public CSS
{
public:
    Colors colors;
    QString colorcode;
};

class Background : public CSS
{
public:
    BackgroundKind kind;
    union{
        Colors colors;
        Repeat repeat;
        int attachFixedFlag;
        backgroundPos pos;
    };
    QString str;
};

class Size : public CSS
{
public:
    Place place;
    Defined defined;
    int num;
};

class Border :public CSS
{
public:
    BorderKind kind;
    Colors colors;
    Place place;
    int num;
};

class TextAlign : public CSS
{
    textAlignKind kind;
};

class Display : public CSS
{
    displayKind kind;
};

class Position : public CSS
{
public:
    PositionKind kind;
    Place place;
    Defined defined;
    int num;
};


#endif // CSS_H
