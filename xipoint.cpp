////////////////////////////////////////////////////////////////////////////////
// Module Name:  xipoint.h/cpp
// Authors:      Sergey Shershakov
// Version:      0.2.0
// Date:         14.01.2017
//
// This is a part of the course "Algorithms and Data Structures" 
// provided by  the School of Software Engineering of the Faculty 
// of Computer Science at the Higher School of Economics.
////////////////////////////////////////////////////////////////////////////////

#include "xipoint.h"
#include <algorithm>

namespace xi {

// TODO: put the method implementations here
    int Point::getX() const {
        return _x;
    }

    int Point::getY() const {
        return _y;
    }

    void Point::setX(int x) {
        _x = x;
    }

    void Point::setY(int y) {
        _y = y;
    }

    Point::Point(int x, int y) {
        _x = x;
        _y = y;
    }

    void Point::shift(int shf) {
        _x += shf;
        _y += shf;
    }

    void Point::shift(int xSh, int ySh) {
        _x += xSh;
        _y += ySh;
    }

    void Point::shift(const Point &pt) {
        _x += pt.getX();
        _y += pt.getY();
    }

    PointArray::PointArray() {
        _arr = nullptr;
        _size = 0;
    }

    PointArray::PointArray(const Point *points, const Uint n) {
        _arr = new Point[n];
        for (int i = 0; i < n; ++i) {
            _arr[i] = points[i];
        }
        _size = n;
    }

    PointArray::PointArray(const PointArray &pv) {
        _arr = new Point[pv._size];
        for (int i = 0; i < pv._size; ++i) {
            _arr[i] = pv._arr[i];
        }
        _size = pv._size;
    }

    PointArray::~PointArray() {
        delete[] _arr;
    }

    void PointArray::append(const Point &pt) {
        resize(_size + 1);
        _arr[_size - 1] = pt;
    }

    void PointArray::insert(const Point &pt, Uint pos) {
        if (pos >= _size){
            append(pt);
            return;
        }
        Point* arr = new Point[_size + 1];
        if (pos == 0)
        {
            if (_size == 0)
                _arr = new Point[1];

            arr[0] = pt;

            _size++;
            for (int i = 1; i < _size; ++i) {
                arr[i] = _arr[i - 1];
            }
        }
        else{
            for (int i = 0; i < pos; ++i) {
                arr[i] = _arr[i];
            }

            arr[pos] = pt;

            _size++;
            for (int i = pos + 1; i < _size ; ++i) {
                arr[i] = _arr[i - 1];
            }
        }
        _arr = new Point[_size];
        for (int i = 0; i < _size; ++i) {
            _arr[i] = arr[i];
        }

        delete[] arr;
    }

    void PointArray::remove(const Uint pos) {
        if (pos >= _size){
            return;
        }
        if (pos == 0 && _size == 1){
            delete[] _arr;
            _size = 0;
            return;
        }
        else if (pos == _size - 1)
        {
            resize(_size - 1);
            return;
        }
        Point* arr = new Point[_size - 1];
        for (int i = 0; i < pos; ++i) {
            arr[i] = _arr[i];
        }

        for (int i = pos + 1; i < _size; ++i) {
            arr[i - 1] = _arr[i];
        }
        _arr = new Point[_size - 1];
        _size--;
        for (int i = 0; i < _size; ++i) {
            _arr[i] = arr[i];
        }
        delete[] arr;
    }

    void PointArray::clear() {
        _arr = nullptr;
        _size = 0;
    }

    const PointArray::Uint PointArray::getSize() const {
        return _size;
    }

    Point* PointArray::get(Uint pos) {
        if (_size > 0 && pos <= _size && pos >= 0){
            Point point = _arr[pos];
            Point* p = new Point(point.getX(), point.getY());
            return p;
        }
        return nullptr;
    }

    const Point* PointArray::get(Uint pos) const {
        if (_size > 0 && pos < _size && pos >= 0){
            Point point = _arr[pos];
            Point* p = new Point(point.getX(), point.getY());
            return p;
        }
        return nullptr;;
    }

    void PointArray::resize(Uint n) {
        Point* arr = new Point[n];
        Uint min = _size < n ? _size : n;
        for (int i = 0; i < min; ++i) {
            arr[i] = _arr[i];
        }
        _arr = new Point[n];
        for (int i = 0; i < min; ++i) {
            _arr[i] = arr[i];
        }
        _size = n;
        delete[] arr;
    }
} // namespace xi {