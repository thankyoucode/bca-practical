#include <iostream>
#include <vector>
using namespace std;
class FeatureVector {
public:
    FeatureVector(const std::vector<double>& data) :data(data) {}
    FeatureVector operator - () const {
        FeatureVector scaled(data);
        for (size_t i = 0; i < data.size(); ++i) {
            scaled.data[i] = -data[i];
        }
        return scaled;
    }
    friend std::ostream& operator<<(std::ostream& os, const FeatureVector& fv) {
        os << "FeatureVector(";
        for (size_t i = 0; i < fv.data.size(); ++i) {
            os << fv.data[i] << " ";
        }
        os << ")";
        return os;
    }
private:
    std::vector<double> data;
};
int main() {
    std::vector<double> data = { 1.5, 2.4, 5.1, 3.8 };
    FeatureVector fv(data);
    cout << "Original feature vector: " << fv << endl;
    FeatureVector scaled_fv = -fv; // Apply feature scaling using unary minus
    cout << "Scaled feature vector: " << scaled_fv << endl;
    return 0;
}

/*
Original feature vector: FeatureVector(1.5 2.4 5.1 3.8 )
Scaled feature vector: FeatureVector(-1.5 -2.4 -5.1 -3.8 )
*/