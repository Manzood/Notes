// an implementation of disjoint set union, primarily using union by size.
// refer to cp-algorithms for more, such as different cases, optimisations, etc.
// link -> https://cp-algorithms.com/data_structures/disjoint_set_union.html
// Union by size, at the moment, implemented using a class
// currently using tourist's implementation, of sorts, after studing Benq's implementation as well
// This is probably subject to change to suit my needs in the future

class dsu {
  public:
    vector <int> p;
    vector <int> size;
    int n;
    dsu (int _n) : n(_n) {
        p.resize(n);
        iota(p.begin(), p.end(), 0);
        size.resize(n, 1);
    }
    int parent(int x) {
        // path compression takes place here
        if (x == p[x]) return x;
        else return p[x] = parent(p[x]);
    }
    inline bool unite (int x, int y) {
        x = parent(x);
        y = parent(y);
        if (x != y) {
            if (size[x] > size[y])
                swap(x, y);
            p[x] = y;
            size[x] += size[y];
            return true;
        }
        return false;
    }
};
