#include <iostream>
#include <fstream>

void write(std::ofstream &out_file) {
    std::string s {"\"Hello World!\""};

    std::string hello_world {"#include <iostream>\n int main() { std::cout << " + s + " << std::endl; return 0;}"};
    out_file << hello_world;
}

int main(){
    std::ofstream out_file;
    std::string filename {"second_main.cpp"};
    //std::cin >> filename;
    
    out_file.open(filename);

    if (!out_file) {
        std::cerr << "Error can't open file";
        return 1;
    }
    
    write(out_file);
    
    out_file.close();

    return 0;
}
