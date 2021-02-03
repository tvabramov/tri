#include <iostream>
#include <string>

#include "AbramovT_decider.h"

using namespace std;
using namespace AbramovT;

int main(int argc, char *argv[]) {
  if (argc != 19) {
    cout << "Invalid arguments. Type \"tri <AX1> <AY1> <AZ1> <AX2> <AY2> <AZ2> "
            "<AX3> <AY3> <AZ3> <BX1> <BY1> <BZ1> <BX2> <BY2> <BZ2> <BX3> <BY3> "
            "<BZ3>\""
         << endl;
    return EXIT_FAILURE;
  }

  std::array<double, 9> A = {stod(argv[1]), stod(argv[2]), stod(argv[3]),
                             stod(argv[4]), stod(argv[5]), stod(argv[6]),
                             stod(argv[7]), stod(argv[8]), stod(argv[9])};
  std::array<double, 9> B = {stod(argv[10]), stod(argv[11]), stod(argv[12]),
                             stod(argv[13]), stod(argv[14]), stod(argv[15]),
                             stod(argv[16]), stod(argv[17]), stod(argv[18])};

  cout << (AreIntersected(A, B) ? "YES" : "NO") << endl;

  return EXIT_SUCCESS;
}
