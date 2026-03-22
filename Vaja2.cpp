#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


void countingSortByBit(vector<unsigned char>& A, int k) {
    // TODO
}


void binaryRadixSort(vector<unsigned char>& A) {
    // TODO
}

int main(int argc, char* argv[]) {

    if (argc < 2) {
        cout << "Uporaba: vaja2 <vhodna_datoteka>" << endl;
        return 1;
    }


    ifstream in(argv[1]);
    if (!in) {
        cout << "Napaka pri odpiranju datoteke!" << endl;
        return 1;
    }

    vector<unsigned char> A;
    int x;

    while (in >> x) {
        // TODO
    }

    in.close();


    binaryRadixSort(A);

    ofstream out("out.txt");

    for (size_t i = 0; i < A.size(); i++) {
        // TODO
    }

    out.close();

    return 0;
}