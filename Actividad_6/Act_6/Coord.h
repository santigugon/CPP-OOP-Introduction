#ifndef COORD_H_INCLUDED
#define COORD_H_INCLUDED

class Coord{
    public:
        Coord();
        Coord(int, int);

        void setX(int);
        void setY(int);

        int getX();
        int getY();

        void print();

    private:
        int x;
        int y;
};

#endif // COORD_H_INCLUDED
