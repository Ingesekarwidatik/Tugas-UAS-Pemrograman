#include <iostream>
#include <string>
using namespace std;

class ModelLaptop

{
private:

    string model;
    string series;
    int Tipe;

public:

    // Pembentuk atau outputan yang diberikan

    ModelLaptop(string model, string series, int Tipe)

    {
        ModelLaptop::model = model;
        ModelLaptop::series = series;
        ModelLaptop::Tipe = Tipe;
    }

    // untuk menampilakan

    void perolehInfo(void)

    {
        cout << "Model     : " << model << endl;
        cout << "Series    : " << series << endl;
        cout << "Tipe      : " << Tipe << endl;
        cout << endl;
    }

};

int main()

{
    ModelLaptop Pabrikan_X("ASUS-16",
                          "ASUS", 16);

    ModelLaptop Pabrikan_Y("ASUS-17",
                "ASUS", 17);

    Pabrikan_X.perolehInfo();

    Pabrikan_Y.perolehInfo();

    return 0;
}
