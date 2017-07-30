#include <vector>
#include <algorithm>
#include <cmath>

#define INF (99999999)

namespace Geometry {

class Point {
  private:
    double _x;
    double _y;

  public:
    inline Point() : _x(INF), _y(INF)
    {}
    inline Point(double x, double y) : _x(x), _y(y)
    {}
    inline Point(const Point& p) : _x(p._x), _y(p._y)
    {}

    double& x() { return this->_x; }
    double& y() { return this->_y; }

    inline bool is_valid(void) const {
        return (this->_x != INF && _y != INF);
    }

    static inline double dist(const Point& p1, const Point& p2) {
        return sqrt(pow(p1._x - p2._x, 2) + pow(p1._y - p2._y, 2));
    }

    inline double dist(const Point& p) {
        return sqrt(pow(this->_x - p._x, 2) + pow(this->_y - p._y, 2));
    }

    static inline double distSq(const Point& p1, const Point& p2) {
        return (pow(p1._x - p2._x, 2) + pow(p1._y - p2._y, 2));
    }

    inline double distSq(const Point& p) {
        return (pow(this->_x - p._x, 2) + pow(this->_y - p._y, 2));
    }

    static inline float angle(const Point& p1, const Point& p2) {
        return atan2(p1._y - p2._y, p1._x - p2._x);
    }

    inline Point operator + (const Point& p) {
        return Point(this->_x + p._x, this->_y + p._y);
    }

    inline Point operator - (const Point& p) {
        return Point(this->_x - p._x, this->_y - p._y);
    }

    inline Point operator * (const Point& p) {
        return Point(this->_x * p._x, this->_y * p._y);
    }

    inline Point operator / (const Point& p) {
        return Point(this->_x / p._x, this->_y / p._y);
    }

    inline Point operator - () {
        return Point(-this->_x, -this->_y);
    }

    inline Point operator += (const Point& p) {
        this->_x += p._x;
        this->_y += p._y;
        return *this;
    }

    inline Point operator -= (const Point& p) {
        this->_x -= p._x;
        this->_y -= p._y;
        return *this;
    }

    inline Point operator *= (const double scale) {
        return Point(scale * this->_x, scale * this->_y);
    }

    inline Point operator /= (const double scale) {
        return Point(this->_x / scale, this->_y / scale);
    }

};

}  // namespace Geometry
