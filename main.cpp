////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief     Main module for xi Point project
/// \author    Sergey Shershakov
/// \version   0.2.0
/// \date      14.01.2017
///            This is a part of the course "Algorithms and Data Structures" 
///            provided by  the School of Software Engineering of the Faculty 
///            of Computer Science at the Higher School of Economics.
///
/// The module provides only a simple "smoke" test if the point class compiles well.
///
////////////////////////////////////////////////////////////////////////////////



#include <iostream>
#include "xipoint.h"



int main(int argc, char** argv)
{
    using namespace xi;

//    std::cout << "Hello, world!";
//
//    Point p;
//    Point p1(1, 1);
//    Point p2(1, 2);
//    Point p3(1, 3);
//    std::cout<<p1.getX()<<" "<<p1.getY()<<std::endl;
//    p1.setX(6);
//    std::cout<<p1.getX()<<" "<<p1.getY()<<std::endl;
//    p1.shift(p3);
//    std::cout<<p1.getX()<<" "<<p1.getY()<<std::endl;
//    p1.shift(-1);
//    std::cout<<p1.getX()<<" "<<p1.getY()<<std::endl;
//    p1.shift(2,4);
//    std::cout<<p1.getX()<<" "<<p1.getY()<<std::endl;
//    PointArray* ar1 = new PointArray();
//    ar1->insert(p1,5);
//    ar1->insert(p2,2);
//    ar1->insert(p3,0);
//    std::cout<<"after insert"<<std::endl;
//    for (int i = 0; i < ar1->getSize(); ++i) {
//        std::cout<<ar1->get(i)->getX()<<" "<<ar1->get(i)->getY()<<std::endl;
//    }
//    ar1->remove(4);
//    std::cout<<"after remove"<<std::endl;
//    for (int i = 0; i < ar1->getSize(); ++i) {
//        std::cout<<ar1->get(i)->getX()<<" "<<ar1->get(i)->getY()<<std::endl;
//    }
//    ar1->append(p1);
//    std::cout<<"after appemd"<<std::endl;
//    for (int i = 0; i < ar1->getSize(); ++i) {
//        std::cout<<ar1->get(i)->getX()<<" "<<ar1->get(i)->getY()<<std::endl;
//    }
//    ar1->remove(0);
//    ar1->remove(2);
//    std::cout<<"after remove"<<std::endl;
//    for (int i = 0; i < ar1->getSize(); ++i) {
//        std::cout<<ar1->get(i)->getX()<<" "<<ar1->get(i)->getY()<<std::endl;
//    }
//    ar1->insert(p3,2);
//    std::cout<<"after insert"<<std::endl;
//    for (int i = 0; i < ar1->getSize(); ++i) {
//        std::cout<<ar1->get(i)->getX()<<" "<<ar1->get(i)->getY()<<std::endl;
//    }
//    Point* arr = new Point[3];
//    arr[0]=p1;
//    arr[1]=p2;
//    arr[2]=p3;
//    ar1 = new PointArray(arr,3);
//    std::cout<<"after new"<<std::endl;
//    for (int i = 0; i < ar1->getSize(); ++i) {
//        std::cout<<ar1->get(i)->getX()<<" "<<ar1->get(i)->getY()<<std::endl;
//    }
//    ar1->remove(2);
//    ar1->remove(2);
//    ar1->remove(0);
//    ar1->remove(0);
//    ar1->append(p1);
//    std::cout<<"after remove"<<std::endl;
//    for (int i = 0; i < ar1->getSize(); ++i) {
//        std::cout<<ar1->get(i)->getX()<<" "<<ar1->get(i)->getY()<<std::endl;
//    }
////    Point* p4 = ar1->get(3);
//    //std::getchar();
//    int t;

//    Point p1;
//    Point p2(1,1);
//
//    bool f = p1.getX() == 0;
//    bool f1 = p1.getY() == 0;
//
//    std::cout<<f<<" "<<f1<<std::endl;
//
//    p1.setX(42);
//    p1.setY(13);
//
//    f = p1.getX() == 42;
//    f1 = p1.getY() == 13;
//
//    std::cout<<f<<" "<<f1<<std::endl;
//
//    Point p3;
//    p3.shift(15);
//
//    f = p3.getX() == 15;
//    f1 = p3.getY() == 15;
//
//    std::cout<<f<<" "<<f1<<std::endl;
//
//    Point p4(5,10);
//    f = p4.getX() == 5;
//    f1 = p4.getY() == 10;
//
//    std::cout<<f<<" "<<f1<<std::endl;

//    PointArray ar1;
//    bool f = ar1.getRawPtr() == nullptr;
//    bool f1 = ar1.getSize() == 0;
//
//    std::cout<<f<<" "<<f1<<std::endl;

//    Point testAr[] = { Point(1, 1), Point(2, 2), Point(3, 3) };
//    PointArray::Uint testArSize = sizeof(testAr) / sizeof(testAr[0]);
//
//    PointArray ar1(testAr, testArSize);
//    bool f = ar1.getRawPtr() != nullptr;
//    bool f1 = ar1.getSize() == testArSize;
//    bool f2 = ar1.get(0)->getX() == 1;
//    bool f3 = ar1.get(1)->getX() == 2;
//
//    std::cout<<f<<" "<<f1<<" "<<f2<<" "<<f3<<std::endl;

    PointArray ar1;
    bool f = ar1.getRawPtr() == nullptr;
    bool f1 = ar1.getSize() == 0;

//    Point p1(10,15);
//    ar1.append(p1);
//
//    bool f2 = ar1.getRawPtr() != nullptr;
//    bool f3 = ar1.getSize() == 1;
//
//    ar1.clear();
//
//    std::cout<<f<<" "<<f1<<" "<<f2<<" "<<f3<<std::endl;

//    ar1.append(Point(0, 0));
//    ar1.append(Point(1, 1));
//    ar1.append(Point(2, 2));
//    ar1.append(Point(3, 3));
//    ar1.append(Point(4, 4));
//
//    bool f2 = ar1.getSize() == 5;
//    bool f3 = ar1.getRawPtr() != nullptr;
//
//    ar1.remove(5);
//
//    bool f4 = ar1.getRawPtr() != nullptr;
//    bool f5 = ar1.getSize() == 5;
//    std::cout<<f<<" "<<f1<<" "<<f2<<" "<<f3<<" "<<f4<<" "<<f5<<std::endl;

//    bool f2 = ar1.get(0) == nullptr;
//    bool f3 = ar1.get(1) == nullptr;

    Point p1(10,15);
    ar1.insert(p1, 0);

    bool f2 = ar1.getRawPtr() != nullptr;
    bool f3 = ar1.getSize() == 1;

    std::cout<<f<<" "<<f1<<" "<<f2<<" "<<f3<<std::endl;
}
