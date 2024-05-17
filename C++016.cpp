class Box {
private:
    int l;
    int b;
    int h;

public:
    // Default constructor
    Box() : l(0), b(0), h(0) {}

    // Parameterized constructor
    Box(int l, int b, int h) : l(l), b(b), h(h) {}

    // Copy constructor
    Box(const Box& other) : l(other.l), b(other.b), h(other.h) {}

    // Getter
    int getLength() const { return l; }
    int getBreadth() const { return b; }
    int getHeight() const { return h; }

    // Calculate volume
    long long CalculateVolume() const {
        return static_cast<long long>(l) * b * h;
    }

    // Overload less than operator
    bool operator<(const Box& other) const {
        if (l < other.l) {
            return true;
        } else if (l == other.l && b < other.b) {
            return true;
        } else if (l == other.l && b == other.b && h < other.h) {
            return true;
        }
        return false;
    }

    // Overload output operator
    friend std::ostream& operator<<(std::ostream& out, const Box& box) {
        out << box.l << " " << box.b << " " << box.h;
        return out;
    }
};
