#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;

typedef vector<int> Records;

class RecordsManager {
private:
    fstream _file;
    string _filename;
public:
    RecordsManager(string filename) : _filename(filename) {}
    // Update read function with exception handling
    void read(Records &records) {
        _file.open(_filename, ios::in);
        if (_file.is_open()){
            try{
                string line;
                while (getline(_file, line)) {
                    try{
                        int value = stoi(line);
                        records.push_back(value);
                    } catch (const invalid_argument &e){
                        cout << "Invaild_argument error" << endl;
                        throw;
                    } catch (const out_of_range &e){
                        cout << "out_of_range error" << endl;
                        throw;
                    }   
                }
            } catch(...) {
            _file.close();
            throw;  
            }
            _file.close();
        }
    }
};

int main(int argc, char* argv[]) {
    Records myRecords;

    string filename = "records.txt";
    if (argc > 1){ 
        filename = argv[1];
    }

    RecordsManager recordM(filename);

    try{
        recordM.read(myRecords);
        int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
            sum += myRecords[i];
        }
        cout << sum << endl;
    } catch (const exception &e){
        cerr << e.what() << endl;
        return 0;
    }

    return 0;
}
