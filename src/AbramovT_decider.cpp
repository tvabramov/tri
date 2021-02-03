#include "AbramovT_decider.h"

#include <iostream>

using namespace std;

namespace AbramovT {

namespace {}  // namespace

bool AreIntersected(const std::array<double, 9>& A,
                    const std::array<double, 9>& B) {
  cout << "Input:" << endl;
  cout << "  A =";
  for (const auto& el : A) cout << " " << el;
  cout << endl;
  cout << "  B =";
  for (const auto& el : B) cout << " " << el;
  cout << endl;

  return false;
}

}  // namespace AbramovT