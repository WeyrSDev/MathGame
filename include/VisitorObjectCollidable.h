/*
 *  A 2D video game in C++ with SFML where platforms are actually Maths Curves resulting of equations you write
 *  Copyright (C) 2013,2017  Gomez Guillaume, Jarretier Adrien
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.*
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Contact us on Github : https://github.com/guillaume-gomez/MathGame
 *                      or https://github.com/AdrienJarretier
 */

#ifndef VISITOROBJECTCOLLIDABLE_H
#define VISITOROBJECTCOLLIDABLE_H

namespace Physics
{
    class Object;
    class Box;
    class Circle;
    /**
    @brief : Interface to visit each object collidable
    **/
    class VisitorObjectCollidable
    {
        public:
            VisitorObjectCollidable();
            virtual ~VisitorObjectCollidable();
            virtual bool visit(const Box& box1, const Box& box2) = 0;
            virtual bool visit(const Box& box, const Circle& circle) = 0;
    };

    /**
    @brief : Methods which check colission with any other element than a BOX (square)
    **/
    class VisitBox : public VisitorObjectCollidable
    {
        public:
            virtual bool visit(const Box& box1, const Box& box2);
            virtual bool visit(const Box& box, const Circle& circle);
    };

//    class VisitCircle : public VisitorObjectCollidable
//    {
//        virtual bool visit(const Box& box, const Circle& circle);
//    };

} //namespace Physics
#endif // VISITOROBJECTCOLLIDABLE_H
