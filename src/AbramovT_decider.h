#ifndef ABRAMOVT_DECIDER_H
#define ABRAMOVT_DECIDER_H

#include <array>

namespace AbramovT {

bool AreIntersected(const std::array<double, 9>& A,
                    const std::array<double, 9>& B);

}

#endif  // ABRAMOVT_DECIDER_H