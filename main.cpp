// compiler - Microsoft VIsual Studio (Windows)
// compiler - clang (Mac, Linux)

// Build tool - CMake

// Code editor - Visual Studio Code

#include <iostream> // input output stream
// iostream is part of the stl
#include <string>

int main(int argc, char** argv) {
    std::cout << "Hello CPP!\n";
    std::string my_string, my_last_name;
    std::cin >> my_string >> my_last_name;

    std::cout << my_string << " " << my_last_name << std::endl;
    return 0;
}
