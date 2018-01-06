#ifndef SHIP_H
#define SHIP_H


class Ship
{
    public:

        Ship();
        virtual ~Ship();
        Ship& operator=(const Ship& other);

        signed int get_size() { return size; }

        void set_size(signed int val) { size = val; }

        bool get_orientation() { return orientation; }

        void Setorientation(bool val) { orientation = val; }
    protected:
    private:
        signed int size;
        bool orientation;
};

#endif // SHIP_H
