#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>

class vector3d {
public:
    const static vector3d X;
    const static vector3d Y;
    const static vector3d Z;
    const static vector3d ZERO;


    double x;
    double y;
    double z;



    vector3d();
    vector3d(double x,double y, double z);
    vector3d operator+(const vector3d v)const;
    vector3d operator-(const vector3d v)const;
    bool operator==(const vector3d v)const;
    bool operator!=(const vector3d v)const;
    double length();
    double operator*(const vector3d v)const;
    vector3d operator*(int a)const;
    vector3d operator-()const;
    vector3d normalize();
    vector3d operator^(const vector3d v)const;



};

vector3d operator*(int a, const  vector3d  v);
std::ostream &operator<<(std::ostream &stream, const vector3d &v);



// TODO: дописать

#endif

