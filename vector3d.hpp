#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>

class vector3d {
public:
    const static vector3d X;
    const static vector3d Y;
    const static vector3d Z;
    const static vector3d ZERO;


    int x;
    int y;
    int z;



    vector3d();
    vector3d(int x,int y, int z);
    vector3d operator+(vector3d v);
    vector3d operator-(vector3d v);
    bool operator==(vector3d v);
    bool operator!=(vector3d v);
    double lenght();
    double operator*(vector3d v);
    vector3d operator*(int a);
    vector3d operator*(int a, vector3d v);
    vector3d normalize();
    vector3d operator^(vector3d v);
    ostream& operator<<();


};

// TODO: дописать

#endif
