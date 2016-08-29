#include <iostream>
#include "color.h" 

int main() {
 std::cout << color::yellow 
           << "       __       __      " << std::endl
           << "       \\ `-'\\\"'-`/   " << std::endl
           << "       / \\_   _/ \\    " << std::endl
           << "       |  "
           << color::magenta << "d" << color::yellow << "\\_/"
           << color::magenta << "b" << color::yellow << "  |" << std::endl
           << "      .'\\   V   /'.     " << std::endl
           << "     /   '"
           << color::white << "-...-'" << color::yellow <<  "   \\" << std::endl
           << "     | /         \\ |    " << std::endl
           << "     \\/\\         /\\/  " << std::endl
           << "  jgs==(||)---(||)==     " << std::endl;
}
