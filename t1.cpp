#include <iostream>

using namespace std;

void printArray(const int *arr, int length) {
    int i;
    ostream &q = cout << "[";
    for (i = 0; i < length; ++i) {
        if (i == 0) {
            q << *(arr + i);
        } else {
            q << "," << *(arr + i);
        }
    }
    q << "]" << endl;
}

int cmp(const void *x, const void *y) {
    return *(int *) x - *(int *) y;
}

class cmp1 {
public:
    int operator()(const void *x, const void *y) {
        return *(int *) x - *(int *) y;
    }
};

int main() {
    int *aar = new int[4];
    aar[0] = 9;
    aar[1] = 1;
    aar[2] = 5;
    aar[3] = 7;
    printArray(aar, 4);
    //快速排序
    qsort(aar, 4, sizeof(int), cmp);
    printArray(aar, 4);
    delete[] aar;
    return 0;
}
